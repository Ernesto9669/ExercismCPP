#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    std::string result{line.substr(line.find(":")+2)};
    return result;
}

std::string log_level(std::string line) {
    // return the log level
    std::string result{line.substr(1, line.find("]")-1)};
    return result;
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string result{message(line)+ " (" + log_level(line) + ")"};
    return result;
}
}  // namespace log_line
