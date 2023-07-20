#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>

//DeQue 백준 10866번
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	deque<int> d;

	int count;
	cin >> count;
	while (count--) {
		string str;
		cin >> str;

		if (str == "push_back") { //입구 삽입
			int num;
			cin >> num;
			d.push_back(num);
		}
		else if (str == "push_front") { //출구 삽입
			int num;
			cin >> num;
			d.push_front(num);
		}
		else if (str == "pop_front") { //출구 삭제
			if (d.empty()) cout << -1 << "\n";
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (str == "pop_back") {//입구 삭제
			if (d.empty()) cout << -1 << "\n";
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (str == "size") { //크기
			cout << d.size() << "\n";
		}
		else if (str == "empty") { 
			if (d.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (str == "front") { //출구
			if (d.empty()) cout << -1 << "\n";
			else cout << d.front() << "\n";
		}
		else if (str == "back") {//입구
			if (d.empty()) cout << -1 << "\n";
			else cout << d.back() << "\n";
		}
	}
	return 0;
}