#pragma once

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <exception>
#include <string>

class Exception : public std::exception {
  public:
    Exception(std::string message, const int line_num, std::string file_name) 
      : m_message(message), m_fileName(file_name), m_lineNum(line_num)  {};

    const char* what() const noexcept override { return m_message.data(); };
    const char* file() const noexcept { return m_fileName.data(); };
    int line() const noexcept { return m_lineNum; };

  private:
    const std::string m_message;
    const std::string m_fileName;
    const int m_lineNum;
};

#endif
