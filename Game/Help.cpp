//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Help.h"
#include "Class_G.h"
Game_P Drav;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
Drav.device = Form5->Canvas;
Drav.Set_Col()     ;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Timer1Timer(TObject *Sender)
{
if(Timer1->Tag == 0){

Drav.SeT_ran();
Shape3->Brush->Color = Drav.Col_R;
Drav.SeT_ran();
Shape5->Brush->Color = Drav.Col_R;
Drav.SeT_ran();
Shape6->Brush->Color = Drav.Col_R;
Drav.SeT_ran();
Shape7->Brush->Color = Drav.Col_R;

}
}
//---------------------------------------------------------------------------
