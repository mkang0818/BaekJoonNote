#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

//������ ���� 1406��
using namespace std;
vector<char> editor;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	stack<char> right;
	stack<char> left;
	string str;
	cin >> str; //�⺻ ���ڿ�

	for (int i = 0; i < str.size(); i++) left.push(str[i]); //���� ���ÿ� �߰�

	int count;
	cin >> count;
	while (count--) {
		char cmd;
		cin >> cmd;
		
		if (cmd == 'P') { //���� �߰�
			char c;
			cin >> c;
			left.push(c); //�⺻ ����
		}
		else if(cmd == 'L') //Ŀ�� �����̵�
		{
			if (!left.empty()) { //�����ʿ� ���� top�߰�
				right.push(left.top());
				left.pop();
			}
		}
		else if (cmd == 'D') //Ŀ�� ������ �̵�
		{
			if (!right.empty()) { //���ʿ� ������ top�߰� 
				left.push(right.top());
				right.pop();
			}
		}
		else if (cmd == 'B') //���� ���� ����
		{
			if (!left.empty()) {
				left.pop();
			}
		}
	}

	// ���� ����(ABCD) A���� ����ؾ��ϹǷ� ���������� �̵��� ���� ���ʺ��� ���
	while (!left.empty()) { //������ �������� ��� �̵�
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) { //���
		cout << right.top();
		right.pop();
	}
	return 0;
}