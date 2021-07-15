#include"bits/stdc++.h"
using namespace std;
#define x 10

int main(){

	//khdfiuyfuieyufhejhfueyhuigfyeru
	//huihdfuighurhgujheughuhu
	//uhfuiehfuherufheughuihgu
	//hfhfuiehufiqhefhefheuihueihiguhehrufghejnghurgu
	long l = 10L;
	long long li;
	long long int lli;
	short s;
	short int si;
	float f;
	double d;
	char ch;
	string str = "tfgfdgfhgfhgfhghjuyiuyhjhjdsfhauifywjsahfjashfkuayfjsdvgshguykdhfhuhfjdscxzhcusdhjcxvhlsuifskjxvhvhjfyiuykjzxvhjk";
	cout<<"Hello World\n";
	cout<<x<<endl;
	cout<<sizeof(x)<<endl;
	cout<<sizeof(l)<<" "<<sizeof(li)<<" "<<sizeof(lli)<<" "<<sizeof(s)<<" "<<sizeof(si)<<endl;
	cout<<sizeof(f)<<" "<<sizeof(d)<<endl;
	cout<<sizeof(ch)<<endl;
	cout<<sizeof(str)<<endl;
	cout<<str.length()<<endl;
	cout<<str.size()<<endl;

	char st[] = {'S','a','y','a'};
	char st1[] = "Saya";
	cout<<st<<endl;
	cout<<sizeof(st1)<<endl;

	int* ptr;
	char* ptr1;
	cout<<sizeof(ptr1)<<endl;
	unsigned int ui = -1;
	int y = ui;
	cout<<y<<endl;
	cout<<(pow(2,31) - 1)+ (pow(2, 31))<<endl;
	int* arr = new int [3];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	cout<<arr[-1]<<" "<<arr[2]<<endl;
	int arr1[3] = {1,2};
	int* arr2 = new int [3];
	vector<int> arr3(3);
	cout<<arr1[0]<<" "<<arr2[0]<<" "<<arr3[0]<<endl;
	cout<<arr1[1]<<" "<<arr2[1]<<" "<<arr3[1]<<endl;
	int* ar = new int[5];
	for(int i = 0; i<5; i++){
		cout<<ar[i]<<" ";

	}
	cout<<"\n";

	for(int i = 0; i<3; i++){
		cout<<arr1[i]<<" ";

	}

	cout<<endl;
	cout<<2.0/5.0<<endl;
	cout<<2/5<<endl;

	int num1;
	cin>>num1;

	int** arr_demo = new int* [num1];
	for(int i = 0; i<2; i++){
		arr_demo[i] = new int [num1];
	}
	for(int i = 0; i<num1; i++){
		for(int j = 0; j<num1; j++){
			cin>>arr_demo[i][j];
		}
	}

	for(int i = 0; i<num1; i++){
		for(int j = 0; j<num1; j++){
			cout<<arr_demo[i][j]<<" ";
		}
		cout<<"\n";
	}



}



