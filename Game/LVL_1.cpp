//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Class_G.h"
#include "LVL_1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
Game_P Drav;
bool Start_1 =false;
bool Start_2 =false;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
 Drav.device = Form3->Canvas;
 Drav.p.x = 0;
 Drav.p.x = 0;

 Drav.h = 100;
 Drav.w = 100;
 Drav.hp = Drav.h/10;
 Drav.wp = Drav.w/10 ;

  Drav.draw();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
Drav.draw();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Start(TObject *Sender)
{
Drav.draw();
Button1->Enabled = false;
Shape1->Visible = true;
Shape2->Visible = true;
Shape3->Visible = true;
Shape4->Visible = true;
Shape5->Visible = true;
Shape6->Visible = true;
Shape7->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
Button1->Enabled =true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Shape2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
if(Sender == Shape2){
if(!Start_1){
Start_1 = true;

}

else Start_1 = false ;
}
else if(Sender == Shape1){
if(!Start_2){
Start_2 = true;

}

else Start_2 = false ;
}

 for(int i = 3;i < 8 ; i++ )   {
AnsiString Sname = "Shape"+IntToStr(i);
if(Shape2->Top <= ((TShape*)FindComponent(Sname))->Top+10 && Shape2->Top >= ((TShape*)FindComponent(Sname))->Top-10  )
{
	if(Shape2->Left <= ((TShape*)FindComponent(Sname))->Left+10 ){
	((TShape*)FindComponent(Sname))->Brush->Color = 	Shape2->Brush->Color ;
	}
	else{
   ((TShape*)FindComponent(Sname))->Brush->Color =  clWhite;
}
}

else if (Shape1->Left <= ((TShape*)FindComponent(Sname))->Left+10 && Shape1->Left >= ((TShape*)FindComponent(Sname))->Left-10  )
{
	if(Shape1->Top <= ((TShape*)FindComponent(Sname))->Top+10 ){
	((TShape*)FindComponent(Sname))->Brush->Color = 	Shape1->Brush->Color ;
	}


	else{
   ((TShape*)FindComponent(Sname))->Brush->Color =  clWhite;
}
}
else{
   ((TShape*)FindComponent(Sname))->Brush->Color =  clWhite;
}
}

//3
/*
if(Shape2->Top <= Shape3->Top+10 && Shape2->Top >= Shape3->Top-10  )
{
	if(Shape2->Left <= Shape3->Left+10 ){
	Shape3->Brush->Color = 	Shape2->Brush->Color ;
	}
	else{
   Shape3->Brush->Color =  clWhite;
}
}
else if (Shape7->Left <= Shape3->Left+10 && Shape7->Left >= Shape3->Left-10  )
{
	if(Shape7->Top <= Shape3->Top+10 ){
	Shape3->Brush->Color = 	Shape1->Brush->Color ;
	}


	else{
   Shape3->Brush->Color =  clWhite;
}
}
else{
   Shape3->Brush->Color =  clWhite;
}
// 4
if(Shape2->Top <= Shape4->Top+10 && Shape2->Top >= Shape4->Top-10  )
{
	if(Shape2->Left <= Shape4->Left+10 ){
	Shape4->Brush->Color = 	Shape2->Brush->Color ;
	}
	else{
   Shape4->Brush->Color =  clWhite;
}
}
else if (Shape7->Left <= Shape4->Left+10 && Shape7->Left >= Shape4->Left-10  )
{
	if(Shape7->Top <= Shape4->Top+10 ){
	Shape4->Brush->Color = 	Shape1->Brush->Color ;
	}


	else{
   Shape3->Brush->Color =  clWhite;
}
}
else{
   Shape4->Brush->Color =  clWhite;
}
//  5
if(Shape2->Top <= Shape5->Top+10 && Shape2->Top >= Shape5->Top-10  )
{
	if(Shape2->Left <= Shape5->Left+10 ){
	Shape5->Brush->Color = 	Shape2->Brush->Color ;
	}
	else{
   Shape5->Brush->Color =  clWhite;
}
}
else if (Shape7->Left <= Shape5->Left+10 && Shape7->Left >= Shape5->Left-10  )
{
	if(Shape7->Top <= Shape5->Top+10 ){
	Shape5->Brush->Color = 	Shape1->Brush->Color ;
	}


	else{
   Shape5->Brush->Color =  clWhite;
}
}
else{
   Shape5->Brush->Color =  clWhite;
}
//6
if(Shape2->Top <= Shape6->Top+10 && Shape2->Top >= Shape6->Top-10  )
{
	if(Shape2->Left <= Shape6->Left+10 ){
	Shape6->Brush->Color = 	Shape2->Brush->Color ;
	}
	else{
   Shape6->Brush->Color =  clWhite;
}
}
else if (Shape7->Left <= Shape6->Left+10 && Shape7->Left >= Shape6->Left-10  )
{
	if(Shape7->Top <= Shape6->Top+10 ){
	Shape6->Brush->Color = 	Shape1->Brush->Color ;
	}


	else{
   Shape6->Brush->Color =  clWhite;
}
}
else{
   Shape6->Brush->Color =  clWhite;
}
			 */
if   (Shape1->Brush->Color == clRed && Shape2->Brush->Color == clRed && Shape3->Brush->Color == clRed && Shape4->Brush->Color == clRed && Shape5->Brush->Color == clRed && Shape6->Brush->Color == clRed )
{
Label1->Visible = true;
BitBtn1 ->Enabled = true;
Shape2->Enabled = false;
Shape7->Enabled = false;
}
}



//---------------------------------------------------------------------------

void __fastcall TForm3::FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
if(Start_1){
Shape2->Top = Y;
Shape2->Left = X;
Drav.draw();
}
if(Start_2){
Shape1->Top = Y;
Shape1->Left = X;
Drav.draw();
}

}
//---------------------------------------------------------------------------



