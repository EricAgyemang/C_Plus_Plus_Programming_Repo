#include<iostream>
using namespace std;

class Student{
private:
  int SSN=0.7;
protected:
  string taxID="M0157";
public:
  string firstName;
  string lastName;
  string email;

//Contructor
  Student(string firstName, string lastName, string email){
    this->firstName=firstName;
    this->lastName = lastName;
    this->email=email;
  }

//Copy constructor
Student(const Student& obj){
  firstName=obj.firstName;
  lastName=obj.lastName;
  email=obj.email;
}

//Destructor
~Student(){
  cout<<"The student object is destroyed"<<endl;
}
};


int main() {
 Student s("Eric", "Agyemang", "eagyemang700@rocketmail.edu");

 Student copy = s;

 cout<<"Name: "<<copy.firstName<<" "<<copy.lastName<<endl;
 cout<<"This student has a contact detail: "<<copy.email<<endl;

}
