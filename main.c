#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct onibus
{
  // int onibus[40];
  int passagensCompradas[40];
} onibus;

typedef struct Cliente
{
  char nome[60], CPF[11];
  int passagensCompradas[40];

} cliente;

int main()
{
  char buscarCpf[11];
  int sair = 0, menu, clienteQtd = 0, menuCidades, horario, qtdPassagens = 0, lugarComprar, comprarPassagem = 1, lugarDisponivel = 1, contaPassagens = 0, achados = 0;
  float precoPassagem, precoTotal;

  cliente cliente[40];
  onibus onibus[8];

  do
  {
    do
    {
      printf("Escolha uma opcao abaixo:");

      printf("\n1 - Comprar ticket."
             "\n2 - Verificar passagem."
             "\n3 - Sair."
             "\nSua opcao: ");
      scanf("%d", &menu);

      if (menu < 1 || menu > 3)
      {
        system("cls");
        printf("Opcao invalida, insira outra.\n");
      }
    } while (menu < 1 || menu > 3);

    switch (menu)
    {
    case 1:
      system("cls");
      printf("Insira seu nome: ");
      fflush(stdin);
      gets(cliente[clienteQtd].nome);

      do
      {
        printf("Insira seu CPF: ");
        fflush(stdin);
        gets(cliente[clienteQtd].CPF);

        if (strlen(cliente[clienteQtd].CPF) != 11)
        {
          printf("CPF invalido, insira outro.\n");
        }
      } while (strlen(cliente[clienteQtd].CPF) != 11);

      system("cls");

      printf("Insira seu destino: ");

      printf("\n1 - Campo Grande - MS | R$172,00"
             "\n2 - Tres Lagoas - MS | R$ 143,16"
             "\n3 - Sao Paulo - SP | R$15,90"
             "\n4 - Lucelia - SP | R$110,00"
             "\n5 - Angra dos Reis - RJ | R$79,90"
             "\n6 - Duque de Caxias - RJ | R$119,00"
             "\n7 - Uberlandia - MG | R$65,00"
             "\n8 - Belo Horizonte - MG | R$45,00"
             "\nSua opcao: ");
      scanf("%d", &menuCidades);

      system("cls");

      switch (menuCidades)
      {
      case 1:
        precoPassagem = 172;
        contaPassagens = 0;
        precoTotal = 0;
        qtdPassagens = 0;

        system("cls");
        printf("Campo Grande - MS\n");

        printf("\nQual horario voce deseja embarcar?\n");

        printf("\n***TABELA DE HORARIOS***\n"
               "\n1 - 12:30 (Indisponivel)"
               "\n2 - 15:30 (Indisponivel)"
               "\n3 - 18:30"
               "\n4 - 21:30 (Indisponivel)"
               "\n5 - 23:30 (Indisponivel)"
               "\nSua opcao: ");
        scanf("%d", &horario);
        system("cls");

        do
        {
          do
          {
            lugarDisponivel = 1;

            do
            {
              printf("Destino: Campo Grande - MS\n");
              printf("\n37 38   39 40");
              printf("\n33 34   35 36");
              printf("\n29 30   31 32");
              printf("\n25 26   27 28");
              printf("\n21 22   23 24");
              printf("\n17 18   19 20");
              printf("\n13 14   15 16");
              printf("\n09 10   11 12");
              printf("\n05 06   07 08");
              printf("\n01 02   03 04");
              printf("\n\nInsira o lugar que voce deseja comprar: ");
              scanf("%d", &lugarComprar);

              if (lugarComprar > 40 || lugarComprar < 1)
              {
                system("cls");
                printf("Lugar invalido, insira outro.\n");
              }
            } while (lugarComprar > 40 || lugarComprar < 1);

            if (onibus[menuCidades - 1].passagensCompradas[lugarComprar] == 1)
            {
              lugarDisponivel = 0;
            }
            else
            {
              cliente[clienteQtd].passagensCompradas[qtdPassagens] = lugarComprar;
              qtdPassagens++;
            }

            if (lugarDisponivel != 1)
            {
              system("cls");
              printf("Lugar ja ocupado, escolha outro.\n");
            }
          } while (lugarDisponivel != 1);

          onibus[menuCidades - 1].passagensCompradas[lugarComprar] = 1;
          contaPassagens++;

          do
          {
            printf("Deseja comprar mais um lugar? Sim [1] | Nao [0]: ");
            scanf("%d", &comprarPassagem);

            if (comprarPassagem > 1 || comprarPassagem < 0)
            {
              printf("Opcao invalida, insira novamente.\n");
            }
          } while (comprarPassagem > 1 || comprarPassagem < 0);

          system("cls");
        } while (comprarPassagem != 0);

        precoTotal = precoPassagem * qtdPassagens;

        printf("Passagens compradas com sucesso!\n");
        printf("Valor total das passagens: %.2f x %d = %.2f\n\n", precoPassagem, qtdPassagens, precoTotal);

        break;

      case 2:
        precoPassagem = 143.16;
        contaPassagens = 0;
        precoTotal = 0;
        qtdPassagens = 0;
        system("cls");
        printf("Tres Lagoas - MS\n");

        printf("\nQual horario voce deseja embarcar?\n");

        printf("\n***TABELA DE HORARIOS***\n"
               "\n1 - 12:30 (Indisponivel)"
               "\n2 - 15:30"
               "\n3 - 18:30 (Indisponivel)"
               "\n4 - 21:30 (Indisponivel)"
               "\n5 - 23:30 (Indisponivel)"
               "\nSua opcao: ");
        scanf("%d", &horario);
        system("cls");

        do
        {
          do
          {
            lugarDisponivel = 1;

            do
            {
              printf("Destino: Tres Lagoas - MS\n");
              printf("\n37 38   39 40");
              printf("\n33 34   35 36");
              printf("\n29 30   31 32");
              printf("\n25 26   27 28");
              printf("\n21 22   23 24");
              printf("\n17 18   19 20");
              printf("\n13 14   15 16");
              printf("\n09 10   11 12");
              printf("\n05 06   07 08");
              printf("\n01 02   03 04");
              printf("\n\nInsira o lugar que voce deseja comprar: ");
              scanf("%d", &lugarComprar);

              if (lugarComprar > 40 || lugarComprar < 1)
              {
                system("cls");
                printf("Lugar invalido, insira outro.\n");
              }
            } while (lugarComprar > 40 || lugarComprar < 1);

            if (onibus[menuCidades - 1].passagensCompradas[lugarComprar] == 1)
            {
              lugarDisponivel = 0;
            }
            else
            {
              cliente[clienteQtd].passagensCompradas[qtdPassagens] = lugarComprar;
              qtdPassagens++;
            }

            if (lugarDisponivel != 1)
            {
              system("cls");
              printf("Lugar ja ocupado, escolha outro.\n");
            }
          } while (lugarDisponivel != 1);

          onibus[menuCidades - 1].passagensCompradas[lugarComprar] = 1;
          contaPassagens++;

          do
          {
            printf("Deseja comprar mais um lugar? Sim [1] | Nao [0]: ");
            scanf("%d", &comprarPassagem);

            if (comprarPassagem > 1 || comprarPassagem < 0)
            {
              printf("Opcao invalida, insira novamente.\n");
            }
          } while (comprarPassagem > 1 || comprarPassagem < 0);

          system("cls");
        } while (comprarPassagem != 0);

        precoTotal = precoPassagem * qtdPassagens;

        printf("Passagens compradas com sucesso!\n");
        printf("Valor total das passagens: %.2f x %d = %.2f\n\n", precoPassagem, qtdPassagens, precoTotal);

        break;

      case 3:
        precoPassagem = 15.90;
        contaPassagens = 0;
        precoTotal = 0;
        qtdPassagens = 0;
        system("cls");
        printf("Sao Paulo - SP\n");

        printf("\nQual horario voce deseja embarcar?\n");

        printf("\n***TABELA DE HORARIOS***\n"
               "\n1 - 12:30"
               "\n2 - 15:30 (Indisponivel)"
               "\n3 - 18:30 (Indisponivel)"
               "\n4 - 21:30 (Indisponivel)"
               "\n5 - 23:30 (Indisponivel)"
               "\nSua opcao: ");
        scanf("%d", &horario);
        system("cls");

        do
        {
          do
          {
            lugarDisponivel = 1;

            do
            {
              printf("Destino: Sao Paulo - SP\n");
              printf("\n37 38   39 40");
              printf("\n33 34   35 36");
              printf("\n29 30   31 32");
              printf("\n25 26   27 28");
              printf("\n21 22   23 24");
              printf("\n17 18   19 20");
              printf("\n13 14   15 16");
              printf("\n09 10   11 12");
              printf("\n05 06   07 08");
              printf("\n01 02   03 04");
              printf("\n\nInsira o lugar que voce deseja comprar: ");
              scanf("%d", &lugarComprar);

              if (lugarComprar > 40 || lugarComprar < 1)
              {
                system("cls");
                printf("Lugar invalido, insira outro.\n");
              }
            } while (lugarComprar > 40 || lugarComprar < 1);

            if (onibus[menuCidades - 1].passagensCompradas[lugarComprar] == 1)
            {
              lugarDisponivel = 0;
            }
            else
            {
              cliente[clienteQtd].passagensCompradas[qtdPassagens] = lugarComprar;
              qtdPassagens++;
            }

            if (lugarDisponivel != 1)
            {
              system("cls");
              printf("Lugar ja ocupado, escolha outro.\n");
            }
          } while (lugarDisponivel != 1);

          onibus[menuCidades - 1].passagensCompradas[lugarComprar] = 1;
          contaPassagens++;

          do
          {
            printf("Deseja comprar mais um lugar? Sim [1] | Nao [0]: ");
            scanf("%d", &comprarPassagem);

            if (comprarPassagem > 1 || comprarPassagem < 0)
            {
              printf("Opcao invalida, insira novamente.\n");
            }
          } while (comprarPassagem > 1 || comprarPassagem < 0);

          system("cls");
        } while (comprarPassagem != 0);

        precoTotal = precoPassagem * qtdPassagens;

        printf("Passagens compradas com sucesso!\n");
        printf("Valor total das passagens: %.2f x %d = %.2f\n\n", precoPassagem, qtdPassagens, precoTotal);

        break;

      case 4:
        precoPassagem = 110;
        contaPassagens = 0;
        precoTotal = 0;
        qtdPassagens = 0;
        system("cls");
        printf("Lucelia - SP\n");

        printf("\nQual horario voce deseja embarcar?\n");

        printf("\n***TABELA DE HORARIOS***\n"
               "\n1 - 12:30 (Indisponivel)"
               "\n2 - 15:30 (Indisponivel)"
               "\n3 - 18:30 (Indisponivel)"
               "\n4 - 21:30"
               "\n5 - 23:30 (Indisponivel)"
               "\nSua opcao: ");
        scanf("%d", &horario);
        system("cls");

        do
        {
          do
          {
            lugarDisponivel = 1;

            do
            {
              printf("Destino: Lucelia - SP\n");
              printf("\n37 38   39 40");
              printf("\n33 34   35 36");
              printf("\n29 30   31 32");
              printf("\n25 26   27 28");
              printf("\n21 22   23 24");
              printf("\n17 18   19 20");
              printf("\n13 14   15 16");
              printf("\n09 10   11 12");
              printf("\n05 06   07 08");
              printf("\n01 02   03 04");
              printf("\n\nInsira o lugar que voce deseja comprar: ");
              scanf("%d", &lugarComprar);

              if (lugarComprar > 40 || lugarComprar < 1)
              {
                system("cls");
                printf("Lugar invalido, insira outro.\n");
              }
            } while (lugarComprar > 40 || lugarComprar < 1);

            if (onibus[menuCidades - 1].passagensCompradas[lugarComprar] == 1)
            {
              lugarDisponivel = 0;
            }
            else
            {
              cliente[clienteQtd].passagensCompradas[qtdPassagens] = lugarComprar;
              qtdPassagens++;
            }

            if (lugarDisponivel != 1)
            {
              system("cls");
              printf("Lugar ja ocupado, escolha outro.\n");
            }
          } while (lugarDisponivel != 1);

          onibus[menuCidades - 1].passagensCompradas[lugarComprar] = 1;
          contaPassagens++;

          do
          {
            printf("Deseja comprar mais um lugar? Sim [1] | Nao [0]: ");
            scanf("%d", &comprarPassagem);

            if (comprarPassagem > 1 || comprarPassagem < 0)
            {
              printf("Opcao invalida, insira novamente.\n");
            }
          } while (comprarPassagem > 1 || comprarPassagem < 0);

          system("cls");
        } while (comprarPassagem != 0);

        precoTotal = precoPassagem * qtdPassagens;

        printf("Passagens compradas com sucesso!\n");
        printf("Valor total das passagens: %.2f x %d = %.2f\n\n", precoPassagem, qtdPassagens, precoTotal);

        break;

      case 5:
        precoPassagem = 79.90;
        contaPassagens = 0;
        precoTotal = 0;
        qtdPassagens = 0;
        system("cls");
        printf("Angra dos Reis - RJ\n");

        printf("\nQual horario voce deseja embarcar?\n");

        printf("\n***TABELA DE HORARIOS***\n"
               "\n1 - 12:30 (Indisponivel)"
               "\n2 - 15:30 (Indisponivel)"
               "\n3 - 18:30 (Indisponivel)"
               "\n4 - 21:30 (Indisponivel)"
               "\n5 - 23:30"
               "\nSua opcao: ");
        scanf("%d", &horario);
        system("cls");

        do
        {
          do
          {
            lugarDisponivel = 1;

            do
            {
              printf("Destino: Angra dos Reis - RJ\n");
              printf("\n37 38   39 40");
              printf("\n33 34   35 36");
              printf("\n29 30   31 32");
              printf("\n25 26   27 28");
              printf("\n21 22   23 24");
              printf("\n17 18   19 20");
              printf("\n13 14   15 16");
              printf("\n09 10   11 12");
              printf("\n05 06   07 08");
              printf("\n01 02   03 04");
              printf("\n\nInsira o lugar que voce deseja comprar: ");
              scanf("%d", &lugarComprar);

              if (lugarComprar > 40 || lugarComprar < 1)
              {
                system("cls");
                printf("Lugar invalido, insira outro.\n");
              }
            } while (lugarComprar > 40 || lugarComprar < 1);

            if (onibus[menuCidades - 1].passagensCompradas[lugarComprar] == 1)
            {
              lugarDisponivel = 0;
            }
            else
            {
              cliente[clienteQtd].passagensCompradas[qtdPassagens] = lugarComprar;
              qtdPassagens++;
            }

            if (lugarDisponivel != 1)
            {
              system("cls");
              printf("Lugar ja ocupado, escolha outro.\n");
            }
          } while (lugarDisponivel != 1);

          onibus[menuCidades - 1].passagensCompradas[lugarComprar] = 1;
          contaPassagens++;

          do
          {
            printf("Deseja comprar mais um lugar? Sim [1] | Nao [0]: ");
            scanf("%d", &comprarPassagem);

            if (comprarPassagem > 1 || comprarPassagem < 0)
            {
              printf("Opcao invalida, insira novamente.\n");
            }
          } while (comprarPassagem > 1 || comprarPassagem < 0);

          system("cls");
        } while (comprarPassagem != 0);

        precoTotal = precoPassagem * qtdPassagens;

        printf("Passagens compradas com sucesso!\n");
        printf("Valor total das passagens: %.2f x %d = %.2f\n\n", precoPassagem, qtdPassagens, precoTotal);

        break;

      case 6:
        precoPassagem = 119;
        contaPassagens = 0;
        precoTotal = 0;
        qtdPassagens = 0;
        system("cls");
        printf("Duque de Caxias - RJ\n");

        printf("\nQual horario voce deseja embarcar?\n");

        printf("\n***TABELA DE HORARIOS***\n"
               "\n1 - 12:30 (Indisponivel)"
               "\n2 - 15:30 (Indisponivel)"
               "\n3 - 18:30 (Indisponivel)"
               "\n4 - 21:30 (Indisponivel)"
               "\n5 - 23:30"
               "\nSua opcao: ");
        scanf("%d", &horario);
        system("cls");

        do
        {
          do
          {
            lugarDisponivel = 1;

            do
            {
              printf("Destino: Duque de Caxias - RJ\n");
              printf("\n37 38   39 40");
              printf("\n33 34   35 36");
              printf("\n29 30   31 32");
              printf("\n25 26   27 28");
              printf("\n21 22   23 24");
              printf("\n17 18   19 20");
              printf("\n13 14   15 16");
              printf("\n09 10   11 12");
              printf("\n05 06   07 08");
              printf("\n01 02   03 04");
              printf("\n\nInsira o lugar que voce deseja comprar: ");
              scanf("%d", &lugarComprar);

              if (lugarComprar > 40 || lugarComprar < 1)
              {
                system("cls");
                printf("Lugar invalido, insira outro.\n");
              }
            } while (lugarComprar > 40 || lugarComprar < 1);

            if (onibus[menuCidades - 1].passagensCompradas[lugarComprar] == 1)
            {
              lugarDisponivel = 0;
            }
            else
            {
              cliente[clienteQtd].passagensCompradas[qtdPassagens] = lugarComprar;
              qtdPassagens++;
            }

            if (lugarDisponivel != 1)
            {
              system("cls");
              printf("Lugar ja ocupado, escolha outro.\n");
            }
          } while (lugarDisponivel != 1);

          onibus[menuCidades - 1].passagensCompradas[lugarComprar] = 1;
          contaPassagens++;

          do
          {
            printf("Deseja comprar mais um lugar? Sim [1] | Nao [0]: ");
            scanf("%d", &comprarPassagem);

            if (comprarPassagem > 1 || comprarPassagem < 0)
            {
              printf("Opcao invalida, insira novamente.\n");
            }
          } while (comprarPassagem > 1 || comprarPassagem < 0);

          system("cls");
        } while (comprarPassagem != 0);

        precoTotal = precoPassagem * qtdPassagens;

        printf("Passagens compradas com sucesso!\n");
        printf("Valor total das passagens: %.2f x %d = %.2f\n\n", precoPassagem, qtdPassagens, precoTotal);

        break;

      case 7:
        precoPassagem = 65;
        contaPassagens = 0;
        precoTotal = 0;
        qtdPassagens = 0;
        system("cls");
        printf("Uberlandia - MG\n");

        printf("\nQual horario voce deseja embarcar?\n");

        printf("\n***TABELA DE HORARIOS***\n"
               "\n1 - 08:30"
               "\n2 - 10:30 (Indisponivel)"
               "\n3 - 12:30 (Indisponivel)"
               "\n4 - 15:30 (Indisponivel)"
               "\n5 - 18:30 (Indisponivel)"
               "\n6 - 21:30 (Indisponivel)"
               "\n7 - 23:30 (Indisponivel)"
               "\nSua opcao: ");
        scanf("%d", &horario);
        system("cls");

        do
        {
          do
          {
            lugarDisponivel = 1;

            do
            {
              printf("Destino: Uberlandia - MG\n");
              printf("\n37 38   39 40");
              printf("\n33 34   35 36");
              printf("\n29 30   31 32");
              printf("\n25 26   27 28");
              printf("\n21 22   23 24");
              printf("\n17 18   19 20");
              printf("\n13 14   15 16");
              printf("\n09 10   11 12");
              printf("\n05 06   07 08");
              printf("\n01 02   03 04");
              printf("\n\nInsira o lugar que voce deseja comprar: ");
              scanf("%d", &lugarComprar);

              if (lugarComprar > 40 || lugarComprar < 1)
              {
                system("cls");
                printf("Lugar invalido, insira outro.\n");
              }
            } while (lugarComprar > 40 || lugarComprar < 1);

            if (onibus[menuCidades - 1].passagensCompradas[lugarComprar] == 1)
            {
              lugarDisponivel = 0;
            }
            else
            {
              cliente[clienteQtd].passagensCompradas[qtdPassagens] = lugarComprar;
              qtdPassagens++;
            }

            if (lugarDisponivel != 1)
            {
              system("cls");
              printf("Lugar ja ocupado, escolha outro.\n");
            }
          } while (lugarDisponivel != 1);

          onibus[menuCidades - 1].passagensCompradas[lugarComprar] = 1;
          contaPassagens++;

          do
          {
            printf("Deseja comprar mais um lugar? Sim [1] | Nao [0]: ");
            scanf("%d", &comprarPassagem);

            if (comprarPassagem > 1 || comprarPassagem < 0)
            {
              printf("Opcao invalida, insira novamente.\n");
            }
          } while (comprarPassagem > 1 || comprarPassagem < 0);

          system("cls");
        } while (comprarPassagem != 0);

        precoTotal = precoPassagem * qtdPassagens;

        printf("Passagens compradas com sucesso!\n");
        printf("Valor total das passagens: %.2f x %d = %.2f\n\n", precoPassagem, qtdPassagens, precoTotal);

        break;

      case 8:
        precoPassagem = 45;
        contaPassagens = 0;
        precoTotal = 0;
        qtdPassagens = 0;
        system("cls");
        printf("Belo Horizonte - MG\n");

        printf("\nQual horario voce deseja embarcar?\n");

        printf("\n***TABELA DE HORARIOS***\n"
               "\n1 - 08:30 (Indisponivel)"
               "\n2 - 10:30"
               "\n3 - 12:30 (Indisponivel)"
               "\n4 - 15:30 (Indisponivel)"
               "\n5 - 18:30 (Indisponivel)"
               "\n6 - 21:30 (Indisponivel)"
               "\n7 - 23:30 (Indisponivel)"
               "\nSua opcao: ");
        scanf("%d", &horario);
        system("cls");

        do
        {
          do
          {
            lugarDisponivel = 1;

            do
            {
              printf("Destino: Belo Horizonte - MG\n");
              printf("\n37 38   39 40");
              printf("\n33 34   35 36");
              printf("\n29 30   31 32");
              printf("\n25 26   27 28");
              printf("\n21 22   23 24");
              printf("\n17 18   19 20");
              printf("\n13 14   15 16");
              printf("\n09 10   11 12");
              printf("\n05 06   07 08");
              printf("\n01 02   03 04");
              printf("\n\nInsira o lugar que voce deseja comprar: ");
              scanf("%d", &lugarComprar);

              if (lugarComprar > 40 || lugarComprar < 1)
              {
                system("cls");
                printf("Lugar invalido, insira outro.\n");
              }
            } while (lugarComprar > 40 || lugarComprar < 1);

            if (onibus[menuCidades - 1].passagensCompradas[lugarComprar] == 1)
            {
              lugarDisponivel = 0;
            }
            else
            {
              cliente[clienteQtd].passagensCompradas[qtdPassagens] = lugarComprar;
              qtdPassagens++;
            }

            if (lugarDisponivel != 1)
            {
              system("cls");
              printf("Lugar ja ocupado, escolha outro.\n");
            }
          } while (lugarDisponivel != 1);

          onibus[menuCidades - 1].passagensCompradas[lugarComprar] = 1;
          contaPassagens++;

          do
          {
            printf("Deseja comprar mais um lugar? Sim [1] | Nao [0]: ");
            scanf("%d", &comprarPassagem);

            if (comprarPassagem > 1 || comprarPassagem < 0)
            {
              printf("Opcao invalida, insira novamente.\n");
            }
          } while (comprarPassagem > 1 || comprarPassagem < 0);

          system("cls");
        } while (comprarPassagem != 0);

        precoTotal = precoPassagem * qtdPassagens;

        printf("Passagens compradas com sucesso!\n");
        printf("Valor total das passagens: %.2f x %d = %.2f\n\n", precoPassagem, qtdPassagens, precoTotal);

        break;
      }

      clienteQtd++;

      break;

    case 2:
      system("cls");

      do
      {
        printf("Informe seu CPF: ");
        fflush(stdin);
        gets(buscarCpf);

        if (strlen(buscarCpf) != 11)
        {
          printf("CPF invalido, insira outro.\n");
        }
      } while (strlen(buscarCpf) != 11);

      system("cls");
      for (int i = 0; i < clienteQtd; i++)
      {
        if (strstr(buscarCpf, cliente[i].CPF))
        {
          printf(
              "Informacoes encontradas: "
              "\n--------------------------------\n"
              "Nome: %s\n"
              "CPF: %s\n"
              "Lugares comprados: ",
              cliente[i].nome, cliente[i].CPF);

          for (int j = 0; j < 40; j++)
          {
            if (cliente[i].passagensCompradas[j] > 0)
            {
              printf("%d ", cliente[i].passagensCompradas[j]);
            }
          }
          printf("\n\n");

          achados++;
        }
      }

      if (achados == 0)
      {
        printf("Nenhum cliente encontrado com esse CPF.\n\n");
      }

      break;

    case 3:
      sair++;
      system("cls");
      printf("Finalizando programa...");
      break;
    }

  } while (sair == 0);

  return 0;
}
