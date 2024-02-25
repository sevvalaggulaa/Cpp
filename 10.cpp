#include <iostream>

using namespace std;

int main() {
	
	int sifre=1234;
	int kullaniciInput;
	cout << "lutfen sifrenizi giriniz= ";
	cin >> kullaniciInput;
	
	if(kullaniciInput==sifre)
	{
		cout << "sifreniz dogru";
	}
	else
	{
		cout << "sifrenizi yanlis girdiniz";
	}
	return 0;
}
