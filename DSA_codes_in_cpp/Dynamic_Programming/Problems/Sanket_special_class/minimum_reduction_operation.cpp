#include<bits/stdc++.h>
using namespace std;

int min_operation(int x, vector<int> &min_op){
	if(min_op[x]!= -1) return min_op[x];
	int by3 = min_operation(x/3,min_op)+1;
	int by2 = min_operation(x/2,min_op)+1;
	int sub1 = min_operation(x-1,min_op)+1;
	if(x%3 ==0 and x%2 == 0){
		min_op[x] = min(by2, min(by3, sub1));
	}
	else if(x%3 == 0 and x%2!=0){
		min_op[x] = min(sub1, by3);
	}
	else if(x%2==0){
		min_op[x] = min(by2, sub1);
	}
	else if(x%2!=0){
		min_op[x] = sub1;

	}
	return min_op[x];	
}


int min_operation_tabu(int x, vector<int> &min_op){
	if(min_op[x]!= -1) return min_op[x];
	for(int i = 4; i<=x; i++){
		if(i%3 == 0 and i%2==0){
			min_op[i] = min(min_op[i/3]+1, min(min_op[i/2]+1, min_op[i-1] + 1));
		}

		else if(i%3 == 0 and i%2!=0){
			min_op[i] = min(min_op[i/3]  + 1, min_op[i-1] +1);
		}

		else if(i%2==0){
			min_op[i] = min(min_op[i/2] + 1, min_op[i-1] + 1);
		}
		else if(i%2!=0){
			min_op[i] = min_op[i-1]+1;

		}
	}
	return min_op[x]; 	
}



int main(){
	int x;
	cin>>x;
	vector<int> min_op(x+1, -1);
	min_op[0] = 0;
	min_op[1] = 0;
	min_op[2] = 1;
	min_op[3] = 1;
	cout<<min_operation(x, min_op)<<"\n";
	cout<<min_operation_tabu(x, min_op)<<"\n";
	int arr[3][4] = {-9};
	// memset(arr, -5, sizeof(arr));
	for(int i = 0; i<3; i++){
		for(int j = 0; j<4; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}

}

