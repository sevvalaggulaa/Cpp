#include <iostream>

using namespace std;

int main() {
	
	int arr[]= {8,12,20};
	
	int *p;
	p=arr;
	*(p+2)=2**(p+2);
	cout << arr[2] << endl;
	cout << *(p+2) <<endl;
	return 0;
}
