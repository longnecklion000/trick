/*************************************************************************
PURPOSE: (Represent Websocket variable server connection.)
LIBRARY DEPENDENCIES:
    ( (../src/http_GET_handlers.o))
**************************************************************************/
#ifndef HANDLE_HTTP_GET_HANDLERS_HH
#define HANDLE_HTTP_GET_HANDLERS_HH

#include "civet/CivetServer.h"

int handle_HTTP_GET_vs_connections(struct mg_connection *nc, void* cbdata);
int handle_HTTP_GET_alloc_info(struct mg_connection *nc, void* ignore);

int echo_connect_handler(const struct mg_connection *conn,
				     void *cbdata);

void echo_ready_handler(struct mg_connection *conn, void *cbdata);

int echo_data_handler(struct mg_connection *conn, int bits,
				  char *data, size_t data_len, void *cbdata);

void echo_close_handler(const struct mg_connection *conn,
				    void *cbdata);

int ws_connect_handler(const struct mg_connection *conn,
				     void *ignore);

//VariableServer
void ws_ready_handler(struct mg_connection *conn, void *my_server);

int ws_data_handler(struct mg_connection *conn, int bits,
				  char *data, size_t data_len, void *my_server);

void ws_close_handler(const struct mg_connection *conn,
				    void *my_server);


#endif
