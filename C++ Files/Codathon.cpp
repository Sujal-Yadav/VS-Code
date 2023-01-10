#include <iostream>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

bool strCheck(string a, string b)
{
    for (int i = 0; i < a.length() && i < b.length(); i++)
    {
        if (a[i] != b[i] && (isdigit(b[i]) == false))
        {
            return false;
        }
        else if (a[i] != b[i] && isdigit(b[i]))
        {
            for (int j = i; j < a.length(); j++)
            {
                if (a[j] == b[i + 1])
                {
                    if (j - i >= (int)b[i])
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
int main()
{
    int tt;
    cin >> tt;
    for (int l = 0; l < tt; l++)
    {
        int N, M;
        cin >> N >> M;
        string s1, s2;
        cin >> s1 >> s2;
        if (strCheck(s1, s2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
