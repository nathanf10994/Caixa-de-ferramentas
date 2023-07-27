/*
Pequeno projeto usando struct que simula uma caixa de ferramentas
Developed by Nathan Ferreira
GitHub: nathanf10994
*/

#include <iostream>
using namespace std;

struct ferramentas{
	char nome[20];
	char fabricante[20];
	int tamanho;
	
	void insere(char stnome[20], char stfabricante[20], int sttam){
		for(int i=0; i<20; i++){nome[i]=stnome[i];}
		for(int i=0; i<20; i++){fabricante[i] = stfabricante[i];}
		tamanho = sttam;
	}
	
	void mostra(int i){
		cout<<"\n\n O Nome da ferramenta "<<i+1<<" eh "<<nome<<endl;
		cout<<"\n O Fabricante da ferramenta "<<i+1<<" eh "<<fabricante<<endl;
		cout<<"\n O Tamanho da ferramenta "<<i+1<<" eh "<<tamanho<<endl;
	}
};

int main(){
	
	ferramentas chaves[5];
	char nome[20], fabricante[20];
	int tamanho;
	
	for(int i=0; i<5; i++){
		
		cout<<"\n Informe o nome da ferramenta "<<i+1<<": ";
		cin>>nome;
		cout<<"\n Informe o fabricante da ferramenta "<<i+1<<": ";
		cin>>fabricante;
		cout<<"\n Informe o tamanho da ferramenta "<<i+1<<": ";
		cin>>tamanho;
		
		chaves[i].insere(nome, fabricante, tamanho);
	}
	
	for(int i=0; i<5; i++){
		
		chaves[i].mostra(i);
	}
	
	
return 0;
}