#include <iostream>

using namespace std;

int main() {
	
	int n,sonuc=1;
	cout<<"lutfen bir sayi giriniz= ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		sonuc=sonuc*i;
	}
	cout<<"sonuc= "<<sonuc;
	return 0;
}
