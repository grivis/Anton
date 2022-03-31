#include<iostream>
#include<vector>
using namespace std;

// the functions returns a 2D vector
// of size n X n and all elements
// equals to x
vector<vector<int>> Return2DVector(int n, int x){
	vector<vector<int>> v;
	
	for(int i=0;i<n;++i){
		
		v.push_back(vector<int>());
		for(int j=0;j<n;++j){
			v[i].push_back(x);
		}	
		
	}
	
	return v;
}

int main()
{
	vector<vector<int>> v;
	int n,x;
	
	n = 4;
	x = 2;
	v = Return2DVector(n,x);
	
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout<<v[i][j]<<' ';
		}	
		cout<<endl;
	}
	
}