#include "Exception.hpp"

namespace VlkApp {
  Exception::Exception(std::string message, const int line_num, std::string file_name) 
    : m_message(message), m_fileName(file_name), m_lineNum(line_num) {
  }

  const char* Exception::what() const noexcept {
    return m_message.data();
  }

  const char* Exception::file() const noexcept {
    return m_fileName.data();
  }

  int Exception::line() const noexcept {
    return m_lineNum;
  }
}
