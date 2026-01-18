#include<iostream>
#include<vector>
using namespace std;

int lowerBound (vector<int> & arr){
  cout<<"\n"<<"Enter the lower bound element :";
  int target ;
  cin>>target;
  int low =0 ,high = arr.size()-1;
  int ans = high+1;

  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>=target){
      high = mid-1;
      ans = mid;
    } else{
      low = mid+1;
    }
  }
  return ans;
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

  int result = lowerBound(arr);

    cout<<"lower bound is :"<<result;


  return 0;
}

