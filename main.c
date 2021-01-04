#include <stdio.h>
#include <math.h>
int main(){
    int num=0;
    printf("我来给你变一个魔术吧！\n");
    printf("拿出纸，写下两个正整数，不要让我看见，从第三个数开始，分别是前两个数相加，告诉我第10个数，我能告诉你第11个数\n");
    printf("请输入第10个数：");
    scanf("%d",&num);
    float num11=num/0.618;
    printf("%d\n",(int)(num11+0.5));
    return 0;
}