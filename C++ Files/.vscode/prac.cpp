#include<iostream>
using namespace std;
int main( ){
    int a;
    cin >> a ;
    int i = 1, j = 1;
    while (i <= a){
        while (j <= a){
            cout << j;
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    return 0;
}