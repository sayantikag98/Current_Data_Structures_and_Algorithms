#include<bits/stdc++.h>
using namespace std;

unordered_set<string> visited;
unordered_set<string> visited1;
unordered_map<string, unordered_set<string>> adjList;
queue<string> q;

void print(){
	for(auto iter = adjList.begin(); iter != adjList.end(); iter++){
		cout<<iter->first<<" -> ";
		for(auto it = (iter->second).begin(); it != (iter->second).end(); it++){
			cout<<*it<<", ";
		}
		cout<<"\n";
	}
}


void DFS_rec(string str){
	cout<<str<<" ";
	unordered_set <string> adjNodes = adjList.at(str);
	for(auto it = adjNodes.begin(); it!=adjNodes.end(); it++){
		string temp = *it;
		if(visited.find(temp) == visited.end()){
			visited.insert(temp);
			DFS_rec(temp);
		}
	}
}

void DFS_iter(string str){
	stack<string> nodes;
	unordered_set<string> vis;
	nodes.push(str);
	vis.insert(str);
	cout<<nodes.top()<<" ";
	while(nodes.size()!=0){
		for(auto it = (adjList.at(nodes.top())).begin(); it != (adjList.at(nodes.top())).end();){
			string temp = *it;
			if(vis.find(temp)==vis.end()){
				vis.insert(temp);
				nodes.push(temp);
				cout<<nodes.top()<<" ";
				it = (adjList.at(nodes.top())).begin();	
			}
			else{
				it++;
			}	
		}
		nodes.pop();
	}
}


void BFS_rec(string str){
	unordered_set <string> adjNodes = adjList.at(str);
	for(auto it = adjNodes.begin(); it!=adjNodes.end(); it++){
		string temp = *it;
		if(visited1.find(temp)==visited1.end()){
			cout<<temp<<" ";
			q.push(temp);
			visited1.insert(temp);
		}
	}
	q.pop();
	if(q.size()>0){
		BFS_rec(q.front());
	}
	

}

void BFS_itr(string str){
	while(q.size()){
		unordered_set <string> adjNodes = adjList.at(str);
		for(auto it = adjNodes.begin(); it!=adjNodes.end(); it++){
			string temp = *it;
			if(visited1.find(temp)==visited1.end()){
				cout<<temp<<" ";
				q.push(temp);
				visited1.insert(temp);
			}
		}
		str = q.front();
		q.pop();
		
	}
	
	

}


void createAdjList(){
	unordered_set <string> s{"B","F"};
	adjList.insert(make_pair("A", s));
	s.clear();
	s = {"A", "C"};
	adjList.insert(make_pair("B",s));
	s.clear();
	s = {"B", "D"};
	adjList.insert(make_pair("C",s));
	s.clear();
	s = {"C", "E"};
	adjList.insert(make_pair("D",s));
	s.clear();
	s = {"D", "F"};
	adjList.insert(make_pair("E",s));
	s.clear();
	s = {"A", "E"};
	adjList.insert(make_pair("F",s));
}

int main(){

		createAdjList();
		print();
		string str = "A";
		visited.insert(str);
		visited1.insert(str);
		q.push(str);
		cout<<"RECURSIVE APPROACH"<<endl;
		DFS_rec(str);
		cout<<endl;
		cout<<"ITERATIVE APPROACH"<<endl;
		DFS_iter(str);
		cout<<endl;	
		char ch = str[0];
		// string s = to_string(ch);
		cout<<str<<" ";
		BFS_rec(str);
		cout<<endl;
		while(q.size()){
			q.pop();
		}
		visited1.clear();
		q.push(str);
		visited1.insert(str);
		cout<<str<<" ";
		BFS_itr(str);
		queue<int> q2;
		for(int i = 3; i<10; i++){
			q2.push(i);
		}
		cout<<q2.back();

}




