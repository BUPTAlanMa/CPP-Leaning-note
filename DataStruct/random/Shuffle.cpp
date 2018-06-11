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

void shuffle ( int A[], int n ) { //��A[0, n)�������
   while ( 1 < n )
      swap ( A[rand() % n], A[--n] );
}

// std::rand()��������0�������������ϵͳ�йأ�֮���������������ȷֲ���
// �����������C++11���������׼��
void shuffle_prac(int A[], int n) { //��A[0, n)������ң���ϰ��
	static default_random_engine e; //��������޷�����
	static uniform_int_distribution<int> u(0, n-1);
	using std::swap;
	while (1 < n)
		swap(A[u(e)], A[--n]);
}

void shuffle ( int A[], int lo, int hi ) //��A[lo, hi)�������
{  shuffle ( A + lo, hi - lo );  }
