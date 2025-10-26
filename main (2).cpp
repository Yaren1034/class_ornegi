/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class karakter {
public:
	string adi;
	int can;
	void kosma() {
		cout<<adi<<"kosuyor"<<endl;
	}
};
int main()
{
	karakter karakter1;
	//strcpy(karakter1.adi,"Mini Pekka");
	karakter1.adi = "Mini Pekka";
	karakter1.can = 4200;

	karakter karakter2;
	//strcpy(karakter2.adi, "D0ksir Golemi");
	karakter2.adi = "D0ksir Golemi";
	karakter2.can = 8000;

	cout<<"karakter 1: "<<karakter1.adi<<endl;
	cout<<"karakter 2: "<<karakter2.adi<<endl;

	karakter1. kosma();
	karakter2. kosma();
	return 0;
}