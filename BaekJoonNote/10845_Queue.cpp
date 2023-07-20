#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

//큐 백준 10845번
using namespace std;
vector<char> editor;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	queue<int> q;
	string str;
	int count;
	cin >> count;
	while (count--) {
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			q.push(num);
		}
		else if (str == "front") {
			if (q.empty()) cout << -1 << "\n";
			else cout << q.front() << "\n";
		}
		else if (str == "back") {
			if (q.empty()) cout << -1 << "\n";
			else cout << q.back() << "\n";
		}
		else if (str == "pop") {
			if (q.empty()) cout << -1 << "\n";
			else {
				cout << q.front()<<"\n";
				q.pop();
			}
		}
		else if (str == "size") {
			cout << q.size() << "\n";
		}
		else if (str == "empty") {
			if (q.empty()) {
				cout << 1 <<"\n";
			}
			else cout << 0 << "\n";
		}
	}
	return 0;
}