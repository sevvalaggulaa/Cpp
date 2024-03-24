#include <iostream>

using namespace std;

int main() {
	
	int space=5;
	for(int i=1;i<6;i++)
	{
		for(int j=0;j<space;j++)
		{
			cout<<" ";
		}
		space--;
		
		for(int k=1;k<=i;k++)
		{
			cout<<i<< " ";
		}
		cout<<endl;
		
	}
	return 0;
}
