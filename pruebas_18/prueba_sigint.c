/*
 * Javier Abellán. 7 de Abril de 2003
 *
 * Programa de demostración de signal()
 */
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>

      extern int errno;
/*
 * Controlador para la señal de ctrl-c
 */
void controlador (int);

/*
 * Programa principal.
 * Cambia el controlador para la señal de ctrl-c y se mete en un bucle
 * infinito de espera
 */
int main(){
	/* Se cambia el controlador para ctrl-c, escribiendo error en pantalla
	 * si lo hay. */
	if (signl (SIGINT, controlador) == SIG_ERR){
		perror ("No se puede cambiar signal");
	}

	/* Bucle infinito de espera. pause() deja el proceso dormido hasta que
	 * llegue una señal. */
	while (1)
		pause ();
    return 0;
}

/*
 * Controlador para ctrl-c.
 * Indica en pantalla que no se quiere salir y pone el controlador por
 * defecto para ctrl-c. La segunda vez que se pulse ctrl-c, el programa
 * se saldrá normalmente.
 */
void controlador (int numeroSenhal)
{
	printf ("Pues no me salgo \n");
	printf ("Inténtalo otra vez\n");

	/* Se pone controlador por defecto para ctrl-c */
	signal (SIGINT, SIG_DFL);
}
