#pragma once

#include "common.h"

class Auth {
public:
  static void authenticate();
  static bool verify_auth();
  static bool verify_api_token();
private:
  static std::string password_input(std::string prompt);
};
