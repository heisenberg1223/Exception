#pragma once

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include "Vlk.hpp"

namespace VlkApp {
  class Exception : public std::exception {
    public:
      Exception(std::string message, const int line_num, std::string file_name);

      const char* what() const noexcept override;
      const char* file() const noexcept;
      int line() const noexcept;

    private:
      const std::string m_message;
      const std::string m_fileName;
      const int m_lineNum;
  };
}

#endif
