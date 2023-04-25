#include<iostream>
#include<string.h>

using namespace std;

class hotel{
	private:
		int	id;
	    char staff_name[50] ;
	    int staff_count;
	    int room_size;
	    int year;
	    char address[50];
	    int	rating ;
	    char website[50];
	    
	    public:
	    	void setter(int id,char name[],int count,int size,int year,char address[],int rate,char web[]){
	    		
	    		this->id=id;
	    		strcpy(this->staff_name,name);
	    		this->staff_count=count;
	    		this->room_size=size;
	    		this->year=year;
	    		strcpy(this->address,address);
	    		this->rating=rate;
	    		strcpy(this->website,web);
	    			
			}
			
			void getter(){
				cout<<"<-------hotel detail------>"<<endl;
				cout<<"ID:-"<<id<<endl;
				cout<<"STAFF-NAME:-"<<staff_name<<endl;
				cout<<"STAF-COUNT:-"<<staff_count<<endl;
				cout<<"ROOM-SIZE:-"<<room_size<<endl;
				cout<<"YEAR:-"<<year<<endl;
				cout<<"ADDRESS:-"<<address<<endl;
				cout<<"RATING:-"<<rating<<endl;
				cout<<"WEBSITE-NAME:-"<<website<<endl<<endl;;
			}

};

int main(){
	
	hotel h,h2;
	
	h.setter(1,"abc",6,10,2021,"surat",4,"ab.com");
	h.getter();
	
	h2.setter(2,"xyz",10,20,2022,"rajkot",6,"xy.com");
	h2.getter();
	
	return 0;
}
