#include <iostream>
using namespace std;
int a,b;
int main()
{
 cout<<"Enter a number (a): ";
 cin>>a;
 cout<<"Enter anoter number which you want to swap(b): ";
 cin>>b;
 a=a*b;     // by multiplying we get total (e.g: 2*3=6, here 6 assigned to a).
 b=a/b;     //we can restore b by dividind a/b (e.g: 6/3=2)
 a=a/b;    //we can restore a by dividind a/b (e.g: 6/2=3)
 cout<<"The 1st num(a) is: "<<a<<endl; //in the last code i made mistake here, the 1st num is a.
  
 cout<<"The 2nd num(b) is: "<<b;       // 2nd num is b .
 
 
 return 0;
}
