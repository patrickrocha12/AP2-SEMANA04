bool primo(int numero) {
    if (numero <= 1)
        return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0)
            return false;
    }
    return true;
}

int main(){

  int n1, n2;
  printf("Digite um número inteiro: ");
  scanf("%d", &n1);
  printf("Digite outro número inteiro: ");
  scanf("%d",&n2);

  printf("Numeros primos entre %d e %d:\n", n1, n2);
  for (int numero = (n1 < n2 ? n1 : n2); numero <= (n1 < n2 ? n2 : n1); numero++) {
      if (primo(numero))
          printf("%d\n", numero);
  }


  return 0;
}