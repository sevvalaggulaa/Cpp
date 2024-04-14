#include <iostream>

using namespace std;

int main() {
	
	cout<<"lutfen 4 adet sayi giriniz: \n";
	int dizi[4];
	
	for(int i=0;i<4;i++)
	{
		cout<<i<<"nci sayiyi giriniz:";
		cin>>dizi[i];
	}
	cout<<endl;
	
	for (int i=3;i>=0;i--)
	{
		cout<<dizi[i]<<" ";
	}
	return 0;
}
