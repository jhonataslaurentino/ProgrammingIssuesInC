#include <stdio.h>

typedef enum dia Dia;
enum dia {
  DOM, SEG, TER, QUA, QUI, SEX, SAB
};

Dia leDia(void);

int main(void) {
  Dia primDia, ultDia;
  int numDias;

  printf("Exemplo de Uso do Tipo Enumeração\n");
  printf("Informe seu primeiro dia de aulas da semana:\n");
  primDia = leDia();
  if (primDia == DOM) {
    printf("Puxa! Você assiste aulas no DOMINGO???\n");
  } else if (primDia > QUA) {
    printf("Suas aulas são mais próximas do final da semana\n");
  }
  printf("Informe seu último dia de aulas da semana:\n");
  ultDia = leDia();
  if (ultDia == SAB) {
    printf("Que pena! Você assiste aulas até no Sábado???\n");
  } else if (ultDia <= QUI) {
    printf("Suas aulas são mais próximas do início da semana\n");
  }
  numDias = ultDia - primDia + 1;
  printf("Você assiste aulas em %d dias da semana\n", numDias);
  return 0;
}

Dia leDia(void) {
  int d;
  printf("1 - Domingo\n");
  printf("2 - Segunda-feira\n");
  printf("3 - Terça-feira\n");
  printf("4 - Quarta-feira\n");
  printf("5 - Quinta-feira\n");
  printf("6 - Sexta-feira\n");
  printf("7 - Sábado\n");
  scanf(" %d", &d);
  return d-1;
}
