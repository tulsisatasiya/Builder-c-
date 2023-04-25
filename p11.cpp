#include<iostream>

using namespace std;

class User{
	public:
		int id;
		char name[50];
		int setter(){
			cout<<"Enter Id : ";
			cin>>id;
			cout<<"Enter Name : ";
			cin>>name;
			return id;
		}
		void getter(){	
			cout<<id<<endl;
			cout<<name<<endl<<endl;
		}
};
int main(){
	User obj1[2];
	int i,j,a[10];
	for(i=0 ; i<=1 ; i++){
		a[i] = obj1[i].setter();
	}
	for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<2; j++) { 

			if(a[i]>a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }	
	for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++) { 

			if(obj1[j].id == a[i]) {

               obj1[j].getter();
            }
        }
    }	
    return 0;
}

