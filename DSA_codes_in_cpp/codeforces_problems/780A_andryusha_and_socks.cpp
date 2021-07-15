#include<bits/stdc++.h>
using namespace std;

struct person{
	int hei = 0;
	int wei = 0;
};

void func_ptr(int *(&ptr_f)){
	cout<<*ptr_f<<endl;
}

void func(int n, vector <int> &v, vector<int>&ans){
	int max_ans = 0;
	int glo = 0;
	for(auto &i: v){
		if(!ans[i-1]){
			ans[i-1]++;
			max_ans++;
		}
		else{
			ans[i-1]--;
			max_ans--;
		}
		if(glo<max_ans){
			glo = max_ans;
		}
		
	}
	cout<<glo<<"\n";

}

int main(){
	int n, num;
	cin>>n;
	int temp = (2*n);

	set<int> s;
	int ans = 0;

	// vector<int> v;
	// vector<int> ans(n);
	
	// while(temp--){
	// 	cin>>num;
	// 	v.push_back(num);
	// }
	// func(n, v, ans);

	// v.assign({1,2,3,4,5});
	// for(auto &i: v){
	// 	cout<<i<<endl;
	// }


	//////////////////////////////

	for(int i = 0; i<temp; i++){
		cin>>num;
		if(s.find(num) != s.end()){
			s.erase(num);
		}
		else{
			s.insert(num);
		}
		int sz = s.size();
		ans = max(ans, sz);

	}
	cout<<ans<<endl;

	set<person> s4;
	map<person, int> m5;
	map <int, person> m6;
	set<person, int> s7;
	set<int, int> s8;
	

	int hu = 20;
	int *ptr_hu = &hu;
	func_ptr(ptr_hu);

	int *ptr_h;
	// int &hj;

	vector <int> vh={1,2,3,4};
	vector<int> :: iterator ptr_h1 = vh.begin();
	ptr_h = &vh[3];
	cout<<(*ptr_h-*ptr_h1)<<endl;


}

// reference to a pointer written as *(&ptr)