//Title: Badminton Court Booking System
//Group members name: Nur Irdina Iman Bt Abd Ghafar, Nurul Auni Binti Mohamad Mohlis, Nur Raudhatul Imane Binti Mohd Rashid, Fatin Farzana Binti Nor Hisham
//Date: 7/1/2022


#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>




using namespace std;
int calcTotal(int,int);

int main()
{
	
	
	char book, member, membership;
	string number,name,ic, address;
	int totalcourt, package, rent,  less, tax, rebate, prices,balance, afterdisc, 
	price[4]={0, 25, 45, 150};
	float total, pay, bonus, result, finalresult;

	 
	    
	    cout<<"WELCOME TO SPORTIZZA!!"<<endl;
	    cout<<endl;
		cout<<" Y = YES  OR  N = NO "<<endl;
		cout<<"Do you want to book? Y/N = ";
		cin>>book;
		cout<<endl;
		


	
	while (book =='y' || book =='Y' )
	{
		
	    cout<<"Are You A Member? Y/N  : ";
	    cin>>member;
	    
	    
	    
	    if(member=='n' || member=='N')
		{
			cout<<"Do you want to be our membership? Y/N :";
			cin>>membership;
			cout<<endl;
			
			if(membership=='Y' || membership == 'y')
			{
				
				
	    	cout<<"--------------------------------------------------"<<endl;
			cout<<"|             FILL IN YOUR DETAIL                 |"<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<endl;
			cout<<"Full Name : ";
			cin.ignore();
		    getline(cin,name);
			cout<<"Ic Number :";
			cin>>ic;
			cout<<"Phone Number : ";
			cin>>number;
			cout<<"Your address : ";
		 	cin.ignore();
			getline(cin,address);
			cout<<endl;
			cout<<"Thank you for become Sportizza's membership"<<endl;
			cout<<"Press any key to continue"<<endl;
			cout<<endl;
			getch();
			goto repeat;
			
		    }
		    
		}
	 
	 	
	 	while ( member=='y' || member =='Y' || membership=='n' || membership=='N')
	 	{
	 		repeat:
	 		system("cls");
	 		cout<<"+++++++++++++++++ Sportizza Badminton Court +++++++++++++++++"<<endl;
	 		cout<<endl;
	 		cout<<"Please enter your name : " ; 
	 		cin.ignore();
	 		getline(cin,name);
	 		cout<<endl;
	 		cout<<"Please enter your phone number : ";
	 		cin>>number;
	 	
	 	
	 		cout<<"Choose your package : "<<endl;
	 		cout<<"--------------------------------------------------"<<endl;
	 		cout<<"|     [1] 1 hour          = RM 25.00              |"   <<endl;
	 		cout<<"|     [2] 2 hours         = RM 45.00              |"   <<endl;
	 		cout<<"|     [3] 1 month         = RM 150.00             |"   <<endl;
			cout<<"--------------------------------------------------"<<endl;
		
		
			cout<<"(Enter your package according to the number)"<<endl;
			cout<<" Please choose your package : ";
			cin>>package;
		
			while ( package != 1 && package != 2 && package != 3 )
			{
    	    	cout<<"Sorry, you enter wrong package, please try again"<<endl;
        	
        		cout<<" Please choose your package : ";
				cin>>package;
	    	}
		
		
		
			if (package == 1){
				cout<<"   PACKAGE 1 HOUR"<<endl;
			}
      	 	else if (package == 2){
       			cout<<"   PACKAGE 2 HOURS"<<endl;
      		}
      		else if (package==3){
        		cout<<"   PACKAGE 1 MONTH"<<endl;
      		}
        
		
			cout<<"Total court you want to rent : ";
			cin>>totalcourt;
			result = calcTotal(totalcourt,package );
	    
	    
	     
			cout<<endl;
			cout<<"--------------------------------------------------"<<endl;
			cout<<"|                  BOOKING DETAIL                 |"<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Name : "    <<name<<endl;
			cout<<"Phone Number : " <<number<<endl;
			cout<<"Package : " <<package<<endl;
			cout<<"Total Court : " <<totalcourt<<" court "<<endl;
			cout<<"Rental Price : " <<price[package]<<" * "<<totalcourt<<endl;
			cout<<"Total Must Pay : RM "<<result<<endl;
	
		
			if(result>=250.00){
				bonus = result *0.1;
				afterdisc = result - bonus;
				finalresult = afterdisc;
				cout<<endl;
				cout<<"   You get 10% discount"<<endl;
				cout<<"Total after discount : RM"<<afterdisc<<endl;
		
			}
		   	 else
			{
				finalresult = result;
			}
			cout<<"-------------------------------"<<endl;
			cout<<"Please pay here  : RM"; 
			cin>>pay;
			cout<<endl;

		
		
			while(pay<finalresult){
				cout<<"Your balance is low, Please pay again : RM";
				cin>>less;
				pay=pay + less;
			}
		
		
		
			rebate=pay-finalresult;
			cout<<"The money you pay : RM"<<pay<<endl;
			cout<<"Balance money : RM"<<rebate<<endl;
			cout<<"###########################################"<<endl;
		
		
		     cout<<" Y = YES  OR  N = NO "<<endl;
			 cout<<"Do you want to book again? Y/N = ";
			 cin>>book;
			 system("cls");
			 break;	
		}
    
	}
		 cout<<"Thank you for booking at Sportizza"<<endl;
	
		
		
		return 0;
}


// functions
int calcTotal(int totalcourt, int package)
{
	int price[4]={0, 25, 45, 150};
	
	float total = totalcourt * price[package];
	return total;
}

