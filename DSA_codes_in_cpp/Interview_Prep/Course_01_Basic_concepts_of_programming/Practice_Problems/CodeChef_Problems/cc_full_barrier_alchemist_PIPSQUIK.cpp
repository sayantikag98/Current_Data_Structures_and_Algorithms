#include<bits/stdc++.h>
using namespace std;

void func(int n, int h, int y1, int y2, int l, vector<pair<int, int>> &xt){
	int count = 0;
	for(int i = 0; i<n; i++){
		if(xt[i].first == 1){
			int sub = h-y1;
			if(xt[i].second<sub and l>1){
				count++;
				l--;
			}
			else if(xt[i].second>=sub){
				count++;
			}
			else if(xt[i].second<sub and l<=1){
				break;
			}
		}
		else if(xt[i].first == 2){
			int sub = y2;
			if(xt[i].second<=sub){
				count++;
			}
			else if(xt[i].second>sub and l>1){
				l--;
				count++;
			}
			else if(xt[i].second>sub and l<=1){
				break;
			}
		}
	}
	cout<<count<<endl;

}

int main(){
	int test, n, h, y1, y2, l;
	cin>>test;
	while(test--){
		cin>>n>>h>>y1>>y2>>l;
		vector<pair<int, int>> xt(n);
		for(int i = 0; i<n; i++){
			cin>>xt[i].first>>xt[i].second;
		}
		func(n, h, y1, y2, l, xt);

	}
}