// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

/* Shared structures and enums for iothub convenience layer and LL layer */

#ifndef IOTHUB_CLIENT_CORE_COMMON_H
#define IOTHUB_CLIENT_CORE_COMMON_H

#include "../../c-utility/inc/azure_c_shared_utility/macro_utils.h"
#include "../../c-utility/inc/azure_c_shared_utility/umock_c_prod.h"

#include "iothub_transport_ll.h"
#include "iothub_message.h"

#include "iothub_client_ll.h"


#ifdef __cplusplus
extern "C"
{
#endif

#
#ifndef DONT_USE_UPLOADTOBLOB

#define IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_RESULT_VALUES \
    IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_OK, \
    IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_ABORT

    DEFINE_ENUM(IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_RESULT, IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_RESULT_VALUES);

      typedef IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_RESULT(*IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_CALLBACK_EX)(IOTHUB_CLIENT_FILE_UPLOAD_RESULT result, unsigned char const ** data, size_t* size, void* context);
#endif /* DONT_USE_UPLOADTOBLOB */

    

#ifdef __cplusplus
}
#endif

#endif /* IOTHUB_CLIENT_CORE_COMMON_H */
