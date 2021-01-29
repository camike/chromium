// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Brought to you by number 42.

#ifndef NET_MOCK_MOCK_URL_SERVICE_H_
#define NET_MOCK_MOCK_URL_SERVICE_H_

#include <stdint.h>

#include <memory>
#include <string>
#include <vector>

#include "base/callback_forward.h"
#include "base/optional.h"
#include "base/time/time.h"
#include "net/base/net_export.h"

class GURL;

namespace net {

class NET_EXPORT MockURLService {
 public:
  MockURLService();
  virtual ~MockURLService();

  GURL GetMock(const GURL& url);
};

}  // namespace net

#endif  // NET_MOCK_MOCK_URL_SERVICE_H_
