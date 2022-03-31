// Modifiers in vector 
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
   
int main() 
{ 
	// two vectors to perform swap 
    vector<int> obj1, obj2; 
    
    obj1.push_back(2); 
    obj1.push_back(4); 
    
    obj2.push_back(6); 
    obj2.push_back(8); 
   
    cout << "nnVector 1: "; 
    for (int i = 0; i < obj1.size(); i++) 
        cout << obj1[i] << " ";
    cout << endl;
   
    cout << "nVector 2: "; 
    for (int i = 0; i < obj2.size(); i++) 
        cout << obj2[i] << " ";
    cout << endl;

     // Swaps obj1 and obj2 
    obj1.swap(obj2); 
    //In Python: obj1, obj2 = obj2, obj1
   
    cout << "nAfter Swap nVector 1: "; 
    for (int i = 0; i < obj1.size(); i++) 
        cout << obj1[i] << " "; 
    cout << endl;
   
    cout << "nVector 2: "; 
    for (int i = 0; i < obj2.size(); i++) 
        cout << obj2[i] << " ";  
    cout << endl;


	return 0;

}