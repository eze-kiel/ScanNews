#include <stdio.h>
#include <stdlib.h>
#include <time.h>


signed short TrouverNombreJour(signed short mois, signed short annee);
signed short actualiserJour(signed short jourPrecedent, signed short mois, signed short type);
signed short actualiserAnnee(signed short jour, signed short mois);


int main()
{
    time_t T= time(NULL);
    struct  tm tm = *localtime(&T);
    printf("%s%02d%02d%d\n","http://www.ojd-suivivn.com/track?link=400&n=20180216&cible=http%3A%2F%2Fkiosque.cnewsmatin.fr%2FPdf.aspx%3Fedition%3DLYO%26date%3D", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday);
    return 0;
}

/* fonctions */
signed short actualiserJour(signed short jourPrecedent, signed short mois, signed short type)
 {
    signed short jour;

/*MOIS DE FEVRIER*/
    if((mois == 2) && (type == 1))
    {
        if(jourPrecedent < 28)
        {
            jour = 1;
        }
        else
        {
            jour++;
        }

    }
    else if ((mois == 2) && (type = 0))
    {
        if(jourPrecedent < 29)
        {
            jour = 1;
        }
        else
        {
            jour++;
        }
    }


    return jour;
 }

 /* actualise l'annee */
signed short actualiserAnnee(signed short jour, signed short mois)
{
    signed short annee;

    if((mois == 12) && (jour == 31))
    {
        annee++;
    }
    else
    {
    }

    return annee;
}


 /* retourne 1 si l'annee est bisextile et 0 si elle ne l'est pas */
 signed short typeAnnee(signed short annee)
 {
     signed short type;

     if((annee % 4) == 0)
     {
        type = 1;
     }
     else
     {
         type = 0;
     }
 }

 /* savoir le nombre de jour d'un mois */
signed short TrouverNombreJour(signed short mois, signed short annee)
 {
    unsigned short Tab31jours [,3,5,7,8,10,12];
    unsigned short Tab30jours [4,6,9,11];

    signed short nombreJours;
    signed short i = 0;


    for (i = 0; i < 8; i++)
    {
        if (mois31jours[i] == mois)
        {
            nombreJours = mois31jours[i];
        }
        else if (mois30jours[i] == mois)
        {
            nombreJours = mois30jours;
        }
        else if (typeAnnee(annee) == 1)
        {
            nombreJours = 29;
        }
        else
        {
            nombreJours = 28;
        }
    }

    return nombreJours;

 }

 /*lien dl :
 http://www.ojd-suivivn.com/track?link=400&n=20180216&cible=
 http%3A%2F%2Fkiosque.cnewsmatin.fr%2FPdf.aspx%3Fedition%3DLYO%26date%3D20180216*/
