/*DSA*/#include <iostream>
/*DSA*/using namespace std;

//#include "shuffle.h"

#include "random"

void shuffle(int arr[], const int n)
{
	static default_random_engine e;
	//!! ע�⣬���ܽ�n����uniform_int_distribution�Ĺ��캯��������ı�n��ֵ
	int range_rhs = n - 1;
	static uniform_int_distribution<int> u(0, range_rhs);
	for (int i = n - 1; i >= 0; i++)
	{
		/*int random_index = static_cast<size_t>(u(e));
		int temp = arr[random_index];
		arr[u(e)] = arr[i];
		arr[i] = temp;	*/
		std::cout << u(e) << endl;
	}

}