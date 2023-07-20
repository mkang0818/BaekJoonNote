#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

stack<int> s;
vector<char> v;
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int count, cnt = 1;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int num;
		cin >> num;

		while (cnt <= num) {
			v.push_back('+');
			s.push(cnt);
			cnt++;
		}

		if (num == s.top()) {
			v.push_back('-');
			s.pop();
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}