 #include <stdio.h>

int main() {

    int chamados;

    printf("Quantidade de chamados pendentes: ");
    scanf("%d", &chamados);

    if (chamados > 10) {
        printf("Status: backlog alto\n");
    } else {
        printf("Status: backlog controlado\n");
    }

    return 0;
}