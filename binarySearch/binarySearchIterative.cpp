#include<iostream>
#include<vector>
using namespace std;

int binarySearchIterative (vector<int> & arr){
  cout<<"\n"<<"Enter the target to search :";
  int target ;
  cin>>target;
  int low =0 ,high = arr.size()-1;

  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==target){
      return mid;
    } else if(target < arr[mid]){
      high = mid-1;
    } else{
      low = mid+1;
    }
  }
  return -1;
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

  int result = binarySearchIterative(arr);

  if(result!=-1){
    cout<<"element found at position :"<<result+1;
  } else{
    cout<<"element not found";
  }

  return 0;
}

