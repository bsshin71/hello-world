// HelloWorld.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include <stdio.h>

int main()
{

	char* sPointer = "Hello";


	printf("%s \n", sPointer);

	printf("spointer %x\n", sPointer);


	printf("spointer+0 : %x , *(sPointer+1):%c \n", sPointer, *(sPointer + 0));


	printf("spointer+1 : %x , *(sPointer+1):%s \n", sPointer + 1, sPointer + 1 );

	return 0;
}

