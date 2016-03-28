//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int shet=1;
int a=1;
int flag=7; //счетчик вопросов
TStringList *List = new TStringList( ); //Текст вопросов
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormActivate(TObject *Sender)
{
Form1->Left=Screen->Width/2-Form1->ClientWidth/2;
Form1->Top=Screen->Height/2-Form1->ClientHeight/2;
Memo1->Clear();
Memo2->Clear();
Memo2->Lines->LoadFromFile("Spisok.txt"); 
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
List->LoadFromFile("Questions.txt");
Memo1->Lines->Add(List->Strings[shet-1] );
SpeedButton1->Enabled=true;
SpeedButton2->Enabled=false;
RadioButton1->Enabled=true;
RadioButton2->Enabled=true;
RadioButton3->Enabled=true;
RadioButton4->Enabled=true;
RadioButton5->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
SpeedButton2->Enabled=true;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
//Проверка на наличие большого количества контента рейтинга 18+
if ( (RadioButton1->Checked==true) || ((RadioButton2->Checked==true) && ( (shet==1) || (shet==2) || (shet==5) ) ))
{
Form3->Show();
Form3->Edit1->Text=Form1->Edit1->Text;
Form3->Edit2->Text="18+";
}
//сохранение промежуточных результатов
if (a==3) Form2->StringGrid1->Cells[shet-1][0]="3";
else if (a==1) Form2->StringGrid1->Cells[shet-1][0]="1";
else if (a==2) Form2->StringGrid1->Cells[shet-1][0]="2";
else if (a==4) Form2->StringGrid1->Cells[shet-1][0]="4";
else if (a==5) Form2->StringGrid1->Cells[shet-1][0]="5";

RadioButton1->Checked=false;
RadioButton2->Checked=false;
RadioButton3->Checked=false;
RadioButton4->Checked=false;
RadioButton5->Checked=false;
shet++;
Memo1->Clear();
if (shet<=8)
StringGrid1->FixedCols++;
Memo1->Lines->Add(List->Strings[shet-1] );

if (shet==8)
{
Form1->SpeedButton1->Enabled=false;
Form1->SpeedButton3->Enabled=true;
}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
a=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
a=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
a=3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
a=4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton5Click(TObject *Sender)
{
a=5;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
if (a==3) Form2->StringGrid1->Cells[shet-1][0]="3";
else if (a==1) Form2->StringGrid1->Cells[shet-1][0]="1";
else if (a==2) Form2->StringGrid1->Cells[shet-1][0]="2";
else if (a==4) Form2->StringGrid1->Cells[shet-1][0]="4";
else if (a==5) Form2->StringGrid1->Cells[shet-1][0]="5";
//----------------
for (int i=0; i<=7; i++)
{
        if ( (Form2->StringGrid1->Cells[i][0]=="4") || (Form2->StringGrid1->Cells[i][0]=="5") )
        //проверяем рейтинг 0+ и далее отталкиваемся от него в опрделении остальных рейтингов
        flag=0;
                else
                {
                        if ( (Form2->StringGrid1->Cells[i][0]=="3") && ( (i==3) || (i==7)  ) )

                                { //рейтинг 6+
                                        flag=1;
                                        break;
                                }
                        else
                                {
                                        if ( (Form2->StringGrid1->Cells[i][0]=="3") && ( (i==1) || (i==2) || (i==6)  ) )
                                                {
                                                //рейтинг 12+
                                                flag=2;
                                                break;
                                                }
                                        else
                                                {  //рейтинг 16+
                                                if ( (Form2->StringGrid1->Cells[i][0]=="2") && ( (i>=2)&& (i<=7) && (i!=4)  ) )
                                                {
                                                flag=3;
                                                break;
                                                }
                                                else
                                                {  //рейтинг 18+
                                                flag=4;
                                                break;
                                                 }
                                                }
                                }
                }
}
//---------------

//вывод соответствующих результатов







if (flag==0)
{
Form3->Show();
Form3->Edit1->Text=Form1->Edit1->Text;
Form3->Edit2->Text="0+";
}
else if (flag==1)
{
Form3->Show();
Form3->Edit1->Text=Form1->Edit1->Text;
Form3->Edit2->Text="6+";
}
else if (flag==2)
{
Form3->Show();
Form3->Edit1->Text=Form1->Edit1->Text;
Form3->Edit2->Text="12+";
}
else if (flag==3)
{
Form3->Show();
Form3->Edit1->Text=Form1->Edit1->Text;
Form3->Edit2->Text="16+";
}
else if (flag==4)
{
Form3->Show();
Form3->Edit1->Text=Form1->Edit1->Text;
Form3->Edit2->Text="18+";
}
}
//---------------------------------------------------------------------------




void __fastcall TForm1::N1Click(TObject *Sender)
{
Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
Form4->Show();
}
//---------------------------------------------------------------------------

