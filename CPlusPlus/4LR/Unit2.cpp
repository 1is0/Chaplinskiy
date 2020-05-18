//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
struct Stack {
char info;
Stack *next;
} *beginn;
int Prior (char);
Stack* InStack( Stack*,char);
Stack* OutStack( Stack*,char*);
double Rezult(String);
double mas[201];
Set <char, 0, 100> znak;
int Kol = 8;
int Prior ( char a ){
switch ( a ) {
case '^': return 4;
case '*': case '/': return 3;
case '-': case '+': return 2;
case '(': return 1;
}
return 0;
}


Stack* InStack(Stack *p, char in) {

Stack *t = new Stack;
t -> info = in;
t -> next = p;
return t;  }
 
 Stack* OutStack(Stack* p, char *out) {
Stack *t = p;
*out = p -> info;
p = p -> next;
delete t;
return p;
}
 double Rezult(String Str) {
char ch, ch1, ch2;
double op1 = 0, op2 = 0 , rez = 0;
znak << '*' << '/' << '+' << '-' << '^';
char chr = 'z'+1;
for (int i=1; i <= Str.Length(); i++){
ch=Str[i];
if (! znak.Contains(ch)) beginn = InStack(beginn, ch);

else {
beginn = OutStack(beginn,&ch1);
beginn = OutStack(beginn,&ch2);
op1 = mas[int (ch1)] ;
op2 = mas[int (ch2)];
switch (ch){
case '+' : rez=op2+op1; break;
case '-' : rez=op2-op1; break;
case '*' : rez=op2*op1; break;
case '/' : rez=op2/op1; break;
case '^' : rez=pow(op2,op1); break;
}
mas[int (chr)] = rez;
beginn = InStack(beginn,chr);
chr++; }     }
return rez;    }



//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
Edit1->Text = "a*(b+c)/(d-e)";
Edit2->Text = "";
char a = 'a';
StringGrid1->Cells[0][0] ="Èìÿ"; StringGrid1->Cells[1][0] ="Çíà÷";
for(int i = 1; i<Kol; i++) {
StringGrid1->Cells[0][i] = a++;

}
 StringGrid1->Cells[1][1] = 0.4;
 StringGrid1->Cells[1][2] = 2.3;
 StringGrid1->Cells[1][3] = 6.7;
 StringGrid1->Cells[1][4] = 5.8;
 StringGrid1->Cells[1][5] = 9.1;


}


//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
Stack *t;
beginn = NULL;
char ss, a;
String InStr, OutStr;
OutStr = ""; Edit2->Text = "";
InStr = Edit1->Text;
znak << '*' << '/' << '+' << '-' << '^';
int len = InStr.Length(), k;

for (k = 1; k <= len; k++) {
ss = InStr[k];
if ( ss == '(' ) beginn = InStack(beginn, ss);
if ( ss == ')' ) {
while ( (beginn -> info) != '(' ) {
beginn = OutStack(beginn,&a);
OutStr += a;
}
beginn = OutStack(beginn,&a);
}
if (ss >= 'a' && ss <= 'z' ) OutStr += ss;
if (znak.Contains(ss)) {
while ( beginn != NULL && Prior (beginn -> info) >= Prior (ss) ) {
beginn = OutStack(beginn, &a);
OutStr += a;
}
beginn = InStack(beginn, ss);
}
}
while ( beginn != NULL){
beginn = OutStack(beginn, &a);
OutStr += a;
}
Edit2->Text = OutStr;
}



void __fastcall TForm2::Button2Click(TObject *Sender)
{
char ch;
 String OutStr = Edit2->Text;
for (int i=1; i<Kol-2; i++) {
ch = StringGrid1->Cells[0][i][1];
mas[int(ch)]=StrToFloat(StringGrid1->Cells[1][i]);
}
Edit3->Text=FloatToStr(Rezult(OutStr));

}



//---------------------------------------------------------------------------
