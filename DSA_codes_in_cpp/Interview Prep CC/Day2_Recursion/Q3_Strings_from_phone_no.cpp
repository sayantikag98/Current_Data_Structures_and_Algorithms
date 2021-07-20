#include<bits/stdc++.h>
using namespace std;

map <char, string> mapper;  // global map

vector <string> func(string s){

    // BASE CASE
    if(s.size()==1 and s!="1"){ 
        char ch = s.at(0);
        string ans = mapper.at(ch);
        vector <string> v;
        for(int i = 0; i<ans.size(); i++){
            string sub = "";
            sub += ans.at(i);  // character to string
            v.push_back(sub);  
        }
        return v;
    }
    if(s.size()==0 or (s.size()==1 and s=="1")){
        vector<string> v;
        return v;
    }
    
    //RECURSIVE INTUITION
    char ch = s.back();
    s.pop_back();  // remove the last character of the string
    vector <string> v = func(s);

    // SELF-WORK
    vector<string> result;
    string sub_ans = mapper.at(ch);
    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<sub_ans.size(); j++){
            result.push_back(v[i]+sub_ans.at(j));
        }
    }
    return result;


}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    string s;
    cin>>s;
    mapper['2']="abc";
    mapper['3']="def";
    mapper['4']="ghi";
    mapper['5']="jkl";
    mapper['6']="mno";
    mapper['7']="pqrs";
    mapper['8']="tuv";
    mapper['9']="wxyz";

    vector<string> answer = func(s);
    for(string st: answer){
        cout<<st<<endl;
    }
    

    return 0;
}