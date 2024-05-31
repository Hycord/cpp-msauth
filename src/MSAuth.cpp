/*
  MSAuth.cpp
  Created: May 30, 2024
*/

#include "MSAuth.h"
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httplib.h"

std::string MSAuth::GetUsers()
{
  httplib::Client cli("https://randomuser.me");

  auto res = cli.Get("/api");

  return res->body;
}