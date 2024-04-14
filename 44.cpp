#include <iostream>
#include <string>

using namespace std;

class Dikdortgen
{
	private:
		int kenar1;
		int kenar2;
	public:
		void setKenarlar(int k1,int k2)
		{
			kenar1=k1;
			kenar2=k2;
		}
		
		int alanHesapla()
		{
			return kenar1*kenar2;
		}
};
		
int main() {
    
    Dikdortgen d1,d2;
    d1.setKenarlar(5,6);
    d2.setKenarlar(2,7);
    
    cout<<"alan1: "<< d1.alanHesapla()<<endl;
    cout<<"alan2: "<< d2.alanHesapla()<<endl;
    
    return 0;
}

