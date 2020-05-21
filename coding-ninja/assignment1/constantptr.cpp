#include <iostream>
using namespace std;

int main(){
    const int p = 5;
    int const *q = &p;
    int *ptr = 0;
    int a = 10;
    *ptr = a;
    cout << *ptr << endl;
    //`int const * const q = &p;
    //int * const q = &p;
//    p++;
    q++;
//    (*q)++;
    cout << p << endl;
    return 0;
}
