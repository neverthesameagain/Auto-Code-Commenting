#include <iostream>
#include <string>
#include <unordered_map>
#include <regex>

std::string identifyLanguage(const std::string& code) {
    std::unordered_map<std::string, std::regex> languagePatterns = {
        {"C++", std::regex("\\b#include\\b|\\busing\\b|\\bnamespace\\b|\\bclass\\b|\\bint\\b|\\bvoid\\b|\\breturn\\b")},
        {"Python", std::regex("\\bdef\\b|\\bimport\\b|\\bclass\\b|\\bfor\\b|\\bwhile\\b|\\bif\\b|\\belif\\b|\\belse\\b|\\bprint\\b")},
        {"Java", std::regex("\\bpublic\\b|\\bclass\\b|\\bstatic\\b|\\bvoid\\b|\\bint\\b|\\bString\\b|\\bSystem\\.out\\.println\\b")},
        {"JavaScript", std::regex("\\bfunction\\b|\\bvar\\b|\\blet\\b|\\bconst\\b|\\bif\\b|\\belse\\b|\\bfor\\b|\\bwhile\\b|\\breturn\\b|\\bconsole\\.log\\b")},
        {"C#", std::regex("\\busing\\b|\\bnamespace\\b|\\bclass\\b|\\bpublic\\b|\\bstatic\\b|\\bvoid\\b|\\bint\\b|\\bstring\\b|\\breturn\\b")},
        {"Swift", std::regex("\\bimport\\b|\\bclass\\b|\\bfunc\\b|\\bvar\\b|\\blet\\b|\\bif\\b|\\belse\\b|\\bfor\\b|\\bwhile\\b|\\breturn\\b")},
        {"Ruby", std::regex("\\bdef\\b|\\brequire\\b|\\bclass\\b|\\bmodule\\b|\\bif\\b|\\belse\\b|\\belsif\\b|\\bwhile\\b|\\bdo\\b|\\bend\\b")},
        {"PHP", std::regex("\\b<\\?php\\b|\\becho\\b|\\bfunction\\b|\\bclass\\b|\\bpublic\\b|\\bprivate\\b|\\bprotected\\b|\\breturn\\b|\\bif\\b|\\belse\\b|\\bwhile\\b")},
        {"Go", std::regex("\\bpackage\\b|\\bimport\\b|\\bfunc\\b|\\bvar\\b|\\bconst\\b|\\bif\\b|\\belse\\b|\\bfor\\b|\\bswitch\\b|\\bcase\\b")},
        {"Rust", std::regex("\\bfn\\b|\\bstruct\\b|\\bimpl\\b|\\bmut\\b|\\blet\\b|\\bif\\b|\\belse\\b|\\bmatch\\b|\\breturn\\b|\\buse\\b")},
        {"SQL", std::regex("\\bSELECT\\b|\\bINSERT\\b|\\bUPDATE\\b|\\bDELETE\\b|\\bFROM\\b|\\bWHERE\\b|\\bGROUP BY\\b|\\bORDER BY\\b|\\bJOIN\\b|\\bLEFT JOIN\\b")},
        {"Swift", std::regex("\\bimport Foundation\\b|\\bimport UIKit\\b|\\bclass\\b|\\bfunc\\b|\\bvar\\b|\\blet\\b|\\bif\\b|\\belse\\b|\\bfor\\b|\\bwhile\\b|\\breturn\\b")},
        {"Perl", std::regex("\\bsub\\b|\\buse\\b|\\bpackage\\b|\\bmy\\b|\\bour\\b|\\byour\\b|\\bif\\b|\\belsif\\b|\\belse\\b|\\bwhile\\b|\\bforeach\\b")},
        {"Kotlin", std::regex("\\bfun\\b|\\bimport\\b|\\bclass\\b|\\bobject\\b|\\bvar\\b|\\bval\\b|\\bif\\b|\\belse\\b|\\bfor\\b|\\bwhile\\b|\\breturn\\b")},
        {"Scala", std::regex("\\bdef\\b|\\bimport\\b|\\bclass\\b|\\bobject\\b|\\bvar\\b|\\bval\\b|\\bif\\b|\\belse\\b|\\bfor\\b|\\bwhile\\b|\\breturn\\b")},
        {"Objective-C", std::regex("\\b#import\\b|\\b@implementation\\b|\\b@interface\\b|\\b@end\\b|\\b@property\\b|\\b@synthesize\\b|\\bif\\b|\\belse\\b|\\bfor\\b|\\bwhile\\b|\\breturn\\b")},
        {"TypeScript", std::regex("\\bimport\\b|\\bclass\\b|\\binterface\\b|\\bfunction\\b|\\blet\\b|\\bconst\\b|\\bif\\b|\\belse\\b|\\bfor\\b|\\bwhile\\b|\\breturn\\b")},
        {"Haskell", std::regex("\\bimport\\b|\\bmodule\\b|\\bdata\\b|\\btype\\b|\\blet\\b|\\bdo\\b|\\bif\\b|\\belse\\b|\\bcase\\b|\\bwhere\\b|\\breturn\\b")},
        {"Lua", std::regex("\\bfunction\\b|\\blocal\\b|\\bif\\b|\\bthen\\b|\\belse\\b|\\belseif\\b|\\bfor\\b|\\bwhile\\b|\\brepeat\\b|\\buntil\\b|\\breturn\\b")},
        {"R", std::regex("\\blibrary\\b|\\brequire\\b|\\bfunction\\b|\\bif\\b|\\belse\\b|\\bfor\\b|\\bwhile\\b|\\brepeat\\b|\\bbreak\\b|\\breturn\\b")}
    };

    for (const auto& [language, pattern] : languagePatterns) {
        if (std::regex_search(code, pattern)) {
            return language;
        }
    }

    return "Unknown Yet"; 
}

int main() {
    std::string code = R"(
        #include <iostream>
        int main() {
            std::cout << "Hello
