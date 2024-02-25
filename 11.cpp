#include <iostream>

using namespace std;

int main() {
	
	int sayi1,sayi2,sonuc;
	int islem;
	
	cout << "lutfen 1. sayiyi giriniz= ";
	cin >> sayi1;
	cout << "lutfen 2. sayiyi giriniz= ";
	cin >> sayi2;
	
	cout << "lutfen islemi seciniz\n\ntoplama icin 1\ncikarma icin 2\ncarpma icin 3\nbolme icin 4'e basiniz\n";
	cin >> islem;
	
	if(islem==1)
	{
		sonuc=sayi1+sayi2;
	}
	else if(islem==2)
	{
		sonuc= sayi1-sayi2;
	}
	else if(islem==3)
	{
		sonuc= sayi1*sayi2;
	}
	else if(islem==4)
	{
		sonuc= sayi1/sayi2;
	}
	else
	{
		cout <<"hatali sayi girdiniz.";
	}
	cout << "\n\nislemin sonucu= "<<sonuc;
	return 0;
}
