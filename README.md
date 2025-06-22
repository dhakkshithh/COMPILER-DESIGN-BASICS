# COMPILER-DESIGN-BASICS

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: DHAKSHITH BAVAN S

*INTERN ID*: CT04DF1802

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH

*DESCRIPTION OF TASK 3*:
               

The primary goal of this task is to implement a simple lexical analyzer in the C programming language. A lexical analyzer (also known as a scanner or tokenizer) is a fundamental component of a compiler that reads source code and breaks it down into a series of tokens. Tokens are the smallest meaningful elements of a program, such as keywords, identifiers, operators, literals, and punctuation.

Overview:

In this task, we focus on building a lightweight lexical analyzer that can read a simple input file containing C-like code and identify three major token types:

    Keywords (e.g., int, return, while, if)

    Identifiers (e.g., variable names like x, y, sum)

    Operators (e.g., +, -, =, *, /)

The analyzer reads each character from an input file, forms words, and compares them against a list of known keywords. If a match is found, the word is classified as a keyword. If not, and the word consists of alphanumeric characters starting with a letter, it is treated as an identifier. Any single-character mathematical or assignment operators are also detected and labeled appropriately.

Working Principle:

The lexical analyzer follows a character-by-character parsing technique. Here’s how the logic flows:

    The program opens a file named input.txt that contains C-like code.

    It reads each character sequentially.

    If the character is alphanumeric, it is accumulated into a buffer to form a word.

    When a non-alphanumeric character is encountered, the accumulated buffer is analyzed:

        If the buffer matches one of the known keywords (like int, return, etc.), it is identified as a keyword.

        If it is not a keyword but contains valid characters (starting with a letter), it is labeled as an identifier.

    Separately, each operator character (+, -, *, =, /) is immediately recognized and printed as an operator.

    The buffer is reset after each complete word is analyzed, and the process continues until the entire file is read.

Implementation Details:

A fixed-size array stores the list of keywords to compare against. A small buffer is used to build words from characters. Standard library functions like isalnum(), isdigit(), strcmp(), and fopen()/fgetc()/fclose() are utilized to perform character checks and file operations.

Input Example (input.txt):

int main() {
int a = 10 + 20;
return a;
}

Output:

Lexical Analysis:
Keyword: int
Identifier: main
Keyword: int
Identifier: a
Operator: =
Identifier: 10
Operator: +
Identifier: 20
Keyword: return
Identifier: a

Use Case and Importance:

This task introduces students or learners to the basic building block of compilers. Lexical analysis is the first phase in the compilation process, and understanding it provides valuable insight into how programming languages are interpreted by machines. Though simplified, this project models how tools like GCC or Clang begin the process of translating human-readable code into machine instructions.

Conclusion:

By implementing this lexical analyzer, students gain hands-on experience with string manipulation, file handling, and parsing techniques in C. It also serves as a stepping stone toward more advanced topics like syntax analysis, abstract syntax trees (ASTs), and full-fledged compiler construction

*OUTPUT
![Image](https://github.com/user-attachments/assets/d6c25c2e-6a08-46f3-8807-1eddcef3fd60)
