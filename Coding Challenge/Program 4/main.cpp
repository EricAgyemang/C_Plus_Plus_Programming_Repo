//The required libraries are imported
#include<iostream>
#include "header.h"
using namespace std;

//The main method is define here as main
int main(){
  //The object of the classes defined in the implementation file is declared
  Student stu("rsaripa");
  Address addr("Information Tech", 5150, "", "Normal","IL","USA");
  Contact conta("rishi.saripalle@ilstu.edu", "309-909-09090", "911");

  stu.name = "Rishi saripalle";
  stu.addAddress(addr);
  stu.addContact(conta);
  stu.display();
  return 0;
}//End of the main method
