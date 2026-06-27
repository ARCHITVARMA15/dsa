#include <iostream>
using namespace std;

int main(){
    char str[100] ;
    cout << "Enter character array";

    cin.getline(str,100,'$');

    cout <<"output: " <<str << endl;


    return 0;
}

