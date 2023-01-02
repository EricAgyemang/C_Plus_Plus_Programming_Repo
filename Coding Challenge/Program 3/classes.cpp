#include<iostream>
using namespace std;

class Person{

private:
  int SSN=007;

protected:
  string taxID="MI5007";

public:
  string firstName;
  string lastName;
  string emailAddres;

Person(String fName, string lName, string email){
    this->firstName =fNmame;
    lastName = lName;
    this->email = email;
  }
};



int main(){

  Person p("Eric","Agyemang", "eagyem2@ilstu.edu");

  cout<<"The name of that man is: "<<p.lastName<<","<<p.firstName<<endl;




}
