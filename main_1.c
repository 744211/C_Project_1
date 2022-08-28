//这个文件包含一个标准的输入输出的头文件
#include <stdio.h>	//standard i input输入 o out输出 
//宏定义 常量PI 宏定义规范：定义时全用大写命名  
#define PI 3.1415962
//		简写↓	show and replace_two_number 显示和替换两个数字
#define SAR_2_num(a,b) printf("\tnum_1 = %d\n\tnum_2 = %d\n",num_1 = a,num_2 = b); 
#define ONE_KM 10000
#define GOLD 500
//输入年份，判断是否为闰年。
#define LEAP_YEAR(year) year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ? "闰年" : "平年" 
//define 宏定义，类似全局定义函数



int main(void)
{
	/*它是为了方便系统之间的移植而定义的，不同的系统上，
	定义size_t 可能不一样。size_t在32位系统上定义为 unsigned int，
	也就是32位无符号整型。在64位系统上定义为 unsigned long ，
	也就是64位无符号整形。size_t 的目的是提供一种可移植的方法来声明与
	系统中可寻址的内存区域一致的长度。*/
	//简而言之，size_t类型，它是无符号整数。
	size_t num_1[10];
	num_array(num_1,10,10);
	for (int j = 0; j < 10; j++)
	{
		printf("%d",num_1[j]);
	}
	return 0;
}


int MAX(int num_1, int num_2);
int main_18(void)
{	//函数指针：用来解决使用函数时返回的值不能改变main里的变量问题。
	int num_1 = 1, num_2 = 2,num_3;
	//定义p为函数指针，并指向MAX函数。同事还定义了两个int变量。
	int(* p)(int,int) = &MAX;
	//使用p函数指针来替代原来的函数使用。
	num_3 = p(num_1, num_2);
	//成功输出函数的返回结果。
	printf("最大值是%d", num_3);
	return 0;
}
int MAX(int num_1, int num_2)
{
	return num_1 > num_2 ? num_1 : num_2;
}
void exchange_p(int* num_1, int* num_2);
int exchange_std(int num_1, int num_2);
int main_17(void)
{
	//用指针交换函数的参数
	int num_1 = 0, num_2 = 1;//定义两个变量。
	exchange_std(num_1, num_2);//用正常的方法去赋值交换并返回结果
	printf("在main内：\n");
	//在main里面的变量并没有改变。
	printf("num_1 = %d\nnum_2 = %d\n",num_1,num_2);
	//注：这里因为是用的指针，所以需要使用变量的地址来当参数。
	exchange_p(&num_1,&num_2);//使用变量的地址来进行交换赋值。
	printf("在main内：\n");
	//在main内的变量也得到了改变。
	printf("num_1 = %d\nnum_2 = %d\n", num_1, num_2);
	return 0;
}
int exchange_std(int num_1, int num_2)
{
	int num_3;//引入第三者变量
	//交换并赋值
	num_3 = num_1;
	num_1 = num_2;
	num_2 = num_3;
	printf("在交换函数内：\n");
	//输出结果得到交换
	printf("num_1 = %d\nnum_2 = %d\n", num_1, num_2);
	return num_1,num_2;//返回结果。
}
void exchange_p(int* num_1, int* num_2)
{	//引入接收地址的第三方变量。
	//并交换赋值
	int num_3 = *num_1;//注：这里的第三者并不需要是指针，因为只是起到临时存储地址的用处
	*num_1 = *num_2;
	*num_2 = num_3;
	printf("在使用指针交换函数内：\n");
	//输出交换成功，并没有返回任何结果。
	printf("num_1 = %d\nnum_2 = %d\n", *num_1, *num_2);
}
int main_16(void)
{	//多级指针：就是层层嵌套，一级指针指向内容，二级指针指向一级指针·····
	//以此类推。
	int num_1 = 100;
	int* p_one = &num_1;//一级指针存储num_1地址。
	int** p_two = &p_one;//二级指针存储一级指针的地址。
	printf("&p_one = %p\n",&p_one);//输出一级指针的地址。
	printf("*p_one = %d\n", *p_one);//输出一级指针所指向的内容。
	printf("&p_two = %p\n", &p_two);//输出二级指针的地址。
	printf("*p_two = %p\n", *p_two);//输出二级指针所指向的一级指针的内容。
	printf("**p_two = %d\n", **p_two);//输出二级指针所指向的一级指针是一指向的内容。
	return 0;
}

