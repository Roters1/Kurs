//---------------------------------------------------------------------------

#ifndef LVL_3H
#define LVL_3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TBitBtn *BitBtn1;
	TLabel *Label1;
	TShape *Shape1;
	TShape *Shape3;
	TShape *Shape4;
	TShape *Shape5;
	TShape *Shape6;
	TShape *Shape7;
	TShape *Shape8;
	TShape *Shape9;
	TShape *Shape10;
	TShape *Shape11;
	TShape *Shape2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Shape1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);

private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
