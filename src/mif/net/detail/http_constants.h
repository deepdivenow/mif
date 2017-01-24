//-------------------------------------------------------------------
//  MetaInfo Framework (MIF)
//  https://github.com/tdv/mif
//  Created:     12.2016
//  Copyright (C) 2016 tdv
//-------------------------------------------------------------------

#ifndef __MIF_NET_DETAIL_HTTP_CONSTANTS_H__
#define __MIF_NET_DETAIL_HTTP_CONSTANTS_H__

// MIF
#include "mif/common/static_string.h"

namespace Mif
{
    namespace Net
    {
        namespace Detail
        {
            namespace HttpConstants
            {
                namespace Header
                {

                    MIF_DECLARE_SRTING_PROVIDER(Connection, "Connection")
                    MIF_DECLARE_SRTING_PROVIDER(Session, "X-Mif-Session")

                }   // namespace Header

                namespace Value
                {
                    namespace Connection
                    {

                        MIF_DECLARE_SRTING_PROVIDER(KeepAlive, "keep-alive")
                        MIF_DECLARE_SRTING_PROVIDER(Close, "close")

                    }   // namespace Connection
                }   // namespace Value
            }   // namespace HttpConstants
        }   // namespace Detail
    }   // namespace Net
}   // namespace Mif

#endif  // !__MIF_NET_DETAIL_HTTP_CONSTANTS_H__