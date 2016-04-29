#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculaLn(int valor)
{
  double resultado;
  int valor_recebido;

  valor_recebido = valor;
  resultado = log (valor_recebido);
  return resultado;
}


int main()
{
  int i, y_valor;
  double soma_numerador, soma_denominador, x[10]={4.5,5.0,5.5,6.0,6.5,7.0,7.5,8.0,8.5,9.0};
  double y[10], x_medio, y_medio;
  double lnk1, k2;

  printf("Digite os valores de 'fi'(o):\n");

  //Atribuindo os valores de lnO no vetor Y
  for(i=0;i<10;i++)
  {
    scanf("%d", &y_valor);
    y[i]=calculaLn(y_valor);
    printf("\nvalor de lnO: %.10lf\n", y[i]);
  }

  //Calculo de x_medio e y_medio
  for(i=0;i<10;i++)
  {
    x_medio = x_medio + x[i];
    y_medio = y_medio + y[i];
  }
  x_medio = x_medio/10.00;
  y_medio = y_medio/10.00;
  printf("Valor de x_medio: %.10lf\nValor de y_medio: %.10lf\n", x_medio, y_medio);

  //Calcular as somas soma_numerador e soma_denominador
  for(i=0;i<10;i++)
  {
    soma_numerador = soma_numerador + (x[i])*(y[i] - y_medio);
    soma_denominador = soma_denominador + (x[i])*(x[i] - x_medio);
  }
  printf("O valor da soma_numerador é: %.10lf\n", soma_numerador);
  printf("O valor da soma_denominador é: %.10lf\n", soma_denominador);

  //Calculo das constantes
  k2 = soma_numerador/soma_denominador;
  lnk1 = y_medio - k2*x_medio;
  printf("O valor de lnk1 é: %.10lf\nO valor de k2 é: %.10lf\n", lnk1, k2);

  //Mostra a fórmula final da nossa equação "y = lnk1 - k2*x"
  printf("A equação será: %.10lf - (%.10lf)*x\n", lnk1, k2);



return 0;
}