int main_15(void)
{	//C字符串:
	//注意：%c输出字符，%s输出字符串！
	//注意字符串的最后都要加上\0，而且都是‘单引号。
	char greeting[10] = {'H','e','l','l','o','\0'};
	char word[] = "h-e-l-l-o";
	char* name[] = {//指向字符的指针存储了字符串列表
		"rick",
		"morty",
	};
	char* p = "hello";//用指针存储“hello”的地址或者说是内容。
	printf("p = %s\n",p);//输出p所存储的内容。
	for (int i = 0; i < 2; i++)
	{	//循环遍历name存储的字符串列表
		printf("name[%d] = %s\n",i, name[i]);
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%c", greeting[j]);
		}
		printf("\ngreeting[%d] = %c\n", i, greeting[i]);
	}
	for (int n = 0; n < 9; n++)
	{
		printf("%c",word[n]);
	}
	
	return 0;
}

int main_14_4(void)
{	//指针的运算：
	//指针支持的运算有：++，--，+，-
	int array[] = {10,20,30};//定义一个数组
	int* p = array;//存储数组的地址，默认是存储数组的第一个数的地址。
	for (int i = 0; i < 3; i++)
	{
		printf("\n存储的地址：array[%d] = %p\n", i, p);
		printf("存储的值：array[%d] = %d\n", i, *p);
		p++;//递增一个指针
	}
	printf("\n");
	for (int i = 2; i >= 0; i--)
	{	//注意这个递减要写在输出前面。
		p--;//递减一个指针
		printf("\n存储的地址：array[%d] = %p\n", i, p);
		printf("存储的值：array[%d] = %d\n", i, *p);
	}
	printf("\n");
	//指针的比较：
	//支持的有==，<=,>=,<,>,!= 等·····。
	while (p <= &array[2])
	{
		int i = 0;
		printf("\n存储的地址：array[%d] = %p\n", i, p);
		printf("存储的值：array[%d] = %d\n", i, *p);
		p++;
		i++;
	}
	return 0;
}

int main_14_3(void)
{	
	//指针数组，说是没有意义。反正运行报错没法输出结果。
	int* p_array[3] = {10,100,1000};
	for (int i = 0; i < 3; i++)
	{	//但是也发没有任何报错，也是够离谱的。
		printf("p_array[%d] = %d\n",i, *p_array[i]);
	}
	return 0;
}

int main_14_1(void)
{	
	//因为没有定义这个数组的大小(也就是数量)，所以这就是个没上限的数组。
	int array[] = {10,100,1000};//定义一组数组。
	int* ap = NULL;	//定义一个空指针。
	ap = array;//存储array数组的地址。注意：这里的array没有加上&。
	//两种不同的输出方法，但是结果都是相同的。
	printf("array数组的地址：*array = %p\n",&array);
	printf("ap变量存储的地址：array = %p\n", array);

	int num_1 = 10;//定义整数型的数字十。
	int* ip = NULL;//定义名为ip的空指针。
	ip = num_1;//存储num_1变量，因为没有加上&号，所以这里存储的并不是变量的地址注：这里正常是因该加上&号的。所以输出有问题。
	printf("地址：num_1 = %p\n",&num_1);//输出的是num_1的地址。
	printf("地址：num_1 = %p\n",num_1);//输出的是num_1的十六进制数。

	printf("总结：想要存储变量的地址就要加上&号。\n数组则可有可无。");
	return 0;
}

int main_14(void)
{	/*
	指针：正常的指向一个存储地址。简单来解释就好像windows系统里的快捷方式一样的工作原理。
	空指针：指向null的指针。注只要没有指向null，就只能是正常指针和野指针。
	野指针：瞎指的指针，也就是指在它不应该指向的地址。
	*/
	printf("正常的指针运行如下：\n");
			   /*地址的内容↓*/
		 int int_num_1 = 10;
	double double_num_1 = 10.1;
	float float_num_1 = 10.2;
	char char_word_1 = "Hello";
	//↓指针类型  ↓变量名  ↓地址		&为指向的意思。 
	int* int_pointer = &int_num_1;		//一个整形指针
	double* double_pointer = &double_num_1;		//一个double型指针
	float* float_pointer = &float_num_1;		//一个浮点类型指针
	char* char_pointer = &char_word_1;		//一个字符型的指针
	//%p输出十六进制的地址位置。
	printf("int_num_1 address = %p\n",&int_num_1 );
	printf("int_pointer 保存地址的变量 = %p\n", int_pointer);
	//给指针变量加上*号就可以直接输出指针所指向的内容。
	printf("*int_pointer 指向地址的内容 = %d\n", *int_pointer);

	printf("空指针:\n");
	//空指针就是指向空值。不然就会变成野指针乱指。
	int* ptr = NULL;
	printf("ptr 地址 = %p\n", ptr);
	//因为是空值，所以没有内容可以输出。所以正常执行会报错。
	//printf("ptr 指向的内容 = %d", *ptr);
	
	//野指针就是没有指向的目标但是又有执行的命令，所以就会随机分配一个值。但是会因此导致巨大漏洞和危险。所以直接报错。
	printf("野指针：\n");
	int* p;
	//printf("p 地址 = %p", p);
	//printf("p 指向的内容 = %d",*p);
	return 0;
}

