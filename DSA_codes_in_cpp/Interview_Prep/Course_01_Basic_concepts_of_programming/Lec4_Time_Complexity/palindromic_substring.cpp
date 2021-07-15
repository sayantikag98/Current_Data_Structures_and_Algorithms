#include<bits/stdc++.h>
using namespace std;

// int coun = 0;

int func(string &s){
	int count = 0;
	int n = s.size();

	// odd length
	for(int axis = 0; axis < n; axis++){
		for(int orbit = 0; (axis - orbit)>=0 and (axis + orbit)<n; orbit++){
			if(s[axis-orbit] != s[axis+orbit]){
				break;
			}
			else {
				count++;
			}
		}
	}

	// even length
	for(double axis = 0.5; axis<n; axis++){
		for(double orbit = 0.5; (axis - orbit)>=0 and (axis + orbit)<n; orbit++){
			if(s[(int)(axis - orbit)] != s[(int)(axis + orbit)]) break;
			else count++;
		}
	}



	return count;
}

bool palindrome(string s){
	if(s.size()==0) return true;
	for(int i = 0; i<=(s.size()/2); i++){
		if(s.at(i) != s.at(s.size()-i-1)){
			return false;
		}
	}
	return true;
}


int substring(string s, string ans, int coun){

	if(s.size()==0){
		if(palindrome(ans)){
			coun++;
			// cout<<ans<<endl;
		}
		return coun;
	}
	// cout<<s<<endl;
	coun = substring(s.substr(1), ans + s.at(0), coun);
	coun = substring(s.substr(1), ans, coun);
	return coun;

}

int main(){
	string s;
	cin>>s;
	// if(palindrome(s)){
	// 	cout<<"palindrome\n";
	// }
	// else{
	// 	cout<<"not a palindrome\n";
	// }
	// cout<<substring(s,"", 0)<<endl;
	cout<<func(s)<<endl;



}

//xaabacx