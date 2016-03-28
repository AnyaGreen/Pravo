//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void SaveToFile(AnsiString str1)
{
FILE *f=fopen("Spisok.txt","a+");
char *s=str1.c_str();
fputs(s,f);
fclose(f);
}

void __fastcall TForm3::SpeedButton1Click(TObject *Sender)
{
//сохранение результатов в файл
AnsiString p=Form3->Edit1->Text+" "+":"+" "+"Рейтинг"+" "+Form3->Edit2->Text+"\n";
SaveToFile(p);

Form3->Close();
Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormActivate(TObject *Sender)
{
Form3->Left=Screen->Width/2-Form3->ClientWidth/2;
Form3->Top=Screen->Height/2-Form3->ClientHeight/2;
}
//---------------------------------------------------------------------------
