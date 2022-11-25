// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
long long N, K;
int main()
{
	cin >> N >> K;
	long long left = 1,right=N*N;
	K = min(K, (long long)1000000000);
	while (left <= right)
	{
		long long mid = (left + right) / 2;
		long long count = 0;
		for (long long i = 1; i <= N; i++)
		{
			count += min((long long)(mid / i), N);
		}
		if (count >= K)
		{
			right = mid-1;
		}
		else
		{
			left = mid+1;
		}
	}
	cout << left;
}

