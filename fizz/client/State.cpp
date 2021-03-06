/*
 *  Copyright (c) 2018-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree.
 */

#include <fizz/client/State.h>

using fizz::client::ClientAuthType;
using fizz::client::StateEnum;

namespace fizz {

folly::StringPiece toString(StateEnum state) {
  switch (state) {
    case StateEnum::Uninitialized:
      return "Uninitialized";
    case StateEnum::ExpectingServerHello:
      return "ExpectingServerHello";
    case StateEnum::ExpectingEncryptedExtensions:
      return "ExpectingEncryptedExtensions";
    case StateEnum::ExpectingCertificate:
      return "ExpectingCertificate";
    case StateEnum::ExpectingCertificateVerify:
      return "ExpectingCertificateVerify";
    case StateEnum::ExpectingFinished:
      return "ExpectingFinished";
    case StateEnum::Established:
      return "Established";
    case StateEnum::Error:
      return "Error";
    case StateEnum::NUM_STATES:
      return "Invalid state NUM_STATES";
  }
  return "Invalid state";
}

folly::StringPiece toString(ClientAuthType auth) {
  switch (auth) {
    case ClientAuthType::NotRequested:
      return "NotRequested";
    case ClientAuthType::Sent:
      return "Sent";
    case ClientAuthType::RequestedNoMatch:
      return "RequestedNoMatch";
    case ClientAuthType::Stored:
      return "Stored";
  }
  return "Invalid client auth type";
}
} // namespace fizz
