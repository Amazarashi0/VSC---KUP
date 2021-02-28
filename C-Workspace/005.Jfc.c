# include <stdio.h>
# include <math.h>  //将文件math.h包含到源文件中
int main (void)
{
    int a = 1, b = 2, c = 1;
    double delta;
    double x1, x2;  // 定义两变量来存放解的值

        //空一行使代码更加规范
    delta = b*b - 4*a*c;  // 在等号和加减号等符号的左右加空格使代码更加清晰

    if (delta > 0)  //if之后也应该加上空格
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("两个解, x1 = %f, x2 = %f\n", x1, x2);   // 该一元二次方程有两个解
    }
    else if (delta == 0)
    {
        x1 = (-b) / (2*a);
        x2 = x1;
        printf("一个解, x1 = x2 = %f\n", x1); // 该一元二次方程两个相等的解
    }
    else if (delta < 0)
    {
        printf("无解\n"); // 无解
    }

    return 0;
}
/*********************************
【运算符】
    算术运算符：加 +，减 -，乘 *，除 /，取余数 %；
    关系运算符：大于 >，大于等于>=，小于 <，小于等于 <=，等于 ==，不等于 !=；、
    逻辑运算符：与 &&，或 ||，非 ！；
    赋值运算符：=，+=，-+，*=，/=

    运算符优先级：算术运算符 > 关系运算符 > 逻辑运算符 > 赋值运算符

注：（1）整数除以整数商为整数；除数与被除数其中之一为浮点数商也为浮点数；
        例：16 / 5 == 3；16 / 5.0 == 3.20000；-13 / 4 == -4；3/5 == 0；
                13 % 3 == 1；-13 % 23 == -13；13 % -23 == 13
       （2）非零为真，零为假；真用1表示 ，假用0表示；
***********************************/