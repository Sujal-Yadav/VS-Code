//Bitwise Operator
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 4;
//     int b = 6;
    
//     cout << "a & b " << (a & b) << endl;
//     cout << "a | b " << (a | b) << endl;
//     cout << "a ^ b " << (a ^ b) << endl;
//     cout << "~a " << (~a) << endl;

// } 

// Left and Right Shift
// #include<iostream>
// using namespace std;
// int main(){
//     // int a = 12541545150<<1;
//     // int b = 10151446614>>1;
//     // cout << "Left Shift " << a << endl;
//     // cout << "Right Shift " << b << endl;
//     int i = 7;

//     cout << "i++ : " << i++ << endl; // 7
//     cout << "++i : " << ++i << endl; // 9
//     cout << "i-- : " << i-- << endl; // 9
//     cout << "++i : " << --i << endl; // 7
   
// }

// Practice Questions 
// Question - 1
// #include<iostream>
// using namespace std;
// int main (){
//     int a, b = 1;
//     a = 10;
//     if(++a) // a = 11
//         cout << b; // 1
//     else
//         cout << ++b; // b = 2
// }

//Question - 2
// #include<iostream>
// using namespace std;
// int main(){
//     int number = 3;
//     cout << (25 * (++number)); // 25 * 4 = 100
// }

//Question - 3
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 1;
//     int b = 2;

//     if(a-- > 0 && ++b > 2){
//         cout << "Stage1 - Inside if "; // This will be printed
//     }
//     else{
//         cout << "Stage2 - Inside else ";
//     }
//     cout << a << " " << b << endl; // a = 0 and b =  3
// }

//Quetion - 4
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 1;
//     int b = 2;

//     if(a-- > 0 || ++b > 2){
//         cout << "Stage1 - Inside if "; // This will be printed
//     }
//     else{
//         cout << "Stage2 - Inside else ";
//     }
//     cout << a << " " << b << endl; // a = 0 and b =  2
// }

//Question - 5
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 1;
//     int b = a++;
//     int c = ++a;
//     cout << b << endl; // b = 1
//     cout << c; // c = 3
// }

//FOR LOOP
#include<iostream>
using namespace std;
int main(){
    // int a;
    // cout << "Please enter the value of a: " << endl;
    // cin >> a;
    // cout << "Printing count from 1 to a:" << endl;
    // int i = 1;
    // for(; ;){
    //     if (i <= a){
    //         cout << i << endl;
    //     }
    //     else {
    //         break;
    //     }
    //     i++;
    // }

    // for(int a = 0, b = 1; a>=0 && b>=1; a--, b--){
    //     cout << a << " " << b;
    // }
    // int n;
    // cout<< "Please enter any value of n: ";
    // cin >> n;
    // int sum = 0;
    // for(int i = 0; i <= n; i++){
    //     sum += i;
    // }
    // cout << "Sum is: " << sum;

    //FIBONACCI SERIES
    // int n;
    // cout<< "Please enter any value of n: ";
    // cin >> n;
    // int a = 0;
    // int b = 1;
    // cout << a << " ";    
    // cout << b << " "; 
    // // int sum = 0;
    // for(int i = 0; i <= n; i++){
    //     int sum = a + b;
    //     a = b;
    //     b = sum;
    //     cout << sum << " ";
    // }  

    //PRIME NUMBER
    // int a;
    // cout << "Please enter a value of a: ";
    // cin >> a;
    // bool isPrime = 1;
    // for(int i = 2; i < a; i++){
    //     if(a%i == 0){
    //         // cout << "Not a Prime Number" << endl;
    //         isPrime = 0;
    //         break;
    //     }

    // }
    // if(isPrime == 0){
    //     cout << "Not a Prime Number" << endl;
    // }
    // else{
    //     cout << "Is a Prime Number";
    // }

    //CONTINUE STATEMENT
    //  int a = 5;
    //  for (int i = 0; i < a; i++){
    //     cout << "Hi" << endl;
    //     cout << "Hey" << endl;
    //     continue;
    //     cout << "Unreachable" << endl;
    //  }

    //Question Practice FOR LOOP
    //Question - 1
    // for(int i = 0; i <= 5; i--){
    //     cout << i << " ";
    //     i++; //Infinite loop
    // }

    //Question - 3
    // for (int i = 0; i <= 15; i += 2)
    // {
    //     if(i&1){
    //         cout << i <<" ";
    //         continue;
    //     }
    //     i++;
    // }
    
    //Question - 4
    // for(int i = 0; i < 5; i++){
    //     for(int j = 1 ; j <= 5; j++){
    //         cout << i << " " << j << endl;
    //     }
    // }

    //Question - 5
    // for(int i = 0; i < 5; i++){
    //     for (int j = i; j <= 5; j++){
    //         if(i + j == 10){
    //             break;
    //         }
    //         cout << i << " " << j << endl;
    //     }
    // }
    int x;
    cin >> x;
    int a = x%10;
    cout << a;
}