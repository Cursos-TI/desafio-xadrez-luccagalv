#include <stdio.h>

int main(){

int b = 0;
int t = 0;

for (int r = 0; r != 8; r++)
{
    printf("A rainha moveu-se oito casas para a esquerda..\n");
}


while ( b != 5)
{
    printf("O bispo moveu-se cinco casas a diagonal..\n");
    b++;
}


do
{
    printf("A torre moveu-se cinco casas a direita..\n");
    t++;
} while (t != 5);

return 0;

}