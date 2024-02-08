#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;

	int size = n-1;
	int arr[size]={0};
	cout<<"\nEnter the elements of the array starting from 1: ";
	for(int i= 0; i<n; i++){
		cin>>arr[i];
	}

	int sum=0;
	for(int i = 0; i<size; i++){
		sum+=arr[i];
	}

	int totalSum=0;
	for(int i = 1; i<=n; i++ ){
		totalSum+=i;
	}

	cout<<"\nNumber missing from the array= ";
	cout<<totalSum-sum;


  
return 0;
}
