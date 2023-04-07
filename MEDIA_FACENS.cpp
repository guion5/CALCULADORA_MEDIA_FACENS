//inclusão de bibliotecas 
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

//abertura do código
int main() {
    
   //declaração de variáveis (string, int e double)
    std::string name; 
    int ra;
    double ac1, ac2, ag, af;  
    //variável para resetar o programa
    char resposta;
    
    //condicional de ação do programa
    do {
        
    //interface do usuário para inserção do nome
    cout << "Insira seu nome completo >>> ";
    //variável que recebe a informação do usuário
    getline(cin, name);

    //interface do usuário para inserção do RA
    cout << "Insira seu RA de aluno >>> ";
    //variável que recebe a informação do usuário
    cin >> ra;

    //interface do usuário para inserção de nota da AC1
    cout << "Digite a sua nota na AC1 do semestre: ";
    //variável que receberá o valor inserido pelo usuário
    cin >> ac1;
    
    //interface do usuário para inserção de nota da AC2
    cout << "Digite a sua nota na AC2 do semestre: ";
    //variável que receberá o valor inserido pelo usuário
    cin >> ac2;
    
    //interface do usuário para inserção de nota da AG
    cout << "Digite a sua nota na AG do semestre: ";
    //variável que receberá o valor inserido pelo usuário
    cin >> ag;
    
    //interface do usuário para inserção de nota da AF 
    cout << "Digite a sua nota na Avaliação Final do semestre: ";
    //variável que receberá o valor inserido pelo usuário
    cin >> af;
    
    //calculo do peso da nota de ac1
    ac1 = (ac1 * 0.15);
    //calculo do peso da nota de ac2
    ac2 = (ac2 * 0.35);
    //calculo do peso da nota de ac2
    ag = (ag * 0.10);
    //calculo do peso da nota de af
    af = (af * 0.40);

    //calculo da soma das notas nas avaliações    
    double soma = (ac1 + ac2 + ag + af);

    //interface do usuário com o resultado da média
    cout << "A sua média no semestre foi: " << soma << endl;
    
    //condicional se a nota for igual ou maior à media estabelecida
    if(soma >= 5){
        //interface do usuário com resultado da aprovação
        cout << "Parabéns! Você foi aprovado!" << endl;
        //interface do usuário com o nome completo inserido pelo usuário
        cout << name << endl; 
        //interface do usuário com o RA inserido pelo usuário
        cout << ra << endl;
        }
        
        //condicional se a nota for inferior a media, porém maior ou igual à 3  (não atende a condicional anterior)
        else if(soma <5 && soma >=3){
             //interface do usuário com o resultado da recuperação
             cout << "Você está em recuperação. Deverá fazer uma prova substitutiva." << endl;
             //interface do usuário com o nome completo inserido pelo usuário
             cout << name << endl; 
             //interface do usuário com o RA inserido pelo usuário             
             cout << ra << endl;
        }
        //condicional se a nota for inferior à 3 (não atende as condicionais anteriores)
        else{
            //interface do usuário com o resultado da reprovação
            cout << "Infelizmente você foi reprovado." << endl;
            //interface do usuário com o nome completo inserido pelo usuário
            cout << name << endl; 
            //interface do usuário com o RA inserido pelo usuário             
            cout << ra << endl;
        }
        
        //interface do usuário com a pergunta para reiniciar o programa
        cout << "Deseja calcular a média de novo? (S/N) >>> ";
        //variável onde é inserida a resposta do usuário
        cin >> resposta;

        //Limpa a caixa de entrada antes de ler a resposta
        cin.ignore();

        //condicional de resposta (sim ou não)
        }while(resposta == 'S' || resposta == 's'); 
        
    //voltar ao início
    return 0;
}