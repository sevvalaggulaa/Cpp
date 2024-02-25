#include <iostream>

using namespace std;

int main() {
	int gun;
	cout<<"haftanin gununu sayi olarak giriniz= ";
	cin>>gun;
	
	switch(gun)
	{
		case 1:
			cout<<"pazartesi";
			break;
		case 2:
			cout<<"sali";
			break;
		case 3:
			cout<<"carsamba";
			break;
		case 4:
			cout<<"persembe";
			break;
		case 5:
			cout<<"cuma";
			break;
		case 6:
			cout<<"cumartesi";
			break;
		case 7:
			cout<<"cuma";
			break;
		default:
			cout<<"yanlis deger girdiniz!";
	}
	return 0;
}
