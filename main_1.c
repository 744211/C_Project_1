//����ļ�����һ����׼�����������ͷ�ļ�
#include <stdio.h>	//standard i input���� o out��� 
//�궨�� ����PI �궨��淶������ʱȫ�ô�д����  
#define PI 3.1415962
//		��д��	show and replace_two_number ��ʾ���滻��������
#define SAR_2_num(a,b) printf("\tnum_1 = %d\n\tnum_2 = %d\n",num_1 = a,num_2 = b); 
#define ONE_KM 10000
#define GOLD 500
//������ݣ��ж��Ƿ�Ϊ���ꡣ
#define LEAP_YEAR(year) year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ? "����" : "ƽ��" 
//define �궨�壬����ȫ�ֶ��庯��



int main(void)
{
	/*����Ϊ�˷���ϵͳ֮�����ֲ������ģ���ͬ��ϵͳ�ϣ�
	����size_t ���ܲ�һ����size_t��32λϵͳ�϶���Ϊ unsigned int��
	Ҳ����32λ�޷������͡���64λϵͳ�϶���Ϊ unsigned long ��
	Ҳ����64λ�޷������Ρ�size_t ��Ŀ�����ṩһ�ֿ���ֲ�ķ�����������
	ϵͳ�п�Ѱַ���ڴ�����һ�µĳ��ȡ�*/
	//�����֮��size_t���ͣ������޷���������
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
{	//����ָ�룺�������ʹ�ú���ʱ���ص�ֵ���ܸı�main��ı������⡣
	int num_1 = 1, num_2 = 2,num_3;
	//����pΪ����ָ�룬��ָ��MAX������ͬ�»�����������int������
	int(* p)(int,int) = &MAX;
	//ʹ��p����ָ�������ԭ���ĺ���ʹ�á�
	num_3 = p(num_1, num_2);
	//�ɹ���������ķ��ؽ����
	printf("���ֵ��%d", num_3);
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
	//��ָ�뽻�������Ĳ���
	int num_1 = 0, num_2 = 1;//��������������
	exchange_std(num_1, num_2);//�������ķ���ȥ��ֵ���������ؽ��
	printf("��main�ڣ�\n");
	//��main����ı�����û�иı䡣
	printf("num_1 = %d\nnum_2 = %d\n",num_1,num_2);
	//ע��������Ϊ���õ�ָ�룬������Ҫʹ�ñ����ĵ�ַ����������
	exchange_p(&num_1,&num_2);//ʹ�ñ����ĵ�ַ�����н�����ֵ��
	printf("��main�ڣ�\n");
	//��main�ڵı���Ҳ�õ��˸ı䡣
	printf("num_1 = %d\nnum_2 = %d\n", num_1, num_2);
	return 0;
}
int exchange_std(int num_1, int num_2)
{
	int num_3;//��������߱���
	//��������ֵ
	num_3 = num_1;
	num_1 = num_2;
	num_2 = num_3;
	printf("�ڽ��������ڣ�\n");
	//�������õ�����
	printf("num_1 = %d\nnum_2 = %d\n", num_1, num_2);
	return num_1,num_2;//���ؽ����
}
void exchange_p(int* num_1, int* num_2)
{	//������յ�ַ�ĵ�����������
	//��������ֵ
	int num_3 = *num_1;//ע������ĵ����߲�����Ҫ��ָ�룬��Ϊֻ������ʱ�洢��ַ���ô�
	*num_1 = *num_2;
	*num_2 = num_3;
	printf("��ʹ��ָ�뽻�������ڣ�\n");
	//��������ɹ�����û�з����κν����
	printf("num_1 = %d\nnum_2 = %d\n", *num_1, *num_2);
}
int main_16(void)
{	//�༶ָ�룺���ǲ��Ƕ�ף�һ��ָ��ָ�����ݣ�����ָ��ָ��һ��ָ�롤��������
	//�Դ����ơ�
	int num_1 = 100;
	int* p_one = &num_1;//һ��ָ��洢num_1��ַ��
	int** p_two = &p_one;//����ָ��洢һ��ָ��ĵ�ַ��
	printf("&p_one = %p\n",&p_one);//���һ��ָ��ĵ�ַ��
	printf("*p_one = %d\n", *p_one);//���һ��ָ����ָ������ݡ�
	printf("&p_two = %p\n", &p_two);//�������ָ��ĵ�ַ��
	printf("*p_two = %p\n", *p_two);//�������ָ����ָ���һ��ָ������ݡ�
	printf("**p_two = %d\n", **p_two);//�������ָ����ָ���һ��ָ����һָ������ݡ�
	return 0;
}

int main_15(void)
{	//C�ַ���:
	//ע�⣺%c����ַ���%s����ַ�����
	//ע���ַ��������Ҫ����\0�����Ҷ��ǡ������š�
	char greeting[10] = {'H','e','l','l','o','\0'};
	char word[] = "h-e-l-l-o";
	char* name[] = {//ָ���ַ���ָ��洢���ַ����б�
		"rick",
		"morty",
	};
	char* p = "hello";//��ָ��洢��hello���ĵ�ַ����˵�����ݡ�
	printf("p = %s\n",p);//���p���洢�����ݡ�
	for (int i = 0; i < 2; i++)
	{	//ѭ������name�洢���ַ����б�
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
{	//ָ������㣺
	//ָ��֧�ֵ������У�++��--��+��-
	int array[] = {10,20,30};//����һ������
	int* p = array;//�洢����ĵ�ַ��Ĭ���Ǵ洢����ĵ�һ�����ĵ�ַ��
	for (int i = 0; i < 3; i++)
	{
		printf("\n�洢�ĵ�ַ��array[%d] = %p\n", i, p);
		printf("�洢��ֵ��array[%d] = %d\n", i, *p);
		p++;//����һ��ָ��
	}
	printf("\n");
	for (int i = 2; i >= 0; i--)
	{	//ע������ݼ�Ҫд�����ǰ�档
		p--;//�ݼ�һ��ָ��
		printf("\n�洢�ĵ�ַ��array[%d] = %p\n", i, p);
		printf("�洢��ֵ��array[%d] = %d\n", i, *p);
	}
	printf("\n");
	//ָ��ıȽϣ�
	//֧�ֵ���==��<=,>=,<,>,!= �ȡ�����������
	while (p <= &array[2])
	{
		int i = 0;
		printf("\n�洢�ĵ�ַ��array[%d] = %p\n", i, p);
		printf("�洢��ֵ��array[%d] = %d\n", i, *p);
		p++;
		i++;
	}
	return 0;
}

int main_14_3(void)
{	
	//ָ�����飬˵��û�����塣�������б���û����������
	int* p_array[3] = {10,100,1000};
	for (int i = 0; i < 3; i++)
	{	//����Ҳ��û���κα���Ҳ�ǹ����׵ġ�
		printf("p_array[%d] = %d\n",i, *p_array[i]);
	}
	return 0;
}

int main_14_1(void)
{	
	//��Ϊû�ж����������Ĵ�С(Ҳ��������)����������Ǹ�û���޵����顣
	int array[] = {10,100,1000};//����һ�����顣
	int* ap = NULL;	//����һ����ָ�롣
	ap = array;//�洢array����ĵ�ַ��ע�⣺�����arrayû�м���&��
	//���ֲ�ͬ��������������ǽ��������ͬ�ġ�
	printf("array����ĵ�ַ��*array = %p\n",&array);
	printf("ap�����洢�ĵ�ַ��array = %p\n", array);

	int num_1 = 10;//���������͵�����ʮ��
	int* ip = NULL;//������Ϊip�Ŀ�ָ�롣
	ip = num_1;//�洢num_1��������Ϊû�м���&�ţ���������洢�Ĳ����Ǳ����ĵ�ַע��������������ü���&�ŵġ�������������⡣
	printf("��ַ��num_1 = %p\n",&num_1);//�������num_1�ĵ�ַ��
	printf("��ַ��num_1 = %p\n",num_1);//�������num_1��ʮ����������

	printf("�ܽ᣺��Ҫ�洢�����ĵ�ַ��Ҫ����&�š�\n��������п��ޡ�");
	return 0;
}

int main_14(void)
{	/*
	ָ�룺������ָ��һ���洢��ַ���������;ͺ���windowsϵͳ��Ŀ�ݷ�ʽһ���Ĺ���ԭ��
	��ָ�룺ָ��null��ָ�롣עֻҪû��ָ��null����ֻ��������ָ���Ұָ�롣
	Ұָ�룺Ϲָ��ָ�룬Ҳ����ָ������Ӧ��ָ��ĵ�ַ��
	*/
	printf("������ָ���������£�\n");
			   /*��ַ�����ݡ�*/
		 int int_num_1 = 10;
	double double_num_1 = 10.1;
	float float_num_1 = 10.2;
	char char_word_1 = "Hello";
	//��ָ������  ��������  ����ַ		&Ϊָ�����˼�� 
	int* int_pointer = &int_num_1;		//һ������ָ��
	double* double_pointer = &double_num_1;		//һ��double��ָ��
	float* float_pointer = &float_num_1;		//һ����������ָ��
	char* char_pointer = &char_word_1;		//һ���ַ��͵�ָ��
	//%p���ʮ�����Ƶĵ�ַλ�á�
	printf("int_num_1 address = %p\n",&int_num_1 );
	printf("int_pointer �����ַ�ı��� = %p\n", int_pointer);
	//��ָ���������*�žͿ���ֱ�����ָ����ָ������ݡ�
	printf("*int_pointer ָ���ַ������ = %d\n", *int_pointer);

	printf("��ָ��:\n");
	//��ָ�����ָ���ֵ����Ȼ�ͻ���Ұָ����ָ��
	int* ptr = NULL;
	printf("ptr ��ַ = %p\n", ptr);
	//��Ϊ�ǿ�ֵ������û�����ݿ����������������ִ�лᱨ��
	//printf("ptr ָ������� = %d", *ptr);
	
	//Ұָ�����û��ָ���Ŀ�굫������ִ�е�������Ծͻ��������һ��ֵ�����ǻ���˵��¾޴�©����Σ�ա�����ֱ�ӱ���
	printf("Ұָ�룺\n");
	int* p;
	//printf("p ��ַ = %p", p);
	//printf("p ָ������� = %d",*p);
	return 0;
}

//ö�ټ����˵����ָ����ֵ��ĵ������塣
//�Ҷ��巽ʽ�ܶࡣ���÷�ʽҲ�ܶ�
/*enum number//����ö������
	{	
		one = 1, two, three, four, five
	};
enum number_1//����ö�����͵�ͬʱ������ö�ٱ�����
{
	one = 1, two, three, four, five
}num_1;
enum //ֱ��ʡ�����ƣ�Ȼ����ö�ٱ�����
{
	one = 1, two, three, four, five
}num_2;
int main_14(void)
{
	enum number num;//����ö�ٱ�����
	num = five;//�о����ϵ����д�����п��ޣ���֪����ɶ���塣
	printf("%d", num);
	return 0;
}
*/

int main_13_1(void)
{	//���ú궨����жϹ�ʽ
	printf("%s", LEAP_YEAR(2022));
	return 0;
}

int days(int month, int year);
int main_13(void)
{
	int month,year;
	printf("�ж��·ݵ��������Ƿ�Ϊ���ꡣ\n�������·�:");
	scanf_s("%d", &month);
	printf("���������:");
	scanf_s("%d", &year);
	printf("%d����%s�꣬%d����%d�졣",year,days(2, year) == 29 ? "��":"ƽ",month,days(month,year));
	return 0;
}
int days(int month, int year)
{	//��������
	int days_of_month[12] = {31,year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ? 29 : 28,31,30,31,30,31,31,30,31,30,31};
	return days_of_month[month - 1];
}

int main_12(void)
{	//�����ά���飬ǰ������������ж��ٸ����飬��������������Ǹ������������ж��ٸ����顣
	//Ҳ���Ǹ�˫������ɡ�
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
{	//�Ǹ����� ����� �������С    ����������
	unsigned array[10] = {1,2,3,4,5};
	//�����鸳ֵ��������[�±�] = ֵ��
	 
	for (int i = 0; i < 10; i++)//��������
	{
		array[i] = 10 + i;
		printf("array[%d] = %d\n",i,array[i]);
	}
	return 0;
}


//��������
int sum(int num_1, int num_2);//Ԥ����
//����ȫ�ֱ���:���ĸ������ﶼ����ʹ�ö������������������ױ���Ⱦ��
int quanju;//������:���ں����ﶨ��Ķ��Ǿֲ��������ں����������ı�������ȫ�ֱ�����
int main_10(void)
{   //���ú�����ʹ�ú�����
	int num_1 = sum(2,3);
	//�����ֲ�����������������������ʹ�ã���Ҫ����������
	int jbdianliang;
	
	printf("sum = %d",num_1);

	return 0;
}
//���庯��
int sum(num_1,num_2)
{
	int sum = num_1 + num_2;
	return sum;//����ֵ
}
int main_9(void)
{
	int xh_2 = 0;//�����������ֵ����	������
	//����ʼ������������ж�����������������������׼for������ˡ�
		
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
	do//do...while���ص���ǡ���ִ�У����жϡ���
	{
		dig++;
		printf("ִ�к�dig == %d\n", dig);
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
			printf("����%d����į,������\n",dig);
			break;//break�����ж�����ѭ����Ҳ������������ѭ����
		}		  //ע��������ֻ�������ѭ������һ��breakֻ����ֹһ��ѭ��
		printf("����%d��ûɶ�õĶ���\n",dig++);
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
			printf("���ֲ������ݣ�ɾ��������\n");
			dig++;
			continue;//continueΪ�����˴ε�ѭ��(��������������ѭ��)��������ִ�С�
			printf("�ж���!!!\n");//��Ϊ�����˴˴�ѭ�����Բ������仰��
		}
		printf("�ڵ���%d������\n", dig++);
	}
	return 0;
}

int main_5(void) {
	int test_xh_1 = 0;
	//�ж�������Ϊtrue��һֱѭ����1Ϊtrue��
	//�ж�Ϊfalse�����ѭ����0Ϊfalse��
	while (test_xh_1 <= ONE_KM)
	{
		printf("���ڵ���ֵΪ = %d\n", test_xh_1++);
	}
	printf("���������ˡ�\n");
	printf("һ������%d�����ݡ�",test_xh_1);
	return 0;
}

int main_4(void) {
	char word = 'a';
	char word_1 = "A";
	printf("ASCll :\n");
	printf("\ta = %d\n", word);//�������ֵ���Ƕ�ӦASCLL���
	printf("\tA = %d\n", word_1);
	printf("ASCLL�Ĵ�Сд��ĸ֮����Զ���35��\n");
	return 0;
}


int main_3(void) {
	int test_num_2 ;
	printf("switch���");
	scanf_s("%d", &test_num_2);//����
	switch (test_num_2)//����Ϊ��ֵ��
	{
	case 40:
		printf("num = 40\n");
		break;
	case 50:
		printf("num = 50\n");
		break;
	default://û��ָ���ĳ�ֵ�򷵻����µĴ��롣
		printf("num != 40 , num != 50");
		break;
	}
	return 0;
}


int main_2(void)
{
	int test_num_1;
	printf("if�жϣ�\n");
	scanf_s("%d",&test_num_1);
	if (test_num_1 <= 10)
	{
		printf("����<=10\n");
	}
	if (test_num_1 <= 50)
	{
		printf("����<=50\n");
	}
	if (test_num_1 <= 90) {
		printf("����<=90\n");
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
	//print ��ӡ f format��ʽ��
	//��ʽ�����
	printf("hello world!\n");
	//���� ע���°汾��vs��2019��ʼ��scanf()�ĳ���scanf_s();������ʹ�á�
	//scanf_s("%d",&int_num);
	printf("char word = %c\n", word);
	printf("INT number = %d\n", INT_num); 
	printf("int number = %d\n", int_num);
	printf("float number = %f\n",float_num);
	printf("double number = %lf\n",double_num);
	printf("\\t = \t(ˮƽ�Ʊ�����൱��TAB��)\n"); 
	printf("\\n = \n(���з�)\n");
	printf("\\\\ = \\(\\�ַ�)\n");
	printf("\\' = \'(�ַ�)\n");
	printf("\\\" = \"(�ַ�)\n");
	printf("\\? = \?(�ַ�)\n");
	printf("\\a = \a(��������)\n");
	printf("\\b = \b(�˸��)\n");
	printf("\\f = \f(��ҳ��)\n");
	printf("\\r = \r(�س�)\n");
	printf("\\v = \v(��ֱ�Ʊ��)\n");
	printf("\\ooo = \ooo(һ����λ�İ˽�������Ŀǰ����֪�����ʹ��)\n");
	printf("\\xhh = \\xhh...(һ���������ֵ�ʮ��������,Ŀǰ����֪�����ʹ��)\n");
	
	printf("\n\n�����������\n\t");
	int num_1, num_2,num_3;
	num_1 = 2; 
	num_2 = 1;
	printf("num_1 = %d\n\tnum_2 = %d\n",num_1,num_2);
	printf("\tnum_1 + num_2 = %d\n", num_1 + num_2);
	printf("\tnum_1 - num_2 = %d\n", num_1 - num_2);
	printf("\tnum_1 * num_2 = %d\n", num_1 * num_2);
	printf("\tnum_1 / num_2 = %d\n", num_1 / num_2);
	printf("\tnum_1 %% num_2 = %d\n", num_1 % num_2);

	printf("�������ȼ���\n");
	printf("\t-num_1 + num_2) >> 1 * 3 = %d\n", (-num_1 + num_2) << 1 * 3);
	
	printf("++��--�����㣺\n");
	num_3 = num_1++;
	printf("\tnum_1++ = %d\n", num_3);
	num_3 = num_1--;
	printf("\tnum_1-- = %d\n", num_1--);
	num_3 = ++num_1;
	printf("\t++num_1 = %d\n", ++num_1);
	num_3 = --num_1;
	printf("\t--num_1 = %d\n", --num_1);
	
	printf("\n��ϵ�������\n");
	num_1 = 2;
	printf("\t0Ϊfalse,1Ϊtrue\n");
	printf("\tnum_1 == num_2  %d\t���ں�\n", num_1 == num_2 ? 1:0);
	printf("\tnum_1 != num_2  %d\t�����ں�\n", num_1 != num_2 ? 1 : 0);
	printf("\tnum_1 >  num_2  %d\t���ں�\n", num_1 > num_2 ? 1 : 0);
	printf("\tnum_1 <  num_2  %d\tС�ں�\n", num_1 < num_2 ? 1 : 0);
	printf("\tnum_1 >= num_2  %d\t���ڵ��ں�\n", num_1 >= num_2 ? 1 : 0);
	printf("\tnum_1 <= num_2  %d\tС�ڵ��ں�\n", num_1 <= num_2 ? 1 : 0);
	
	printf("\n�߼��������\n");
	SAR_2_num(0, 1);
	printf("\tnum_1 && num_2 == %d\t��Ϊ�߼����������������������������㣬������Ϊ�档\n",num_1 && num_2);
	printf("\tnum_1 || num_2 == %d\t��Ϊ�߼�������������������������������һ�����㣬������Ϊ�档\n", num_1 || num_2);
	printf("\t!(num_1 && num_2) == %d\t��Ϊ�߼����������������ת���������߼�״̬���������Ϊ�����߼����������ʹ��Ϊ�١�\n", !(num_1 && num_2));
	
	printf("\n��λ����\"��\"����������λ����\"��\"���㡣�������\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t%d & %d = %d\n",i_1,i_2,i_1 & i_2);
		}
	}
	printf("��λ����\"��\"����������λ����\"��\"���㡣�������\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t%d | %d = %d\n", i_1, i_2, i_1 | i_2);
		}
	}
	printf("������������������λ����\"���\"���㡣�������\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t%d ^ %d = %d\n", i_1, i_2, i_1 ^ i_2);
		}
	}
	printf("ȡ�����������������λ����\"ȡ��\"���㡣�������\nע����ʾ����ʮ��������\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t~%d = %d\n", i_1,~i_1);
		}
	}
	printf("�������������������һ���������ĸ�������λȫ����������λ����ߵĶ�����λ�������ұ߲�0����\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t%d << 1 = %d\n", i_1,i_1 << 1);
		}
	}
	printf("�������������������һ�����ĸ�������λȫ����������λ��������0��������1���ұ߶�����\n");
	for (int i_1 = 0; i_1 < 2; i_1++)
	{
		for (int i_2 = 0; i_2 <= i_1; i_2++)
		{
			printf("\t%d >> 1 = %d\n", i_1, i_1 >> 1);
		}
	}

	printf("\n��ֵ�������\n");
	SAR_2_num(2, 1);
	printf("\tnum_1 = 1 =(���) %d\t�򵥵ĸ�ֵ����������ұ߲�������ֵ������߲�����\n",num_1 = 1);
	printf("\tnum_1 += 1 = %d\t���Ҹ�ֵ����������ұ߲�����������߲������Ľ����ֵ����߲�����\n", num_1 += 1);
	printf("\tnum_1 -= 1 = %d\t���Ҹ�ֵ�����������߲�������ȥ�ұ߲������Ľ����ֵ����߲�����\n", num_1 -= 1);
	printf("\tnum_1 *= 1 = %d\t���Ҹ�ֵ����������ұ߲�����������߲������Ľ����ֵ����߲�����\n", num_1 *= 1);
	printf("\tnum_1 /= 1 = %d\t���Ҹ�ֵ�����������߲����������ұ߲������Ľ����ֵ����߲�����\n", num_1 /= 1);
	printf("\tnum_1 %%= 1 = %d\t��ģ�Ҹ�ֵ���������������������ģ��ֵ����߲�����\n", num_1 %= 1);
	printf("\tnum_1 <<= 1 = %d\t�����Ҹ�ֵ�����\n", num_1 <<= 1);
	printf("\tnum_1 >>= 1 = %d\t�����Ҹ�ֵ�����\n", num_1 >>= 1);
	printf("\tnum_1 &= 1 = %d\t��λ���Ҹ�ֵ�����\n", num_1 &= 1);
	printf("\tnum_1 ^= 2 = %d\t��λ����Ҹ�ֵ�����\n", num_1 ^= 2);
	printf("\tnum_1 |= 1 = %d\t��λ���Ҹ�ֵ�����\n", num_1 |= 1);
	
	int int_num_1 = 1;
	double double_num_1 = 1.1;
	int* bunary = 0101;
	
	printf("\n�����������C����֧�ֵ�����һЩ��Ҫ�����������\n");
	printf("\tsizeof(int_num_1) return %lu\t���ر����Ĵ�С��\n",sizeof(int_num_1));
	
	printf("\t&int_num_1; == %d\t���ر����ĵ�ַ��\n",int_num_1);

	printf("��Ԫ�����(�������ʽ)��\n\t�������Ϊ�� ? ��ֵΪ X : ����ֵΪ Y\n");
	SAR_2_num(1,0);
	printf("\tnum_2 = (num_1 == 0) ? 20 : 30\tnum_2 == %d\n", num_1 == 0 ? 20 : 30);
	printf("\tnum_2 = (num_1 != 0) ? 20 : 30\tnum_2 == %d\n",num_1 != 0 ? 20: 30);

	
	//getchar();
	//while(1){//while��������ǲ���ֵ��ֻ��ture��false��
	//	printf("\a");
	//}
	return 0;
}
