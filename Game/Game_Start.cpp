//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Game_Start.h"
#include "LVL_1.h"
#include "LVL_2.h"
#include "LVL_3.h"
#include "LVL_4.h"
#include "Class_G.h"
#include "stdlib.h"
#include "Help.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Game_P Drav;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
 Drav.device = Form1->Canvas;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if(Form3->ShowModal() == mrOk)
{
   Label1->Caption = "2" ;
   Button2->Enabled = true;
   Button1->Enabled = false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
if(Form2->ShowModal() == mrOk)
{
   Label1->Caption = "3" ;
   Button3->Enabled = true;
   Button2->Enabled = false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
Form5->ShowModal() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
  Drav.draw_ani();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
  if(Form4->ShowModal() == mrOk)
{
   Label1->Caption = "4" ;
   Button4->Enabled = true;
	Button3->Enabled = false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{

if(Timer1->Tag == 0){

Drav.draw_ani();
Drav.set_Col();
}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
  if(Form6->ShowModal() == mrOk)
{
   Label3->Caption = "WIN" ;
   Label3->Visible = true;
   Button4->Enabled = false;

}

}
//---------------------------------------------------------------------------
