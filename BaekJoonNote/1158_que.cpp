#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

//요세푸스 큐 백준 1158번
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	queue<int> q; //Queue
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	cout << "<";

	while (q.size() > 1) { //Que마지막 전 까지 출력

		for (int i = 1; i < k; i++) { //k번째씩 출력
			int tmp = q.front();
			q.pop(); //삭제했다가 삽입
			q.push(tmp);
		}
		cout << q.front() << ", "; //출력
		q.pop(); //삭제
	}

	cout << q.front() << ">";
	return 0;
}