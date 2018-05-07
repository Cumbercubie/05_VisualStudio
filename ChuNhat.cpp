#include "graphics.h"
#pragma comment(lib, "graphics.lib")
#include "ChuNhat.h"
#include "Hinh.h"
#include <iostream>
using namespace std;
void ChuNhat::Nhap()
{
	Hinh::Nhap();
}
void ChuNhat::VeHinh()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	int left = 15;
	int top = 10;
	int right = left + fDai;
	int bottom = top + fRong;
	rectangle(left, top, right, bottom);
	getch();
	closegraph();
}