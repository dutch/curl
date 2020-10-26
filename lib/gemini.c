/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 1998 - 2020, Daniel Stenberg, <daniel@haxx.se>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at https://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/

#include "curl_setup.h"

#ifndef CURL_DISABLE_GEMINI

#include "urldata.h"
#include <stdio.h>
#include "gemini.h"
/* The last #include file should be: */
#include "memdebug.h"

static CURLcode gemini_do(struct connectdata *conn, bool *done);

const struct Curl_handler Curl_handler_gemini = {
  "GEMINI",
  gemini_do,
  ZERO_NULL,
  ZERO_NULL,
  ZERO_NULL,
  ZERO_NULL,
  ZERO_NULL,
  ZERO_NULL,
  ZERO_NULL,
  ZERO_NULL,
  ZERO_NULL,
  ZERO_NULL,
  ZERO_NULL,
  ZERO_NULL,
  PORT_GEMINI,
  CURLPROTO_GEMINI,
  CURLPROTO_GEMINI,
  PROTOPT_NONE
};

static CURLcode gemini_do(struct connectdata *conn, bool *done)
{
  fputs("Hello, world!\n", stderr);
  return CURLE_OK;
}

#endif /*CURL_DISABLE_GEMINI*/