//枚举肩带来说就是指定数值后的递增定义。
//且定义方式很多。引用方式也很多
/*enum number//定义枚举类型
	{	
		one = 1, two, three, four, five
	};
enum number_1//定义枚举类型的同时还定义枚举变量。
{
	one = 1, two, three, four, five
}num_1;
enum //直接省略名称，然后定义枚举变量。
{
	one = 1, two, three, four, five
}num_2;
int main_14(void)
{
	enum number num;//定义枚举变量。
	num = five;//感觉以上的两行代码可有可无，不知道有啥意义。
	printf("%d", num);
	return 0;
}
*/

int main_13_1(void)
{	//引用宏定义的判断公式
	printf("%s", LEAP_YEAR(2022));
	return 0;
}

int days(int month, int year);
int main_13(void)
{
	int month,year;
	printf("判断月份的天数与是否为闰年。\n请输入月份:");
	scanf_s("%d", &month);
	printf("请输入年份:");
	scanf_s("%d", &year);
	printf("%d年是%s年，%d月是%d天。",year,days(2, year) == 29 ? "闰":"平",month,days(month,year));
	return 0;
}
int days(int month, int year)
{	//表驱动法
	int days_of_month[12] = {31,year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ? 29 : 28,31,30,31,30,31,31,30,31,30,31};
	return days_of_month[month - 1];
}

