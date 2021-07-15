#include<bits/stdc++.h>
using namespace std;


/*

---------------------------------------------
TECHNIQUE USED:

***************************
* PREFIX AND SUFFIX ARRAY *
***************************
---------------------------------------------

*/

/*

gcd(a,b,c) = gcd(gcd(a,b), c) = gcd(a, gcd(b,c)) = gcd(b, gcd(a,c))
there are inbuilt functions for calculating gcd in stl (__gcd(a,b))


Time complexity for gcd(a,b) = O(log(min(a,b)))

*/

/*

Prefix array --> Operation done from the start of the array till that point

Suffix Array --> Operation done from that point to the end of the array

*/

/*
a[0], a[1], a[2], ..........a[n-1], a[n]

To find:

GCD of every number of the array expect a[i] where i(index of the element) is given in the question


Ans:---->

required answer = gcd( gcd(a[0], a[1], a[2], a[3], ......., a[i-1]), gcd(a[i+1], a[i+2], a[i+3], .........., a[n-1], a[n]))

gcd(gcd(from 0th element to (i-1)th element), gcd((i+1)th element to (n-1)th element))

prefix array[i] --> gcd(of all the elements from 0th index till ith index)

prefix[0] = a[0]

prefix[i] = gcd(prefix[i-1], a[i])

********************************************************
For Example:

if suppose the prefix array at ith index is storing the sum of
all the elements from the 0th index to the ith index then
to calculate the sum of the array from l to r will be the
prefix[r] - prefix[l-1]
*********************************************************


*/


int n;
int arr[100];
vector<int> prefix;
vector<int> suffix;


int my_gcd (int a, int b) {
	if (a % b == 0) {
		return b;
	}
	return my_gcd(b, a % b);
}


void func(int ind) {
	int ans;
	if (ind == 0) {
		ans = suffix[1];
	}
	else if (ind == n - 1) {
		ans = prefix[n - 2];
	}
	else if (ind > n - 1 or ind < 0) {
		ans = 0;
	}
	else {
		ans = my_gcd(prefix[ind - 1], suffix[ind + 1]);
	}

	cout << ans << "\n";
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	prefix.push_back(arr[0]);
	suffix.push_back(arr[n - 1]);
	for (int i = 1; i < n; i++) {
		prefix.push_back(my_gcd(prefix[i - 1], arr[i]));
	}
	for (int i = n - 2; i >= 0; i--) {
		suffix.push_back(my_gcd(suffix[i + 1], arr[i]));
	}
	int m, ind;
	cin >> m;
	while (m--) {
		cin >> ind;
		func(ind);
	}

}


// TC -->
// O(log(max element)(n+m))
// n--> size of the array
// m--> no of queries


//O(nmlog(max element)) ---> O(log(max element)(n+m))