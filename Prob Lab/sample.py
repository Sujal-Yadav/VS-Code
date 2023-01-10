import pyautogui
import time
time.sleep(5)
pyautogui.write("""#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
cin >> arr[i];
}
int g, a;
cin >> g >> a;
int i = g - 1;
int j = a - 1;
while (i != j)
{
i = (i + 1) % n;
j = (j + 2) % n;
}
cout << "City number " << arr[i]<<endl;
return 0;
}
""")