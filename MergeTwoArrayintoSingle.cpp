#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the Array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter tyhe Array Elements\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The array1 elements are\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	int m;
	cout<<"Enter the size of the Second Array\n";
	cin>>m;
	int arr2[m];
	cout<<"Enter tyhe Array Elements\n";
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	cout<<"\nThe array2 elements are\n";
	for(int i=0;i<m;i++){
		cout<<arr2[i]<<" ";
	}
	int res[m+n];
	for(int i=0;i<n;i++){
		res[i]=arr[i];
	}
	//to stotre the array2 elements in resultant array
	for(int i=0;i<m;i++){
		res[i+n]=arr2[i];
	}
	cout<<"\nThe resultant Array is :- ";
	for(int i=0;i<(m+n);i++){
		cout<<res[i]<<" ";
	}
	
	
}
