#include <iostream>

using namespace std;

string adSoyadBirlestir()
{
	string ad,soyad;
	cout <<"lutfen adinizi giriniz: ";
	cin>>ad;
	cout <<"lutfen soyadinizi giriniz: ";
	cin>>soyad;
	
	string adSoyad= ad+ " " + soyad;
	return adSoyad;
}
int main() {
	
	cout<<adSoyadBirlestir();
	
	return 0;
}
