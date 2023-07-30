#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

//단어 뒤집기 2 백준 17413번
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	stack<char> s;
	string str, result;

	int i = 0;
	
	//입력받기
	getline(cin, str);
	str += ' ';
	int count = str.length();

	while (i <= count) {
		// < 발견햇을 때 stack을 사용하지않은 채 그대로 출력
		if (str[i] == '<') {
			//만약 스택에 문자가 남아있을 때
			if(!s.empty()) {
				while (!s.empty()) {
					result += s.top();
					s.pop();
				}
				result += '<';
				i++;
			}
			//> 기호가 나올때 까지 넣기
			while (str[i]!='>') {
				result += str[i++];
			}
			result += '>';
			i++;
		}
		else {
			s.push(str[i]);
			//띄워쓰기 발견 시
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

	//result 출력
	for (int i = 0; i < count; i++)
	{
		cout << result[i];
	}
	return 0;
}