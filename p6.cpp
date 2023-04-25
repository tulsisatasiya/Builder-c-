#include<iostream>

using namespace std;

class Employee{
	
	private:
		int id;
		char name[10];

	public:
		Employee(){
			cout<<"Default constructor"<<endl;
		}
};

int main()
{

	Employee e;


	return 0;
}
