#include <iostream>
#include <string>
#include <regex>

std::string identifyPurpose(const std::string& code) {
    
    if (std::regex_search(code, std::regex("\\bcalculate\\b|\\bsum\\b|\\badd\\b"))) {
        return "This function calculates the sum of two numbers.";
    } else if (std::regex_search(code, std::regex("\\breverse\\b|\\binvert\\b"))) {
        return "This function reverses the given string or array.";
    } else {
        return "The purpose of this function is not recognized.";
    }else if (std::regex_search(code, std::regex("\\bsort\\b|\\border\\b|\\barrange\\b"))) {
        return "This function sorts the elements of an array.";
    } else if (std::regex_search(code, std::regex("\\bsearch\\b|\\bfind\\b|\\blocate\\b"))) {
        return "This function searches for an element in an array or list.";
    } else if (std::regex_search(code, std::regex("\\bvalidate\\b|\\bcheck\\b|\\bverify\\b"))) {
        return "This function validates input data.";
    }else if (std::regex_search(code, std::regex("\\bsearch\\b|\\bfind\\b|\\blocate\\b"))) {
        return "This function searches for an element in an array.";
    } else if (std::regex_search(code, std::regex("\\bfactorial\\b|\\bcompute factorial\\b"))) {
        return "This function calculates the factorial of a number.";
    } else if (std::regex_search(code, std::regex("\\bsort\\b|\\barrange\\b|\\border\\b"))) {
        return "This function sorts an array in ascending/descending order.";
    } else if (std::regex_search(code, std::regex("\\bfibonacci\\b|\\bcompute fibonacci\\b"))) {
        return "This function calculates the Fibonacci sequence.";
    } 
    else {
        return "The purpose of this function is not recognized.";
    }

}

std::string commentFunction(const std::string& functionName, const std::string& code, const std::string& purpose) {
    std::string commentedCode = "// Function: " + functionName + "\n";
    commentedCode += "// Purpose: " + purpose + "\n";
    commentedCode += code + "\n";
    return commentedCode;
}

int main() {
    std::string functionName = "sum";
    std::string code = R"(
        int sum(int a, int b) {
            return a + b;
        }
    )";

    std::string purpose = identifyPurpose(code);
    std::string commentedCode = commentFunction(functionName, code, purpose);
    
    std::cout << "Commented code:\n" << commentedCode << std::endl;

    return 0;
}
