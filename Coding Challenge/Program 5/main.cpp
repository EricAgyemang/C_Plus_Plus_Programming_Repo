//We import the necessary libraries
#include<iostream>
#include"Bank.h"
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
using namespace std;

//This is the main method
int main(){
int numOfBanks;

//We request an input from the user
cout<<"Num of Banks: "<<endl;
cin>>numOfBanks;

//This is the pointer declaration
Bank *banks = new Bank[numOfBanks];

//We will initialize a random seed
srand(time(NULL));

//generate random numbers that meet the conditions
for(int i=0; i<numOfBanks; i++){
  double amt = rand()% 200000+10;
  double rate = rand()% 10+1;
  double time = rand()% 15+1;

  banks[i].deposit=amt;
  banks[i].interest=rate;
  banks[i].timeInYears=time;

}
//We call the simple interest method
for(int i=0; i<numOfBanks; i++){
  cout<<banks[i].simpleInterest()<<endl;;
}

//We free the dynamic meemory after using it
delete [] banks;
banks = nullptr;
  return 0;
}
