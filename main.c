#include <stdio.h>
#include <stdlib.h>

typedef struct livros{
	char* nome[20];
	char* isbn[20];
	double preco;
	int score;
	char* editora[20];
}livro, *pLivro;

pLivro livro_aloc(int qtde){
	
	pLivro livros = (pLivro)malloc(qtde * sizeof(livro));
	
	return livros;
}

void livro_ler(pLivro livros, int qtde){
	int i;
	for(i = 0; i < qtde; i++){

	scanf("%[^\n]", livros[i].nome);
	scanf("%s", livros[i].isbn);
	scanf("%lf", &livros[i].preco);
	scanf("%d", &livros[i].score);
	scanf("%[^\n]", livros[i].editora);
	
   }	
 } 

void livro_exibe(pLivro livro, int qtde){
	for(i = 0; i < qtde; i++){
		
	printf("Livro %d:\n", i + 1);
	printf("Nome: %s\n", livros[i].nome);
	printf("ISBN: %s\n", livros[i].isbn);
	printf("Preco: R$ %.2lf\n", livros[i].preco);
    printf("Score: %d\n", livros[i].score);
	printf("Editora: %s\n", livros[i].editora);
   }
  }

pLivro livro_desaloca(pLivro livros){
	free(livros);
}
