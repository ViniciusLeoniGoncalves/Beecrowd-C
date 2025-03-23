#include <stdio.h>

int main(){
    int entry, dia, mes, ano;
    printf("|-----------------------------------------------CALCULADORA DE IDADE-----------------------------------------------|\n");
    printf("|-----Por favor, insira a quantidade de dias passados, para que se calcule a idade em ano(s) mes(es) e dia(s)------|\n");
    printf("|                                                                                                                  |\n");
    scanf("%d", &entry);
    ano=entry/365;          //pegou só a quantidade inteira de quantos 365 dá pra contar aí dentro
    entry=entry%365;     //pegou quantos dias sobraram na divisão, os que nap foram suficientes pra completar 365
    mes=entry/30;        //pegou só a quantidade inteira de quantos 30 dá pra contar aí dentro do que nao virou ano
    entry=entry%30;   //pegou quantos dias sobraram na divisão, os que nap foram suficientes pra completar 30
    dia=entry;
    printf("| %d ano(s), %d mes(es), %d dia(s).                                                                                |\n", ano, mes, dia);
    return 0;
}

/*#include <stdio.h>

int main(){
    int entry, dia, mes, ano;
    scanf("%d", &entry);
    ano=entry/365;          //pegou só a quantidade inteira de quantos 365 dá pra contar aí dentro
    entry=entry%365;     //pegou quantos dias sobraram na divisão, os que nap foram suficientes pra completar 365
    mes=entry/30;        //pegou só a quantidade inteira de quantos 30 dá pra contar aí dentro do que nao virou ano
    entry=entry%30;   //pegou quantos dias sobraram na divisão, os que nap foram suficientes pra completar 30
    dia=entry;
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n", dia);
    return 0;
}*/