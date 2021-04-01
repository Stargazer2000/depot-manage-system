#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#define FILENAME "data.txt"
static int cargo_total_num = 0;
class cargo
{
public:
	cargo();
	friend cargo_manage;
private:
	struct cargo_attribute {
		string name;
		int cargo_num = 0;
		int depot_num = 0;
	}c[1000];
};
class cargo_manage
{
	void start_input();//初始数据读入
	void print_menu();//菜单
	void new_cargo_add();//增加新品种
	void cargo_num_add();//进货
	void caogo_num_reduce();//出货
	void search_cargo();//货物查找
	void print_all();//打印所有
	void end_output();//结束数据写入
};