#include <stdio.h>
#include <stdlib.h>
#include <mysql.h>
#include <windows.h>


int main()
{
		
//Conexão com DB
MYSQL *conn;
    char *server ="localhost";
    char *user = "root";
    char *password = "";
    char *database = "cadastro";

conn = mysql_init(mysql *NULL);
if ( mysql_real_connect(conn, server, user, password, database, 0, NULL, 0))
{
printf("\nConexao ao banco realizada com sucesso!\n");
}
else
{
printf("Falha de conexao\n");
}
system("PAUSE");
return 0;
}