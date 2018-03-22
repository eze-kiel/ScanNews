#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void main()
{
	while(1)
	{

		time_t T= time(NULL);
	    struct  tm tm = *localtime(&T);

	    signed short heure = tm.tm_hour;
	    signed short minutes = tm.tm_min;
	    signed short secondes = tm.tm_sec;
	    signed short jour = tm.tm_wday; // day of the week 0-6, 0 = Sunday !


	    if((jour != 0)&&(jour != 6))
	    {
		    if ((heure == 17)&&(minutes == 03)&&(secondes == 45))
			{
				system("rm -rf qrcode.png");
				printf("The older QR Code has been removed.\n");
				printf("A new QR Code will be created, up to date.\n");
				system("bash print.sh");
			}
	    }

		
	}
}