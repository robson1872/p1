#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int viagem(int numero, int cont, int x, int y, int moeda, char direcao)
{
    if(cont > numero)
    {
        printf("%d\n", moeda);
        return 0;
    }
    else
    {
        scanf("%c", &direcao);

        if(direcao == 'D')
        {
            x+1;
            cont++;

            scanf("%c", &direcao);

            if(direcao == 'C')
            {
                moeda = moeda;
                x-1;
            }
            else if(direcao == 'D')
            {
                x+1;
                moeda+1;
            }
        }
        else if(direcao == 'C')
        {
            y+1;
            cont++;

            scanf("%c", &direcao);

            if(direcao == 'C')
            {
                y+1;
                moeda+1;
            }
            else if(direcao == 'D')
            {
                moeda = moeda;
                y-1;
            }
        } 
        viagem(numero, cont, x, y, moeda, direcao);
    }
}

int main() 
{
    int n, contador, x, y;
    int moeda;
    char direcao;

    scanf("%d", &n);

    contador = 0;
    x = 0;
    y = 0;
    moeda = 0;

    viagem(n, contador, x, y, moeda, direcao);

	return 0;
}