//Q No.02: Laptop Class

#include <iostream>
using namespace std;

class Laptop{
	private:
	string Brand;
	string Model;
	int Serial; 
	string Color;
	float Price;
	float ProcessorSpeed;
	int Ram;
	float ScreenSize;
	
	public:
	void set_Values(string newBrand, string newModel, int newSerial, string newColor, float newPrice, float newProcessorSpeed, int newRam, float newScreenSize){
		Brand=newBrand;
		Model=newModel;
		Serial=newSerial;
		Color=newColor;
		Price=newPrice;
		ProcessorSpeed=newProcessorSpeed;
		Ram=newRam;
		ScreenSize=newScreenSize;
		
	}
	
	void upgradeRam(int r){
		Ram=r;
	}	
	void display(){
		cout<<"\nBrand  = "<<Brand;
		cout<<"\nModel  = "<<Model;
		cout<<"\nSerial  = "<<Serial;
		cout<<"\nColor  = "<<Color;
		cout<<"\nPrice  = "<<Price;
		cout<<"\nProcessorSpeed  = "<<ProcessorSpeed;
		cout<<"\nRam  = "<<Ram ;
		cout<<"\nScreenSize  = "<<ScreenSize ;
		cout<<"\n.........................................."<<endl;
	}	
};

int main(){
	Laptop l;
	l.set_Values("Dell", "13", 3, "Black", 52.5, 20.5, 120, 5.5 );
	l.display();
	
	int newRam;
	cout<<"\nUpgrading Ram ";
	cout<<"\nEnter new Ram = ";
	cin>>newRam;
	l.upgradeRam(newRam);
	cout<<"\n.........................................."<<endl;
	cout<<"\nUpgraded Data"<<endl;
	
	l.display();
	}

