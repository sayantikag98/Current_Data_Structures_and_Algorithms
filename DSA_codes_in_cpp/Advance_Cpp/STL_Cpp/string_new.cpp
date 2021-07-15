#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


void* operator new (size_t size){
	cout<<"Called new"<<endl;
	return malloc(size);
}

class stri{
	string str;
public:
	stri(string s): str(s){}

};

void print_name(string_view &name){
	cout<<name<<endl;
}

void print_name(string &name){
	cout<<name<<endl;
}

vector<string> tokenizer(string str, char ch){
	istringstream var (str);
	vector<string> v;
	string st;
	while(getline(var, st, ch)){
		v.push_back(st);
	}
	return v;
}

int main(){
	stri st ("Sayantika");
	string s = "hfiehfuhehghghjghghgjhghgghfgfgftdrtdfcfcfcfhftdresestfdgfhgftfdrdsessdfcghvhbuytyrtewaszxcfgvhytresaszxcvbhnjuhytfrdeswazsdxfcvgbhnj gvhgvgvgfcfdergfvhgbjhjgtftftfvgvgvhgfiudrtsesdcfvygyftrdrdr fgfxxgdxdxxgxgxddzszxbhsaASDFGHJ hggdhgasugfywgfygwy sgdhgufygwqygfywgfyu hvdhgefgtegfgwfuygogfhbdhcehvfch fhugfyggfyhbfheqbhfeqyugqegfyegyfgeqygyqegehdbvhbdhb";
	cout<<s<<endl;

	string str = "Sayantika";
	cout<<str.substr(1,3)<<" "<<str.substr(5)<<endl;
	cout<<sizeof(str)<<" "<<sizeof(str.c_str())<<endl;
	string_view name(str.c_str(),3);
	print_name(name);
	print_name(str);
	string_view str1 = "Sayantika Ghosh i am interesting";
	cout<<str1<<" "<<str1.size()<<" "<<str1.substr(3,7)<<" "<<str1.length()<<endl;

	vector<string_view> v_str;
	v_str.reserve(10);
	int start = 0;
	for(int i = 0; i<str1.size(); i++){
		if(str1.at(i)==' '){
			v_str.emplace_back(str1.substr(start, i-start));
			start = i+1;
		}
	}
	v_str.emplace_back(str1.substr(start));
	for(string_view &s:v_str){
		cout<<s<<" ";
	}
	cout<<"\n";
	string st99 = "Sayantika, Ghosh, Bangalore";

	vector<string> v = tokenizer(st99, ',');
	for(auto it = v.begin(); it!=v.end(); it++){
		cout<<*it<<" ";
	}
	cout<<"\n";
	st99.append("ghjgfhegfewjh");
	st99 = st99+"gfjhgfje";
	cout<<st99<<endl;
	// st99.emplace("hdghgjh"); // does not exist

}