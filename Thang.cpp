#include "graphics.h"
#pragma comment(lib, "graphics.lib")
#include "Thang.h"
#include <iostream>
#include "Hinh.h"
void Thang::Nhap()
{	
	cout << "Nhap day lon: \n";
	cin >> fDai;
	cout << "Nhap day be: \n";
	cin >> fDayBe;
	cout << "\nNhap chieu cao: \n";
	cin >> fRong;

}
void Thang::VeHinh()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	int top_left = 20;
	int bottom_left = 10;
	int top = 10;
	int right_DayLon = top_left + fDai;//fDai=fDayLon
	int right_DayBe = bottom_left + fDayBe;
	int bottom = top + fRong;
	line(bottom_left, bottom, right_DayLon, bottom);
	line(top_left, top, right_DayBe, top);
	line(bottom_left, bottom, top_left, top);
	line(right_DayLon, bottom, right_DayBe, top);
	getch();
	closegraph();
}


