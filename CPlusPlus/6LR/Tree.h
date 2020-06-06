//---------------------------------------------------------------------------
#include <vcl.h>
#ifndef TreeH
#define TreeH

class Node
{
public:

	int key;
	AnsiString fio;


	Node *pLeft, *pRight;
};

class Tree
{
public:
	int num;
	Tree();
	Node *pHead;


	void AddNode(AnsiString, int);
	void Delete(Node*);
	Node* SF(Node*, int);

	void PrintTree(Node*, TTreeView*, int&);
	void ShowTree(TTreeView*);
	AnsiString GetPlayer(int);
	void DeleteNode(int);
	//
	void Balance();
    void ToArray(Node*, int*, AnsiString*, int&);
	Node* MakeTree(int*, AnsiString*, int, int);
	//
	void DirectBypass(TMemo*);
	void ReversBypass(TMemo*);
	void PreOrder(TMemo*, Node*);
	void PostOrder(TMemo*, Node*);
	void InOrder(TMemo*, Node*);
	void Growth(TMemo*);
    //
	int TwoDaughters();
	void Count(Node*, int&);
};

//---------------------------------------------------------------------------
#endif
