#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_set>
#include <string>

using namespace std;


void printing(vector <int> vecx){
    for(auto x: vecx)cout<<x<<" ";
    cout<<endl;
}

int main()
{

    cout<<"Hello world !!"<<endl;

    vector <int> vec1;//default constructor
    vector <int> vec2(10);//fill constructor
    vector <int> vec3(10,23);//fill constructor with value
    vector <int> vec4(vec3.begin(),vec3.end());//range constructor
    vector <int> vec5(vec4);//copy constructor
    vector <int> vec6(move(vec5));//move constructor

    vec1= vec3;//copy
    vec5 = move(vec1);//move

    //iterators--

    vector <char> vec = {'a','b','c','d','e'};

    for(auto it = vec.begin();it!= vec.end(); it++){
        cout << *it <<endl;
    }
    cout<<"Reverse:"<<endl;
    for(auto rit = vec.rbegin(); rit!= vec.rend(); rit++){
        cout<< *rit<<endl;
    }

    cout<<"Size: "<<vec.size()<<endl;
    cout<<"Max Size: "<<vec.max_size()<<endl;
    cout<<"Capacity: "<<vec.capacity()<<endl;

    vec.resize(10);
    cout<<"Resize: "<<vec.size()<<endl;
    vec.reserve(15);
    cout<<"Size: "<<vec.size()<<" Capacity: "<<vec.capacity()<<" After reserve 15"<<endl;
    cout<<"Is empty : "<<vec.empty()<<endl;
    vec.shrink_to_fit();
    cout<<"Capacity : "<<vec.capacity()<<endl;
    cout<<"EOF"<<endl;

    vector <int> vecc;
    cout<<vecc.empty()<<endl; //returns 1 as vecc is empty however if even vecc(1) is done ie. an empty vecc is created with 0 initialised everywhere it returns 0

    cout<<"Pos 2 :"<<vec[2]<<endl;
    cout<<"Pos 2 :"<<vec.at(2)<<endl;
    cout<<"Front :"<<vec.front()<<endl;
    cout<<"Last :"<<vec.back()<<endl;
    cout<<"Data :"<<vec.data()<<endl;

    vector <int> sec = {1,2,3,4,5};

    cout<<"Assignment push pop etc\n";
    sec.assign(5,10);
    printing(sec);
    sec.push_back(22);
    printing(sec);
    sec.pop_back();
    printing(sec);
    sec.insert(sec.begin(),11);
    printing(sec);
    sec.erase(sec.begin());
    printing(sec);
    //sec.clear();
    //sec.swap(vector <int> (3,7))

    cout<<"using for to print :";
    for(auto x:sec)cout<<x<<" ";
    cout<<endl;

    cout<<"Printing statements"<<endl;
    cout<<1<<endl;
    printing(vec1);
    cout<<2<<endl;   
    printing(vec2);
    cout<<3<<endl;
    printing(vec3);
    cout<<4<<endl;
    printing(vec4);
    cout<<5<<endl;
    printing(vec5);
    cout<<6<<endl;
    printing(vec6);
    
    //swapping
    vector <int> sec1,sec2;
    sec1 = {1,2,3,4};
    sec2 = {3,4,5,6,7,78};
    cout<<"Swapping: "<<endl;
    cout<<"sec1 ";
    for(auto x: sec1)cout<<x<<",";
    cout<<"\nsec2 ";
    for(auto x: sec2)cout<<x<<",";
    cout<<endl;
    swap(sec1,sec2);
    for(auto x: sec1)cout<<x<<",";
    cout<<endl;
    for(auto x: sec2)cout<<x<<",";
    
    return 0;
}