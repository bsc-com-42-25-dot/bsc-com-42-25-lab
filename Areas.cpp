#include<iostream>
#include<string>
using namespace std;
int areaofSquare(int a){
	return a*a;
}
int areaofrectangle(int length, int width){
	return length*width;
}
double areaoftriangle(double base , double height){
	return 0.5*base*height;
}
int main(){
	int choices;
	cout<<"please select the area of the shape to calculate "<<endl;
	cout<<"1.Square"<<endl<< "2.rectangle"<<endl<< "3.triangle"<<endl<< "4.quit program"<<endl;
	cout<<"enter the selection"<<endl;
	cin>>choices;
	if(choices==4){
		cout<<"program quit"<<endl;
		return 0;
	
	}else if(choices==3){
		int base;
		int height;
		cout<<"enter the base and height "<<endl;
		cin>>base>>height;
		cout<<"area of triangle "<<areaoftriangle(base, height)<<endl;
		
	}else if(choices==2){
		int length;
		int width;
		cout<<"enter the length and width "<<endl;
		cin>>length>>width;
		cout<<"area of rectangle ="<<areaofrectangle(length, width)<<endl;
		
		}
	else if(choices==1){
		int length;
		cout<<"enter length :"<<endl;
		cin>>length;
		cout<<"area oF Square ="<<areaofSquare(length);
	}else{
		cout<<"\nyour input was "<<choices<<"which is invalid input "<<endl;
		cout<<"please enter a valid input!!!!!!"<<endl;
		
	}
		
}