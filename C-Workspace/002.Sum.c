# include <stdio.h>
int main()
{
    int a, b, sum;  //定义3个整型变量a,b,sum。
        //int表示数据类型，用来声明整型变量或函数；a、b、sum是指变量名，用来映射或命名调取的存储单元。
        //即在内存中分配出3个用来储存整型（int类型）数据的存储单元；之后将变量名称a、b、sum与存储单元做一一映射，得到对应名称为a,、b,、sum的3个内存单元。
        //因此，数据类型决定了需要的存储空间的大小和数据据存储的格式。定义变量就是调取内存的过程，为之后赋值准备储存空间。变量本质就是内存中的一块储存空间。

    a = 5;  //对变量a赋值。
        //即将数据5对应的机器码（二进制代码）写入对应的存储单元a。

     //以上两步也可以写成'int a = 5'，即同时定义-赋值变量，也叫【变量的初始化】。

    b = 10;  //适当加空格使代码更加清晰
    sum = a + b;  //计算a+b，将结果赋值给变量sum。

    printf("a与b的和sum = %d\n", sum); //调用printf()函数输出字符串：“变量a和b的和sum = sum的值”。
        //printf("输出控制符"，输出参数);
        //在" "外面的sum是变量名，与在" "内的%d对应，sum的值将替换%d的位置。\n表示换到下一行。
        //%d是【格式字符】，用来规定printf函数的参数中的变量或表达式以指定的格式输出显示。%d规定的是十进制整数格式。所以内存中存储的二进制代码要转换为十进制的形式输出

    return 0;
}
//当一个程序运行完成后，由于系统不会清除该程序使用过的内存中的数据（太费时间），所以下一个程序运行时一定要进行变量的初始化。