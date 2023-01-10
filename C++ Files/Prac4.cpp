#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string empty = "";
    int remain = 0;
    string X[] = { empty, "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };

    string Y[] = {"Twenty ", "Thirty ", "Forty ","Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety " };
    string Z[] = {"hundred ", "thousand ", "lakh ", "crore "};

    
        if(n >= 10000000) {empty = empty + Z[3];
                            int b = n / 10000000;
                            n = n - b * 10000000;
                            cout << empty;
        }
    
    return 0;
}