#include <iostream>

using namespace std;

int main() {
	
	int dizi[5];
	
	dizi[0]=12;
	dizi[1]=20;
	dizi[2]=4;
	dizi[3]=154;
	dizi[4]=129;
	
	int arr[]={21,25,27};
	
	string mevsim[]={"ilkbahar","yaz","sonbahar","kis"};
	
	for (int i=0;i<5;i++)
	{
		cout<<dizi[i]<<" ";
	}
	cout<<endl;
	
	for (int i=0;i<3;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for (int i=0;i<4;i++)
	{
		cout<<mevsim[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
