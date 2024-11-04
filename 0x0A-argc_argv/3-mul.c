#include "main.h"

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}

int main(int argc, char *argv[]){
    int num1, num2, result;
    if (argc != 3){
        printf("Error\n");
        return 1;
    }

    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);
    result = num1 * num2;

    printf("%d", result);

    return 0;
}