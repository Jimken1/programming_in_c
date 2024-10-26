#include <iostream>
class Student{
	
	public:
		Student(string fname, string lname){
			setname(fname, lname);	
		}
		void setname(string fname, string lname){
			
			first_name = fname;
			last_name = lname;
		
		}
		void set_age(int ag){
			
			age = ag;
		
		}
		
		void set_address(string addr){
		
			address = addr;
			
		}
		
		void set_city(string cty){
		
			city = cty;
		
		}
		
		void set_phone(int ph){
		
			phone = ph;
		
		}
		
		string getfname(){
		
			return first_name;
		}
		string getlname(){
		
			return last_name;
		}
		int getage(){
		
			return age;
		}
		string getaddr(){
			
			return address;
		
		}
		string getcity(){
		
			return city;		
		}
		int getphone(){
			
			return phone;		
		}
		void SitInClass(){
			
			cout << "sitting in main theater"<< endl;
		}
	private:
		string first_name;
		string last_name;
		int age;
		string address;
		string city;
		int phone;
};

