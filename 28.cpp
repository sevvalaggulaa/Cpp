#include <iostream>

using namespace std;

char calculateGrade(int marks){ 

    char grade;
    
    if (marks>=0 && marks <=100){
    	
        if(marks < 70){
            grade = 'F';
            
        } else if (marks <80){
            grade = 'C';
            
        } else if (marks < 90){
            grade = 'B';
            
        } else {
            grade = 'A';
        }
        
    } else {
        grade = 'N';
        
    } return grade;
}

double calculateGpa(char grade){
	
    double gpa;
    
    switch (grade){

        case 'A':
            gpa = 4.0;
            break;
            
        case 'B':
            gpa = 3.5;
            break;
            
        case 'C':
            gpa = 3.0;
            break;
            
        case 'F':
            gpa = 1.0;
            break;
            
        default:
            gpa = 0.0;
            break; // optional
    }
    return gpa;
}

int main() {
    int marks;
    char grade;
    int n;

    /*cout<<"enter:";
    cin>>n;

    for(int i=0;i<n; i++)
    {
       cout<<"Enter student marks:";
       cin>>marks;
       grade = calculateGrade(marks);

       cout<<"Student Grade:"<<grade<<endl;
       cout<<"Student GPA:"<<calculateGpa(grade)<<endl;
   }
    
    while (marks>-2)
    {
       cout<<"Enter student marks:";
       cin>>marks;
       if(marks<-1)
       break;
       grade = calculateGrade(marks);
       cout<<"Student Grade:"<<grade<<endl;
       cout<<"Student GPA:"<<calculateGpa(grade)<<endl;
   }*/

   do
   {
       cout<<"Enter student marks:";
       cin>>marks;
       if(marks<-1)
       break;
       grade = calculateGrade(marks);
       cout<<"Student Grade:"<<grade<<endl;
       cout<<"Student GPA:"<<calculateGpa(grade)<<endl;
   }
   
   while(marks>-2);

    return 0;
}
