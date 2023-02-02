/* contagem de votos/ comparação de valores */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int votosA, votosB, votosC, votosD, votosBrancos, votosNulos, total, totalValidos;
    printf ("INFORME A QUANTIDADE DE VOTOS PARA O PARTICIPANTE A: ");
    scanf("%d", &votosA);
    printf ("INFORME A QUANTIDADE DE VOTOS PARA O PARTICIPANTE B: ");
    scanf("%d", &votosB);
    printf ("INFORME A QUANTIDADE DE VOTOS PARA O PARTICIPANTE C: ");
    scanf("%d", &votosC);
    printf ("INFORME A QUANTIDADE DE VOTOS PARA O PARTICIPANTE D: ");
    scanf("%d", &votosD);
    printf ("INFORME A QUANTIDADE DE VOTOS EM BRANCOS: ");
    scanf("%d", &votosBrancos);
    printf ("INFORME A QUANTIDADE DE VOTOS NULOS: ");
    scanf("%d", &votosNulos);

    total = votosA + votosB + votosC + votosD + votosBrancos + votosNulos;
    totalValidos = votosA + votosB + votosC + votosD;

    printf ("***********************");
    printf("\n RESULTADOS: ");
    printf("\nTOTAL DE VOTOS: %d", total);
    printf("\nTOTAL DE VOTOS EM BRANCO: %d", votosBrancos);
    printf("\nTOTAL DE VOTOS NULOS: %d", votosNulos);
    printf("\nTOTAL DE VOTOS VALIDOS: %d", totalValidos);

    printf("\nPERCENTUAL DE VOTOS VÁLIDOS: %.2f%c", totalValidos*100.0/total, '%' );
    printf("\nPERCENTUAL DE VOTOS DO PARTICIPANTE A: %.2f%c", votosA*100.0/total, '%' );
    printf("\nPERCENTUAL DE VOTOS DO PARTICIPANTE B: %.2f%c", votosB*100.0/total, '%' );
    printf("\nPERCENTUAL DE VOTOS DO PARTICIPANTE C: %.2f%c", votosC*100.0/total, '%' );
    printf("\nPERCENTUAL DE VOTOS DO PARTICIPANTE D: %.2f%c", votosD*100.0/total, '%' );
    printf("\nPERCENTUAL DE VOTOS EM BRANCO: %.2f%c", votosBrancos*100.0/total, '%' );
    printf("\nPERCENTUAL DE VOTOS NULO: %.2f", votosNulos*100.0/total, '%' );
    return 0;
}
