#pragma once

#include "AppleMidi_Namespace.h"

BEGIN_APPLEMIDI_NAMESPACE

struct DefaultSettings
{
    static const size_t MaxBufferSize = 64;

    /* The MaxNumberOfParticipants constant is typically the amount
    of sockets in the system divided by 2 */
    static const size_t MaxNumberOfParticipants = 4 / 2;
};

enum parserReturn: uint8_t
{
    Processed,
    NotEnoughData,
    UnexpectedData,
};

END_APPLEMIDI_NAMESPACE
