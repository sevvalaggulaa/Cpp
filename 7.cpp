#include <iostream>

using namespace std;

int main() {
	
	string isim;
	int en, boy, alan;
	
	cout << "***geometrik hesaplama programi***\n\n";
	cout << "lutfen dikdortgenin enini giriniz= ";
	cin >> en;
	cout << "lutfen dikdortgenin boyunu giriniz= ";
	cin >> boy;
	
	alan= en*boy;
	
	cout << "\ndikdortgenin alani= " << alan;
	
	return 0;
}
