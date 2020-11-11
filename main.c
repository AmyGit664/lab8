/*****************************************************************************/
/*** fichier: main.c                                                       ***/
/*** Calcul de max, min et variance                                        ***/
/*****************************************************************************/

#include <stdio.h>
#include <math.h>
#include "max.h"
#include "min.h"
#include "var.h"

#define nb_val 7

int main ()
{
        int i, min, max;
	float var;
        int table[nb_val] = {12, 12, 5, 19, 13, 17};

        for (i=0; i<nb_val; i++)
                printf("table[%d] = %d\n", i, table[i]);
        printf("\n");

        calcul_max(table, nb_val, &max);
        printf("Max = %d\n", max);

        calcul_min(table, nb_val, &min);
        printf("Min = %d\n", min);

	variance(table, nb_val, &var);
        printf("La variance du tableau arrondie est: %f\n", ceil(var));
	printf("L'arrondi inférieur de la variance est: %f\n", floor(var));

        return 0;

}


