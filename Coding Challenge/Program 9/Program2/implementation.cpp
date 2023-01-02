
//This is the implementation file that implements the header file in the project
#include "header.h"

//The contract method is defined here under the Contact class
Contact::Contact(string e, string cp, string ep){
  email = e;
  cellPhone = cp;
  emergencyPhone = ep;
}

//The display method is defined here under the Contact class
void Contact::display(){
     cout<<"Email: "<<email<<", Cell Phone: "<<cellPhone<<", and Emergency Phone: "<<emergencyPhone<<endl;
}

//The address method is define here under the Address class
Address::Address(string sn, int hn, string an, string ct, string st, string cou){
  streetName = sn;
  houseNo = hn;
  aptNo = an;
  city = ct;
  state = st;
  country = cou;
}

//The display method is defined here under the Address class
void Address::display(){
      cout<<houseNo<<" "<<streetName<<endl;
      if(!aptNo.empty()){
         cout << "Apt #: "<<aptNo<<endl;
  }
    cout << city<<", "<<state<<endl;
    cout<<country<<endl;
}

//The student method is define here under the Student class
Student::Student(string id){
  studentId = id;
}

//The address method is define here under the Student class
void Student::addAddress(Address a){
  address = a;
}

//The add contact method is define here under the Student class
void Student::addContact(Contact c){
  contact = c;
}

//The display method is define here under the Student class
void Student::display(){
  cout<<name << " -has student id: "<<studentId<<endl;
  address.display();
  contact.display();
}
