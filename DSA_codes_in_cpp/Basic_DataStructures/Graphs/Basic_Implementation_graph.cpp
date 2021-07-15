#include<bits/stdc++.h>
using namespace std;

unordered_map<int, unordered_map <int, int>> adjList;

void print(){
	for(auto iter = adjList.begin(); iter!=adjList.end(); iter++){
		cout<<iter->first<<" -> [";
		for(auto it = (iter->second).begin(); it != (iter->second).end(); it++){
			cout<<"("<<it->first<<","<<it->second<<"), ";
		}
		cout<<"]\n";
	}
}

int main(){
	vector<pair<char,char>> edgeList {{'A','B'},{'A','D'},{'B','C'},{'B','D'},{'C','D'}};
	// edgeList.push_back(make_pair('A','B'));
	// edgeList.push_back(make_pair('A','D'));
	// edgeList.push_back(make_pair('B','C'));
	// edgeList.push_back(make_pair('B','D'));
	// edgeList.push_back(make_pair('C','D'));
	cout<<"[ ";
	for(auto iter = edgeList.begin(); iter!=edgeList.end(); iter++){
		cout<<"("<<iter->first<<", "<<iter->second<<"),";
	}
	cout<<"]\n";



	vector<vector<int>> adjMatrix;
	for(int i = 0; i<5; i++){
		vector<int> v;
		for(int j = 0; j<5; j++){
			v.push_back(j);
		}
		adjMatrix.push_back(v);
	}
	for(auto iter = adjMatrix.begin(); iter!=adjMatrix.end(); iter++){
		for(auto it = (*iter).begin(); it!=(*iter).end(); it++){
			cout<<*it<<" ";
		}
		cout<<"\n";
	}

	// unordered_map<int, unordered_set <int>> adjList;
	// unordered_set<int> adjNodes1{2,3};
	// unordered_set<int> adjNodes2{1,3};
	// unordered_set<int> adjNodes3{1,2};
	// adjList.insert(make_pair(1,adjNodes1));
	// adjList.insert(make_pair(2,adjNodes2));
	// adjList.insert(make_pair(3,adjNodes3));

	// for(auto iter = adjList.begin(); iter!=adjList.end(); iter++){
	// 	cout<<iter->first<<" -> ";
	// 	for(auto it = (iter->second).begin(); it != (iter->second).end(); it++){
	// 		cout<<*it<<" ";
	// 	}
	// 	cout<<"\n";
	// }


	
	
	int n_vertex;
	cin>>n_vertex;
	int vertex; 
	while(n_vertex--){
		cin>>vertex;
		int n_adj, adj_vertex, weight;
		cin>>n_adj;
		unordered_map<int,int> adjNodes;
		while(n_adj--){
			cin>>adj_vertex>>weight;
			adjNodes.insert({adj_vertex,weight});
		}
		adjList.insert({vertex,adjNodes});
	}

	print();
	

	if(adjList.find(4)!=adjList.end()){
		if(adjList[4].find(2)!=adjList[4].end()){
			adjList[4].erase(adjList[4].find(2));
		}
	}

	print();

	if(adjList.find(4)!=adjList.end()){
		adjList.erase(adjList.find(4));
	}
	
	for(auto iter = adjList.begin(); iter != adjList.end(); iter++){
		for(auto it = (iter->second).begin(); it != (iter->second).end(); it++){
			if((iter->second).find(4) != (iter->second).end()){
				(iter->second).erase((iter->second).find(4));
			}
		}
	}

	print();

	





}
