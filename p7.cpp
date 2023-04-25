#include<iostream>

using namespace std;

class parameterized{
	
	private:
		int a;
		int b;
		
	public:
		parameterized(int a, int b){
			int c;
			
			cout<<a<<" "<<b<<endl;
			
		}
};

int main(){
	
	parameterized p(10,20);
	

	
	return 0;
}
