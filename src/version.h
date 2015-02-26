// Copyright (c) 2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef FAIRCOIN_VERSION_H
#define FAIRCOIN_VERSION_H

#include "clientversion.h"

#include <string>

//
// client versioning
//

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

//
// database format versioning
//
static const int DATABASE_VERSION = 70509;

//
// network protocol versioning
//
static const int PROTOCOL_VERSION = 90102;

// initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

// clients with smaller version number are disconnected
static const int MIN_PROTO_VERSION = 90102;

// protocol version of clients v1.2.0
static const int V120_PROTO_VERSION = 90001;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

#endif
