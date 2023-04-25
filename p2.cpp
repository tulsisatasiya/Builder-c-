#include<iostream>
#include<string.h>

using namespace std;

class student{
    private:
        int stu_id;
        char stu_name[20];
        int stu_age;
        char stu_course[20];
        char stu_email[20];
        char stu_city[20];
        char stu_college[20];
        
        public:
            void getter(){
            	
                cout<<"Enter student's id:-";
                cin>>this->stu_id;
                cout<<"Enter student's name:-";
                cin>>this->stu_name;
                cout<<"Enter student's age in years:-";
                cin>>this->stu_age;
                cout<<"Enter in which course student is:-";
                cin>>this->stu_course;
                cout<<"Enter student's email:-";
                cin>>this->stu_email;
                cout<<"Enter student's city:-";
                cin>>this->stu_city;
                cout<<"Enter student's college:-";
                cin>>this->stu_college;
            }
            
    
            void printer(){
                cout<<"Student's id: "<<this->stu_id<<endl;
                cout<<"Student's name: "<<this->stu_name<<endl;
                cout<<"Student's age is: "<<this->stu_age<<endl;
                cout<<"Student is in following course: "<<this->stu_course<<endl;
                cout<<"Student's E-mail is: "<<this->stu_email<<endl;
                cout<<"Student is from following city: "<<this->stu_city<<endl;
                cout<<"Student is in following college: "<<this->stu_college<<endl;
            }
};

int main(){
    student s[3];
    int i;
    for ( i = 0; i < 3; i++){
        s[i].getter();
        
    }
    for ( i = 0; i < 3; i++){
        s[i].printer();
    }
    
    return 0;
}
