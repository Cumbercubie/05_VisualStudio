#include "Vuong.h"
#include "Hinh.h"
#include <iostream>
#include "graphics.h"
#pragma comment(lib, "graphics.lib")
using namespace std;
void Vuong::Nhap()
{
	cout << "Nhap do dai canh hinh vuong ";
	cin >> fDai;
}
void Vuong::VeHinh()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	int left = 15;
	int top = 10;
	float right = left + fDai;
	float bottom = top + fDai;
	rectangle(left, top, right, bottom);
	getch();
	closegraph();
}