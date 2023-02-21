#include <stdio.h>

/* Programma che legge un intero n e stampa tutte le coppie (i,j) di numeri
 * tali che 1<=i<=j<=n e tali che i+j=3 */
int main() {
	    int i, j;                                   // due variabili contatori
		int n;                                      // dimensione massima interi considerati
		
		/* INPUT */
		printf("Introduci un intero, please.\n");
		scanf("%d", &n);
		
		/* fai variare la viariabile i fra 1 e n */
		printf("Ecco le tue coppie.\n");
		for(i=1;i<=n;i++) {
			    printf("Coppie il cui primo elemento %c %d: ", 138, i);
				/* visto che i<=j, si puo' inizializzare il secondo contatore ad i */
				for(j=i;j<=n;j++) {
					    /* verifica se i piu' j e' divisibile per tre */
						if((i+j)%3==0)
							     printf("(%d,%d) ", i, j);
				}
				printf("\n");
		}
}
