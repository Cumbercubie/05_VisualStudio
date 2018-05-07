#include "BinhHanh.h"
#include "graphics.h"
#pragma comment(lib, "graphics.lib")
#include <iostream>
using namespace std;

void BinhHanh::Nhap()
{
	cout << "Nhap chieu dai: \n";
	cin >> fDai;
	cout << "Nhap chieu cao: \n";
	cin >> fRong;
}
BinhHanh::~BinhHanh()
{
	delete (this);
}
void BinhHanh::VeHinh()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	int left = 20;
	int top = 10;
	int right = left + fDai;
	int bottom = top + fRong;
	line(left, top, right, top);
	line(left - 20, bottom, right-20, bottom);
	line(left, top, left - 20, bottom);
	line(right, top, right-20, bottom);
	getch();
	closegraph();
}
