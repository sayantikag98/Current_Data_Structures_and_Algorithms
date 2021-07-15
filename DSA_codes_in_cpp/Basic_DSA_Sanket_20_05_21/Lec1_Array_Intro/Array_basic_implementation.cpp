#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int* arr1 = new int [n];
	int arr2[] {1,2,3,4};
	cout<<arr2<<endl;

	for(int i = 0; i<n; i++){
		cin>>*(i+arr);
	}

	for(int i = 0; i<n; i++){
		cin>>*(i+arr1);
	}
	arr[0] = 100;

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";

	for(int i = 0; i<n; i++){
		cout<<*(arr1+i)<<" ";
	}
	cout<<"\n";

	long x = 90l;
	float f = 9.8f;

	vector<int>v1{1,2,4,5,6};

	vector<int>v(v1.begin(),v1.end());
	cout<<v.size()<<" "<<v.capacity()<<endl;
	v.resize(22);
	cout<<v.size()<<" "<<v.capacity()<<endl;
	v.resize(5);
	cout<<v.size()<<" "<<v.capacity()<<endl;


	


}