#include <iostream>
using namespace std;

int main(){
	int a = 5; 
	char b = 'A';   //char to int 
	char &c = b  ;   //char to int 
	int *x = &a;
	char *y = &b;
	int *z = x; 
	
	cout << a << " " << b << " "<< c << " "<< x << " "<< (int*)y << " " << z << endl;	
	cout << &a << " " << (int*)&b << " "<< (int*) &c << " "<< &x << " "<< (int *)&y << " " << &z << endl;
	c = 'F' ; 
	cout << a << " " << b << " "<< c << " "<< x << " "<< (int*)y << " " << z << endl;
	*y = 'W' ; 
	cout << a << " " << b << " "<< c << " "<< x << " "<< (int*)y << " " << z << endl;
	*x = 6 ;
	cout << a << " " << b << " "<< c << " "<< x << " "<< (int*)y << " " << z << endl;
	*z = 7;
	cout << a << " " << b << " "<< c << " "<< x << " "<< (int*)y << " " << z << endl;
	return 0;
}
