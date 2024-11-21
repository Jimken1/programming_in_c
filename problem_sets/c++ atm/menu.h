int g = 15000;
Account james(g, 2345);


void menu(){
	
	
	cout<<"1-withdraw funds"<<endl;
	cout<<"2-deposit funds"<<endl;
	cout<<"3-transfer funds"<<endl;
	cout<<"4-view balance"<<endl;
	int i;
	
	cin>>i;
	cin.get();
	if(i==1){
		cout<<"enter the amount you wish to withdraw ";
		float a;
		cin>>a;
		cin.get();
		james.withdraw(a);	
		g-=a;		
		}
	else if (i == 2){
		cout<<"enter the amount you wish to deposit";
		float b;
		cin>>b;
		cin.get();
		james.deposit(b);
		g+=b;
		}
		
	else if  (i == 3){
		cout<<"enter the destination account number"<<endl;
		int x;
		cin>>x;
		cin.get();
		cout<<"enter the amount you wish to transfer"<<endl;
		float c;
		cin>>c;
		cin.get();
		james.transfer(c);
		g-=c;
	}
	else if (i == 4){
	
		float y = james.getbalance();
		cout<<"current account balance is "<<y<<endl;
	
	}
	else{
		cout<<"invalid input"<<endl;
	}	
	
	
	cout<<"do you wish to perform any financial operations?(Y/N) "<<endl;
		char t;
		cin>>t;
		cin.get();
		if (t == 'Y'){
			menu();
		}
		else if (t == 'N'){
			cout<<"Thank you for banking with us"<<endl;
		}
		else{
			cout<<"invalid input, terminating process"<<endl;
		}

}
