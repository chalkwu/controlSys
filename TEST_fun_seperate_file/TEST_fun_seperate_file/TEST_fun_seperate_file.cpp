// TEST_fun_seperate_file.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "foo.h"
#include <string>


using namespace std;


int main()
{

	cout << "Hello world! " << endl;

	cout << Multiply(5) << endl;

	string a = "(( x1 * exp-2^x2 + u1) - (cos-5+x3))* (sinu2+   cos9) ";
	int a_lx = 3;
	int a_lu = 2;
	double x[3] = { 1 , 2, 4 };
	double u[2] = { 1, 1.57 };

	string newa;
	newa = sub_with_num(a, x, u, a_lx, a_lu);
	cout << "new a is: " << newa << endl;

	double a_value = evaluate_a_string(a, x, u, a_lx, a_lu);
	cout << a_value << endl;

	system("pause");
    return 0;
}

