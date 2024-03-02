#include <iostream>
#include <math.h>
#define PI 3.14

using namespace std;

int main()
{
    float alan,a,b,c,s;
    cout<<"birinci kenari giriniz= ";
    cin>>a;
    cout<<"ikinci kenari giriniz= ";
    cin>>b;
    cout<<"ucuncu kenari giriniz= ";
    cin>>c;
    s=(a+b+c)/2;
    alan=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"alan= "<<alan;


    return 0;
}

