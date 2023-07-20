#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

//에디터 백준 1406번
using namespace std;
vector<char> editor;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	stack<char> right;
	stack<char> left;
	string str;
	cin >> str; //기본 문자열

	for (int i = 0; i < str.size(); i++) left.push(str[i]); //왼쪽 스택에 추가

	int count;
	cin >> count;
	while (count--) {
		char cmd;
		cin >> cmd;
		
		if (cmd == 'P') { //문자 추가
			char c;
			cin >> c;
			left.push(c); //기본 스택
		}
		else if(cmd == 'L') //커서 왼쪽이동
		{
			if (!left.empty()) { //오른쪽에 왼쪽 top추가
				right.push(left.top());
				left.pop();
			}
		}
		else if (cmd == 'D') //커서 오른쪽 이동
		{
			if (!right.empty()) { //왼쪽에 오른쪽 top추가 
				left.push(right.top());
				right.pop();
			}
		}
		else if (cmd == 'B') //왼쪽 문자 삭제
		{
			if (!left.empty()) {
				left.pop();
			}
		}
	}

	// 왼쪽 스택(ABCD) A부터 출력해야하므로 오른쪽으로 이동해 가장 안쪽부터 출력
	while (!left.empty()) { //오른쪽 스택으로 모두 이동
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) { //출력
		cout << right.top();
		right.pop();
	}
	return 0;
}