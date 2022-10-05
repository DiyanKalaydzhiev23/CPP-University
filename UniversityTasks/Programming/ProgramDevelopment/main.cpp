#include <iostream>
using namespace std;


void printWordNotion() {
    cout << "Lexeme:" << endl;
    cout << "--- A set of words (word forms) having the same basic meaning, "
            "differing only in gender, number, case, grammatical tense, etc."
            "Individual word forms are formed by grammatical rules." << endl;

    cout << "Literal:" << endl;
    cout << "--- A constant value of a variable." << endl;

    cout << "Command:" << endl;
    cout << "--- A specific instruction given to a computer "
            "application to perform some task or function\n" << endl;
}

void printReservedWords() {
    cout << "Reserved Words:" << endl;
    cout << "alignas (C++11)\n"
            "alignof (C++11)\n"
            "and\n"
            "and_eq\n"
            "asm\n"
            "atomic_cancel (TM TS)\n"
            "atomic_commit (TM TS)\n"
            "atomic_noexcept (TM TS)\n"
            "auto (1)\n"
            "bitand\n"
            "bitor\n"
            "bool\n"
            "break\n"
            "case\n"
            "catch\n"
            "char\n"
            "char8_t (C++20)\n"
            "char16_t (C++11)\n"
            "char32_t (C++11)\n"
            "class (1)\n"
            "compl\n"
            "concept (C++20)\n"
            "const\n"
            "consteval (C++20)\n"
            "constexpr (C++11)\n"
            "constinit (C++20)\n"
            "const_cast\n"
            "continue\n"
            "co_await (C++20)\n"
            "co_return (C++20)\n"
            "co_yield (C++20)\n"
            "decltype (C++11)\n"
            "default (1)\n"
            "delete (1)\n"
            "do\n"
            "double\n"
            "dynamic_cast\n"
            "else\n"
            "enum\n"
            "explicit\n"
            "export (1) (3)\n"
            "extern (1)\n"
            "false\n"
            "float\n"
            "for\n"
            "friend\n"
            "goto\n"
            "if\n"
            "inline (1)\n"
            "int\n"
            "long\n"
            "mutable (1)\n"
            "namespace\n"
            "new\n"
            "noexcept (C++11)\n"
            "not\n"
            "not_eq\n"
            "nullptr (C++11)\n"
            "operator\n"
            "or\n"
            "or_eq\n"
            "private\n"
            "protected\n"
            "public\n"
            "reflexpr (reflection TS)\n"
            "register (2)\n"
            "reinterpret_cast\n"
            "requires (C++20)\n"
            "return\n"
            "short\n"
            "signed\n"
            "sizeof (1)\n"
            "static\n"
            "static_assert (C++11)\n"
            "static_cast\n"
            "struct (1)\n"
            "switch\n"
            "synchronized (TM TS)\n"
            "template\n"
            "this (4)\n"
            "thread_local (C++11)\n"
            "throw\n"
            "true\n"
            "try\n"
            "typedef\n"
            "typeid\n"
            "typename\n"
            "union\n"
            "unsigned\n"
            "using (1)\n"
            "virtual\n"
            "void\n"
            "volatile\n"
            "wchar_t\n"
            "while\n"
            "xor\n"
            "xor_eq\n" << endl;
}

void printUniversityData() {
    cout << "New Bulgarian University with Computer Science\n" << endl;
}

void printFullName() {
    cout << "Diyan Kostadinov Kalaydzhiev\n" << endl;
}

int main() {
    printFullName();
    printUniversityData();
    printWordNotion();
    printReservedWords();

    return 0;
}