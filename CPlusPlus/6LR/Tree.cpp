//---------------------------------------------------------------------------
#pragma hdrstop
#include "Tree.h"

Tree :: Tree()
{
	pHead = nullptr;
	num = 0;
}

void Tree :: AddNode(AnsiString str, int num)
{
	if(!pHead)
	{
		pHead = new Node;
		pHead->fio = str;
		pHead->key = num;
		pHead->pLeft = pHead->pRight = nullptr;
	}
	else
	{
		Node *node = SF(pHead, num);
		node->fio = str;
		node->key = num;
		node->pLeft = node->pRight = nullptr;
	}
	num++;
}

Node* Tree :: SF(Node *temp, int num)
{
	if(num < temp->key)
	{
		if(!temp->pLeft)
		{
			temp->pLeft = new Node;
			return temp->pLeft;
		}
		else return SF(temp->pLeft, num);
	}
	else
	{
		if(!temp->pRight)
		{
			temp->pRight = new Node;
			return temp->pRight;
		}
		else return SF(temp->pRight, num);
	}
}
	  //
void Tree :: PrintTree(Node* temp, TTreeView *TreeView, int &index)
{
	int i = index;
	if(temp->pLeft)
	{
		TreeView->Items->AddChild(TreeView->Items->Item[i], temp->pLeft->fio);
		PrintTree(temp->pLeft, TreeView, ++index);
	}
	if(temp->pRight)
	{
		TreeView->Items->AddChild(TreeView->Items->Item[i], temp->pRight->fio);
		PrintTree(temp->pRight, TreeView, ++index);
    }
}

void Tree :: ShowTree(TTreeView *TreeView)
{
	int index = 0;
	TreeView->Items->Clear();
	if(pHead)
	{
		TreeView->Items->Add(NULL, pHead->fio);
		PrintTree(pHead, TreeView, index);
    }
}
	//
AnsiString Tree :: GetPlayer(int num)
{
	Node *temp = pHead;
	while(temp->key != num)
	{
		if(num < temp->key) temp = temp->pLeft;
		else temp = temp->pRight;
	}
	if(temp)return temp->fio;
	else return "";
}
       //
void Tree :: DeleteNode(int num)
{
	Node *del, *prevdel, *node, *prevnode;
	del = pHead;
	prevdel = nullptr;
	while(del->key != num)
	{
		prevdel = del;
		if(num < del->key) del = del->pLeft;
		else del = del->pRight;
	}
	if(!del)return;
	if(!del->pRight) node = del->pLeft;
	else if(!del->pLeft) node = del->pRight;
	else
	{
		prevnode = del;
		node = del->pLeft;
		while(node->pRight)
		{
			prevnode = node;
			node = node->pRight;
		}
		if(prevnode == del) node->pRight = del->pRight;
		else
		{
			node->pRight = del->pRight;
			prevnode->pRight = node->pLeft;
			node->pLeft = prevnode;
        }
	}
	if(!prevdel) pHead = prevdel = node;
	else if(del->key < prevdel->key) prevdel->pLeft = node;
	else prevdel->pRight = node;
	delete del;
	num--;
}

void Tree :: Delete(Node *p)
{
	if(p)
	{
		num--;
		Delete(p->pLeft);
		Delete(p->pRight);
        delete p;
    }
}

void Tree :: Balance()
{
	int* arr = new int[num];
	AnsiString* str = new AnsiString[num];
	int size = 0;
	ToArray(pHead, arr, str, size);
	Delete(pHead);
	pHead = MakeTree(arr, str, 0, size);
}

void Tree :: ToArray(Node *p, int* arr, AnsiString* str, int &index)
{
	if(p->pLeft) ToArray(p->pLeft, arr, str, index);
	str[index] = p->fio;
	arr[index] = p->key;
	index++;
	if(p->pRight) ToArray(p->pRight, arr, str, index);
}

Node* Tree :: MakeTree(int *arr, AnsiString *str, int first, int last)
{
	if(!last) return nullptr;
	Node *node = new Node;
	node->fio = str[first + last / 2];
	node->key = arr[first + last / 2];
	num++;
	int lastl = last / 2;
	int lastr = last - lastl - 1;
	node->pLeft = MakeTree(arr, str, first, lastl);
	node->pRight = MakeTree(arr, str, first + lastl + 1, lastr);
	return node;
}



//
void Tree :: DirectBypass(TMemo *Memo)
{
	PreOrder(Memo, pHead);
}


void Tree :: PreOrder(TMemo *Memo, Node *p)
{
	if(p)
	{
		Memo->Lines->Add(p->fio);
		PreOrder(Memo, p->pLeft);
		PreOrder(Memo, p->pRight);
    }
}

void Tree :: ReversBypass(TMemo *Memo)
{
	PostOrder(Memo, pHead);
}

void Tree :: PostOrder(TMemo *Memo, Node *p)
{
	if(p)
	{
		PostOrder(Memo, p->pLeft);
		PostOrder(Memo, p->pRight);
		Memo->Lines->Add(p->fio);
    }
}

void Tree :: Growth(TMemo *Memo)
{
	InOrder(Memo, pHead);
}

void Tree :: InOrder(TMemo *Memo, Node *p)
{
	if(p)
	{
		InOrder(Memo, p->pLeft);
		Memo->Lines->Add(p->fio);
		InOrder(Memo, p->pRight);
    }
}


//
int Tree :: TwoDaughters()
{
	int amount = 0;
	Count(pHead, amount);
	return amount;
}

void Tree :: Count(Node *p, int &amount)
{
	if(p && p->pLeft && p->pRight)
	{
		Count(p->pLeft, amount);
		amount++;
		Count(p->pRight, amount);
    }
}
//--------------------------------------------------------------------------
#pragma package(smart_init)
