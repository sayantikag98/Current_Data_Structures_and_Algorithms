// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	string str = "Sayantika";
	cout<<str<<endl;
	char ch[] = "Sayantika";
	cout<<ch<<endl;
	const char *ch1 = "Sayantika";
	cout<<ch1<<endl;
	str[0] = 'G';
	ch[0] = 'G';
	// ch1[0] = 'G';
	cout<<str<<" "<<ch<<endl;
	int arr[] = {1,2,3};
	int* arr1 = new int [3];
	*arr1 = 1;
	*(arr1+1) = 2;
	*(arr1 + 2) = 3;
	for(int i = 0; i<3; i++){
		cout<<arr[i]<<" "<<arr1[i]<<endl;
	}
	cout<<sizeof(str)<<" "<<sizeof(ch)<<" "<<sizeof(ch1)<<endl;
	char ch2 [] = {'S','a','y'};
	cout<<arr<<endl;
	cout<<ch2<<" "<<sizeof(ch2)<<endl;
	cout<<str.size()<<endl;
	const char16_t *ch16 = u"Say";
	char16_t ch16_arr [] = u"Say";
	const char32_t *ch32 = U"Say";
	cout<<(char)ch16[0]<<" "<<ch16[0]<<endl;
	for(int i = 0; i<3; i++){
		cout<<(char)ch16[i];
	}
	cout<<"\n";
	using namespace std::string_literals;
	string str_con = "say"s+"gho";
	cout<<str_con<<endl;

	const wchar_t* ch6 = L"Say"; 
	wcout<<ch6<<endl;

	const char* multiline = R"(line
line2
line1)";
	cout<<multiline<<endl;

	const char* multiline2 = "line1\n "

	
	"lin21";

	cout<<multiline2<<endl;


}