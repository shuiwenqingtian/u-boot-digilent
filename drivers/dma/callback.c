#include <iostream.h>
#include <stdio.h>

// int (* get_callback)(int num )
typedef int ((*GET_callback) (int num ));
GET_callback  get_callback; 

int set_callback(int num ,GET_callback back);

int my_callback(int num )
{

	printf("%s\n", num);
}
 int main(int argc, char const *argv[])
{
	
	int a = 1;
	set_callback(a,my_callback);
	/* code */
	return 0;
}

int set_callback(int num ,GET_callback back)
{
	int aaa;
	aaa = num -10;
	back(aaa);
    return 1;
}