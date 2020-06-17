#include <stdio.h>

void move(char getone, char putone)
{
    printf("%c-->%c\n", getone, putone);
}
void hanoi(int n, char one, char two, char three) /*将n个盘从one借助two,移到three*/
{
    if (n == 1)
        move(one, three);
    else
    {
        hanoi(n - 1, one, three, two);          //
        move(one, three);                       //核心代码
        hanoi(n - 1, two, one, three);          //
    }
}
int main()
{
    int m;
    printf("输入盘子数量:");
    scanf("%d", &m);
    printf("移动 %3d 个盘子的步骤为:\n", m);
    hanoi(m,'A','B','C');
    return 0;
}