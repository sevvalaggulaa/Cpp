#include <iostream>

using namespace std;

int main() {
	
	int sayi=1,space=4;
	for (int i=0;i<4;i++)
	{
		for(int k=0;k<space;k++)
		{
			cout<<" ";
		}
		space--;
		
		for (int j=0;j<=i;j++)
		{
			cout<<sayi<<" ";
			sayi++;
		}
		
		cout<<endl;
	}
	return 0;
}
