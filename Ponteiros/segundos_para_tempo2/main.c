#include <stdio.h>

typedef struct {
	int hor, min, seg;
} time;

// Recebe tempo em 'segundos', converte para horas, minutos e seguntos, e 
// retorna o resultado através dos parâmetros 'hor', 'min' e 'seg'.
time converte_tempo(int segundos);

int main(){
   int tempo;
   scanf("%d", &tempo);

   // Chame a função 'converte_tempo' para converter o valor de 'tempo' em horas
   // minutos e segundos, gravando o resultado nas variáveis 'h', 'm' e 's'.
	 time t = converte_tempo(tempo); 		
				

   printf("%d:%d:%d", t.hor, t.min, t.seg);
}

time converte_tempo(int segundos){
	time t;
	t.hor = segundos / 3600;
	segundos = segundos % 3600;
	t.min = segundos / 60;
	t.seg = segundos % 60;
	return t;
}
