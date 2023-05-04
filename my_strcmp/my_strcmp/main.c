#define _CRT_SECURE_NO_WARNINGS 1


//实现自己的strcmp
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
	/*在vs的环境是这样的
	if (*str1 > *str2) //str1 比 str2 字符的ASII码大返回
		return 1;
	else		       //小返回
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