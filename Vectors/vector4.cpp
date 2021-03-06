#include <iostream> 
#include <vector> 
   
using namespace std; 
   
int main() 
{ 
    vector<int> vec1; 
   
    for (int i = 1; i <= 10; i++) 
        vec1.push_back(i); 
   
    cout << "Size of our vector: " << vec1.size() << endl; 
    cout << "nCapacity of our vector: " << vec1.capacity() << endl; 
    cout << "nMax_Size of our vector: " << vec1.max_size() << endl; 
   
    // resizes the vector size to 4 
    vec1.resize(4); 
   
    // prints the vector size after resize() 
    cout << "nSize of our vector after resize: " << vec1.size() << endl; 
   
    // checks if the vector is empty or not 
    if (vec1.empty() == false) 
        cout << "nVector is not empty"; 
    else
        cout << "nVector is empty"; 

    cout << endl;
   
    return 0; 
}