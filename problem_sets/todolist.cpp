#include <iostream>
#include <vector>
using namespace std;
int tasks = 0;
vector<string> LL = {};
void addtask(){
	cout<<"add your tasks"<<endl;
	string g;
	
	cin>>g;
	LL.push_back(g);
	for(string car:LL)
		cout<<car<<": "<<endl;
	cout<<"do you want to add more tasks?(Y/N) ";
	char r;
	cin>>r;
	if (r=='Y'){
	addtask();
	}
	else{
	cout<<"alright"<<endl;
	}

}
void checktasks(){
	int a =LL.size();
	int i;
	cout<<"note: when a task is shown answer with yes or no to signify completion"<<endl;
	for (i = 0; i <a; ++i){
		cout<<LL.at(i);
		string f;
		cin>>f;
		if (f=="yes"){
			tasks+=1;
		
		}
		else if (f=="no"){
			cout<<"too bad try to complete it🙃️"<<endl;
		}
		else{
			cout<<"taking that as ya did do it🥱️"<<endl;
		}
	}
	cout<<tasks<<" completed out of "<<a<<endl;

}
void menu(){
	cout<<"do you wish to create a new to do list?(Y/N) ";
	char t;
	cin>>t;
	if(t=='Y'){
		addtask();
		checktasks();
	}
	else{
		cout<<"exiting thank you"<<endl;
	}
	
}
int main(){
	menu();	
	
}
