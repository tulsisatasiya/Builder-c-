#include<iostream>
#include<string.h>

using namespace std;

class employee{
	private:
	int id;
	char name[50];
	char roll[50];
	int salary;
	int experience;
	char address[50];
	char email[50];
	char contact[10];
	
	public:
		void setdata();
		void getdata();
	
};

void employee::setdata(){
	cout<<"enter id:-";
	cin>>id;
	
	cout<<"enter name:-";
	cin>>name;
	
	cout<<"enter roll:-";
	cin>>roll;
	
	cout<<"enter salary:-";
	cin>>salary;
	
	cout<<"enter experience:-";
	cin>>experience;
	
	cout<<"enter address:-";
	cin>>address;
	
	cout<<"enter email:-";
	cin>>email;
	
	cout<<"enter contact:-";
	cin>>contact;
}

void employee::getdata(){
	cout<<"<-------employee detail------>"<<endl;
	cout<<id<<endl;
	cout<<name<<endl;
	cout<<roll<<endl;
	cout<<salary<<endl;
	cout<<experience<<endl;
	cout<<address<<endl;
	cout<<email<<endl;
	cout<<contact<<endl;
}

int main(){
	
//	int n;
//	cout<<"enter employee no:-";
//	cin>>n;
//	
//	employee e[n];

     employee e[3];
	
	int i;
	for(i=0;i<3;i++){
		e[i].setdata();
	}
	
	for(i=0;i<3;i++){
		e[i].getdata();
	}
	
	return 0;
}
