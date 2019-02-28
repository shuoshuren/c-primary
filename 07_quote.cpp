/*
 * 07_&.cpp
 * &:引用
 *  Created on: Feb 28, 2019
 *      Author: xc
 */

#include<iostream>
using namespace std;

//加上引用，参数变成了实参的别名
void swap(int &a,int &b){

	int temp = a;
	a = b;
	b = temp;
}

int main(){

	int a = 100;
	int& a1 = a;

	cout<<a <<","<< a1<<endl;
	cout<<&a <<","<< &a1<<endl;

	a1 = 200;
	cout<<a <<","<< a1<<endl;

	int b = 300;
	swap(a,b);
	cout<<a <<","<< b<<endl;
	cout<<a1 <<","<< b<<endl;
	
	return 0;
}


