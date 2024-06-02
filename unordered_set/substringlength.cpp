// /*
//  *Unordered Set to Solve Largest Substring with no repetition

//  * Theory at end of prog 
// */

#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

// #define str "au"



class Solution{

public:
    int lengthOfSubstring( string s){
        int n = s.length();
        int maxx = 0;
        int right =0, left =0;
        unordered_set <char> AlSet;
        for( right =0; right<n; right++){
            if (!(AlSet.count(s[right]))){ // count of the char is 0 in set
                AlSet.insert(s[right]);
                maxx = max(maxx, right - left +1);
            }else {
                while(AlSet.count(s[right])){
                    left++;
                    AlSet.erase(s[left]);
                }
                AlSet.insert(s[right]);
            }
        }
        return maxx;
    }
};

int main(){

    vector <string> strs = {"Auu", "ffff", "Divyansh", "kooki", "supper"};
    Solution A;
    // int n = A.lengthOfSubstring(str);
    // cout<<n<<str<<endl;

    for(string x: strs){
        int n = A.lengthOfSubstring(x);
        cout<<x<<": "<<n<<endl;
    }
}


// ### Unordered Set in C++

// An unordered set is a container in the C++ Standard Library that stores unique elements in no particular order. It is part of the `<unordered_set>` header. Internally, it uses a hash table to manage the elements, which allows for average constant time complexity for insertions, deletions, and lookups.

// #### Key Features

// - **Unique Elements**: Each element in an unordered set must be unique.
// - **No Order**: Elements are not stored in any specific order.
// - **Fast Operations**: Average O(1) time complexity for insertion, deletion, and lookup operations due to hash table implementation.

// #### Main Methods

// 1. **Constructor**
//    - **Default Constructor**: `unordered_set<T> uset;`
//    - **Initializer List Constructor**: `unordered_set<T> uset = {value1, value2, value3};`
//    - **Copy Constructor**: `unordered_set<T> uset2(uset1);`
//    - **Move Constructor**: `unordered_set<T> uset3(std::move(uset2));`

// 2. **Insertion**
//    - **Insert Single Element**: `uset.insert(value);`
//    - **Insert with Hint**: `uset.insert(uset.begin(), value);`
//    - **Insert Range**: `uset.insert(first, last);`

// 3. **Deletion**
//    - **Erase by Iterator**: `uset.erase(iterator);`
//    - **Erase by Value**: `uset.erase(value);`
//    - **Erase by Range**: `uset.erase(first, last);`
//    - **Clear**: `uset.clear();`

// 4. **Lookup**
//    - **Find**: `auto it = uset.find(value);`
//    - **Count**: `size_t count = uset.count(value);`
//    - **Contains (C++20)**: `bool exists = uset.contains(value);`

// 5. **Size and Capacity**
//    - **Size**: `size_t size = uset.size();`
//    - **Empty**: `bool isEmpty = uset.empty();`
//    - **Max Size**: `size_t maxSize = uset.max_size();`

// 6. **Hash Policy**
//    - **Load Factor**: `float lf = uset.load_factor();`
//    - **Max Load Factor**: `uset.max_load_factor(f);`
//    - **Rehash**: `uset.rehash(n);`
//    - **Reserve**: `uset.reserve(n);`

// 7. **Iterators**
//    - **Begin**: `auto it = uset.begin();`
//    - **End**: `auto it = uset.end();`
//    - **CBegin**: `auto it = uset.cbegin();`
//    - **CEnd**: `auto it = uset.cend();`

// #### Abstract Data Type (ADT)

// An unordered set is an abstract data type that provides operations to:
// - **Insert** an element.
// - **Delete** an element.
// - **Check** if an element is present.
// - **Retrieve** elements.

// This ADT does not maintain any specific order of the elements.

// #### Example Usage

// ```cpp
// #include <iostream>
// #include <unordered_set>

// int main() {
//     // Create an unordered set of integers
//     std::unordered_set<int> uset = {1, 2, 3, 4, 5};

//     // Insert an element
//     uset.insert(6);

//     // Erase an element
//     uset.erase(3);

//     // Check if an element exists
//     if (uset.find(2) != uset.end()) {
//         std::cout << "2 is in the set" << std::endl;
//     }

//     // Iterate through the unordered set
//     for (const auto& elem : uset) {
//         std::cout << elem << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
// ```

// ### Summary

// An unordered set in C++ is a powerful container for managing a collection of unique elements with efficient insertion, deletion, and lookup operations. It is suitable for scenarios where the order of elements is not important, but quick access and modification are essential.