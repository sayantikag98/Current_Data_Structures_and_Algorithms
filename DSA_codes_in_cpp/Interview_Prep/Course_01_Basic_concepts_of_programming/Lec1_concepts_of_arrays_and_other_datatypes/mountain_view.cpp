#include<bits/stdc++.h>
using namespace std;


void func_alt(int* arr, int n){
	int i = 0;
	while(i<n-1 and arr[i]<arr[i+1]){
		i++;
	}
	if(i==0 or i ==n){
		cout<<"False\n";
		return;
	}
	while(i<n-1 and arr[i]>arr[i+1]){
		i++;
	}
	if(i==n-1){
		cout<<"True\n";
	}
	else{
		cout<<"False\n";
	}
}




void func(int* arr, int n){
	if(n<3){
		cout<<"False"<<endl;
		return;
	}
	bool flag = 0, ans = 0;
	for(int i = 0; i<n-1; i++){
		int left = i, right = i+1;
		if(arr[left]<arr[right]){
			if(flag == 0){
				flag = 0;
			}
			else if (flag != 0){
				ans = 1;
				break;
			}
			
		}
		else if(left!= 0 and arr[left]>arr[left-1] and arr[left]>arr[right]){
			flag = 1;
		}
		else if(right != n-1 and arr[right]<arr[left] and arr[right]>arr[right+1] ){
			flag = 1;
		}

		else if(arr[left] == arr[right]){
			ans = 1;
			break;
		}
		else if(arr[left] > arr[right]){
			if(flag == 1){
				flag = 1;
			}
			else if(flag != 1){
				ans = 1;
				break;
			}
		}



	}
	if(ans == 1){
		cout<<"False"<<endl;
	}
	else{
		cout<<"True"<<endl;
	}
}



int main(){
	int n;
	cin>>n;
	int* arr = new int [n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	func_alt(arr, n);
}