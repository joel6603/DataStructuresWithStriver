#include<iostream>
using namespace std;

void swap(int arr[],int i ,int min){
  int temp = arr[i];
  arr[i] = arr[min];
  arr[min]= temp;
}

void selection_sort(int arr[],int n){
  for(int i=0;i<=n-2;i++){
    int min =i;
    for(int j=i;j<=n-1;j++){
      if(arr[j] < arr[min]){
        min = j;       
      }
    }
    swap(arr,i,min);
  }
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i =0; i<n;i++) cin>>arr[i];
  selection_sort(arr, n);
  for(int i =0;i<n;i++){
    cout << arr[i]<<" ";
  }
  return 0;
}