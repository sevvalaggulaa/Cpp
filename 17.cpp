#include <iostream>

using namespace std;

int main() {
	
	int baslangic,bitis;
	cout<<"lutfen baslangic degerini giriniz= ";
	cin>>baslangic;
	cout<<"lutfen bitis degerini giriniz= ";
	cin>>bitis;
	
	while (baslangic<=bitis)
	{
		if(baslangic%7==0)
		{
			cout<<baslangic<<endl;
		}
		baslangic++;
	}
	
	return 0;
}
