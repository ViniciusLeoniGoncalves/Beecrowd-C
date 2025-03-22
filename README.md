# Beecrowd C

Este repositório contém soluções para exercícios do Beecrowd (antigo URI Online Judge) desenvolvidos em  `C99`. O objetivo é reunir diversas resoluções de problemas e servir como referência para estudo e aprendizado.

## Índice

- [Sobre](#sobre)
- [Estrutura do Projeto](#estrutura-do-projeto)
- [Como Compilar](#como-compilar)
- [Soluções](#soluções)

## Sobre

Neste repositório, você encontrará arquivos com soluções para vários exercícios do Beecrowd, resolvidos em linguagem C. Cada exercício está comentado para facilitar o entendimento da lógica e dos algoritmos utilizados.

## Estrutura do Projeto

A organização do repositório segue a estrutura abaixo:

```plaintext
beecrowd-C/
├──bcrwd-1000/
├───── src/
│      └── exercicio_1000.c
├───── bin/
│      └── executáveis
├──bcrwd-1001/
├───── src/
│      └── exercicio_1001.c
├───── bin/
│      └── executáveis 
| [...] 
└── README.md
```

- **src/**: Contém os arquivos-fonte (.c) com as soluções.
- **bin/**: Pasta destinada aos executáveis compilados.

## Como Compilar

Para compilar um exercício específico, utilize o compilador GCC. Por exemplo, para compilar o exercício 1001, entre na pasta bcrwd-1001 e digite:

```bash
gcc src/exercicio_1001.c -o bin/exercicio_1001.exe
```

Certifique-se de que a pasta `bin/` exista antes de compilar. Caso ela não exista, crie-a com:

```bash
mkdir bin
```

No Linux ou macOS, o executável poderá ser gerado sem a extensão `.exe` (ex.: `./bin/exercicio_1001`).

## Soluções

A seguir, uma breve descrição de alguns exercícios presentes:

- **Exercício 1739**: Sequência de Threebonacci.
- ... adicionarei mais conforme os exercícios disponíveis ...

Cada arquivo contém comentários explicativos para auxiliar no entendimento do código.
