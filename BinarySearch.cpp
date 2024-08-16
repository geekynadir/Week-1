#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int n;
    cout << "Enter the array size\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the Array\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\nThe Array Elements are:- ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "\nThe Array Elements after sorting are:- ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    int val;
      cout<<"Enter the value u want to search\n";
       cin>>val;
       bool flag=false;//avi ke liye value nahi mili hai
    int left=0,right=n-1;
     while(left<=right){
    	int mid=(left+right)/2;
        if(arr[mid]==val){
      	cout<<"\nThe value "<<arr[mid]<<"found at index "<<mid;
      	flag=true;
      	break;
	  }
	  
	  if(arr[mid]>val){
	  	right=mid-1;
	  }
	  else{
	  	left=mid+1;
	  }
	}
	 if(flag==false){
		cout<<"Sorry! Element not found \n";
	}
  
}
