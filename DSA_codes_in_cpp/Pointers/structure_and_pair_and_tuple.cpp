#include<bits/stdc++.h>
using namespace std;

struct student{
	int roll = 0;
	string name;
	int marks [2];

	// void fun(){
	// 	roll=90;
	// }

	
	
};

bool operator<(const student &s2,const student &s1){
		return s2.roll<s1.roll;
	}

void print_s(student i){
		cout<<i.roll<<" "<<i.name<<" "<<i.marks[0]<<" "<<i.marks[1]<<"\n";
}

struct my_complex{
	int real;
	int img;

}a,b;

my_complex add (my_complex a, my_complex b){
	my_complex temp;
	temp.real = a.real + b.real;
	temp.img = a.img + b.img;
	return temp;
}

bool compare(const pair<int,string>&i, const pair<int,string>&j){
	return i.second<j.second;
}

//i.second<j.second --> ascending order sort
//i.second>j.second --> descending order sort

int main(){

	a = {10,20};
	b = {20,30};
	my_complex temp = add(a,b);
	cout<<temp.real<<" "<<temp.img<<"\n";
	complex <int> c(10,20);
	cout<<real(c)<<" "<<imag(c)<<endl;
	pair<int,string> p {10,"sayantika"};
	p=make_pair(20,"Say");
	p.first =90;
	p.second = "Day";
	cout<<p.first<<" "<<p.second<<endl;
	pair<int,string> parr[3];
	int siz = sizeof(parr)/ sizeof(parr[0]);
	for(int i = 0; i<siz; i++){
		cin>>parr[i].first>>parr[i].second;
	} 
	sort(parr,parr+siz,compare);
	for(int i = 0; i<siz; i++){
		cout<<parr[i].first<<" "<<parr[i].second<<endl;
	}

	student stu[]{{10,"Ashish",{2,3}},{2,"Simran",{50,6}}, {2,"Simran",{5,6}}};
	sort(stu,stu+3);
	for(int i= 0; i<3; i++){
		print_s(stu[i]);
	}

	tuple<int, float, string> t(30,90.8,"Day");
	// t = make_tuple(23,89.9,"Say");
	cout<<get<0>(t)<<endl;

	int ic;
	float fl;
	string dst;

	tie(ic, fl, dst) = t;
	cout<<ic<<" "<<fl<<" "<<dst<<endl;

	int arrr[]{1000,889,654564,65545454};
	sort(arrr,arrr+4,greater<int>());
	for(int i:arrr){
		cout<<i<<" ";
	}
	cout<<"\n";

	pair<string, int> p_store[]{{"Ram",70},{"Anuj",50},{"Sutraj",35}};
	cout<<p_store[0].first<<endl;





}