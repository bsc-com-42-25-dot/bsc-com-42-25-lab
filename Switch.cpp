#include<iostream>
#include<cstdlib>
#include<ctime>
 using namespace std;
  int main(){
  	srand(time(0));
  	int daysuntilExpiration=rand()% 12;//the rand generate numbers 0 to 11.
  	cout<<"days :"<<daysuntilExpiration<<endl;
  	
  	switch(daysuntilExpiration){
  			case 0:cout<<"your subscription has expired :"<<endl;
  				break;
  			case 1:cout<<"your subscription expires within a day!"<<"endl<<renew now and save 20% " <<endl;
  					break;
  			case 2:case 3:case 4:case 5:cout<<"your subscription expires in :"<<daysuntilExpiration<<endl<<"renew now and save 10% "<<endl;
  					break;
  		case 6:case 7:case 8:case 9:case 10:cout<<"your subscription will expire soon . renew it now!"<<endl;
  						break;
  		
  		
  		
  		default:cout<<"your subscription is active"<<endl;
	   }
}