#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	
	printf("Content-type:text/html\n\n");
	printf("<TITLE>Server</TITLE>");
	int instalado;
	instalado = system("test -e /etc/samba/smb.conf");
	if(instalado == -1){
		printf("\n <br>Ejecucion fallida\n");
	
	}else{
		if(instalado){
			printf("<h4>El servidor samba no esta instalado</h4>");
		}else{
			printf("<h4>El servidor samba esta instalado</h4>");
		}
		
	}

}










