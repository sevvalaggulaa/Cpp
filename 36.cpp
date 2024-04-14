#include <iostream>
#include <string>

using namespace std;

class Otomobil{
	public:
		string renk;
		string model;
		int beygirGucu;
		void ruhsatbilgilerigoster();
};

void Otomobil::ruhsatbilgilerigoster(){
	cout<<"model: "<<Otomobil::model<<endl;
	cout<<"renk: "<<Otomobil::renk<<endl;
	cout<<"beygirgucu:: "<<Otomobil::beygirGucu<<endl;
}

int main() {
	
	Otomobil otomobil1,otomobil2;
	otomobil1.renk= "siyah";
	otomobil1.beygirGucu= 90;
	otomobil1.model="audi";
	
	otomobil2.renk="mavi";
	otomobil2.beygirGucu= 120;
	otomobil2.model="opel";
	
	otomobil1.ruhsatbilgilerigoster();
	cout<<endl<<endl;
	
	otomobil2.ruhsatbilgilerigoster();
	return 0;
}
