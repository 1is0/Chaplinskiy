//---------------------------------------------------------------------------
#pragma hdrstop
#include "List.h"
List::List()
{
	size = 0;
	pHead = nullptr;
}
List::~List()
{
 Human* pNext  = nullptr;
 while (pHead){
 pNext = pHead ->pNext;
 delete pHead;
 pHead = pNext;
 }

}
void List::Add(std::string countryValue, std::string teamValue, std::string surnameValue, int numValue, int ageValue, int heightValue, int weightValue)
{
	if (pHead == nullptr)
	{
	pHead = new Human(countryValue, teamValue, surnameValue, numValue, ageValue, heightValue, weightValue);
	}
	else
	{
		Human* temp = pHead;
		while (temp->pNext)
		{
			temp = temp->pNext;
		}
		temp->pNext = new Human(countryValue, teamValue, surnameValue, numValue, ageValue, heightValue, weightValue);
	}
	size++;
}
void List::Delete(int index)
{
	if (index == 0)
	{
		Human* current = pHead;
		pHead = pHead->pNext;
		delete current;
	}
	else
	{
		Human* prev = pHead;
		for (int i = 0; i < index - 1; i++) prev = prev->pNext;
		Human* temp = prev->pNext;
		prev->pNext = temp->pNext;
		delete temp;
	}
	size--;
}
std::string& List::Country(int index)
{
	int counter = 0;
	Human* temp = pHead;
	while (temp != nullptr)
	{
		if (counter == index) return temp->country;
		temp = temp->pNext;
		counter++;
	}
}
std::string& List::Team(int index)
{
	int counter = 0;
	Human* temp = pHead;
	while (temp != nullptr)
	{
		if (counter == index) return temp->team;
		temp = temp->pNext;
		counter++;
	}
}
std::string& List::Surname(int index)
{
	int counter = 0;
	Human* temp = pHead;
	while (temp != nullptr)
	{
		if (counter == index) return temp->surname;
		temp = temp->pNext;
		counter++;
	}
}
int& List::Num(int index)
{
	int counter = 0;
	Human* temp = pHead;
	while (temp != nullptr)
	{
		if (counter == index) return temp->num;
		temp = temp->pNext;
		counter++;
	}
}
int& List::Age(int index)
{
	int counter = 0;
	Human* temp = pHead;
	while (temp != nullptr)
	{
		if (counter == index) return temp->age;
		temp = temp->pNext;
		counter++;
	}
}
int& List::Height(int index)
{
	int counter = 0;
	Human* temp = pHead;
	while (temp != nullptr)
	{
		if (counter == index) return temp->height;
		temp = temp->pNext;
		counter++;
	}
}
int& List::Weight(int index)
{
	int counter = 0;
	Human* temp = pHead;
	while (temp != nullptr)
	{
		if (counter == index) return temp->weight;
		temp = temp->pNext;
		counter++;
	}
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
