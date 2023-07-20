#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

//���� ���� ���� 1874��
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

		//������ �� cnt�� �Է°����� ���� �� push
		while (cnt <= num) { //�Է°��� ������ ��
			v.push_back('+');
			s.push(cnt);
			cnt++; //������
		}
		//�Է°��� ���� ū ���϶� pop
		if (num == s.top()) { //�Է°��� ���ÿ��� ���� ū ���� ��
			v.push_back('-');
			s.pop();
		}
		else { //�Է°��� top
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n"; //��ȣ ���
	}
}