#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int sonuc,x,y;
	cout << "*****x^y hesaplama*****\n\n";
	cout << "x sayisini giriniz= ";
	cin >> x;
	cout << "y sayisini giriniz= ";
	cin >> y;
	
	sonuc= pow(x,y);
	
	cout << "sonuc= "<< sonuc << endl;
	return 0;
}
