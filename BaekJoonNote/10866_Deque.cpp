#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>

//DeQue ���� 10866��
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

		if (str == "push_back") { //�Ա� ����
			int num;
			cin >> num;
			d.push_back(num);
		}
		else if (str == "push_front") { //�ⱸ ����
			int num;
			cin >> num;
			d.push_front(num);
		}
		else if (str == "pop_front") { //�ⱸ ����
			if (d.empty()) cout << -1 << "\n";
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (str == "pop_back") {//�Ա� ����
			if (d.empty()) cout << -1 << "\n";
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (str == "size") { //ũ��
			cout << d.size() << "\n";
		}
		else if (str == "empty") { 
			if (d.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (str == "front") { //�ⱸ
			if (d.empty()) cout << -1 << "\n";
			else cout << d.front() << "\n";
		}
		else if (str == "back") {//�Ա�
			if (d.empty()) cout << -1 << "\n";
			else cout << d.back() << "\n";
		}
	}
	return 0;
}