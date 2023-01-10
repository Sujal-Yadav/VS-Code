// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "Enter the Amount: ";
//     cin >> a;
//     switch(a >= 100){
//         case 1: {cout << "Number of 100 Rupees Note: ";
//                 int b = a / 100;
//                 a = a - b*100;
//                 cout << b << endl;
//         }
//     }
//     switch(a >= 50){
//         case 1: {cout << "Number of 50 Rupees Note: ";
//                 int c = a / 50;
//                 a = a - c*50;
//                 cout << c << endl;
//         }
//     }
//     switch(a >= 20){
//         case 1: {cout << "Number of 20 Rupees Note: ";
//                 int d = a / 20;
//                 a = a - d*20;
//                 cout << d << endl;
//         }
//     }
//     switch(a >= 1){
//         case 1: {cout << "Number of 1 Rupees Note: ";
//                 int e = a / 1;
//                 a = a- e*1;
//                 cout << e << endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<  "Enter any integer: ";
//     cin >> n;
//     while(n > 0){
//         switch(n){
//             case 1: {
//                 cout << "You entered this number: "<< n << endl;
//             }
            
//             case 2: {
//                 cout << "You entered this number: "<< n << endl;
//             }
//         }
//         exit(n);
//     } 
// }

// #include<iostream>
// using namespace std;

// int power(int a, int b){
//     int ans = 1;
//     for(int i = 1; i <= b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }

// int main(){
//     int a, b;
//     cin >> a >> b;
//  cout << power(a, b);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int apseries(int n){
//     int ans = (3 * n) + 7;
//     return ans;
// }

// int main(){
//     int n;
//     cout << "Enter any number: ";
//     cin >> n;

//     cout << "Answer is " << apseries(n);

// }

#include<iostream>
#include<math.h>
using namespace std;

void tobinary(int a){
    int ans = 0;
    int i = 0;
    while(a != 0){
        int bit = a&1;
        ans = (bit * pow(10, i)) + ans;
        a = a >> 1;
        i++;
    }
    cout << ans;
}

// int count(int a, int b){
//     int counter = 0;
//     for(int i = 0; i < 10; i++){
//         if(i == 1){
//             counter++;
//         }
//     }
//     return counter;

// }

int main(){

    int a ,b;
    cout << "Enter the value of a: ";
    cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;

    // cout << count(a, b);
    tobinary(a);
}