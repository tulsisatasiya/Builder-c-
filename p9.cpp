#include<iostream>

using namespace std;

class Student{

	private:

		int id;
		char name[50];
		int age;
		char city[50];

	public:

		void setdata();
		void getdata();
};

void Student :: setdata(){

	cout<<"Enter id : ";
	cin>>id;

	cout<<"Enter name : ";
	cin>>name;
	
	cout<<"Enter age : ";
	cin>>age;

	cout<<"Enter city : ";
	cin>>city;

}

void Student :: getdata(){
    cout<<"<------student detail--------> "<<endl;
	cout<<"Id:- "<<id<<endl;
	cout<<"Name:- "<<name<<endl;
	cout<<"Age:- "<<age<<endl;
	cout<<"City:- "<<city<<endl<<endl;

}

int main()
{

	int n;

	cout<<"Enter size:- ";
	cin>>n;

	Student s[n];
	int i;

	for(i=0 ; i<n ; i++){
		s[i].setdata();
	}

	for(i=0 ; i<n ; i++){
		s[i].getdata();
	}

	return 0;
}
