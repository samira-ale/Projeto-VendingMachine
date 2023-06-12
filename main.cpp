#include <iostream>
using namespace std;

struct Item {
    string nome;
    float preco;
    int qtd;
};

const int qtd_max = 10; // Qtd máxima de itens
Item itens[qtd_max]; // Determinar o valor máximo de itens
int numItens = 0;  // Número atual de itens
double faturamentoTotal = 0.0; // Calcular faturamento

Item criarItem() {
    Item novoItem;
    cout << "Digite o nome do item: ";
    cin >> novoItem.nome;

    cout << "Digite o preço do item: ";
    cin >> novoItem.preco;

    cout << "Digite a quantidade disponível: ";
    cin >> novoItem.qtd;

    return novoItem;
}

void TelaAdmin(){
  int opcao;
  int voltar;
  
  do {
  cout << "╔══════════════════════════╗" << endl;
  cout << "║  Bem-vindo               ║" << endl;
  cout << "║  Administrador           ║" << endl;
  cout << "╠══════════════════════════╣" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒ Escolha uma opção: ▒▒▒║" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║ ╔══════════════════════╗ ║" << endl;
  cout << "║ ║   1. Inventário      ║ ║" << endl;
  cout << "║ ║   2. Alterar qtd.    ║ ║" << endl;
  cout << "║ ║   3. Novo registro   ║ ║" << endl;
  cout << "║ ║   4. Faturamento     ║ ║" << endl;
  cout << "║ ║   5. Voltar          ║ ║" << endl;
  cout << "║ ╚══════════════════════╝ ║" << endl;
  cout << "╚══════════════════════════╝" << endl;
  cout << "---> ";
  
  cin >> opcao;

    switch(opcao) {
      case 1:
        cout << "╔══════════════════════════╗" << endl;
        cout << "║     Itens disponíveis:   ║" << endl;
        cout << "╚══════════════════════════╝" << endl;
        for (int i = 0; i < numItens; i++) {
          cout << "Id: " << i << endl;
          cout << "Nome: " << itens[i].nome << endl;
          cout << "Preço: R$" << itens[i].preco << endl;
          cout << "Quantidade: " << itens[i].qtd << endl;
          cout << "----------------------" << endl;
       }
      break;
      case 2: {
        int indice;
        
        cout << "╔══════════════════════════╗" << endl;
        cout << "║ Digite o índice do item  ║" << endl;
        cout << "║      a ser alterado:     ║" << endl;
        cout << "║                          ║" << endl;
        cout << "║   Pressione um indice    ║" << endl;
        cout << "║   invalido para voltar   ║" << endl;
        cout << "╚══════════════════════════╝" << endl;

        cin >> indice;
        if (indice >= 0 && indice < numItens) {
          int novaQtd;
          cout << "╔══════════════════════════╗" << endl;
          cout << "║ Digite a nova quantidade:║" << endl;
          cout << "║                          ║" << endl;
          cout << "║                          ║" << endl;
          cout << "║                          ║" << endl;
          cout << "╚══════════════════════════╝" << endl;
          cin >> novaQtd;

          itens[indice].qtd = novaQtd;
                } else {
          cout << "╔══════════════════════════╗" << endl;
          cout << "║      Índice inválido!    ║" << endl;
          cout << "║        Pressione 0       ║" << endl;
          cout << "║        para voltar       ║" << endl;
          cout << "╚══════════════════════════╝" << endl;
          cin >> voltar;
        if (voltar==0){
          TelaAdmin();
                }
        }
        
      }
      break;
      case 3:
      if (numItens < qtd_max) {
         cout << "Digite o nome do item: ";
         cin >> itens[numItens].nome;
         cout << "Digite o preço do item: ";
         cin >> itens[numItens].preco;
         cout << "Digite a quantidade do item: ";
         cin >> itens[numItens].qtd;
         numItens++;
         cout << "Item criado com sucesso!" << endl;
          } else {
          cout << "Não é possível criar mais itens. Limite máximo alcançado." << endl;
            }
      case 4:
        cout << "Faturamento total: R$" << faturamentoTotal << endl;
      break;
      case 5: 
      return;
    }
   }
  while (true); 
}

