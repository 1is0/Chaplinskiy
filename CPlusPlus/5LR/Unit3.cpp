//---------------------------------------------------------------------------

#pragma hdrstop
 #include  "Unit2.h"
#include "Unit3.h"
Queue::~Queue(){
while (Head) {
	 Tail=Head->Next;
delete Head;
Head=Tail;
	 }
}

void Queue::Add(int x)
{
  Node *temp=new Node;
  temp->Next=NULL;
   temp->x=x;
 if (Head!=NULL) {

temp->Prev=Tail;
Tail->Next=temp; Tail=temp;
}   else {
temp->Prev=NULL;
Head=Tail=temp; }}

void Queue::DelN(){
if (Head==0) {   Application->Title="Внимание";
ShowMessage("Список пуст!!");  return;}
Node *temp;
temp=Head->Next;
delete Head;
 Head=temp;
 }
void Queue::Show(){
	 Node *temp=Tail;
 	 temp=Head;
	  while (temp!=NULL) {
Form2->Memo1->Lines->Add(temp->x);
temp=temp->Next; 	 }  }
 

//---------------------------------------------------------------------------
#pragma package(smart_init)
