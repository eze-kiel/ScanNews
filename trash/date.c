#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void main()
{



	time_t T= time(NULL);
    struct  tm tm = *localtime(&T);

    signed short heure = tm.tm_hour;

	if (heure == 21)
	{
		system("rm -rf qrcode.png");
		printf("The QR Code has been removed.\n");
	}
	else //if (heure == 20)
	{	
		system("bash print.sh");
	}


}