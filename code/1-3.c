#include <stdio.h>

char *my_strcat(char *dst, const char *src) {
	int i = 0;
	int j = 0;
	while(dst[i] != 0) i++;
	
	while(src[j] != 0) {
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
}


int main() {
	char str1[20] = "Hello";
	char str2[] = "World";

	printf("%s\n", str1);
	my_strcat(str1, str2);
	printf("%s\n", str1);	

	return 0;
}

