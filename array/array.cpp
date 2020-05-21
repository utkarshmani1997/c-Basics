#include <iostream>
using namespace std;

int main() {
  
    int rlen = 0;
    int clen = 0;
    cout << "row length: ";
    cin >> rlen;
    int** arr = new int*[rlen];
    int colLen[rlen];
    for (int i=0; i< rlen; i++) {
        cout << "column length: ";
        cin >> clen;
        arr[i] = new int[clen];
        for (int j=0; j<clen; j++) {
            cin >> arr[i][j];
        }
        colLen[i] = clen;
    }

    for (int i=0; i<rlen; i++) {
        int col = colLen[i];
        for (int j=0; j<col; j++) {
            cout << "address: " << &arr[i][j] << "value: " << arr[i][j] << endl;
        }
    }
    return 0;
}
