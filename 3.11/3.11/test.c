//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int N;
//	int n = 100;
//
//	scanf_s("%d", &N);
//	for (; n <= N; n++)
//	{
//		int a = n / 100;
//		int b = (n - a * 100) / 10;
//		int c = n - (n / 10) * 10;
//
//		if (n == pow(a, 3) + pow(b, 3) + pow(c, 3))
//			printf("%d\n", n);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int i, j;
//	for (i = n / 2,j=0; n > 1;j++)
//	{
//		i = n / 2;
//		if (i < (n - i))
//			n = n - i;
//		else
//			n = i;
//	}
//	printf("%d", j);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int T;
//	scanf_s("%d", &T);
//	int i;
//	int a[100];
//	for (i = 1; i <= T; i++)
//	{
//		scanf_s("%d", &a[i]);
//		int k;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int T;
//	int n, i;
//	scanf_s("%d", &T);
//	int a[200000];
//	for (i = 1; i <= T; i++)
//		scanf_s("%d", &a[i-1]);
//	for (i = 1; i <= T; i++)
//		printf("%d\n",a[i-1]-1);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int T;
	scanf_s("%d", &T);
	int t[10] = { 0 };
	int i;
	for (i = 1; i <= T; i++)
	{
		int n, k;
		int j;//c的下标
		scanf_s("%d", &n);
		scanf_s("%d", &k);
		int m = 1;
		long long a[10]={0};
		long long b[10]={0};
		long long c[10]={0};
		int d[10]={0};

		for (m=0; m < n; m++)
		{
			scanf_s("%lld", &a[m]);
		}
		for (m = 0; m < n; m++)
		{
			scanf_s("%lld", &b[m]);
		}
		for (m = 0; m < n; m++)
		{
			c[m] = b[m] - a[m];
		}
		long long max = c[0];
		int f = 0;//下标
		for (m = 0; m < n; m++)
		{
			for (j=0;j<n;j++)
			{
				if (c[j] >= max)
				{
					max = c[j];
					f = j;
				}
			}
			d[m] = f;
			c[f] = 0;
		}//找到下标
		for (m = 0; m < k; m++)
		{
			a[d[m]] = b[d[m]];

			//if (d[m] > 0)
			//{
			//	a[d[m]] = b[d[m]];
			//}
		}
		long long sum = 0;
		for (m = 0; m < n; m++)
		{
			sum =sum+ a[m];
		}
		t[i - 1] = sum;
	}
	for (i = 0; i < T; i++)
		printf("%d", t[i]);

	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int t;
//	scanf_s("%d", &t);
//	int i;
//	for (i = 0; i <= t; i++)
//	{
//		int n;
//		int j;
//		scanf_s("%d", &n);
//		int a[100000];
//		for (j = 0; j < n; j++)
//			scanf_s("%d", &a[j]);
//
//	}
//	return 0;
//}