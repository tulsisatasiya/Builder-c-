#include<iostream>

using namespace std;

class school{
	
	private:
		int id;
		char name[50];
		int rollno;
		int standard;
		int age;
		char contact[10];
		static char institute[50];
		char address[10];
		
		public:
			void setdata();
			void getdata();
};

char school::institute[50]="red and white";

void school::setdata(){
	
	
	
	cout<<"enter id:-";
	cin>>id;
	
	cout<<"enter name:-";
	cin>>name;
	
	cout<<"enter rollno:-";
	cin>>rollno;
	
	cout<<"enter standard:-";
	cin>>standard;
	
	cout<<"enter age:-";
	cin>>age;
	
	cout<<"enter contact:-";
	cin>>contact;
	
//	cout<<"enter institute:-"<<endl;
//	cin>>institute;
	
	cout<<"enter address:-";
	cin>>address;
	
	
}

void school::getdata(){
	cout<<"-----student detail------"<<endl;
	cout<<"id:-"<<id<<endl;
	cout<<"name:-"<<name<<endl;
	cout<<"rollno:-"<<rollno<<endl;
	cout<<"standard:-"<<standard<<endl;
	cout<<"age:-"<<age<<endl;
	cout<<"contact:-"<<contact<<endl;
	cout<<"institute:-"<<institute<<endl;
	cout<<address<<endl;
	
}
 
 
int main(){
	
	int n;
	cout<<"enter size:-";
	cin>>n;
	
	school s[n];
	
	int i;
	
	for(i=0;i<n;i++){
		s[i].setdata();
	}
	
	for(i=0;i<n;i++){
		s[i].getdata();
	}
	
	
	return 0;
}
