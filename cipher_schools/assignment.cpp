#include <bits/stdc++.h>
using namespace std;

string solve()
{
	string s;
	getline(cin, s);
	int n = s.size();
	stack<char>st;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			st.push(s[i]);
		else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
		{
			if (st.empty())
				return "NO";
			if ( (s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '[') )
				st.pop();
			else
				return "NO";
		}
	}
	if (st.empty())
		return "YES";
	return "NO";
}
int main()
{
	int t;
	cin >> t;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while (t--)
		cout << solve() << endl;
}