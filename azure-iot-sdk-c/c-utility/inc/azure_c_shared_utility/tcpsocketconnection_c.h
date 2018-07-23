// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef TCPSOCKETCONNECTION_C_H
#define TCPSOCKETCONNECTION_C_H

#include "azure_c_shared_utility/umock_c_prod.h"

#ifdef __cplusplus
extern "C" {
#endif

	typedef void* TCPSOCKETCONNECTION_HANDLE;

	MOCKABLE_FUNCTION(, TCPSOCKETCONNECTION_HANDLE, tcpsocketconnection_create);
	MOCKABLE_FUNCTION(, void, tcpsocketconnection_set_blocking, TCPSOCKETCONNECTION_HANDLE, tcpSocketConnectionHandle, bool, blocking, unsigned int, timeout);
	MOCKABLE_FUNCTION(, void, tcpsocketconnection_destroy, TCPSOCKETCONNECTION_HANDLE, tcpSocketConnectionHandle);
	MOCKABLE_FUNCTION(, int, tcpsocketconnection_connect, TCPSOCKETCONNECTION_HANDLE, tcpSocketConnectionHandle, const char*, host, const int, port);
	MOCKABLE_FUNCTION(, bool, tcpsocketconnection_is_connected, TCPSOCKETCONNECTION_HANDLE, tcpSocketConnectionHandle);
	MOCKABLE_FUNCTION(, void, tcpsocketconnection_close, TCPSOCKETCONNECTION_HANDLE, tcpSocketConnectionHandle);
	MOCKABLE_FUNCTION(, int, tcpsocketconnection_send, TCPSOCKETCONNECTION_HANDLE, tcpSocketConnectionHandle, const char*, data, int, length);
	MOCKABLE_FUNCTION(, int, tcpsocketconnection_send_all, TCPSOCKETCONNECTION_HANDLE, tcpSocketConnectionHandle, const char*, data, int, length);
	MOCKABLE_FUNCTION(, int, tcpsocketconnection_receive, TCPSOCKETCONNECTION_HANDLE, tcpSocketConnectionHandle, char*, data, int, length);
	MOCKABLE_FUNCTION(, int, tcpsocketconnection_receive_all, TCPSOCKETCONNECTION_HANDLE, tcpSocketConnectionHandle, char*, data, int, length);


	TCPSOCKETCONNECTION_HANDLE tcpsocketconnection_create(void);
	void tcpsocketconnection_set_blocking(TCPSOCKETCONNECTION_HANDLE tcpSocketConnectionHandle, bool blocking, unsigned int timeout);
	void tcpsocketconnection_destroy(TCPSOCKETCONNECTION_HANDLE tcpSocketConnectionHandle);
	int tcpsocketconnection_connect(TCPSOCKETCONNECTION_HANDLE tcpSocketConnectionHandle, const char* host, const int port);
	bool tcpsocketconnection_is_connected(TCPSOCKETCONNECTION_HANDLE tcpSocketConnectionHandle);
	void tcpsocketconnection_close(TCPSOCKETCONNECTION_HANDLE tcpSocketConnectionHandle);
	int tcpsocketconnection_send(TCPSOCKETCONNECTION_HANDLE tcpSocketConnectionHandle, const char* data, int length);
	int tcpsocketconnection_send_all(TCPSOCKETCONNECTION_HANDLE tcpSocketConnectionHandle, const char* data, int length);
	int tcpsocketconnection_receive(TCPSOCKETCONNECTION_HANDLE tcpSocketConnectionHandle, char* data, int length);
	int tcpsocketconnection_receive_all(TCPSOCKETCONNECTION_HANDLE tcpSocketConnectionHandle, char* data, int length);

#ifdef __cplusplus
}
#endif

#endif /* TCPSOCKETCONNECTION_C_H */
