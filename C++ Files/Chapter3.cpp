// //#include<iostream>
// //using namespace std;
// //
// //int main(){
// //    string str;
// //    int m1, m2, m3, avg;
// //    cout << "Enter your name : " << endl;
// //    getline(cin,str);
// //    cout << "Enter your marks in three subjects : " << endl;
// //    cin >> m1 >> m2 >> m3;
// //    avg = (m1 + m2 + m3) / 3;
// //    cout << "Your name is : " << str;
// //    cout << endl << "And your average marks are " << avg << endl;
// //    return 0;
// //}

// //#include<iostream>
// //using namespace std;
// //
// //int main(){
// //    int f;
// //    cin >> f;
// //    int c = (f - 32) / 9;
// //    cout << c;
// //    for (int i = 0; i <= 100; i++){
// //        cout << i << endl;
// //    }
// //    return 0;
// //}

// //#include<iostream>
// //using namespace std;
// //
// //int main(){
// //    char ch;
// //    cin >> ch;
// //    decltype(ch) dh;
// //
// //}

// //#include<iostream>
// //using namespace std;
// //
// //int main(){
// //    char ch;
// //    cout << "Enter any character and number." << endl;
// //    cin >> ch;
// //
// //    if(islower(ch)){
// //        cout << "Character is in Lower case.";
// //    }
// //    else if(isupper(ch)){
// //        cout << "Character is in Upper case.";
// //    }
// //    else{
// //        cout << "Character is numeric.";
// //    }
// //}

// // ABCD Triangle with increasing by each row
// //#include<iostream>
// //using namespace std;
// //int main( ){
// //    int n;
// //    cin >> n ;
// //    int i = 1;
// //
// //    while (i <= n){
// //        int j = 1;
// //        while (j <= i){
// //            char ch = 'A' + j - 1;
// //            cout << ch;
// //            count += 1;
// //
// //            j += 1;
// //        }
// //        cout << endl;
// //        i += 1;
// //    }
// //}

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int b = 1;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << b << " ";
            j += 1;
            b += 1;
        }

        cout << endl;
        i += 1;
    }
}