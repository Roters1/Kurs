//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LVL_3.h"
#include "Class_G.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
Game_P Drav;
bool Start_1 =false;
bool Start_2 =false;
bool Start_3 =false;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
 Drav.device = Form4->Canvas;
 Drav.p.x = 0;
 Drav.p.x = 0;

 Drav.h = 100;
 Drav.w = 100;
 Drav.hp = Drav.h/10;
 Drav.wp = Drav.w/10 ;

  Drav.draw();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
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
 Shape8->Visible = true;
 Shape9->Visible = true;
 Shape10->Visible = true;
 Shape11->Visible = true;

}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
if(Start_1){
Shape1->Top = Y;
Shape1->Left = X;
Drav.draw();
}
if(Start_2){
Shape2->Top = Y;
Shape2->Left = X;
Drav.draw();
}
if(Start_3){
Shape3->Top = Y;
Shape3->Left = X;
Drav.draw();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Shape1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
//((TShape*
if(Sender == Shape1){
if(!Start_1){
Start_1 = true;

}

else Start_1 = false ;
}

else if (Sender == Shape2) {
if(!Start_2){
Start_2 = true;

}

else Start_2 = false ;
}
else if (Sender == Shape3) {
if(!Start_3){
Start_3 = true;

}

else Start_3 = false ;
}
//4
for(int i = 4;i < 12 ; i++ )   {
AnsiString Sname = "Shape"+IntToStr(i);
if(Shape1->Top <= ((TShape*)FindComponent(Sname))->Top+10 && Shape1->Top >= ((TShape*)FindComponent(Sname))->Top-10  )
{
	if(Shape1->Left <= ((TShape*)FindComponent(Sname))->Left+10 ){
	((TShape*)FindComponent(Sname))->Brush->Color = 	Shape1->Brush->Color ;
	}
	else{
   ((TShape*)FindComponent(Sname))->Brush->Color =  clWhite;
}
}

else if (Shape2->Left <= ((TShape*)FindComponent(Sname))->Left+10 && Shape2->Left >= ((TShape*)FindComponent(Sname))->Left-10  )
{
	if(Shape2->Top <= ((TShape*)FindComponent(Sname))->Top+10 ){
	((TShape*)FindComponent(Sname))->Brush->Color = 	Shape2->Brush->Color ;
	}


	else{
   ((TShape*)FindComponent(Sname))->Brush->Color =  clWhite;
}
}
//s3

else if(Shape3->Top <= ((TShape*)FindComponent(Sname))->Top+10 && Shape3->Top >= ((TShape*)FindComponent(Sname))->Top-10  )
{

	((TShape*)FindComponent(Sname))->Brush->Color = 	Shape3->Brush->Color ;

}

else if (Shape3->Left <= ((TShape*)FindComponent(Sname))->Left+10 && Shape3->Left >= ((TShape*)FindComponent(Sname))->Left-10  )
{

	((TShape*)FindComponent(Sname))->Brush->Color = 	Shape3->Brush->Color ;


}
else{
   ((TShape*)FindComponent(Sname))->Brush->Color =  clWhite;
}
}
/*

//4
if(Shape1->Top <= Shape4->Top+10 && Shape1->Top >= Shape4->Top-10  )
{
	if(Shape1->Left <= Shape4->Left+10 ){
	Shape4->Brush->Color = 	Shape1->Brush->Color ;
	}
	else{
   Shape4->Brush->Color =  clWhite;
}
}

else if (Shape2->Left <= Shape4->Left+10 && Shape2->Left >= Shape4->Left-10  )
{
	if(Shape2->Top <= Shape4->Top+10 ){
	Shape4->Brush->Color = 	Shape2->Brush->Color ;
	}


	else{
   Shape4->Brush->Color =  clWhite;
}
}
//s3

else if(Shape3->Top <= Shape4->Top+10 && Shape3->Top >= Shape4->Top-10  )
{

	Shape4->Brush->Color = 	Shape3->Brush->Color ;

}

else if (Shape3->Left <= Shape4->Left+10 && Shape3->Left >= Shape4->Left-10  )
{

	Shape4->Brush->Color = 	Shape3->Brush->Color ;


}
else{
   Shape4->Brush->Color =  clWhite;
}
//5
if(Shape1->Top <= Shape5->Top+10 && Shape1->Top >= Shape5->Top-10  )
{
	if(Shape1->Left <= Shape5->Left+10 ){
	Shape5->Brush->Color = 	Shape1->Brush->Color ;
	}
	else{
   Shape5->Brush->Color =  clWhite;
}
}

else if (Shape2->Left <= Shape5->Left+10 && Shape2->Left >= Shape5->Left-10  )
{
	if(Shape2->Top <= Shape5->Top+10 ){
	Shape5->Brush->Color = 	Shape2->Brush->Color ;
	}


	else{
   Shape5->Brush->Color =  clWhite;
}
}
//s3

else if(Shape3->Top <= Shape5->Top+10 && Shape3->Top >= Shape5->Top-10  )
{

	Shape5->Brush->Color = 	Shape3->Brush->Color ;

}

else if (Shape3->Left <= Shape5->Left+10 && Shape3->Left >= Shape5->Left-10  )
{

	Shape5->Brush->Color = 	Shape3->Brush->Color ;




}
else{
   Shape5->Brush->Color =  clWhite;
}
//6
if(Shape1->Top <= Shape6->Top+10 && Shape1->Top >= Shape6->Top-10  )
{
	if(Shape1->Left <= Shape6->Left+10 ){
	Shape6->Brush->Color = 	Shape1->Brush->Color ;
	}
	else{
   Shape6->Brush->Color =  clWhite;
}
}

else if (Shape2->Left <= Shape6->Left+10 && Shape2->Left >= Shape6->Left-10  )
{
	if(Shape2->Top <= Shape6->Top+10 ){
	Shape6->Brush->Color = 	Shape2->Brush->Color ;
	}


	else{
   Shape6->Brush->Color =  clWhite;
}
}
//s3

else if(Shape3->Top <= Shape6->Top+10 && Shape3->Top >= Shape6->Top-10  )
{

	Shape6->Brush->Color = 	Shape3->Brush->Color ;

}

else if (Shape3->Left <= Shape6->Left+10 && Shape3->Left >= Shape6->Left-10  )
{

	Shape6->Brush->Color = 	Shape3->Brush->Color ;



}
else{
   Shape6->Brush->Color =  clWhite;
}
//7
if(Shape1->Top <= Shape7->Top+10 && Shape1->Top >= Shape7->Top-10  )
{
	if(Shape1->Left <= Shape7->Left+10 ){
	Shape7->Brush->Color = 	Shape1->Brush->Color ;
	}
	else{
   Shape7->Brush->Color =  clWhite;
}
}

else if (Shape2->Left <= Shape7->Left+10 && Shape2->Left >= Shape7->Left-10  )
{
	if(Shape2->Top <= Shape7->Top+10 ){
	Shape7->Brush->Color = 	Shape2->Brush->Color ;
	}


	else{
   Shape7->Brush->Color =  clWhite;
}
}
//s3

else if(Shape3->Top <= Shape7->Top+10 && Shape3->Top >= Shape7->Top-10  )
{

	Shape7->Brush->Color = 	Shape3->Brush->Color ;

}

else if (Shape3->Left <= Shape7->Left+10 && Shape3->Left >= Shape7->Left-10  )
{

	Shape7->Brush->Color = 	Shape3->Brush->Color ;




}
else{
   Shape7->Brush->Color =  clWhite;
}
//8
if(Shape1->Top <= Shape8->Top+10 && Shape1->Top >= Shape8->Top-10  )
{
	if(Shape1->Left <= Shape8->Left+10 ){
	Shape8->Brush->Color = 	Shape1->Brush->Color ;
	}
	else{
   Shape8->Brush->Color =  clWhite;
}
}

else if (Shape2->Left <= Shape8->Left+10 && Shape2->Left >= Shape8->Left-10  )
{
	if(Shape2->Top <= Shape8->Top+10 ){
	Shape8->Brush->Color = 	Shape2->Brush->Color ;
	}


	else{
   Shape8->Brush->Color =  clWhite;
}
}
//s3

else if(Shape3->Top <= Shape8->Top+10 && Shape3->Top >= Shape8->Top-10  )
{

	Shape8->Brush->Color = 	Shape3->Brush->Color ;


}

else if (Shape8->Left <= Shape4->Left+10 && Shape3->Left >= Shape8->Left-10  )
{

	Shape8->Brush->Color = 	Shape3->Brush->Color ;


}
else{
   Shape8->Brush->Color =  clWhite;
}
//9
if(Shape1->Top <= Shape9->Top+10 && Shape1->Top >= Shape9->Top-10  )
{

	Shape9->Brush->Color = 	Shape1->Brush->Color ;



}

else if (Shape2->Left <= Shape9->Left+10 && Shape2->Left >= Shape9->Left-10  )
{

	Shape9->Brush->Color = 	Shape2->Brush->Color ;



}
//s3

else if(Shape3->Top <= Shape9->Top+10 && Shape3->Top >= Shape9->Top-10  )
{

	Shape9->Brush->Color = 	Shape3->Brush->Color ;



}

else if (Shape3->Left <= Shape9->Left+10 && Shape3->Left >= Shape9->Left-10  )
{

	Shape9->Brush->Color = 	Shape3->Brush->Color ;


}
else{
   Shape9->Brush->Color =  clWhite;
}
//11
if(Shape1->Top <= Shape11->Top+10 && Shape1->Top >= Shape11->Top-10  )
{
	if(Shape1->Left <= Shape11->Left+10 ){
	Shape11->Brush->Color = 	Shape1->Brush->Color ;
	}
	else{
   Shape11->Brush->Color =  clWhite;
}
}

else if (Shape2->Left <= Shape11->Left+10 && Shape2->Left >= Shape11->Left-10  )
{
	if(Shape2->Top <= Shape11->Top+10 ){
	Shape11->Brush->Color = 	Shape2->Brush->Color ;
	}


	else{
   Shape11->Brush->Color =  clWhite;
}
}
//s3

else if(Shape3->Top <= Shape11->Top+10 && Shape3->Top >= Shape11->Top-10  )
{

	Shape11->Brush->Color = 	Shape3->Brush->Color ;

}

else if (Shape3->Left <= Shape11->Left+10 && Shape3->Left >= Shape11->Left-10  )
{

   Shape11->Brush->Color =  clWhite;

}
else{
   Shape11->Brush->Color =  clWhite;
}
//10
if(Shape1->Top <= Shape10->Top+10 && Shape1->Top >= Shape10->Top-10  )
{
	if(Shape1->Left <= Shape10->Left+10 ){
	Shape10->Brush->Color = 	Shape1->Brush->Color ;
	}
	else{
   Shape10->Brush->Color =  clWhite;
}
}

else if (Shape2->Left <= Shape10->Left+10 && Shape2->Left >= Shape10->Left-10  )
{
	if(Shape2->Top <= Shape10->Top+10 ){
	Shape10->Brush->Color = 	Shape2->Brush->Color ;
	}


	else{
   Shape10->Brush->Color =  clWhite;
}
}
//s3

else if(Shape3->Top <= Shape10->Top+10 && Shape3->Top >= Shape10->Top-10  )
{

   Shape10->Brush->Color =  clWhite;

}

else if (Shape3->Left <= Shape10->Left+10 && Shape3->Left >= Shape10->Left-10  )
{
	Shape10->Brush->Color = 	Shape3->Brush->Color ;

}
else{
   Shape10->Brush->Color =  clWhite;
}
*/
if   (Shape4->Brush->Color == clAqua && Shape5->Brush->Color == clAqua && Shape6->Brush->Color == clAqua && Shape7->Brush->Color == clAqua && Shape8->Brush->Color == clAqua && Shape9->Brush->Color == clAqua && Shape10->Brush->Color == clAqua && Shape11->Brush->Color == clAqua  )
{
Label1->Visible = true;
BitBtn1 ->Enabled = true;
Shape1->Enabled = false;
Shape2->Enabled = false;
Shape3->Enabled = false;
 Start_1 =false;
 Start_2 =false;
 Start_3 =false;
}
}
//---------------------------------------------------------------------------
