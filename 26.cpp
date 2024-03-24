#include <iostream>

using namespace std;

void ekranaHataKoduYazdir()
{
	cout << "hata\n";
}

void ekranaHataKoduYazdir(string message)
{
	cout << message<<endl;
}

void ekranaHataKoduYazdir(int hatakodu)
{
	cout << hatakodu<<endl;
}

void ekranaHataKoduYazdir(int hatakodu1, int hatakodu2)
{
	cout << hatakodu1 <<" ve "<<hatakodu2<<endl;
}

int main() {
	
	ekranaHataKoduYazdir();
	ekranaHataKoduYazdir("error ");
	ekranaHataKoduYazdir(404);
	ekranaHataKoduYazdir(404,408);
	
	return 0;
}
