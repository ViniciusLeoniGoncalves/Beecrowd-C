#include <stdio.h>
#define MAX 100

/*
Função para verificar se a entrada tem o dígito 3 em alguma das casas decimais que retorna 1 caso encontre e 0 caso contrário.
`ENTRADA:` long long int.
`SAÍDA:` int. 
*/
int contem3(long long int number){
    
    char text[50];
    int i; 

	sprintf(text, "%lld", number);
    //casting de variável int -> string vector  
    for(i=0; text[i]!='\0'; i++){
        if(text[i] == '3')
            return 1;
    }
    return 0;
}


int main() {
    int n;
    long long int fibonacci[MAX]={0};
    long long int threebonacci[61]={0};

    fibonacci[0]=1;
    fibonacci[1]=1;
    int j=1;
    for(int i=2;i<=MAX;i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        if(fibonacci[i]%3==0 || contem3(fibonacci[i])){
            threebonacci[j]=fibonacci[i];
            j++;
        }
    }
    
    while(scanf("%d", &n)!=EOF){

        printf("%lld\n",threebonacci[n]);
        
    }
  
  return 0;
}