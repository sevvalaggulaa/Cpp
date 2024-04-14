#include <iostream>

using namespace std;

int main() {
	
	int dizi[5];
	dizi[0]=12;
	dizi[1]=20;
	dizi[2]=4;
	dizi[3]=154;
	dizi[4]=129;
	
	cout<< "lutfen dizinin 1. elemanini giriniz: ";
	cin>>dizi[0];
	
	for (int i=0;i<5;i++)
	{
		cout<<dizi[i]<<endl;
	}
	
	return 0;
}
