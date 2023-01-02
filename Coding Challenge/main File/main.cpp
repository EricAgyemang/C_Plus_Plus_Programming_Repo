#include<iostream>
#include<string>
using namespace std;
int main(){
int num[10];
for(int i=0;i<10;i++){
  cout<<"Enter value of ["<<i<<"] :";
  cin>>num[i];
}

for(int i=0;i<10;i++){
  cout<<num[i]<<" ";
}


return 0;
}
