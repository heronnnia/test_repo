// bingo_20181106.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define MAX 5

char arr[MAX][MAX];

int main()
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (int j = 0; j < MAX; j++)
	{
		for (int i = 1; i < MAX; i++)
		{
			arr[j][i] = count++;
			printf(" %3d", arr[j][i]);
		}

		arr[j][i] = count++;
		printf(" %3d", arr[j][i]);
		printf("\n");
	}
    return 0;
}


