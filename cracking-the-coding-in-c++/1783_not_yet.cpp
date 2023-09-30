// ���� �¶��� ���� 1783�� https://www.acmicpc.net/problem/1783
// ���� �ð� : 2��
// ���� �ð� : ms

// �湮�� �� �ִ� ĭ�� �ִ� ����

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	// vector<vector<int>> board(N, vector<int>(M));

	// �̵� Ƚ���� �ּ� 5�� �̻��̸�,
	if (N >= 3 && M >=7)
	{
		// �̵� ��� 4������ ��� �� ���� �̿��� �̵�
		
		/*2ĭ ����, 1ĭ ������
		1ĭ ����, 2ĭ ������
		1ĭ �Ʒ���, 2ĭ ������
		2ĭ �Ʒ���, 1ĭ ������*/
		M -= 6;

		// �� �ൿ ��, ���� ĭ�� �̵�
		cout << M + 1;
	}
	// �̵� Ƚ���� 5�� �̸��̸�,
	else
	{
		// �̵� ��� 4������ ��� ��������� �ʾƵ� ��.

		// N�� 1�� ���, 2�� ���, 3�̻��� ��츦 ���� ����
		// �� ���� ����Ʈ�� ��/�Ʒ��� ������ �� �־� ���� ������ �ٽ� ���ƿ� �� ����.

		// N�� 1�̸�,
		if (N == 1)
		{
			// ���� ������ �湮 ����
			cout << 1;

			return 0;
		}
		// N�� 2�̸�,
		else if (N == 2)
		{
			// 1ĭ ��/�Ʒ��θ� ���� �� �����ʸ� �����ϸ� ��.
			// ��/�Ʒ� 1ĭ�̸�, �������� 2ĭ �̵�������
			// M / 2�� �� + 1(���� ����)�� �湮�� �� �ִ� �ִ� ĭ�� ����
			cout << M / 2 + 1;
		}
		// N�� 3 �̻��̸�,
		else
		{
			// 1ĭ, 2ĭ ��/�Ʒ� ��� ����
			// �������δ� �̵��� �� �����Ƿ�, �������� �ּ� �̵� ĭ���� 1ĭ�� �̿� �� ��/�Ʒ� 2ĭ, ������ 1ĭ �̵�
			cout << M + 1;
		}
	}
}