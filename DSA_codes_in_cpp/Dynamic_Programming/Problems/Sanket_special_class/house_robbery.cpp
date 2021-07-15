#include<bits/stdc++.h>
using namespace std;

int house_robbery_memo(int* data, int siz, vector<int> &dp_memo){
	if(dp_memo[siz] == -1) {
		dp_memo[siz] = max(house_robbery_memo(data, siz-1, dp_memo), house_robbery_memo(data, siz-2, dp_memo) + data[siz - 1]);
	}
	return dp_memo[siz];	 
}

int house_robbery_tabu(int* data, int siz){
	vector<int>dp_tabu(3);
	dp_tabu[1] = data[0];
	dp_tabu[2] = max(data[0], data[1]);
	if(siz>2){
		for(int iter = 3; iter<=siz; iter++){
			int temp = max(data[iter - 1] + dp_tabu[1], dp_tabu[2]);
			dp_tabu[1] = dp_tabu[2];
			dp_tabu[2] = temp;
		}
	}
	return dp_tabu[2];
}





int main(){
	int siz;
	cin>>siz;
	int data[siz];
	for(int iter = 0; iter < siz; iter++){
		cin>>data[iter];
	}
	vector<int>dp_memo(siz+1,-1);
	dp_memo[0] = 0;
	dp_memo[1] = data[0];
	dp_memo[2] = max(data[0], data[1]);
	cout<<house_robbery_memo(data, siz, dp_memo)<<"\n";
	cout<<house_robbery_tabu(data, siz)<<"\n";

	// for(int &i: dp_memo){
	// 	cout<<i<<" ";
	// }
	cout<<sizeof(siz);

}



