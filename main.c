#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções


void mes_janeiro();
void mes_fevereiro();
void mes_marco();
void mes_abril();
void mes_maio();
void mes_junho();
void mes_julho();
void mes_agosto();
void mes_setembro();
void mes_outubro();
void mes_novembro();
void mes_dezembro();

int main() {
system ("color 0F");
    int mes;

    do {
    printf("###############################################################################\n");
    printf("                                                                               \n");
    printf("                            ANIVERSARIANTES DO MES                             \n");
    printf("                                                                               \n");
    printf("###############################################################################\n");

        printf ("\n\nMES ATUAL: ");
        scanf ("%d", &mes);
        printf ("\n");

    } while (mes < 1 || mes > 12);

    switch (mes) {
        case 1:
            mes_janeiro();
            break;
        case 2:
            mes_fevereiro();
            break;
        case 3:
            mes_marco();
            break;
        case 4:
            mes_abril();
            break;
        case 5:
            mes_maio();
            break;
        case 6:
            mes_junho();
            break;
        case 7:
            mes_julho();
            break;
        case 8:
            mes_agosto();
            break;
        case 9:
            mes_setembro();
            break;
        case 10:
            mes_outubro();
            break;
        case 11:
            mes_novembro();
            break;
        case 12:
            mes_dezembro();
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}

// Implementações das funções
void mes_janeiro() {
    char janeiro[20];
    printf("MES DE JANEIRO:\n");

    FILE *file_janeiro;
    file_janeiro = fopen("janeiro.txt", "r");
    fscanf(file_janeiro, "%[^\n]", &janeiro);
    printf("%s", janeiro);
    fclose(file_janeiro);
    system("pause");
}

void mes_fevereiro() {
    char fevereiro[20];
    printf("MES DE FEVEREIRO:\n");

    FILE *file_fevereiro;
    file_fevereiro = fopen("fevereiro.txt", "r");
    fscanf(file_fevereiro, "%[^\n]", &fevereiro);
    printf("%s", fevereiro);
    fclose(file_fevereiro);
    system("pause");
}

void mes_marco() {
  char marco[20];
    printf("MES DE MARCO:\n");

    FILE *file_marco;
    file_marco = fopen("marco.txt", "r");
    fscanf(file_marco, "%[^\n]", &marco);
    printf("%s", marco);
    fclose(file_marco);
    system("pause");
}

void mes_abril() {
    char abril[20];
    printf("MES DE ABRIL:\n");

    FILE *file_abril;
    file_abril = fopen("abril.txt", "r");
    fscanf(file_abril, "%[^\n]", &abril);
    printf("%s", abril);
    fclose(file_abril);
    system("pause");
}

void mes_maio() {
   char maio[20];
    printf("MES DE MAIO:\n");

    FILE *file_maio;
    file_maio = fopen("maio.txt", "r");
    fscanf(file_maio, "%[^\n]", &maio);
    printf("%s", maio);
    fclose(file_maio);
    system("pause");
}

void mes_junho() {
    char junho[20];
    printf("MES DE JUNHO:\n");

    FILE *file_junho;
    file_junho = fopen("junho.txt", "r");
    fscanf(file_junho, "%[^\n]", &junho);
    printf("%s", junho);
    fclose(file_junho);
    system("pause");
}

void mes_julho() {
   char julho[20];
    printf("MES DE JULHO:\n");

    FILE *file_julho;
    file_julho = fopen("julho.txt", "r");
    fscanf(file_julho, "%[^\n]", &julho);
    printf("%s", julho);
    fclose(file_julho);
    system("pause");
}

void mes_agosto() {
    char agosto[20];
    printf("MES DE AGOSTO:\n");

    FILE *file_agosto;
    file_agosto = fopen("agosto.txt", "r");
    fscanf(file_agosto, "%[^\n]", &agosto);
    printf("%s", agosto);
    fclose(file_agosto);
    system("pause");
}

void mes_setembro() {
    char setembro[20];
    printf("MES DE SETEMBRO:\n");

    FILE *file_setembro;
    file_setembro = fopen("setembro.txt", "r");
    fscanf(file_setembro, "%[^\n]", &setembro);
    printf("%s", setembro);
    fclose(file_setembro);
    system("pause");
}

void mes_outubro() {
    char outubro[20];
    printf("MES DE OUTUBRO:\n");

    FILE *file_outubro;
    file_outubro = fopen("outubro.txt", "r");
    fscanf(file_outubro, "%[^\n]", &outubro);
    printf("%s", outubro);
    fclose(file_outubro);
    system("pause");
}

void mes_novembro() {
    char novembro[20];
    printf("MES DE NOVEMBRO:\n");

    FILE *file_novembro;
    file_novembro = fopen("novembro.txt", "r");
    fscanf(file_novembro, "%[^\n]", &novembro);
    printf("%s", novembro);
    fclose(file_novembro);
    system("pause");
}

void mes_dezembro() {
   char dezembro[20];
    printf("MES DE DEZEMBRO:\n");

    FILE *file_dezembro;
    file_dezembro = fopen("dezembro.txt", "r");
    fscanf(file_dezembro, "%[^\n]", &dezembro);
    printf("%s", dezembro);
    fclose(file_dezembro);
    system("pause");
}


