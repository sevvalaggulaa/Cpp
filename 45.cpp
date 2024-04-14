#include <iostream>

using namespace std;

class Ogrenci
{
	public:
		int ogrenciNo;
		string ad;
		string soyad;
		void ogrenciBilgileri()
		{
			cout<<"adi: " <<ad<<endl;
			cout<<"soyadi: "<<soyad<<endl;
		}
};
int main() {
	Ogrenci sevval;
	sevval.ad= "sevval";
	sevval.soyad="aggul";
	sevval.ogrenciNo=3072;
	sevval.ogrenciBilgileri();
	
	return 0;
}
