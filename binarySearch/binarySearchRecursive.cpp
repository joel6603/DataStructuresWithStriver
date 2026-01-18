#include<iostream>
#include<vector>
using namespace std;

int binarySearchRecursive(vector<int>& arr,int low,int high,int target){
  if(high<low){
    return -1;
  }
  int mid = (low+high)/2;
  if(arr[mid]==target){
    return mid;
  } else if(target<arr[mid]){
    return binarySearchRecursive(arr,low,mid-1,target);
  } else{
    return binarySearchRecursive(arr,mid+1,high,target);
  }
}

int main(){
  
  vector <int> arr;
  cout<<"Enter the number of elements in array :" << endl;
  int n;
  cin >> n;
  for(int i =0;i<n;i++){
    int t;
    cin>> t;
    arr.push_back(t);
  }
  cout<<"array given:"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  int high = arr.size();
  cout<<"\n"<<"Enter the target to search :";
  int target ;
  cin>>target;
  int result = binarySearchRecursive(arr,0,high,target);

  if(result!=-1){
    cout<<"element found at position :"<<result+1;
  } else{
    cout<<"element not found";
  }
  return 0;
}