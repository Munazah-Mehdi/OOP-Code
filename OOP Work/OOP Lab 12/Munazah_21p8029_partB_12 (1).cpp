#include <iostream>
using namespace std;

class bankAccount{
	protected:
		
		string name;
		double accountNo;
		double balance;
	
		
	public:
		
		bankAccount(string name, double accountNo, double balance){
			this->name=name;
			this->accountNo=accountNo;
			this->balance=balance;
		
		} 
		
		void Name(){
			cout<<"Enter Your Name "<<endl;
			cin>>name;
		}
		
		void aacountNum(){
			cout<<"Enter Your Account Number = "<<endl;
			cin>>accountNo;
		}
		
		void Balance(){
			cout<<"Enter Your Balance"<<endl;
			cin>>balance;
		}
		
		virtual double makeDeposit()=0;
		virtual void withdrawMoney()=0;
		virtual void monthlyStatment()=0;		
		
};

class checkingAccount: public bankAccount{
	protected:
		int checks;
		
	public:
		
		checkingAccount(string name, double accountNo, double balance, int checks) : bankAccount(name, accountNo, balance){
			this->checks=checks;
		}
		
		virtual void writeChecks() = 0;
		
};

class serviceChargeChecking: public checkingAccount{
	public:
		
		serviceChargeChecking(string name, double accountNo, double balance, int checks ):checkingAccount(name, accountNo, balance, checks){
			
		}
		
		void writeChecks(){
			const int checksNo=8;
			int c;
			if(c>checksNo){
				cout<<"You reached the check limit of this month"<<endl;
			}
			else{
				cout<<"Your Check is here "<<endl;
				checks++;
			}
		}
			
};

class noServiceChargeChecking: public checkingAccount{
	public:
		noServiceChargeChecking(string name, double accountNo, double balance, int checks):checkingAccount(name, accountNo, balance, checks){
			
		}
		
		void writeChecks(double Balance){
			if(balance>Balance){
				cout<<"Not Enough Balnce in your account "<<endl;
				
			}
			else{
				cout<<"Your Check is here ";
				checks++;
			}
			
		}
	};
	
	
class highInterestChecking : public noServiceChargeChecking{
	public:
			highInterestChecking(string name, double accountNo, double balance, int checks):noServiceChargeChecking(name, accountNo, balance, checks){
			
				cout<<"This Type of account pays higher interest"<<endl;
				cout<<" requires a higher minimum balance than the no service charge checking account."<<endl;
		
				
			}
			
			
};
		
class certificateOfDeposit: public 	bankAccount{
	private:
		int CDno, currentCD;
		float interestRate;
		
	public:
		certificateOfDeposit(string name, double accountNo, double balance, int CDno, int currentCD, float interestRate): bankAccount(name, accountNo, balance){
			this->CDno=CDno;
			this->currentCD=currentCD;
			this->interestRate=interestRate;
			cout<<"CertificateOfDeposit"<<endl;
		}
		
		
};

class savingsAccount: public bankAccount{
	public:
		savingsAccount(string name, double accountNo, double balance):bankAccount(name, accountNo, balance){
			cout<<"Saving Account"<<endl;
			
		}
		
		void payinterest(){
			cout<<"a savings account also pays interest"<<endl;
		}
	
};	

class highInterestSavings: public savingsAccount{
	public:
		highInterestSavings(string name, double accountNo, double balance):savingsAccount(name, accountNo, balance){
			cout<<"High Interest Savings account "<<endl;
		}
	
};

int main(){


	

	return 0;
}
