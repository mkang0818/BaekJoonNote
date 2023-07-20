#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

//스택 수열 백준 1874번
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

		//누적된 값 cnt가 입력값보다 작을 때 push
		while (cnt <= num) { //입력값과 누적값 비교
			v.push_back('+');
			s.push(cnt);
			cnt++; //누적값
		}
		//입력값이 가장 큰 수일때 pop
		if (num == s.top()) { //입력값과 스택에서 가장 큰 값과 비교
			v.push_back('-');
			s.pop();
		}
		else { //입력값이 top
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n"; //기호 출력
	}
}