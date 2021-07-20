#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void helper(string str, stack<char> s, int n, char first, char second, char third){
        int ind = str.find_first_of(second);
        int ind1 = str.find_first_of(third);
        loop(i,1,n){
            if(str.at(i)==first){
                s.push(str[i]);
                // cout<<"Hello"<<"\n";
            }
            else if(str.at(i)==second){
                if(ind<ind1){
                    if(s.size()!=0){
                        s.pop();
                        // cout<<"Hi"<<"\n";
                    }
                else{
                        // cout<<"Bye"<<"\n";
                        cout<<"No"<<"\n";
                        return;
                    }
                }
                else{
                    if(s.size()==0 or (s.size()>0 and s.top()==second)){
                        s.push(str[i]);
                        // cout<<"Shi"<<"\n";
                    }
                        
                    else{
                        s.pop();
                    }
                }
                
            }
            else if(str.at(i)==third){
                if(ind1<ind){
                    if(s.size()!=0){
                        s.pop();
                        // cout<<"Pi\n";
                    }
                    else{
                        // cout<<"Ki"<<"\n";
                        cout<<"No"<<"\n";
                        
                        return;
                    }
                }
                else{
                    if(s.size()==0 or (s.size()>0 and s.top()==third)){
                        //  cout<<"Ni"<<"\n";
                        s.push(str[i]);
                    }
                   
                    else{
                        s.pop();
                    }
                }
                
            }
            // if(s.size()>0) cout<<s.top()<<"\n";
        }
        if(s.size()==0){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
               
        }
        
        // cout<<s.size()<<"\n";
        
}


void func(string str){
    int n = str.size();
    stack<char>s;
    s.push(str[0]);
    if(s.top()=='A'){
        helper(str,s,n,'A','B','C');
    }
    else if(s.top()=='B'){
        helper(str,s,n,'B','A','C');
    }
    else{
        helper(str,s,n,'C','B','A');   
    }   
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        func(s);
    }
    

    return 0;
}