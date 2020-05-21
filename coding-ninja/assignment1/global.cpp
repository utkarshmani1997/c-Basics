#include<iostream>
using namespace std;

int x = 1;

void print(){
    int x = 2;
    {
        int x = 3;
        int x = 5;
        cout << x << endl;
    }
}
int main(){
    print();
    return 0;
}
