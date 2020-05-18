//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
     #include "Unit4.h"
class Queue {
 Node *Head,*Tail;
public:
Queue():Head(NULL), Tail(NULL) {}
 ~Queue();
void Show();
void Add(int x);
void DelN();
 
 };

//---------------------------------------------------------------------------
#endif
