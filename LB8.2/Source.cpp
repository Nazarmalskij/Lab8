#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
 #define TESTING

using namespace std;

string clearString(string s)
{
    int spacePos;
    if (s.find(' ', 0) == -1)
    {
        return s;
    }
    else
    {
        spacePos = s.find(' ', 0);
    }

    bool a = s.find(' ', 0) == 1;

    string head;
    string tail = s.substr(spacePos, s.length() - 1);

    for (int i = 0; i < spacePos; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' ||
            s[i] >= 'À' && s[i] <= 'ß' || s[i] >= 'à' && s[i] <= 'ÿ' ||
            s[i] == '¨' || s[i] == '¸')
        {
            head += s[i];
        }
    }

    string res = head + tail;
    s = res;
    return s;
}


int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << clearString(str) << endl;

    return 0;
}
