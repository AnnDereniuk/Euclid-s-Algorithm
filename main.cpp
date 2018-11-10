#include<iostream>
#include<stdio.h>
#include"f.h"
using namespace std;
int main() {
	long a = 5, n = 7;
	cout << "Inverse of "<<a<<" modulo "<< n <<" is " << inverse(a, n) << endl;
	system("pause");
		return 0;
}