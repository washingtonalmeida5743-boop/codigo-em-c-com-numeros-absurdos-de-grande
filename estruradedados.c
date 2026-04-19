#include <stdio.h>
#include <string.h>
void inverte_string(char str[]) {
    int len = 0;
    int jl = 0;

while (str[jl] != '\0') {
    len++;
    jl++;
}    
    for(int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


void SOMA(char a[], char b[]) {
    char res[100000];
    int len_a = 0, len_b=0;
    int jp = 0;
while(a[jp] != '\0') {
    len_a++;
    jp++;
}
jp = 0;
while(b[jp] != '\0') {
    len_b++;
    jp++;
}
    
    int i = len_a - 1, j = len_b - 1, k = 0, vai_um = 0;
    
    while(i >= 0 || j >= 0 || vai_um > 0) {
       
       int dig_a;

    if (i >= 0) {
          dig_a = a[i] - '0';
    } else {
            dig_a = 0;
      }
        
        int dig_b;
    
    if(j >= 0) {
          dig_b = b[j] - '0';
    } else {
            dig_b = 0;
    }
        
        int soma = dig_a + dig_b + vai_um;
        
        res[k++] = (soma % 10) + '0';
        vai_um = soma / 10;
        i--; j--;
    }
    res[k] = '\0';
    inverte_string(res);
    printf("%s\n", res);
}

//void SUBTRACAO(char a, char b){}
//void MULTIPLICACAO(char a, char b){}
//void DIVISAO(char a, char b){}

int main() {
    char operacao[100], AI[100000], BI[100000];
    char A[40] = "SOMA", B[40] = "SUBTRACAO", C[40] = "MULTIPLICACAO", D[40] = "DIVISAO";

    if (scanf("%s %s %s", operacao, AI, BI) != 3) return 0;

    int k, combinou;
    
    k = 0;
    combinou = 1; 
    
    while (A[k] != '\0' || operacao[k] != '\0') {
        if (operacao[k] != A[k]) {
            combinou = 0;
            break;
        }
        k++;
    }
    
    if (combinou == 1) {
        SOMA(AI, BI);
        return 0; 
    }
    
    k = 0;
    combinou = 1;
    
    while (B[k] != '\0' || operacao[k] != '\0') {
        if (operacao[k] != B[k]) {
            combinou = 0;
            break;
        }
        k++;
    }
    
    if (combinou == 1) {
  //      SUBTRACAO(AI, BI);
        return 0;
    }
    
    k = 0;
    combinou = 1;
    
    while (C[k] != '\0' || operacao[k] != '\0') {
        if (operacao[k] != C[k]) {
            combinou = 0;
            break;
        }
        k++;
    }
    if (combinou == 1) {
    //    MULTIPLICACAO(AI, BI);
        return 0;
    }
    
    k = 0;
    combinou = 1;
    
    while (D[k] != '\0' || operacao[k] != '\0') {
        if (operacao[k] != D[k]) {
            combinou = 0;
            break;
        }
        k++;
    }
    
    if (combinou == 1) {
      //  DIVISAO(AI, BI);
        return 0;
    }

    return 0;
}
