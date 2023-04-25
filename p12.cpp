#include<iostream>


using namespace std;
class Staff{
	
	private:
		char Name[100];
		int ac_no;
		char mobileno;
		char email[100];

	public: 
        void setdata(){
        	cout<<endl<<"Enter the name Of Staff :-  ";
        	cin>>Name;
        	cout<<"Enter The Account Number Of Staff :- ";
        	cin>>ac_no;
        	cout<<"Enter The Phone Number Of Staff :- ";
        	cin>>mobileno;
        	cout<<"Enter E-mail Of Staff ";
        	cin>>email;
		}
		void getdata(){
			cout<<"Name          :-  "<<Name<<endl;
        	cout<<"Account No    :- "<<ac_no<<endl;
        	cout<<"Phone No      :-  "<<mobileno<<endl;
        	cout<<"E-mail        :- "<<email<<endl;
		}
};

int main(){
	cout<<" -: BANK MANAGMENT SYSTEM :- "<<endl;
	cout<<"------------------------------"<<endl<<endl;
	cout<<" -:Designed ANd Programed By :- "<<endl;
	cout<<"--------------------------------"<<endl; 
	cout<<"             google       	 "<<endl<<endl;
	cout<<" -:         trainer   	  :- "<<endl;
	cout<<"----------------------------- "<<endl;
	cout<<"           shivmsir  	   "<<endl<<endl<<endl;
	cout<<"Press N Key  Enter To Continue........"<<endl;


	char key;
	char b;
	int press;
	int withdraw;
	int amount=200000;
	int balance;
	cin>>key;

        if(key == 'n' || key =='N'){

			cout<<"------------------------------------------------------------------"<<endl;
			cout<<" -: <---Press A to Log in as Aministrator Or S to Log in as STAFF---> :- "<<endl;
			cout<<"------------------------------------------------------------------"<<endl<<endl;

			cin>>b;
			if(b=='a'|| b=='A'){
				cout<<"Aministrator interface on maintanace";
			}
			else if(b=='s' || b=='S'){
				cout<<"-------------------------------------------------------"<<endl;
				cout<<" -: Welcome as STAFF:- :- "<<endl;
				cout<<"------------------------------------------------------------------"<<endl<<endl;
				Staff obj;
				obj.setdata();
				cout<<endl<<endl;
				cout<<"------------------------------------------------------------------"<<endl;
			    obj.getdata();
			    cout<<"------------------------------------------------------------------"<<endl<<endl;
			    cout<<"Press [1] to Deposite the money:"<<endl;
			    cout<<"Press [2] to Transfer the money:"<<endl;
			    cout<<"Press [3] to Withdraw the money:"<<endl<<endl;
			    cin>>press;
			    if(press==1){
			    	cout<<"Deposite service is unavailable"<<endl;
				}
				else if(press==2){
					cout<<"Transfer service is unavailable"<<endl;
				}
				else if(press==3){
			    cout<<"Withdraw the money : ";
			    cin>>withdraw;
			    cout<<endl<<endl;
			         if(withdraw<=200000){
			            cout<<"------------------------------------------------------------------"<<endl;
			            cout<<"Withdraw the money : "<<withdraw<<endl;
			            cout<<"------------------------------------------------------------------"<<endl<<endl<<endl;
			            cout<<"Your Actual Amount Is : "<<amount<<endl<<endl;
			            cout<<"congrates Your Amount Has Withdraw Successfully."<<endl<<endl;
			            cout<<"Your Account Balance Is : "<<amount-withdraw<<endl;

					 }
					 else{
					    cout<<"you have not sufficient balance";
					 }

				}
				else{
					cout<<"invalid input";
				}

			}
			else{
				cout<<"invalid input";
			}
	    }
	    else{
	    	cout<<"invalid input";
		}


	return 0;
}
