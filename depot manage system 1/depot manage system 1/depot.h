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
	void start_input();//��ʼ���ݶ���
	void print_menu();//�˵�
	void new_cargo_add();//������Ʒ��
	void cargo_num_add();//����
	void caogo_num_reduce();//����
	void search_cargo();//�������
	void print_all();//��ӡ����
	void end_output();//��������д��
};