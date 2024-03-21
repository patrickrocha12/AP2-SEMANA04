#include <stdio.h>

double calcular_soma(int n) {
    double soma = 0.0;
    for (int k = 1; k <= n; k++) {
        soma += ((double) k) / (k * k) * ((k % 2 == 0) ? -1 : 1);
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    double resultado = calcular_soma(n);
    printf("O resultado da expressao para n = %d é: %.10lf\n", n, resultado);

    return 0;

}