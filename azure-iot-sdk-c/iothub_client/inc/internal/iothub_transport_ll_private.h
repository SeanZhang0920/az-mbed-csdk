// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef IOTHUB_TRANSPORT_LL_PRIVATE_H
#define IOTHUB_TRANSPORT_LL_PRIVATE_H

#include "../iothub_transport_ll.h"
#include "iothub_client_authorization.h"


union IOTHUB_IDENTITY_INFO_TAG;
typedef union IOTHUB_IDENTITY_INFO_TAG IOTHUB_IDENTITY_INFO;

#include "../../../c-utility/inc/azure_c_shared_utility/doublylinkedlist.h"
#include "../../../c-utility/inc/azure_c_shared_utility/strings.h"
#include "../iothub_message.h"
#include "iothub_client_authorization.h"


#include "../iothub_client_ll.h"


    typedef int(*pfIoTHubTransport_Subscribe_InputQueue)(IOTHUB_DEVICE_HANDLE handle);
    typedef void(*pfIoTHubTransport_Unsubscribe_InputQueue)(IOTHUB_DEVICE_HANDLE handle);
                   \
pfIoTHubTransport_GetSendStatus IoTHubTransport_GetSendStatus;                      \
pfIoTHubTransport_Subscribe_InputQueue IoTHubTransport_Subscribe_InputQueue;        \
pfIoTHubTransport_Unsubscribe_InputQueue IoTHubTransport_Unsubscribe_InputQueue     /*there's an intentional missing ; on this line*/


#endif /* IOTHUB_TRANSPORT_LL_PRIVATE_H */
