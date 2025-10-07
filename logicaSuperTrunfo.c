#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Bem-vindo ao Super Trunfo Desafio Novato!\n");
    printf("CADASTRANDO A PRIMEIRA CARTA\n");
    /*
    Uma pequena mensagem de inicio do cadastro das cartas do jogo.
    */

    printf("Digite o estado (uma letra de 'A' a 'H'): ");
    char estado1;
    scanf(" %c", &estado1);
    /*
    Comando para registrar o estado da carta.
    exemplo:
    A - São Paulo
    B - Rio de Janeiro
    C - Santa Catarina
    */

    printf("Digite o código da carta (um número de 01 a 04): ");
    char codigo1[10];
    scanf("%2s", codigo1);
    /*
    Comando para registar o código da carta.
    exemplo: 
    C02 = Carta número 2 do estado de Santa Catarina.
    */

    printf("Digite o nome da cidade: ");
    char cidade1[50];
    getchar(); // limpa qualquer caractere pendente, como '\n'
    fgets(cidade1, sizeof(cidade1), stdin);
    /*
    Comando para registro do nome da cidade.
    */

    printf("Digite a população da cidade: ");
    unsigned int populacao1;
    scanf("%u", &populacao1);
    /* Comando para registrar a população da cidade.
    */

    printf("Área (km²): ");
    float area1;
    scanf("%f", &area1);
    /*
    Comando para registrar a área.
    */

    printf("PIB (Produto Interno Bruto da cidade): ");
    float pib1;
    scanf("%f", &pib1);
    /*
    Comando para registro do PIB.
    */
    
    printf("Número de pontos turísticos da cidade: ");
    int pontosTuristicos1;
    scanf("%d", &pontosTuristicos1);
    /*
    Comando para registro dos pontos turísticos da cidade.
    */

    float denspop1;
    denspop1 = populacao1 / area1;
    /*
    Calculo da densidade populacional da carta cadastrada
    */

    float pibperc1;
    double pibinteiro1 = pib1 * 1000000000;
    pibperc1 = (float)(pibinteiro1 / populacao1);
    /*
    Cálculo do PIB per Capita da carta cadastrada
    */
    float densinverso1;
    densinverso1 = area1 / populacao1;
    long int superpoder1;
    unsigned areatotal1 = area1 * 1000000;
    superpoder1 = populacao1 + areatotal1 + pib1 + pontosTuristicos1 + densinverso1;

    printf("\nCARTA CADASTRADA COM SUCESSO!\n");

    printf("CADASTRANDO A SEGUNDA CARTA\n");
    /*
    Para todos os comandos abaixo, o usuário deve seguir o mesmo padrão de entrada.
    */
    
    printf("Digite o estado (uma letra de 'A' a 'H'): ");
    char estado2;
    scanf(" %c", &estado2);

    printf("Digite o código da carta (um número de 01 a 04): ");
    char codigo2[10];
    scanf("%2s", codigo2);

    printf("Digite o nome da cidade: ");
    char cidade2[50];
    getchar(); // limpa qualquer caractere pendente, como '\n'
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a população da cidade: ");
    unsigned int populacao2;
    scanf("%u", &populacao2);

    printf("Área (km²): ");
    float area2;
    scanf("%f", &area2);

    printf("PIB (Produto Interno Bruto da cidade): ");
    float pib2;
    scanf("%f", &pib2);

    printf("Número de pontos turísticos da cidade: ");
    int pontosTuristicos2;
    scanf("%d", &pontosTuristicos2);

    float denspop2;
    denspop2 = populacao2 / area2;

    float pibperc2;
    double pibinteiro2 = pib2 * 1000000000;
    pibperc2 = (float)(pibinteiro2 / populacao2);

    float densinverso2;
    densinverso2 = area2 / populacao2;
    long int superpoder2;
    unsigned areatotal2 = area2 * 1000000;
    superpoder2 = populacao2 + areatotal2 + pib2 + pontosTuristicos2 + densinverso2;

    printf("\nCARTA CADASTRADA COM SUCESSO!\n");
    
    /*
    Após a leitura das cartas, abaixo temos os comandos para mostrar na tela o que o
    usuário cadastrou de maneira legível.
    */

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f bi\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop1);
    printf("PIB per Capita: R$ %.2f\n", pibperc1);
    printf("Super Poder: %u\n", superpoder1);
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f bi\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
    printf("PIB per Capita: R$ %.2f\n", pibperc2);
    printf("Super Poder: %u\n", superpoder2);

    //Comparação das cartas e exibição do vencedor de cada categoria

    printf("COMPARAÇÃO DAS CARTAS:\n");
    
    int escolhaComparacao1, escolhaComparacao2;
    
    printf("Escolha a categoria para comparar:\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Pontos Turísticos\n");
    printf("[5] Densidade Populacional\n");
    printf("Digite o número da categoria escolhida: ");
    scanf("%d", &escolhaComparacao1);

    switch (escolhaComparacao1) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Carta 1 vence na categoria População!\n");
            } else if (populacao1 < populacao2) {
                printf("Carta 2 vence na categoria População!\n");
            } else {
                printf("Empate na categoria População!\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("Carta 1 vence na categoria Área!\n");
            } else if (area1 < area2) {
                printf("Carta 2 vence na categoria Área!\n");
            } else {
                printf("Empate na categoria Área!\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("Carta 1 vence na categoria PIB!\n");
            } else if (pib1 < pib2) {
                printf("Carta 2 vence na categoria PIB!\n");
            } else {
                printf("Empate na categoria PIB!\n");
            }
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Carta 1 vence na categoria Pontos Turísticos!\n");
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("Carta 2 vence na categoria Pontos Turísticos!\n");
            } else {
                printf("Empate na categoria Pontos Turísticos!\n");
            }
            break;
        case 5:
            if (denspop1 < denspop2) {
                printf("Carta 1 vence na categoria Densidade Populacional!\n");
            } else if (denspop1 > denspop2) {
                printf("Carta 2 vence na categoria Densidade Populacional!\n");
            } else {
                printf("Empate na categoria Densidade Populacional!\n");
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma categoria válida.\n");
            break;
    }

    if (escolhaComparacao1 == 1) {
        printf("Escolha a categoria para comparar:\n");
        printf("[2] Área\n");
        printf("[3] PIB\n");
        printf("[4] Pontos Turísticos\n");
        printf("[5] Densidade Populacional\n");
        printf("Digite o número da categoria escolhida: ");
        scanf("%d", &escolhaComparacao2);
    } else if (escolhaComparacao1 == 2) {
        printf("Escolha a categoria para comparar:\n");
        printf("[1] População\n");
        printf("[3] PIB\n");
        printf("[4] Pontos Turísticos\n");
        printf("[5] Densidade Populacional\n");
        printf("Digite o número da categoria escolhida: ");
        scanf("%d", &escolhaComparacao2);
    } else if (escolhaComparacao1 == 3) {
        printf("Escolha a categoria para comparar:\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[4] Pontos Turísticos\n");
        printf("[5] Densidade Populacional\n");
        printf("Digite o número da categoria escolhida: ");
        scanf("%d", &escolhaComparacao2);
    } else if (escolhaComparacao1 == 4) {
        printf("Escolha a categoria para comparar:\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] PIB\n");
        printf("[5] Densidade Populacional\n");
        printf("Digite o número da categoria escolhida: ");
        scanf("%d", &escolhaComparacao2);
    } else if (escolhaComparacao1 == 5) {
        printf("Escolha a categoria para comparar:\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] PIB\n");
        printf("[4] Pontos Turísticos\n");
        printf("Digite o número da categoria escolhida: ");
        scanf("%d", &escolhaComparacao2);
    }

    switch (escolhaComparacao2) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Carta 1 vence na categoria População!\n");
            } else if (populacao1 < populacao2) {
                printf("Carta 2 vence na categoria População!\n");
            } else {
                printf("Empate na categoria População!\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("Carta 1 vence na categoria Área!\n");
            } else if (area1 < area2) {
                printf("Carta 2 vence na categoria Área!\n");
            } else {
                printf("Empate na categoria Área!\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("Carta 1 vence na categoria PIB!\n");
            } else if (pib1 < pib2) {
                printf("Carta 2 vence na categoria PIB!\n");
            } else {
                printf("Empate na categoria PIB!\n");
            }
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Carta 1 vence na categoria Pontos Turísticos!\n");
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("Carta 2 vence na categoria Pontos Turísticos!\n");
            } else {
                printf("Empate na categoria Pontos Turísticos!\n");
            }
            break;
        case 5:
            if (denspop1 < denspop2) {
                printf("Carta 1 vence na categoria Densidade Populacional!\n");
            } else if (denspop1 > denspop2) {
                printf("Carta 2 vence na categoria Densidade Populacional!\n");
            } else {
                printf("Empate na categoria Densidade Populacional!\n");
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma categoria válida.\n");
            break;
    }

    int somaCarta1, somaCarta2;

    if ((escolhaComparacao1 == 1)&&(escolhaComparacao2 == 2)) {
        somaCarta1 = populacao1 + area1;
        somaCarta2 = populacao2 + area2;
        if (somaCarta1 > somaCarta2) {
            printf("Carta 1 vence na soma das categorias População e Área!\n");
        } else if (somaCarta1 < somaCarta2) {
            printf("Carta 2 vence na soma das categorias População e Área!\n");
        } else {
            printf("Empate na soma das categorias População e Área!\n");
        }
    } else if ((escolhaComparacao1 == 1)&&(escolhaComparacao2 == 3)) {
        somaCarta1 = populacao1 + pib1;
        somaCarta2 = populacao2 + pib2;
        if (somaCarta1 > somaCarta2) {
            printf("Carta 1 vence na soma das categorias População e PIB!\n");
        } else if (somaCarta1 < somaCarta2) {
            printf("Carta 2 vence na soma das categorias População e PIB!\n");
        } else {
            printf("Empate na soma das categorias População e PIB!\n");
        }
    } else if ((escolhaComparacao1 == 1)&&(escolhaComparacao2 == 4)) {
        somaCarta1 = populacao1 + pontosTuristicos1;
        somaCarta2 = populacao2 + pontosTuristicos2;
        if (somaCarta1 > somaCarta2) {
            printf("Carta 1 vence na soma das categorias População e Pontos Turísticos!\n");
        } else if (somaCarta1 < somaCarta2) {
            printf("Carta 2 vence na soma das categorias População e Pontos Turísticos!\n");
        } else {
            printf("Empate na soma das categorias População e Pontos Turísticos!\n");
        }
    } else if ((escolhaComparacao1 == 1)&&(escolhaComparacao2 == 5)) {
        somaCarta1 = populacao1 + denspop1;
        somaCarta2 = populacao2 + denspop2;
        if (somaCarta1 > somaCarta2) {
            printf("Carta 1 vence na soma das categorias População e Densidade Populacional!\n");
        } else if (somaCarta1 < somaCarta2) {
            printf("Carta 2 vence na soma das categorias População e Densidade Populacional!\n");
        } else {
            printf("Empate na soma das categorias População e Densidade Populacional!\n");
        }
    } else if ((escolhaComparacao1 == 2)&&(escolhaComparacao2 == 3)) {
        somaCarta1 = area1 + pib1;
        somaCarta2 = area2 + pib2;
        if (somaCarta1 > somaCarta2) {
            printf("Carta 1 vence na soma das categorias Área e PIB!\n");
        } else if (somaCarta1 < somaCarta2) {
            printf("Carta 2 vence na soma das categorias Área e PIB!\n");
        } else {
            printf("Empate na soma das categorias Área e PIB!\n");
        }
    } else if ((escolhaComparacao1 == 2)&&(escolhaComparacao2 == 4)) {
            somaCarta1 = area1 + pontosTuristicos1;
            somaCarta2 = area2 + pontosTuristicos2;
            if (somaCarta1 > somaCarta2) {
                printf("Carta 1 vence na soma das categorias Área e Pontos Turísticos!\n");
            } else if (somaCarta1 < somaCarta2) {
                printf("Carta 2 vence na soma das categorias Área e Pontos Turísticos!\n");
            } else {
                printf("Empate na soma das categorias Área e Pontos Turísticos!\n");
            }
    } else if ((escolhaComparacao1 == 2)&&(escolhaComparacao2 == 5)) {           
            somaCarta1 = area1 + denspop1;
            somaCarta2 = area2 + denspop2;
            if (somaCarta1 > somaCarta2) {
                printf("Carta 1 vence na soma das categorias Área e Densidade Populacional!\n");
            } else if (somaCarta1 < somaCarta2) {
                printf("Carta 2 vence na soma das categorias Área e Densidade Populacional!\n");
            } else {
                printf("Empate na soma das categorias Área e Densidade Populacional!\n");
            }
    } else if ((escolhaComparacao1 == 3)&&(escolhaComparacao2 == 4)) {
            somaCarta1 = pib1 + pontosTuristicos1;
            somaCarta2 = pib2 + pontosTuristicos2;
            if (somaCarta1 > somaCarta2) {
                printf("Carta 1 vence na soma das categorias PIB e Pontos Turísticos!\n");
            } else if (somaCarta1 < somaCarta2) {
                printf("Carta 2 vence na soma das categorias PIB e Pontos Turísticos!\n");
            } else {
                printf("Empate na soma das categorias PIB e Pontos Turísticos!\n");
            }
    } else if ((escolhaComparacao1 == 3)&&(escolhaComparacao2 == 5)) {
            somaCarta1 = pib1 + denspop1;
            somaCarta2 = pib2 + denspop2;
            if (somaCarta1 > somaCarta2) {
                printf("Carta 1 vence na soma das categorias PIB e Densidade Populacional!\n");
            } else if (somaCarta1 < somaCarta2) {
                printf("Carta 2 vence na soma das categorias PIB e Densidade Populacional!\n");
            } else {
                printf("Empate na soma das categorias PIB e Densidade Populacional!\n");
            }
    } else if ((escolhaComparacao1 == 4)&&(escolhaComparacao2 == 5)) {
            somaCarta1 = pontosTuristicos1 + denspop1;
            somaCarta2 = pontosTuristicos2 + denspop2;
            if (somaCarta1 > somaCarta2) {
                printf("Carta 1 vence na soma das categorias Pontos Turísticos e Densidade Populacional!\n");
            } else if (somaCarta1 < somaCarta2) {
                printf("Carta 2 vence na soma das categorias Pontos Turísticos e Densidade Populacional!\n");
            } else {
                printf("Empate na soma das categorias Pontos Turísticos e Densidade Populacional!\n");
            }
    } else {
        printf("Não foi possível calcular a soma das categorias escolhidas.\n");
    }


    return 0;
}
