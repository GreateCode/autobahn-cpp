///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) Tavendo GmbH
//
// Boost Software License - Version 1.0 - August 17th, 2003
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
//
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef AUTOBAHN_WAMP_UNSUBSCRIBE_REQUEST_HPP
#define AUTOBAHN_WAMP_UNSUBSCRIBE_REQUEST_HPP

#include "boost_config.hpp"
#include "wamp_subscription.hpp"

namespace autobahn {

/// An outstanding wamp call.
class wamp_unsubscribe_request
{
public:
    wamp_unsubscribe_request(const wamp_subscription& subscription);

    boost::promise<void>& response();
    void set_response();
    wamp_subscription &subscription();

private:
    wamp_subscription m_subscription;
    boost::promise<void> m_response;
};

} // namespace autobahn

#include "wamp_unsubscribe_request.ipp"

#endif // AUTOBAHN_WAMP_UNSUBSCRIBE_REQUEST_HPP
