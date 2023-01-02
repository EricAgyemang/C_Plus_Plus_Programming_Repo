/*
Author: Eric Agyemang
Course: IT 180 C++
        Short Assignment 2
*/

//Importing the necessary libraries
#include<iostream>
using namespace std;

//Defining conditions for the heder file
#ifndef HEADER_H_
#define HEADER_H_

//This is a class of Contact that hast the contact detais as tributes
class Contact{
      private:
             string email;
             string cellPhone;
             string emergencyPhone;

      public:
//The default constructor
             Contact(){

             }
//The contact constructor for the Contact
             Contact(string e, string cp, string ep);
             void display();

};//End of class

//This is the Address class that has the details of address as attributes
class Address{
      private:
            string streetName;
            int houseNo;
            string aptNo;
            string city;
            string state;
            string country;
      public:

//The default constructor for the address class
            Address(){

            }

//The constructor for the address
            Address(string sn, int hn, string an, string ct, string st, string cou);

//The display method is declared here
            void display();

};

//This is the Student class that contains the details of the student as attributes
class Student{
      private:
             string studentId;
             Address address;
             Contact contact;
//The public variable and methods
      public:
            string name;
            Student(string id);
            void addAddress(Address a);
            void addContact(Contact c);
            void display();
          
};
#endif
