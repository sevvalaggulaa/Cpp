#include <iostream>
#include <string>

using namespace std;

class Otomobil{
	public:
		
		void ruhsatbilgilerigoster();
		Otomobil(string _renk,string _model,int _beygirgucu);
		
		void setOtomobilRenk(string _renk);
		string getOtomobilRenk();
		
		void setOtomobilModel(string _model);
		string getOtomobilModel();
		
		void setOtomobilBeygirGucu(int _beygirGucu);
		int getOtomobilBeygirGucu();
		
		int modelYili;
		
	private:
		
		string renk;
		string model;
		int beygirGucu;
		
};

Otomobil::Otomobil(string _renk,string _model,int _beygirGucu){
renk=_renk;
model=_model;
beygirGucu=_beygirGucu;
}

void Otomobil::setOtomobilRenk(string _renk){
	renk= _renk;
}

string Otomobil::getOtomobilRenk(){
	return renk;
}

void Otomobil::setOtomobilModel(string _model){
	model=_model;
}

string Otomobil::getOtomobilModel(){
	return model;
}

void Otomobil::setOtomobilBeygirGucu(int _beygirGucu){
	beygirGucu=_beygirGucu;
}

int Otomobil::getOtomobilBeygirGucu(){
	return beygirGucu;
}

void Otomobil::ruhsatbilgilerigoster(){
	cout<<"model: "<<Otomobil::model<<endl;
	cout<<"renk: "<<Otomobil::renk<<endl;
	cout<<"beygirgucu:: "<<Otomobil::beygirGucu<<endl;
}

int main() {
	
	Otomobil otomobil1("siyah","Audi",90);
	otomobil1.setOtomobilRenk("beyaz");
	Otomobil otomobil2("mavi","opel",100);
	otomobil2.modelYili=2020;
		
	otomobil1.ruhsatbilgilerigoster();
	cout<<endl<<endl;
	
	otomobil2.ruhsatbilgilerigoster();
	cout<<endl;
	
	cout<<otomobil1.getOtomobilRenk()<<endl;
	cout<<otomobil2.modelYili;
	return 0;
}
