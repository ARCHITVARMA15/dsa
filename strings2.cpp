#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="apna college"; //dynamic in nature - resize in runtime 
    string str2 = "btech";
    string str3 = str+str2;
    string s4;
    getline(cin, s4);
    cout << "output:" << str3 << endl;
    cout << "output:" << s4 << endl;


    //revrese a string 
    reverse(str.begin() , str.end()); //iterators 
    cout << str << endl;

    
    return 0;
}