int main_12(void)
{	//定义多维数组，前面的中括号是有多少个数组，后面的中括号是那个数组里面又有多少个数组。
	//也算是个双层数组吧。
	int two_array[5][3] = {{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3}};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			two_array[i][j] = 10 + j + i;
			printf("two_array[%d][%d] = %d  ",i,j,two_array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}


int main_11(void)
{	//非负数↓ 数组↓ ↓数组大小    ↓数组内容
	unsigned array[10] = {1,2,3,4,5};
	//给数组赋值：数组名[下标] = 值；
	 
	for (int i = 0; i < 10; i++)//遍历数组
	{
		array[i] = 10 + i;
		printf("array[%d] = %d\n",i,array[i]);
	}
	return 0;
}


//声明函数
int sum(int num_1, int num_2);//预声明
//声明全局变量:在哪个函数里都可以使用而不用重新声明。容易被污染。
int quanju;//作用域:即在函数里定义的都是局部变量，在函数外声明的变量都是全局变量。
int main_10(void)
{   //调用函数（使用函数）
	int num_1 = sum(2,3);
	//声明局部变量。不能再其他函数内使用，需要重新声明。
	int jbdianliang;
	
	printf("sum = %d",num_1);

	return 0;
}
//定义函数
int sum(num_1,num_2)
{
	int sum = num_1 + num_2;
	return sum;//返回值
}
int main_9(void)
{
	int xh_2 = 0;//定义变量不赋值就是	声明。
	//（初始化定义变量；判断条件；自增衡量变量）标准for都是如此。
		
	for (int xh_1 = 0; xh_1 <= 10; xh_1++)
	{
		xh_2 += xh_1;
		printf("xh_2 == %d\n",xh_2);
	}
	return 0;
}

int main_8(void)
{
	int dig = 1;
	do//do...while的重点就是“先执行，后判断”。
	{
		dig++;
		printf("执行后dig == %d\n", dig);
	} while (dig <= 10);
	return 0;
}

int main_7(void)
{
	int dig = 0;
	while (dig <= GOLD)
	{
		if (dig == 100)
		{
			printf("挖了%d个寂寞,不挖了\n",dig);
			break;//break则是中断整个循环，也就是跳出整个循环。
		}		  //注：作用域只有最近的循环，且一个break只能终止一个循环
		printf("挖了%d的没啥用的东西\n",dig++);
	}
	return 0;
}

int main_6(void)
{
	int dig = 0;
	while (dig <= GOLD ) 
	{
		if (dig == 250) 
		{
			printf("发现病毒数据，删除此数据\n");
			dig++;
			continue;//continue为跳过此次的循环(离这个函数最近的循环)，并继续执行。
			printf("中毒了!!!\n");//因为跳出了此次循环所以不输出这句话。
		}
		printf("挖到了%d个数据\n", dig++);
	}
	return 0;
}

int main_5(void) {
	int test_xh_1 = 0;
	//判断条件，为true则一直循环。1为true。
	//判断为false则结束循环。0为false。
	while (test_xh_1 <= ONE_KM)
	{
		printf("现在的数值为 = %d\n", test_xh_1++);
	}
	printf("数据跑完了。\n");
	printf("一共跑了%d个数据。",test_xh_1);
	return 0;
}

int main_4(void) {
	char word = 'a';
	char word_1 = "A";
	printf("ASCll :\n");
	printf("\ta = %d\n", word);//输出的数值都是对应ASCLL码表。
	printf("\tA = %d\n", word_1);
	printf("ASCLL的大小写字母之间永远差距35。\n");
	return 0;
}


int main_3(void) {
	int test_num_2 ;
	printf("switch语句");
	scanf_s("%d", &test_num_2);//输入
	switch (test_num_2)//条件为常值。
	{
	case 40:
		printf("num = 40\n");
		break;
	case 50:
		printf("num = 50\n");
		break;
	default://没有指定的常值则返回以下的代码。
		printf("num != 40 , num != 50");
		break;
	}
	return 0;
}


int main_2(void)
{
	int test_num_1;
	printf("if判断：\n");
	scanf_s("%d",&test_num_1);
	if (test_num_1 <= 10)
	{
		printf("返回<=10\n");
	}
	if (test_num_1 <= 50)
	{
		printf("返回<=50\n");
	}
	if (test_num_1 <= 90) {
		printf("返回<=90\n");
	}
	return 0;
}

int main_1(void) 
{
	int int_num = 10;
	int INT_num = 20;
	float float_num = 10.1;
	double double_num = 99.9;
	int word = "hello";
	//print 打印 f format格式化
	//格式化输出
	printf("hello world!\n");
	//输入 注：新版本的vs从2019开始把scanf()改成了scanf_s();才允许使用。
	//scanf_s("%d",&int_num);
	printf("char word = %c\n", word);
	printf("INT number = %d\n", INT_num); 
	printf("int number = %d\n", int_num);
	printf("float number = %f\n",float_num);
	printf("double number = %lf\n",double_num);
	printf("\\t = \t(水平制表符，相当于TAB键)\n"); 
	printf("\\n = \n(换行符)\n");
	printf("\\\\ = \\(\\字符)\n");
	printf("\\' = \'(字符)\n");
	printf("\\\" = \"(字符)\n");
	printf("\\? = \?(字符)\n");
	printf("\\a = \a(警报铃声)\n");
	printf("\\b = \b(退格键)\n");
	printf("\\f = \f(换页符)\n");
	printf("\\r = \r(回车)\n");
	printf("\\v = \v(垂直制表符)\n");
	printf("\\ooo = \ooo(一到三位的八进制数，目前还不知道如何使用)\n");
	printf("\\xhh = \\xhh...(一个或多个数字的十六进制数,目前还不知道如何使用)\n");
	
	printf("\n\n算术运算符：\n\t");
	int num_1, num_2,num_3;
	num_1 = 2; 
	num_2 = 1;
	printf("num_1 = %d\n\tnum_2 = %d\n",num_1,num_2);
	printf("\tnum_1 + num_2 = %d\n", num_1 + num_2);
	printf("\tnum_1 - num_2 = %d\n", num_1 - num_2);
	printf("\tnum_1 * num_2 = %d\n", num_1 * num_2);
	printf("\tnum_1 / num_2 = %d\n", num_1 / num_2);
	printf("\tnum_1 %% num_2 = %d\n", num_1 % num_2);

	printf("算术优先级：\n");
	printf("\t-num_1 + num_2) >> 1 * 3 = %d\n", (-num_1 + num_2) << 1 * 3);
	
	printf("++与--的运算：\n");
	num_3 = num_1++;
	printf("\tnum_1++ = %d\n", num_3);
	num_3 = num_1--;
	printf("\tnum_1-- = %d\n", num_1--);
	num_3 = ++num_1;
	printf("\t++num_1 = %d\n", ++num_1);
	num_3 = --num_1;
	printf("\t--num_1 = %d\n", --num_1);
	
	printf("\n关系运算符：\n");
	num_1 = 2;
	printf("\t0为false,1为true\n");
	printf("\tnum_1 == num_2  %d\t等于号\n", num_1 == num_2 ? 1:0);
	printf("\tnum_1 != num_2  %d\t不等于号\n", num_1 != num_2 ? 1 : 0);
	printf("\tnum_1 >  num_2  %d\t大于号\n", num_1 > num_2 ? 1 : 0);
	printf("\tnum_1 <  num_2  %d\t小于号\n", num_1 < num_2 ? 1 : 0);
	printf("\tnum_1 >= num_2  %d\t大于等于号\n", num_1 >= num_2 ? 1 : 0);
	printf("\tnum_1 <= num_2  %d\t小于等于号\n", num_1 <= num_2 ? 1 : 0);
	
	printf("\n逻辑运算符：\n");
	SAR_2_num(0, 1);
	printf("\tnum_1 && num_2 == %d\t称为逻辑与运算符。如果两个操作数都非零，则条件为真。\n",num_1 && num_2);
	printf("\tnum_1 || num_2 == %d\t称为逻辑或运算符。如果两个操作数中有任意一个非零，则条件为真。\n", num_1 || num_2);
	printf("\t!(num_1 && num_2) == %d\t称为逻辑非运算符。用来逆转操作数的逻辑状态。如果条件为真则逻辑非运算符将使其为假。\n", !(num_1 && num_2));
	
	printf("\n按位操作\"与\"，按二进制位进行\"与\"运算。运算规则：\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t%d & %d = %d\n",i_1,i_2,i_1 & i_2);
		}
	}
	printf("按位操作\"或\"，按二进制位进行\"或\"运算。运算规则：\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t%d | %d = %d\n", i_1, i_2, i_1 | i_2);
		}
	}
	printf("异或运算符，按二进制位进行\"异或\"运算。运算规则：\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t%d ^ %d = %d\n", i_1, i_2, i_1 ^ i_2);
		}
	}
	printf("取反运算符，按二进制位进行\"取反\"运算。运算规则：\n注：显示的是十进制数。\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t~%d = %d\n", i_1,~i_1);
		}
	}
	printf("二进制左移运算符。将一个运算对象的各二进制位全部左移若干位（左边的二进制位丢弃，右边补0）。\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t%d << 1 = %d\n", i_1,i_1 << 1);
		}
	}
	printf("二进制右移运算符。将一个数的各二进制位全部右移若干位，正数左补0，负数左补1，右边丢弃。\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t%d >> 1 = %d\n", i_1, i_1 >> 1);
		}
	}

	printf("\n赋值运算符：\n");
	SAR_2_num(2, 1);
	printf("\tnum_1 = 1 =(输出) %d\t简单的赋值运算符，把右边操作数的值赋给左边操作数\n",num_1 = 1);
	printf("\tnum_1 += 1 = %d\t加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数\n", num_1 += 1);
	printf("\tnum_1 -= 1 = %d\t减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数\n", num_1 -= 1);
	printf("\tnum_1 *= 1 = %d\t乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数\n", num_1 *= 1);
	printf("\tnum_1 /= 1 = %d\t除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数\n", num_1 /= 1);
	printf("\tnum_1 %%= 1 = %d\t求模且赋值运算符，求两个操作数的模赋值给左边操作数\n", num_1 %= 1);
	printf("\tnum_1 <<= 1 = %d\t左移且赋值运算符\n", num_1 <<= 1);
	printf("\tnum_1 >>= 1 = %d\t右移且赋值运算符\n", num_1 >>= 1);
	printf("\tnum_1 &= 1 = %d\t按位与且赋值运算符\n", num_1 &= 1);
	printf("\tnum_1 ^= 2 = %d\t按位异或且赋值运算符\n", num_1 ^= 2);
	printf("\tnum_1 |= 1 = %d\t按位或且赋值运算符\n", num_1 |= 1);
	
	int int_num_1 = 1;
	double double_num_1 = 1.1;
	int* bunary = 0101;
	
	printf("\n杂项运算符（C语言支持的其他一些重要的运算符）：\n");
	printf("\tsizeof(int_num_1) return %lu\t返回变量的大小。\n",sizeof(int_num_1));
	
	printf("\t&int_num_1; == %d\t返回变量的地址。\n",int_num_1);

	printf("三元运算符(条件表达式)：\n\t如果条件为真 ? 则值为 X : 否则值为 Y\n");
	SAR_2_num(1,0);
	printf("\tnum_2 = (num_1 == 0) ? 20 : 30\tnum_2 == %d\n", num_1 == 0 ? 20 : 30);
	printf("\tnum_2 = (num_1 != 0) ? 20 : 30\tnum_2 == %d\n",num_1 != 0 ? 20: 30);

	
	//getchar();
	//while(1){//while后面跟的是布尔值，只有ture和false。
	//	printf("\a");
	//}
	return 0;
}
