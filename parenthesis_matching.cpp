#include <bits/stdc++.h>
using namespace std;

bool check(string st)
{
    stack<char> s;
    for (int i = 0; i < st.length(); i++)
    {
        char ch = st[i];
        if (ch == '{' || ch == '[' || ch == '(')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty())
            {
                char c = s.top();
                if ((ch == ')' && c == '(') || (ch == ']' && c == '[') || (ch == '}' && c == '{'))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    while (!s.empty())
        return false;
    return true;
}
int main()
{
    string st = "{(()[])}";
    if (check(st))
    {
        cout << "Valid expression";
    }
    else
    {
        cout << "Invalid expression";
    }
}