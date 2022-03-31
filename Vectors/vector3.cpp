#include <iostream> 
#include <vector> 
   
using namespace std; 
   
int main() 
{ 
    vector<int> vec1; 
   
    for (int i = 1; i <= 10; i++) 
        vec1.push_back(i); 
   
    cout << "Understanding begin() and end() function: " << endl; 
    for (auto i = vec1.begin(); i != vec1.end(); ++i) 
        cout << *i << " "; 
    cout << endl;
    //In this example i is the pointer to vec1 elements
    //*i - take the value at address contained in i
    
    //In Python
    /*
	vec1 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
	for i in vec1:
		print(i)
    */

    cout << "The vector elements are: "; 
    for (int i = 0; i < vec1.size(); i++) 
        cout << vec1[i] << " "; 
    //elements from a vector can be retrived in the same manner
    //as elements of an array - using indices

    cout << endl;
 
    return 0; 
}