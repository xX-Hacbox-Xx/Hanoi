#include <stdio.h>

void move(char getone, char putone)
{
    printf("%c-->%c\n", getone, putone);
}
void hanoi(int n, char one, char two, char three) /*��n���̴�one����two,�Ƶ�three*/
{
    if (n == 1)
        move(one, three);
    else
    {
        hanoi(n - 1, one, three, two);          //
        move(one, three);                       //���Ĵ���
        hanoi(n - 1, two, one, three);          //
    }
}
int main()
{
    int m;
    printf("������������:");
    scanf("%d", &m);
    printf("�ƶ� %3d �����ӵĲ���Ϊ:\n", m);
    hanoi(m,'A','B','C');
    return 0;
}