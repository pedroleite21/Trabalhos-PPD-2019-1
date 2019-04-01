/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "banco.h"


void
banco_prog_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	int  abreconta_1_arg;
	int  *result_2;
	int  fechaconta_1_arg;
	int  *result_3;
	int  authconta_1_arg;
	int  *result_4;
	transacao  deposito_1_arg;
	int  *result_5;
	transacao  saque_1_arg;
	float  *result_6;
	int  retornasaldo_1_arg;
	int  *result_7;
	token  checksenha_1_arg;
	int  *result_8;
	token  gerasenha_1_arg;
	int  *result_9;
	token  falhasenha_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, BANCO_PROG, BANCO_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = abreconta_1(&abreconta_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = fechaconta_1(&fechaconta_1_arg, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = authconta_1(&authconta_1_arg, clnt);
	if (result_3 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = deposito_1(&deposito_1_arg, clnt);
	if (result_4 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_5 = saque_1(&saque_1_arg, clnt);
	if (result_5 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_6 = retornasaldo_1(&retornasaldo_1_arg, clnt);
	if (result_6 == (float *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_7 = checksenha_1(&checksenha_1_arg, clnt);
	if (result_7 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_8 = gerasenha_1(&gerasenha_1_arg, clnt);
	if (result_8 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_9 = falhasenha_1(&falhasenha_1_arg, clnt);
	if (result_9 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	banco_prog_1 (host);
exit (0);
}
