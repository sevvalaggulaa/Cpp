#include <iostream>

using namespace std;

int main() {
	
	int arr[5]={10,20,30,40,50};
	int *ptr1 = arr;
	int *ptr2 =arr+3;
	
	cout<<"ptr2'nin tutuldugu deger= "<< *ptr2 << endl;
	
	ptr1++;
	ptr2--;
	
	cout<<"ptr1'nin tutuldugu deger= "<< *ptr1 << endl;
	cout<<"ptr2'nin tutuldugu deger= "<< *ptr2 << endl;
	
	return 0;
}
