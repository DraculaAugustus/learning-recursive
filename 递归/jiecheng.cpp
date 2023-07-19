#include <iostream>
using namespace std;

int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}

int sum(int n)	//����n�������
{
	if (n == 0)
	{
		return 0;
	}
	return n + sum(n - 1);
}

int sum1 = 0;

void move(char m, char n)
{
	cout << m << "--->" << n << endl;
	sum1++;
}

void hanoi(int n, char a, char b, char c)	//����b����n�����Ӵ�a���ƶ���c��
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);	//����c����n-1���Ӵ�a�ƶ���b
		move(a, c);
		hanoi(n - 1, b, a, c);	//����a����n-1�����Ӵ�b�ƶ���c
	}
}

int main()
{
	int n;
	cout << "��������������";
	cin >> n;
	cout << endl;
	cout << "�ƶ�" << n << "�����ӹ���" << endl;

	hanoi(n, 'A', 'B', 'C');

	cout << "�ܹ��ƶ���" << sum1 << "��" << endl;

	return 0;
}