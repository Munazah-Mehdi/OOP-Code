// Q No.01: Toll Booth Class


#include <iostream>
using namespace std;

class tollBooth{
	private:
	unsigned int tCars;
	double tMoney;
	
	public:
	void setDataMembers(){
		//initializing the two data members to 0.
		tCars=0;
		tMoney=0;
		
	}
	
	void payingCar(){
		//incrementing the car total and adds 50pkr to the cash total.
		tCars++;
		tMoney=tMoney+50;
		
	}
	
	void nopayCar(){
		//increments the car total
		tCars=tCars+1;
		
	} 
	
	void display(){
		int carsp, carsNotp;
		carsp=tCars/50;
		carsNotp=tCars-carsp;
		
		cout<<endl;
		cout<<"\nThe total number of cars = "<<tCars;
		cout<<"\nNumber of cars paid toll = "<<carsp;
		cout<<"\nNumber of cars that didn’t pay toll = "<<carsNotp;
		cout<<"\nThe total toll collected = "<<tMoney<<endl;
		cout<<"****************************************************";
		
	}
};

int main(){
	tollBooth t;
	t.setDataMembers();
	int key=0;
	while (key<4){
		
		cout<<"\nEnter 1 to count paying cars = ";
		cout<<"\nEnter 2 to count non-paying cars = ";
		cout<<"\nEnter 3 to display = "<<endl;
		cin>>key;
		cout<<".................................................";
		
	if(key==1){
		t.payingCar();
	}
	if(key==2){
		t.nopayCar();
	}
	if(key==3){
		t.display();
	}
	
	}
	
	}
