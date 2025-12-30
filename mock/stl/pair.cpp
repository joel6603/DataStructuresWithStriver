#include<bits/stdc++.h>
using namespace std;

int main(){
  pair<int,string> p1;
  cin >> p1.first >> p1.second;
  cout << "printing basic details :" << endl << "name :" << p1.second << endl << "age :" << p1.first << endl;

  cout << "enter the key value pair of name age and id" << endl;
  pair<string,pair<int,int>> arr[3];
  for(int i =0;i<3;i++){
    cin >> arr[i].first >> arr[i].second.first >> arr[i].second.second;
  }
  cout << "printing the array list" << endl;
  for(int i =0;i<3;i++){
    cout << arr[i].first << " "<< arr[i].second.first << " " << arr[i].second.second << endl;
  }
}