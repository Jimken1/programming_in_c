#include<iostream>
#include <vector>
using namespace std;

int main(){

	vector<string> Cars = {"volvo", "mercedes", "venza"};
	
	Cars.push_back("camry");
	
	
	for(string car:Cars)
		cout<<car<<endl;
		
	/*cout<<Cars.front()<<endl;
	cout<<Cars.back()<<endl;
	cout<<Cars.at(1)<<endl;*/
	
	
	return 0;

}
