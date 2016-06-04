//---------------------------------------------------------------------------

#ifndef Class_GH
#define Class_GH
#include <Vcl.Graphics.hpp>
 #include <stdlib.h>
#include <vcl.h>

//---------------------------------------------------------------------------
class Tpoit{
	public:
		int x,y;
};

class Game_P{
	public:
		Tpoit p;
		int color[3];
		int h,w;
		int hp,wp ;
		int Col[8];
		int Col_R;
		TCanvas *device;
		void draw();
		void draw_ani();
		void Set_Col();
		void set_Col();
		void SeT_ran();
};
#endif
