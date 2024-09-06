#include<iostream>
using namespace std;
int main(){
int n;
   cout<<"enter number : ";
   cin>>n;
      int n500=0;
      int n200=0;
      int n100=0;
      int n50=0;
      int n20=0;
      int n10=0;
      int n5=0;
      int n2=0;
      int n1=0;
if(n>=500){
   n500=n/500;
   n=n%500;
}
if(n>=200 && n<500){
   n=n-200;
   n200+=1;
}
if(n>=100 && n<200){
   n=n-100;
   n100+=1;
}
if(n>=50 && n<100){
   n=n-50;
   n50+=1;
}
if(n>=20 && n<50){
   n=n-20;
   n20+=1;
}
if(n>=10 && n<20){
   n=n-10;
   n10+=1;
}
if(n>=5 && n<10){
   n=n-5;
   n5+=1;
}
if(n>=2 && n<5){
   n=n-2;
   n2+=1;
}
if(n>=1 && n<2){
   n=n-1;
   n1+=1;
}
cout<<"number of 500 notes : "<<n500<<endl;
cout<<"number of 200 notes : "<<n200<<endl;
cout<<"number of 100 notes : "<<n100<<endl;
cout<<"number of 50 notes : "<<n50<<endl;
cout<<"number of 20 notes : "<<n20<<endl;
cout<<"number of 10 notes : "<<n10<<endl;
cout<<"number of 5 notes : "<<n5<<endl;
cout<<"number of 2 notes : "<<n2<<endl;
cout<<"number of 1 notes : "<<n1<<endl;
}