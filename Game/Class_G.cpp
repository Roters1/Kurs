//---------------------------------------------------------------------------

#pragma hdrstop
#include "Class_G.h"
//---------------------------------------------------------------------------
void Game_P::draw(){
device->Pen->Width = 3;
device->MoveTo(p.x+1*wp,p.y+5*hp);
device->LineTo(p.x+1*wp,p.y+39*hp);
device->LineTo(p.x+9*wp,p.y+39*hp);
device->LineTo(p.x+9*wp,p.y+5*hp);
device->LineTo(p.x+1*wp,p.y+5*hp);


for(int i=0,dap = 11;i <6;i++){

device->MoveTo(p.x+1*wp,p.y+dap*hp);
device->LineTo(p.x+9*wp,p.y+dap*hp);
dap+=7;
}

device->MoveTo(p.x+10*wp,p.y+5*hp);
device->LineTo(p.x+10*wp,p.y+39*hp);
device->LineTo(p.x+59*wp,p.y+39*hp);
device->LineTo(p.x+59*wp,p.y+5*hp);
device->LineTo(p.x+10*wp,p.y+5*hp);
for(int i=0,dap = 10;i <8;i++){

device->MoveTo(p.x+dap*wp,p.y+5*hp);
device->LineTo(p.x+dap*wp,p.y+39*hp);
dap+=7;
}
for(int i=0,dap = 11;i <6;i++){

device->MoveTo(p.x+10*wp,p.y+dap*hp);
device->LineTo(p.x+59*wp,p.y+dap*hp);
dap+=7;
}
}

void Game_P::draw_ani(){
device->MoveTo(1,130);
device->LineTo(400,130);
device->LineTo(400,195);
device->LineTo(1,195);
device->LineTo(1,130);
for(int i=0,dap = 50;i <8;i++){

device->MoveTo(dap,130);
device->LineTo(dap,195);
	dap+=50   ;
}


}
void Game_P::Set_Col(){
Col[0] = clWhite;
Col[1] = clLime;
Col[2] = clYellow;
Col[3] = clRed;
Col[4] = clBlue;
Col[5] = clMaroon;
Col[6] = clGreen;
Col[7] = clOlive;



}
void Game_P::SeT_ran(){
 int rand1=rand()%6+1;
Col_R  = Col[rand1];

}

void Game_P::set_Col(){
Set_Col();
int rand1=rand()%6+1;
for(int i=0,dap = 49;i <8;i++){
device->Brush->Color = Col[rand1];
device->FloodFill(dap,131,device->Pixels[dap][132],fsSurface);
 dap+=50;
 rand1=rand()%6+1;
}


}
#pragma package(smart_init)
