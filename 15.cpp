#include <iostream>

using namespace std;

int main() {
	int num1,num2,num3;
	int enKucuk;
	
	cout<<"lutfen 3 adet sayi giriniz= \n";
	cin>>num1>>num2>>num3;
	
	if(num1<=num2 && num1<=num3)
	{
		enKucuk=num1;
	}
	else if(num2<=num1 && num2<=num3)
	{
		enKucuk=num2;
	}
	else
	{
		enKucuk=num3;
	}
	
	cout<<"en kucuk sayi= "<<enKucuk;
	return 0;
}
