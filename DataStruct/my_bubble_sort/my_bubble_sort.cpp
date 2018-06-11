// my_bubble_sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "Shuffle.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int N = 7;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = i;
	}
	shuffle(arr, N);

	for (size_t i = 0; i < N; i++)
	{
		if (i = N - 1)
		{
			cout << arr[i];
			break;
		}
		else
			cout << arr[i] << ' ';
	}

	arr = nullptr;
	delete arr;

	return 0;
}

