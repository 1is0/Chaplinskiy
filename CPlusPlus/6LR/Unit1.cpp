//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Tree.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Tree tree;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	StringGrid1->Cells[0][0] = "ФИО";
	StringGrid1->Cells[1][0] = "Номер";
	Memo1->Lines->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		AnsiString prob = " ";
		AnsiString str = Edit1->Text;
		int num = StrToInt(Edit2->Text);
		if(Edit1->Text != "")
		{
			if(num <= 0 || num >= 100)
			{
				Edit2->Text = "";
				ShowMessage("Некорректный номер");
			}
			else
			{

				StringGrid1->RowCount++;
				StringGrid1->Cells[0][StringGrid1->RowCount - 1] = str;
				StringGrid1->Cells[1][StringGrid1->RowCount - 1] = num;
				tree.AddNode(str, num);
				Memo1->Lines->Add("Добавлен" +prob + str + prob + IntToStr(num)+"\n");
				tree.ShowTree(Form1->TreeView1);
				Edit1->Text = "";
				Edit2->Text = "";
			}
		}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	AnsiString prob = " ";
			int num = StrToInt(Edit2->Text);
		if(num > 0 && num < 100)
		{
			AnsiString str = tree.GetPlayer(num);
			if(str != "")
			{
				Memo1->Lines->Add("Найден: " + str + prob + IntToStr(num) + "\n" );
			}
			else
			{
				Memo1->Lines->Add("Никого по данному запросу нет");
				Memo1->Lines->Add("\n");
            }
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
AnsiString prob = " ";
	int num = StrToInt(Edit2->Text);
		AnsiString str = tree.GetPlayer(num);

	{
			AnsiString str = tree.GetPlayer(num);
			tree.DeleteNode(num);
			tree.ShowTree(TreeView1);
			Memo1->Lines->Add("Удален"+prob + str + prob + IntToStr(num)+"\n");
			for(int i = 1, j = 1; i < StringGrid1->RowCount; i++)
			{
				if(StringGrid1->Cells[1][i] != num)
				{
					StringGrid1->Cells[0][j] = StringGrid1->Cells[0][i];
					StringGrid1->Cells[1][j] = StringGrid1->Cells[1][i];
					j++;
				}
			}
			StringGrid1->RowCount--;
			Edit1->Text = "";
			Edit2->Text = "";


	  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	tree.Balance();
	tree.ShowTree(Form1->TreeView1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	Memo1->Lines->Add("Прямой обход");
	tree.DirectBypass(Memo1);
	Memo1->Lines->Add("\n");
	Memo1->Lines->Add("Обратный обход");
	tree.ReversBypass(Memo1);
	Memo1->Lines->Add("\n");
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
	Memo1->Lines->Add("Кол-во узлов с двумя доч. ветвями =  " + IntToStr(tree.TwoDaughters()));
	Memo1->Lines->Add("\n");
}
//---------------------------------------------------------------------------


