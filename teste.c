#include <stdio.h>
#include <assert.h>

int somar(int a, int b) {
    return a + b;
}

void testar_somar() {
    int resultado = somar(2, 3);
    assert(resultado == 5);
}

int main() {
    testar_somar();

    printf("Todos os testes passaram!\n");

    return 0;
}
