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

int sum(int n)	//连续n个数求和
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

void hanoi(int n, char a, char b, char c)	//借助b柱将n个盘子从a柱移动到c柱
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);	//借助c柱将n-1盘子从a移动到b
		move(a, c);
		hanoi(n - 1, b, a, c);	//借助a柱将n-1个盘子从b移动到c
	}
}

int main()
{
	int n;
	cout << "请输入盘子数：";
	cin >> n;
	cout << endl;
	cout << "移动" << n << "个盘子过程" << endl;

	hanoi(n, 'A', 'B', 'C');

	cout << "总共移动了" << sum1 << "次" << endl;

	return 0;
}