//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
 #include "Unit3.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;


int n;
  Queue ob;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Edit1Change(TObject *Sender)
{
n=StrToInt(Edit1->Text)+1;
StringGrid1->RowCount=n;
 for(int i=1;i<n;i++) {
 StringGrid1->Cells[0][i]=i;
 StringGrid1->Cells[1][i] = i;
 }

}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
StringGrid1->ColCount=2;
StringGrid1->RowCount=2;
  
   StringGrid1->Cells[0][0]="Íîìåð";
   StringGrid1->Cells[1][0]="Çíà÷åíèå";
   Memo1->Clear();

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
int xA;
 	for(int i=1;i<n;i++) {
 xA = StrToInt(StringGrid1->Cells[1][i]);
 ob.Add(xA );
 		}
 Button2Click(Sender);

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
Memo1->Clear();
ob.Show();

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
ob.~Queue();
Memo1->Clear();

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{
try{
   ob.DelN();
	Memo1->Clear();
ob.Show();}
 catch(...)
{}

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button5Click(TObject *Sender)
{
int xA = StrToInt(Edit2->Text);
 
ob.Add(xA );
 Button2Click(Sender);

}
//---------------------------------------------------------------------------
