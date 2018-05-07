#include "graphics.h"
#pragma comment(lib, "graphics.lib")
#include "Hinh.h"
#include "ChuNhat.h"
#include "Vuong.h"
#include "Thang.h"
#include "BinhHanh.h"
#include <iostream>
using namespace std;
int main()
{
	//Hinh *hcn=new ChuNhat;
	//cout << "Nhap hinh chu nhat \n";
	//hcn->Nhap();
	//hcn->VeHinh();
	//cout << "Nhap hinh vuong \n";
	//Hinh *hv = new Vuong;
	//hv->Nhap();
	//hv->VeHinh();
	//cout << "Nhap hinh thang \n";
	//Hinh *ht = new Thang;
	//ht->Nhap();
	//ht->VeHinh();
	Hinh *hbh = new BinhHanh;
	hbh->Nhap();
	hbh->VeHinh();

	return 0;
}