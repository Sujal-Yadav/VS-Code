// #include<iostream>
// using namespace std;
// int main(){
//     int c, d, e;
//     cin >> c >> d >> e;
//     int arr[c][d][e];

//     for(int i = 0; i < c; i++){
//         for(int j = 0; j < d; j++){
//             for(int k = 0; k < e; k++){
//                 cin >> arr[i][j][k];
//             }
//         }
//     }

//     for(int i = 0; i < c; i++){
//         for(int j = 0; j < d; j++){
//             for(int k = 0; k < e; k++){
//                 cout << arr[i][j][k] << " ";
//             }
//              cout << endl;
//         }
//         cout << endl;

//     }
// }

// #include <iostream>
// using namespace std;
// void printArray (int* a, int n){
//     cout << "Array: ";
//     for(int i = 0; i < n; i++){
//         cout << a[i] << " ";
//     }
// }

// int delArr(int* a, int c, int n){
//     int i;
//     for(i = 0; i < n; i++){
//         if(a[i] == c){
//             break;
//         }
//     }
//     if(i < n){
//         for(int j = i; j < n - 1; j++){
//             a[j] = a[j + 1];
//         }
//     }
//     return 0;
// }

// int insertEle(int *a, int d,int a, int n){
//     int i;
//     for(i = 0; i < n; i++){
//         a[i] = d;
//         break;

//     }
// }
// int main(){
//     int c;
//     cin >> c;
//     int a[] = {4,-3,7,1,0,-7};
//     int n = sizeof(a) / sizeof(a[0]);
//     printArray(a, n);
//     delArr(a, c, n);
//     printArray(a, n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a[] = {1,-4,6,4,-7,8,9};
//     cout << "Traverse using array's data: ";
//     for(int x : a){
//         cout << x << " ";
//     }
//     cout << endl;

//     cout << "Transverse using auto keyword: ";
//     for(auto x : a){
//         cout << x << " ";
//     }
// }

// #include<iostream>
// using namespace std;

// struct Student{
//     int x;
//     string y;
//     char z;
//     void print(Student v){
//         cout << "Integer: " << v.x << " Name: " << v.y << " Grade: " << v.z;
//     }
// };

// // void Student :: print(Student v){
    
// // }

// int main(){
//     Student s;
//     s.x = 2;
//     s.y = "Sujal Yadav";
//     s.z = 'S';

//     s.print(s);
    
// }

// #include <iostream>
// using namespace std;
// struct Value{
//     int x;
//     string y;
// };

// int main(){
//     Value v1;
//     v1.x = 20;
//     v1.y = "Yadav";
//     Value* v2= &v1;

//     cout << v2 -> x << v2 -> y;
    
//     int a = 10;
//     int *ptr = &a;
//     cout << *ptr;
// }


// #include <iostream>
// using namespace std;

// union Sam{
//     int x;
//     double y;
// };

// int main(){
//     union Sam s;
//     cin >> s.x;
//     cout << s.x;

//     cout << endl;

//     cin >> s.y;
//     cout << s.y;
// }

// #include <iostream>
// using namespace std;

// int fact(int n){
//     if(n < 0){
//         return -1;
//     }

//     else if(n == 0){
//         return 1;
//     }

//     else{
//         n = n*fact(n-1);
//         return n;
//     }
// }

// int main(){
//     int n, factorial;
//     cout << "Enter any number: ";
//     cin >> n;

//     factorial = fact(n);
//     cout << factorial;
   
// }

#include <iostream>
using namespace std;

void Preverse(int a[], int i, int j){
    if(i == j){
        cout << a[i];
    }

    else{
        cout << a[j]  << " ";
        Preverse(a, i, j-1);
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7};
        Preverse(a, 0, 3);
        return 0;
}