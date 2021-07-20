typedef long long int ll;
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    // string s = "Sayantika Ghosh";
    // cout<<s<<"\n";
    // char ch [] = "Sayantika Ghosh";
    // cout<<ch<<"\n";
    // char ch1 [] = {'h','i'};
    // cout<<ch1<<"\n";
    // for(int i = 0; i<2; i++){
    //     cout<<ch1[i]<<" ";
    // }
    // cout<<"\n";
    // for(int i = 0; i<5; i++){
    //     cout<<s[i]<<" ";
    // }
    // cout<<"\n";
    // ll a = 10;
    // cout<<a<<"\n"; 

    // string s1("Say");
    // cout<<s1<<"\n";
    // string s2 (10,'1');
    // int i = 0;
    // while(i!=5){
    //     s2.push_back('a');
    //     i++;
    // }
    // cout<<s2[3]<<"\n";
    // cout<<s2.at(3)<<"\n";
    // string s3 = "abcd";
    // for(int i = 0; i<s3.size(); i++){
    //     for(int j = i+1; j<=s3.size(); j++){
    //         cout<<s3.substr(i,j-i)<<endl;
    //     }
    // }
    // cout<<s3.find("ab")<<endl;
    string str;
    while(getline(cin,str)){
        cout<<str<<"\n";
    }
    string str1 = "unacademy";
    string str2("codechef");
    cout<<str1<<" "<<str2<<"\n";
    str1.swap(str2);
    cout<<str1<<" "<<str2<<"\n";
    return 0;
}