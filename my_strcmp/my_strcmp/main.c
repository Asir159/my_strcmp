#define _CRT_SECURE_NO_WARNINGS 1


//ʵ���Լ���strcmp
#include <stdio.h>
#include <assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	/*��vs�Ļ�����������
	if (*str1 > *str2) //str1 �� str2 �ַ���ASII��󷵻�
		return 1;
	else		       //С����
		return -1;
		*/

	return (*str1 - *str2);

}

int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcde";

	int ret = my_strcmp(p1, p2);
	printf("ret = %d", ret);
	return 0;
}