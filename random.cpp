#include<iostream>
#include<cstdlib>
#include<ctime>
 using namespace std;
  int main(){
  	srand(time(0));
  	int daysuntilExpiration=rand()% 12;//the rand generate numbers 0 to 11.
  	cout<<"days :"<<daysuntilExpiration<<endl;
  	if(daysuntilExpiration==0){
  		cout<<"your subscription has expired ."<<endl;
  		
	  }
	  else if(daysuntilExpiration==1){
	  	cout<<"your subscription expires withina day "<<endl;
	  	cout<<"renew it now and save 20%! "<<endl;
	  	
	  }
	  else if(daysuntilExpiration<=5){
	  	cout<<"your subscription expires in "<<daysuntilExpiration<< "days"<<endl;
	  	cout<<"renew now and save 10%! "<<endl;
	  	
	  }
	  else if(daysuntilExpiration<=10){
	  	cout<<"your subscription will expire soon renew it now!"<<endl;
	  }
	  else{
	  	cout<<"your account is active"<<endl;
	  }
	  return 0;
  }