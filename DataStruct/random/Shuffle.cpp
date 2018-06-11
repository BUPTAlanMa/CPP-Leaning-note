/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

/*DSA*/#include <iostream>
/*DSA*/using namespace std;

#include "random"

void shuffle ( int A[], int n ) { //将A[0, n)随机打乱
   while ( 1 < n )
      swap ( A[rand() % n], A[--n] );
}

// std::rand()函数返回0到最大整数（和系统有关）之间的随机整数（均匀分布）
// 这里想测试下C++11的随机数标准库
void shuffle_prac(int A[], int n) { //将A[0, n)随机打乱，练习版
	static default_random_engine e; //生成随机无符号数
	static uniform_int_distribution<int> u(0, n-1);
	using std::swap;
	while (1 < n)
		swap(A[u(e)], A[--n]);
}

void shuffle ( int A[], int lo, int hi ) //将A[lo, hi)随机打乱
{  shuffle ( A + lo, hi - lo );  }
