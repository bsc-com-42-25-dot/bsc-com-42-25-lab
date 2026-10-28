#include<iostream>
#include<string>
using namespace std;
int main(){
	int k;
	while(true){
		cout<<"Enter an integer value between 5 and 10"<<endl;
			cin>>k;
			if(cin.fail()){//not an integer
			cin.clear();
				cin.ignore(100,'\n');
				cout<<"sorry ,you enterd an invalid number, please try again"<<endl;
				continue;
				
			}
			else if(k<5||k>10){
				cout<<"you entered " <<k <<".please enter a number between 5 and 10 .";
			}
			else{
			
	

		cout<<"your input value "<<k<<"   has been accepted"<<endl;
				break;
			}
	}
	return 0;			
		
}