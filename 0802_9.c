#include <stdio.h>

extern int global;
extern void p_g();

int main()
{
    printf("%d", global);
    return 0;
}
/*extern 변수, 함수는 
1. 프로젝트 파일로 만들 것.
2. 프로젝트 파일 안에는 main.c파일이 있고, 다른 추가 파일이 존재한다.
3. 실행 시 main.c 파일에다 놓고 실행한다.
4. 다른 파일에 있는 변수나 함수를 참조할 때 프로그램 앞에다 extern붙이고 선언한 후 사용한다.