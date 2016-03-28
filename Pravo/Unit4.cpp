//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::SpeedButton1Click(TObject *Sender)
{
Form4->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormActivate(TObject *Sender)
{
Form4->Left=Screen->Width/2-Form4->ClientWidth/2;
Form4->Top=Screen->Height/2-Form4->ClientHeight/2;
}
//---------------------------------------------------------------------------
