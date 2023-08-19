#include<iostream>
#include<cmath>
using namespace std;
int main() {
float a,b,c,x1,x2,D,realpart,imaginarypart;
cout<<"Enter coeficients of a,b and c";
cin>>a>>b>>c;
D=b*b-4*a*c;

if(D>0){
    cout<<"roots are real and different"<<endl;
    x1=(-b+sqrt(D))/2*a;
    x2=(-b-sqrt(D))/2*a;
    cout<<"x1= "<<x1<<endl;
    cout<<"x2= "<<x2<<endl;
} 
else if(D=0){
    cout<<"roots are real and equal"<<endl;
    x1=-b/2*a;
    cout<<"x1=x2= "<<x1<<endl;
}
else{
    realpart=-b/2*a;
    imaginarypart=sqrt(D)/2*a;
    cout<<"roots are complx and different";
    cout<<"x1= "<<realpart<<"+"<<imaginarypart<<"i"<<endl;
     cout<<"x2= "<<realpart<<"-"<<imaginarypart<<"i"<<endl;
}

return 0; }