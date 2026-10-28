#include<iostream>
#include<string>
using namespace std;
int main(){
	string numberplates[8]={"B123","C234","A345","C15","B177","G3003","C235","B179"};//array named numberplates
	int size=8;
	for(int i=0;i<size;i++){
		if(numberplates[i][0]=='B')
			
		
		cout<<numberplates[i]<<endl;//output only numberplates starting with B
	}
	return 0;
}