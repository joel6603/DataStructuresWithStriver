#include<iostream>
using namespace std;

int main(){
  string name;
  int age;
  getline(cin,name);
  cin>>age;
  cout<<"Hello " + name + " your age is " <<age <<endl;
  return 0;
}