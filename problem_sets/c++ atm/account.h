#include<iostream>
class Account{
	public:
		Account(float accb, int pwd){
			set_acc_b(accb);
			set_psswd(pwd);
		}
		void set_acc_b(float b){
		
			account_balance = b;
		}
		
		void set_psswd(int p){
		
			password = p;
		}
		void withdraw(float amount){
		if(amount<=account_balance){
			cout<<"withdrawal successful"<<endl;
			int y = account_balance - amount; 
			account_balance = y;
			cout<<"current account balance is "<<account_balance<<endl;
			}
		else{
			cout<<"insufficient funds"<<endl;
			cout<<"current account balance is "<<account_balance<<endl;
		}
		}
		
		void deposit(float amount){
			cout<<"deposit successful"<<endl;
			int y = account_balance + amount; 
			account_balance = y;
			cout<<"current account balance is "<<account_balance<<endl;
		}
		
		void transfer(float amount){
			if(amount<=account_balance){
			cout<<"transfer successful"<<endl;
			int y = account_balance - amount; 
			account_balance = y;
			cout<<"current account balance is "<<account_balance<<endl;
			}
		else{
			cout<<"insufficient funds"<<endl;
			cout<<"current account balance is "<<account_balance<<endl;
		}
		}
		float getbalance(){
		
		return account_balance;
		}	
		
	private:
		float account_balance;
		int password;
	

};
