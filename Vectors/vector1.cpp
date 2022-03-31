// Modifiers in vector 
// https://www.edureka.co/blog/vectors-in-cpp/
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
   
int main() 
{ 
    // Assign vector 
    vector<int> vec;
    //We do not declare size! 
    //Can store any number of integers
   
    // fill the array with 12 seven times 
    vec.assign(7, 12); 
    //12 12 12 12 12 12 12
   
    cout << "The vector elements are: "; 
    for (int i = 0; i < 7; i++) 
        cout << vec[i] << " "; 
    //elements from a vector can be retrived in the same manner
    //as elements of an array - using indices

    cout << endl;

    // inserts 24 to the last position 
    vec.push_back(24); 
    //same as 'append()' in Python
    int s = vec.size();
    //how long is our vector now? 
    cout << "nThe last element is: " << vec[s - 1];
    //if s is the length, then the last available index is s-1 

    cout << endl;

     // prints the vector 
    cout << "nThe vector elements after push back are: "; 
    for (int i = 0; i < vec.size(); i++) 
    cout << vec[i] << " "; 
	
	//There are 8 elements now in our vector
	
	cout << endl;


	// removes last element 
    vec.pop_back(); 
    //for Python list this will be 'list.pop()'
   
    // prints the vector 
    cout << "nThe vector elements after pop_back are: "; 
    for (int i = 0; i < vec.size(); i++) 
        cout << vec[i] << " "; 
    cout << endl;

    // inserts 10 at the beginning 
    vec.insert(vec.begin(), 10); 
   
    cout << "nThe first element after insert command is: " << vec[0] << endl;

    // prints the entire vector 
    cout << "nThe vector elements after pop_back are: "; 
    for (int i = 0; i < vec.size(); i++) 
        cout << vec[i] << " "; 
    cout << endl;

    // Inserts 20 at the end 
    vec.emplace_back(20); 
    s = vec.size(); 
    cout << "nThe last element after emplace_back is: " << vec[s - 1]; 
    cout << endl;

    // erases the vector 
    vec.clear(); 
    cout << "nVector size after clear(): " << vec.size(); 
    cout << endl;

    return 0;
}