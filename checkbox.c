#include <stdio.h>

  int main(void){
    float vi, vd, tc, tt, nv, vp;
    int dct;
    char pdt[1000];
    char n[1000], cpf[14];
    FILE *log;
    printf("[]++++++++++++++++++++++++++++++++++++++++++++[]\n");
    printf("[]       checkbox v1.0 by: felipe silva       []\n");
    printf("[]++++++++++++++++++++++++++++++++++++++++++++[]\n");
    printf("Produto: ");
    fgets(pdt, 1000, stdin);
    printf("Nome do cliente: ");
    fgets(n, 1000, stdin);
    printf("CPF: ");
    fgets(cpf, 14, stdin);
    printf("Valor do produto: ");
    getchar();
    scanf("%f", &vi);
    printf("Desconto[%]: ");
    scanf("%d", &dct);
    nv = vi * dct / 100;
    tt = vi - nv;
    printf("Total a pagar: %.2f\n", tt);
    printf("Valor pago: ");
    scanf("%f", &vp);
    tc = vp - tt;
    printf("Troco: %.2f\n", tc);
    log = fopen("checkbox_log.txt", "a");
    fprintf(log, "===\n");
    fprintf(log, "Nome do cliente: %s\n", n);
    fprintf(log, "CPF: %s\n", cpf);
    fprintf(log, "Produto adquirido: %s\n", pdt);
    fprintf(log, "Valor do produto: %.2f\n", vi);
    fprintf(log, "Desconto: %d\n", dct);
    fprintf(log, "Valor total: %.2f\n", tt);
    fprintf(log, "Valor pago: %.2f\n", vp);
    fprintf(log, "Troco: %.2f\n", tc);
    fclose(log);



  return 0;
  }
