//Here is the client file.

/*
Three files make up the complete solution:
orederedpair.h -- the class itself
orderedpair.cpp -- implementation of methods for the class
client8.cpp -- runs an example of class usage



*/
#include <bits/stdc++.h> 
#include <vector> 
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "orderedvec.h"
#include "orderedvec.cpp"
using namespace std;
//using namespace cs_pairs;





int main() {

	OrderedPair p1(1, 2);
	OrderedPair p2(3, 4);

	p1.print();
	cout << endl;
	p2.print();
	cout << endl;

	cout << (p1 < p2) << endl;

	OrderedPair p3 = p1+p2;
	p3.print();
	cout << endl;

    

    return 0;
}