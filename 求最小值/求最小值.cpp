// 求最小值.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include "stdio.h"
using namespace std;

int min(int n, int num[]);

int main()
{

	cout << "ProgramF"  ;


restart:
	do {
		int n , i,count;

		cout <<endl << endl << "Number of n :";
		scanf("%d", &n);
		

		if (n == 0)
		{
			cout << "Don't lie to me , or you are a fucking guy" << endl;
			goto restart;
		}

		int *num = new int[n];

		cout << endl << n << " Numbers :";

		for (i = 0;i < n; i++)
		{
			cin >> num[i];
			
		}

		int ans = min(n, num);

		printf("\n最小者為：%d\n", ans);
		delete num;
	} while (true);

	system("pause");

	return 0;
}

int min(int n, int num[])
{
	int i,ans = 0;

	for (i = 1;i < n;i++)
	{
		if (num[ans] > num[i])
			num[ans] = num[i];
	}
	return num[ans];
}

