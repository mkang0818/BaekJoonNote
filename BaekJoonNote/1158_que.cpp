#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

//�似Ǫ�� ť ���� 1158��
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

	while (q.size() > 1) { //Que������ �� ���� ���

		for (int i = 1; i < k; i++) { //k��°�� ���
			int tmp = q.front();
			q.pop(); //�����ߴٰ� ����
			q.push(tmp);
		}
		cout << q.front() << ", "; //���
		q.pop(); //����
	}

	cout << q.front() << ">";
	return 0;
}