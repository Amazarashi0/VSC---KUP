# include <stdio.h> // 将文件stdio.h包含到源文件中。编译时stido.h中的代码将替换到这句话的位置，在之后的代码中就可以使用其中定义或声明的函数。
	//stdio即“标准输入输出”系统提供的输入输出库函数都包含在其中。例如：int，char，scanf，printf等都要在文件stdio.h包含到源文件中后才可以使用。

//函数是C语言基本组成单位，C程序的代码几乎都封装在函数中，写一个新程序就是定义一个新的函数。
//函数定义一般分为：【函数首部——int main()】和【函数体——{  }中内容】。
//调用一个函数就是执行该函数的函数体，不同函数间可以相互调用。
int main()	// 主(main)函数首部
	// 主函数首部包括 ：函数类型：int整型类型（表示该函数返回一个整型数据）；函数名：main（该函数的名称是主函数）；函数参数：()中内容。
{ 	// 函数体开始。----------------------------------------
	printf("Hello world !\n"); // 调用stdio.h文件中包含的标准库函数printf()来输出指定的字符信息。
		//printf("字符串")；
	 	// printf()的函数参数"Hello world!\n"是一个【字符串常量】，两端的符号""是字符串常量的界限符，不属于字符串的一部分。字符串结尾的\n表示换行。末尾的符号；是C语言一条语句结束的标志
		//注意：在写代码时要先将最外面的部分写完整再补充内部的内容，防止函数过多时的混乱和括号分号的缺失。先写出"printf();"再写括号内的参数部分

	return 0; 	// 函数返回整数0，main函数需要返回一个整数，执行结束后并返回。
} 	// 函数体结束。-----------------------------------------

	// C程序的执行从main函数开始，main函数结束时整个程序也就结束。所以说，mian函数是程序的入口，每个程序都必须且有且仅有一个main函数。
