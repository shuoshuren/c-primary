/*
 * 06_asm.cpp
 * __asm 内嵌汇编
 *  Created on: Feb 28, 2019
 *      Author: xc
 */

#include<iostream>
using namespace std;

int main(){

	int a = 11;
	int b = 22;
	int sum = 0;

	//下面是汇编
	__asm{
		mov eax,a;//a的值给eax寄存器
		mov ebx,b;
		lea eax,[eax+ebx];
		mov sum,eax;//可以字节将eax的值赋值给sum

	}

	cout << sum;

	return 0;

}


