#include <stdio.h>

int main(void) {
  float salario, refeicao, nsalario, hora;
  salario= 3000;
  refeicao= 20;
  nsalario= (salario*0.05)+salario;
  printf("O novo salário é: %.02f\nO valor do novo vale refeição: %.02f\nO valor bruto recebido: %.02f", nsalario, refeicao*20, nsalario+(20*20));
  //Então, se a jornada de trabalho na sua empresa é de 44 horas semanais, de segunda a sábado, até 8 horas diárias, temos um total de 220 horas por mês (44 horas por semana x 5 semanas por mês = 220 horas mensais).
  hora= 3150/((7*6)*5);
  printf("\nO valor da hora trabalhada é: %.02f", hora);
}