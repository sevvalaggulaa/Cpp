#include <iostream>
#include <string>

using namespace std;

class Otomobil{
	public:
		string renk;
		string model;
		int beygirGucu;
		void ruhsatbilgilerigoster();
		Otomobil(string _renk,string _model,int _beygirgucu);
};

Otomobil::Otomobil(string _renk,string _model,int _beygirGucu){
renk=_renk;
model=_model;
beygirGucu=_beygirGucu;
}


void Otomobil::ruhsatbilgilerigoster(){
	cout<<"model: "<<Otomobil::model<<endl;
	cout<<"renk: "<<Otomobil::renk<<endl;
	cout<<"beygirgucu:: "<<Otomobil::beygirGucu<<endl;
}

int main() {
	
	Otomobil otomobil1("siyah","Audi",90);
	Otomobil otomobil2("mavi","opel",100);
		
	otomobil1.ruhsatbilgilerigoster();
	cout<<endl<<endl;
	
	otomobil2.ruhsatbilgilerigoster();
	return 0;
}
