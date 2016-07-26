#include <stdio.h>
#include <netdb.h>

int main(int argc, char *argv[])
{
	int meusocket;
	int conecta;

	struct sockaddr_in alvo;

	meusocket = socket(AF_INET, SOCK_STREAM, 0);
	alvo.sin_family = AF_INET;
	alvo.sin_port = htons(8080);
	alvo.sin_addr.s_addr = inet_addr("192.168.0.1");

	conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

	if(conecta == 0)
	{
		printf("Porta Aberta\n");
		close(meusocket);
		close(conecta);
	} else {
		printf("Porta Fechada\n");
	}
	return 0;
}
