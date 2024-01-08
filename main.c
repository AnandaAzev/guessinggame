#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void jogo(){

srand(time(0));
int num = rand();
int numtentativas,i, nivel;
int numeroSecreto = num % 100 , chute, chances = 0;
int ganhou = 0;
int tentativas = 1;
double pontos = 1000;


    printf("Qual o nivel de dificuldade?\n");
    printf("(1)Facil, (2)Medio, (3)Dificil.\n\n");
    printf("Escolha um nivel de dificuldade.\n");
    scanf("%d", &nivel);

    switch(nivel){
    case 1:
        numtentativas = 20;
        break;
    case 2:
        numtentativas = 15;
        break;
    default:
        numtentativas = 6;
        break;

    }


    for(i = 0; i < numtentativas;i++){
    printf("Chute um numero de 1 a 100:\n");
    printf("Tentativa %d \n", tentativas);
    scanf("%d", &chute);

    if (chute < 0){
        printf("Voce nao pode chutar numeros negativos.\n");

        continue;
    }


    if (chute == numeroSecreto){
        printf("Voce acertou! O numero secreto era %d\n", numeroSecreto);
        printf("Foram usadas %d tentativas\n", tentativas);
printf("     /\\  /\\        \n");
printf(" ___/  \\/  \\___         \n");
printf(" |             /          \n");
printf(" |            /_            \n");
printf(" /     \\_| \\_| /               \n");
printf("/     \/  \/  \/                 \n");
printf("\     (o   )o  )                   \n");
printf(" \\ /c  \__/ --.                     \n");
printf(" | \_  ,     -'                     \n");
printf(" |_ | '\\_______)                    \n");
printf("   ||      _)                         \n");
printf("    |     |                             \n");
printf("    ooooooo                              \n");
printf("   /       \\                           \n");

printf("Parabens, intelecto nivel Lisa Simpson!!\n");

        break;
    }
    else if (chute < numeroSecreto){
        printf("O numero secreto e maior que o chute.\n");
        chances++;
    }
    else if (chute > numeroSecreto){
        printf("O numero secreto e menor que o chute.\n");
        chances++;
    }
    tentativas = tentativas + 1;

    double pontosperdidos = abs(chute - numeroSecreto) / 2.0;


    pontos = pontos - pontosperdidos;

    }


    printf("Fim de jogo!\n");
    printf("O numero secreto era %d\n", numeroSecreto);
    printf("Total de pontos: %.1f\n", pontos);



}




int main()
{

printf("     ##    #####     ####    #####    \n");
printf("          ##   ##   ##  ##  ##   ##      \n");
printf("    ###   ##   ##  ##       ##   ##        \n");
printf("     ##   ##   ##  ##       ##   ##        \n");
printf("     ##   ##   ##  ##  ###  ##   ##         \n");
printf(" ##  ##   ##   ##   ##  ##  ##   ##          \n");
printf(" ##  ##    #####     #####   #####            \n");
printf("  ####                                          \n");

printf(" #####    #######       \n");
printf("  ## ##    ##   #         \n");
printf("  ##  ##   ## #            \n");
printf("  ##  ##   ####                \n");
printf("  ##  ##   ## #                  \n");
printf("  ## ##    ##   #                    \n");
printf(" #####    #######                  \n");


printf("  ##     #####     ####    ##   ##   ####    ##   ##  ##   ##    ##       ####     ##      #####     \n");
printf("  ####     ## ##     ##     ##   ##    ##     ###  ##  ##   ##   ####     ##  ##   ####    ##   ##     \n");
printf(" ##  ##    ##  ##    ##      ## ##     ##     #### ##  ##   ##  ##  ##   ##       ##  ##   ##   ##      \n");
printf(" ##  ##    ##  ##    ##      ## ##     ##     ## ####  #######  ##  ##   ##       ##  ##   ##   ##        \n");
printf(" ######    ##  ##    ##       ###      ##     ##  ###  ##   ##  ######   ##       ######   ##   ##       \n");
printf(" ##  ##    ## ##     ##       ###      ##     ##   ##  ##   ##  ##  ##    ##  ##  ##  ##   ##   ##          \n");
printf(" ##  ##   #####     ####       #      ####    ##   ##  ##   ##  ##  ##     ####   ##  ##    #####          \n\n");

printf("\nPor Ananda Azevedo\n\n\n");






    jogo();

    return 0;
}
