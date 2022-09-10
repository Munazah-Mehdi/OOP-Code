//Q No.03: Factorial

#include <iostream>
using namespace std;

class Number{
	private:
		float num;
		int result;
		
	public:
		int numberr(float x){
			num=x;
			return num;
		}
		
		//Function to determine if the number is whole number or not
		int wholeNum(float x){
			
		int b;
		b=(int)x;
			
		if (x==b){
			cout<<b<<" is whole number"<<endl;
			return b;
			}
		else if(x!=b){
			cout<<b<<" Invalid input"<<endl;}}
		
		//Function to determine if the number is positive or not
		int positiveNum(float x){
		if(x>0){
			cout<<x<<" poistive number"<<endl;
			
			
		}
		else{
			cout<<x<<" Invalid input"<<endl;
		}}
		
		//Function to display the number and its factorial.
		void display(float x){
		cout<<"Displaying the num  = "<<x<<endl;
		}	
			//Function to find the actual factorial
			int factorial(float x){
			
				int b;
				
				b=(int)x;
			
				if (x>0 && x==b){
		
					int fac=1;
					for (int i=1; i<=x; i++){
		
		 			fac*=i;   // 5!=1*2*3*4*5=120
					}  
		 			cout<<"Factorial of "<<x<<" is "<<fac;	
				}	
			
				
				else if(x!=b){
				cout<<b<<" Invalid input"<<endl;}}				
};

int main(){
	Number n;
	float a;
	cout<<"Enter Number ";
	cin>>a;
	
	n.numberr(a);
	n.display(a);
	n.positiveNum(a);
	n.wholeNum(a);
	n.factorial(a);
}

