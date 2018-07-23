// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

/* Shared structures and enums for iothub convenience layer and LL layer */

#ifndef IOTHUB_CLIENT_CORE_COMMON_H
#define IOTHUB_CLIENT_CORE_COMMON_H

#include "../../c-utility/inc/azure_c_shared_utility/macro_utils.h"
#include "../../c-utility/inc/azure_c_shared_utility/umock_c_prod.h"

#include "iothub_transport_ll.h"
#include "iothub_message.h"

#ifdef __cplusplus
extern "C"
{
#endif


// #define IOTHUB_IDENTITY_TYPE_VALUE  \
//     IOTHUB_TYPE_TELEMETRY,          \
//     IOTHUB_TYPE_DEVICE_TWIN,        \
//     IOTHUB_TYPE_DEVICE_METHODS,     \
//     IOTHUB_TYPE_EVENT_QUEUE
//     DEFINE_ENUM(IOTHUB_IDENTITY_TYPE, IOTHUB_IDENTITY_TYPE_VALUE);





   
#ifndef DONT_USE_UPLOADTOBLOB

#define IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_RESULT_VALUES \
    IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_OK, \
    IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_ABORT

    DEFINE_ENUM(IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_RESULT, IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_RESULT_VALUES);

    /**
    *  @brief           Callback invoked by IoTHubClient_UploadMultipleBlocksToBlobAsync requesting the chunks of data to be uploaded.
    *  @param result    The result of the upload of the previous block of data provided by the user (IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_CALLBACK_EX only)
    *  @param data      Next block of data to be uploaded, to be provided by the user when this callback is invoked.
    *  @param size      Size of the data parameter.
    *  @param context   User context provided on the call to IoTHubClient_UploadMultipleBlocksToBlobAsync.
    *  @remarks         If the user wants to abort the upload, the callback should return IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_ABORT
    *                   It should return IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_OK otherwise.
    *                   If a NULL is provided for parameter "data" and/or zero is provided for "size", the user indicates to the client that the complete file has been uploaded.
    *                   In such case this callback will be invoked only once more to indicate the status of the final block upload.
    *                   If result is not FILE_UPLOAD_OK, the download is cancelled and this callback stops being invoked.
    *                   When this callback is called for the last time, no data or size is expected, so data and size are set to NULL
    */
    typedef IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_RESULT(*IOTHUB_CLIENT_FILE_UPLOAD_GET_DATA_CALLBACK_EX)(IOTHUB_CLIENT_FILE_UPLOAD_RESULT result, unsigned char const ** data, size_t* size, void* context);
#endif /* DONT_USE_UPLOADTOBLOB */

    
#ifdef __cplusplus
}
#endif

#endif /* IOTHUB_CLIENT_CORE_COMMON_H */
