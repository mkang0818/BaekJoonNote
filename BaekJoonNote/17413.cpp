#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

//�ܾ� ������ 2 ���� 17413��
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	stack<char> s;
	string str, result;

	int i = 0;
	
	//�Է¹ޱ�
	getline(cin, str);
	str += ' ';
	int count = str.length();

	while (i <= count) {
		// < �߰����� �� stack�� ����������� ä �״�� ���
		if (str[i] == '<') {
			//���� ���ÿ� ���ڰ� �������� ��
			if(!s.empty()) {
				while (!s.empty()) {
					result += s.top();
					s.pop();
				}
				result += '<';
				i++;
			}
			//> ��ȣ�� ���ö� ���� �ֱ�
			while (str[i]!='>') {
				result += str[i++];
			}
			result += '>';
			i++;
		}
		else {
			s.push(str[i]);
			//������� �߰� ��
			if (str[i] == ' ') {
				s.pop();
				while (!s.empty()) {
					result += s.top();
					s.pop();
				}
				result += ' ';
			}
			i++;
		}
	}

	//result ���
	for (int i = 0; i < count; i++)
	{
		cout << result[i];
	}
	return 0;
}