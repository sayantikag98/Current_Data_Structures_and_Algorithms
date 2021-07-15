#include<bits/stdc++.h>
using namespace std;

// template<typename T>
struct Google{

	string brand_name;
	int founding_year;

	// Google(){}
	Google(string name, int year):brand_name(name), founding_year(year){}


	// *****COPY CONSTRUCTOR*******//
	Google(const Google &){
		cout<<"Its a copy constructor\n";
	}

	bool operator>(const Google &i) const{
		// return ((i.brand_name)[0]<((this->brand_name)[0]));
		return (i.founding_year<(this->founding_year));
	}
	// i-> 1902 this->1290

	void display(){
		cout<<brand_name<<" "<<founding_year<<endl;
	}

};

bool comparator(const Google &i, const Google &j){
	// return i.founding_year<j.founding_year;
	return i>j;
}

int main(){

	Google g("Google", 1998);
	g.brand_name = "Sayantika";
	g.founding_year = 1996;
	g.display();

	vector <int> v{1,2,3,4,5};
	vector<int> :: reverse_iterator it;

	for(it = v.rbegin(); it!= v.rend(); it++){
		cout<<*it<<" ";
	}
	cout<<"\n";
	it--;
	it--;
	cout<<*it<<endl;
	it++;
	cout<<*it<<endl;
	vector<Google> v1;
	cout<<v1.size()<<" "<<v1.capacity()<<endl;
	// v1.reserve(5);
	cout<<v1.size()<<" "<<v1.capacity()<<endl;
	v1.push_back({"Saya", 1290});
	v1.push_back({"Gaya", 1902});
	v1.push_back({"Maya", 1978});
	v1.push_back({"Naya", 1988});

	// v1.emplace_back("Saya", 1290);
	// v1.emplace_back("Gaya", 1102);
	// v1.emplace_back("Maya", 1978);
	// v1.emplace_back("Naya", 1958);
	for(vector<Google> :: iterator it = v1.begin(); it!= v1.end(); it++){
		cout<<it->brand_name<<" "<<it->founding_year<<"\n";
	}

	if(v1[0]>v1[1]){
		cout<<"Hello\n";
	}
	else{
		cout<<"Bye\n";
	}

	// sort(v1.begin(), v1.end(), [](const Google &i, const Google &j){return i.founding_year<j.founding_year;});
	sort(v1.begin(), v1.end(), greater<Google>());
	for(vector<Google> :: iterator it = v1.begin(); it!= v1.end(); it++){
		cout<<it->brand_name<<" "<<it->founding_year<<"\n";
	}

	struct Google arr[] {{"Saya",1970},{"Maya", 1950}, {"Kaya", 1990}};
	cout<<arr[0].brand_name<<endl;

	bool (*ptr)(const Google&, const Google&)  = comparator;
	Google i {"Saya", 123};
	Google j {"Maya",90};
	cout<<ptr(i,j)<<endl;

	cout<<sizeof(long)<<" "<<sizeof(long long)<<" "<<sizeof(long long int)<<" " <<sizeof(ptr)<<endl;





}

