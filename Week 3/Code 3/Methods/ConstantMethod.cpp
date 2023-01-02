#include <iostream>
#include <string.h>
using namespace std;
class Student{

public:
  string firstName;
  string lasttName;
  string email;

  void sendEmail() const{
    verifyEmail();
    cout<<"Send mail to -"<<email<<endl;
  }
  void verifyEmail() const{
    cout<<"Verifying email .... "<<endl;
  }
};

int main(){
  Student s;
  s.sendEmail();

}
