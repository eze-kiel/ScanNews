#include <stdio.h>
#include <stdlib.h>

int main() {

    time_t T= time(NULL);
    struct  tm tm = *localtime(&T);

	if (tm.tm_hour == 20)
	{
		printf("It's the time !\n");
	}
	else
	{
		system("rm -rf qrcode.png");
	}
	return 0;
}