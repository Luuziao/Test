#include <iostream>
using namespace std;

int main(){
    int higgens = 5;
    int* pt = &higgens;

    cout <<"Value of higgens = " << higgens
        <<"; Address of higgens = " << &higgens
        <<"; Address of *pt = " << *pt
        << "; Value of pt = "<<pt << endl;
    long val = 1;
    long *ptr = &val;//ptr == &val
    long long num = (long long)&val;
    cout << num<<endl;
    cout << &val<<endl;
    
    return 0;
}