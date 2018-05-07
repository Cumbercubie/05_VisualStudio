#pragma once
#include <iostream>
#include "Hinh.h"
using namespace std;

class Thang :public Hinh
{
private:
	float fDayBe;
public:
	void Nhap();
	void VeHinh();
};
