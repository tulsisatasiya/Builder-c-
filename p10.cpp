#include<iostream>
#include<string.h>

using namespace std;

class train{

	private:
        
		char name[50];
		char source[50];
		char destination[50];
		char time[10];

	public:
		
		int number;


		void setdata(){
			cout<<"Enter Train Number :- ";
			cin>>number;

			cout<<"Enter Train Name :- ";
			cin>>name;

			cout<<"Enter Source :- ";
			cin>>source;

			cout<<"Enter Destination :- ";
			cin>>destination;

			cout<<"Enter Train Time :- ";
			cin>>time;
		}

		void getdata(){

			cout<<endl<<"Train Number:- "<<number<<endl;
			cout<<"Name:- "<<name<<endl;
			cout<<"Source:- "<<source<<endl;
			cout<<"Destination:- "<<destination<<endl;
			cout<<"Time:- "<<time<<endl;
		}
};

int main(){

	train tra[3];
	
	int i;

	for(i=0 ; i<3 ; i++){
		tra[i].setdata();
	}
    int tnumber;
    
	cout<<endl<<"Enter Train Number : "<<endl;
	cin>>tnumber;

	for(i=0 ; i<3 ; i++){
		if(tra[i].number == tnumber){
			tra[i].getdata();
			break;
		}
	}

	return 0;
}
