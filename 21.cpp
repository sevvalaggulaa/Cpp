#include <iostream>

using namespace std;

int main() {
	
	int x=7;
	int y=8;
	
	int *ptr;
	ptr=&y;
	
	cout << *ptr <<endl;
	
	*ptr=78;
	
	cout << *ptr << endl;
	cout <<"y= "<< y << endl;
	
	ptr = &x;
	cout << *ptr <<endl;
	*ptr=25;
	cout <<"x= "<< x << endl;
	
	return 0;
}
