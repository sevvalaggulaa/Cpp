#include <iostream>

using namespace std;

class Ogrenci
{
	private:
		int ogrenciNo;
		
	public:
		string ad;
		string soyad;
		void setOgrenciNo(int ono)
		{
			if(ono<=0)
			{
			cout<<"gecersiz ogrenci numarasi";
			}
			else 
			ogrenciNo=ono;
		}
		void ogrenciBilgileri()
		{
			cout<<"adi: " <<ad<<endl;
			cout<<"soyadi: "<<soyad<<endl;
		}
};
int main() {
	
	Ogrenci ogr1;
	ogr1.ad="sevval";
	ogr1.soyad="aggul";
	
	ogr1.ogrenciBilgileri();
	ogr1.setOgrenciNo(-54);
	
	return 0;
}