void TelaCliente() {
  int opcao;
  int voltar;
  
  cout << "╔══════════════════════════╗" << endl;
  cout << "║  Bem-vindo,              ║" << endl;
  cout << "║  Cliente <3              ║" << endl;
  cout << "╠══════════════════════════╣" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒ Escolha uma opção: ▒▒▒║" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║ ╔══════════════════════╗ ║" << endl;
  cout << "║ ║   1. Comprar         ║ ║" << endl;
  cout << "║ ║   2. Voltar          ║ ║" << endl;
  cout << "║ ╚══════════════════════╝ ║" << endl;
  cout << "╚══════════════════════════╝" << endl;
  cout << "---> ";
  
  cin >> opcao;

  switch(opcao) {
    case 1: {
      int indice;

    cout << "╔══════════════════════════╗" << endl;
    cout << "║   Itens disponíveis:     ║" << endl;
    cout << "║                          ║" << endl;
    cout << "╚══════════════════════════╝" << endl;
    for (int i = 0; i < numItens; i++) {
    cout << "Índice: " << i << endl;
    cout << "Nome: " << itens[i].nome << endl;
    cout << "Preço: R$" << itens[i].preco << endl;
    cout << "Quantidade: " << itens[i].qtd << endl;
    cout << "----------------------" << endl;
    }
      
      cout << "╔══════════════════════════╗" << endl;
      cout << "║ Digite o índice do item  ║" << endl;
      cout << "║       que deseja         ║" << endl;
      cout << "║        comprar:          ║" << endl;
      cout << "║                          ║" << endl;
      cout << "║   Pressione um indice    ║" << endl;
      cout << "║   invalido para voltar   ║" << endl;
      cout << "╚══════════════════════════╝" << endl;

      cin >> indice;
      
      if (indice >= 0 && indice < numItens) {
        int quantidade;
        cout << "╔══════════════════════════╗" << endl;
        cout << "║ Digite a quantidade:     ║" << endl;
        cout << "║                          ║" << endl;
        cout << "║                          ║" << endl;
        cout << "║                          ║" << endl;
        cout << "╚══════════════════════════╝" << endl;
        cin >> quantidade;

        if (itens[indice].qtd >= quantidade) {
          double valorTotal = itens[indice].preco * quantidade;
          cout << "Total a pagar: R$" << valorTotal << endl;

          double valorInserido;
          cout << "Digite o valor inserido: R$";
          cin >> valorInserido;

          if (valorInserido >= valorTotal) {
            double troco = valorInserido - valorTotal;
            cout << "Troco: R$" << troco << endl;

            faturamentoTotal += valorTotal;
            itens[indice].qtd -= quantidade;
            cout << "Compra realizada com sucesso!" << endl;
          } else {
            cout << "Valor inserido insuficiente para realizar a compra." << endl;
          }
        } else {
          cout << "Quantidade indisponível no estoque." << endl;
        }
      } else {
          cout << "╔══════════════════════════╗" << endl;
          cout << "║      Índice inválido!    ║" << endl;
          cout << "║        Pressione 0       ║" << endl;
          cout << "║        para voltar       ║" << endl;
          cout << "╚══════════════════════════╝" << endl;
          cin >> voltar;
        if (voltar==0){
          TelaCliente();
                }
    }
    break;
    
    case 2:
    return;
    
    default:
      cout << "Opção inválida!" << endl;
      break;
  }
}
}

int main(){
  int op;
  bool voltar = true;

  while (voltar) {
  cout << "╔══════════════════════════╗" << endl;
  cout << "║  Bem-vindo à Máquina     ║" << endl;
  cout << "║  de doces!               ║" << endl;
  cout << "╠══════════════════════════╣" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒ Máquina construída ▒▒▒║" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒ por ▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒▒▒▒ Samira Ale ▒▒▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒▒▒ 2840482311016 ▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║▒▒▒▒ Escolha um modo: ▒▒▒▒║" << endl;
  cout << "║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
  cout << "║ ╔══════════════════════╗ ║" << endl;
  cout << "║ ║   1. Administrador   ║ ║" << endl;
  cout << "║ ║   2. Cliente         ║ ║" << endl;
  cout << "║ ╚══════════════════════╝ ║" << endl;
  cout << "╚══════════════════════════╝" << endl;
  cout << "---> ";

  cin >> op;
  
  switch (op) {
  case 1:
    TelaAdmin();
    break;
  case 2:
    TelaCliente();
    break;
  default:
    cout << "Insira um opção válida" << endl;
  }
}
  return 0;
}