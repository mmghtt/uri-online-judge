/*LLeia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, 
uma linha em branco e em seguida, os valores na sequência como foram lidos..*/

#include <stdio.h>
int main()
{
    int A,B,C;
    scanf ("%d%d%d", &A,&B,&C);
    if(A<B&&A<C)
    {
        if(B<C)
            printf("%d\n%d\n%d\n",A,B,C);
        else printf("%d\n%d\n%d\n",A,C,B);
    }
    if(B<A&&B<C)
    {
        if(A<C)
            printf("%d\n%d\n%d\n",B,A,C);
        else printf("%d\n%d\n%d\n",B,C,A);
    }
    if(C<B&&C<A)
    {
        if(B<A)
            printf("%d\n%d\n%d\n",C,B,A);
        else printf("%d\n%d\n%d\n",C,A,B);
    }
    printf ("\n%d\n%d\n%d\n",A,B,C);
    return 0;
}

