# PHP Semantic Analyzer

## Overview
This project implements a semantic analyzer for PHP using Lex and Yacc. It parses PHP code, validates syntax, performs semantic analysis, and generates three-address code for further compilation. Key features include support for PHP control structures, expressions, function declarations, and a dynamic symbol table for scope and type management.

## Features
- **Syntax Parsing**: Tokenizes and parses PHP code, supporting constructs like `if`, `while`, `for`, `echo`, and function declarations.
- **Semantic Analysis**: Ensures semantic correctness by managing variable scopes and data types via a dynamic symbol table.
- **Three-Address Code Generation**: Produces intermediate code for assignments, control structures, and expressions.
- **Error Handling**: Provides detailed syntax and semantic error reporting for improved debugging.

## Prerequisites
- **Lex** and **Yacc** (or Flex and Bison)
- **GCC** (or any C compiler)
- A Unix-like environment (Linux, macOS, or WSL on Windows)

## Setup and Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/php-semantic-analyzer.git
   cd php-semantic-analyzer
   ```
2. Generate the lexer and parser:
   ```bash
   lex lex.l
   yacc -d yacc.y
   ```
3. Compile the code:
   ```bash
   gcc -o php_analyzer lex.yy.c y.tab.c -ll -ly
   ```
   *Note*: You may need to implement `symbolTable.c` or link additional files if required.

## Usage
1. Run the analyzer:
   ```bash
   ./php_analyzer
   ```
2. Input PHP code via standard input (or modify the program to read from a file). Example input:
   ```php
   <?php
   $x = 5;
   echo $x;
   ?>
   ```
3. The program will parse the input, perform semantic analysis, and output three-address code generation messages or error reports.

## Project Structure
- **lex.l**: Lexer specification for tokenizing PHP syntax.
- **yacc.y**: Parser specification for syntax and semantic analysis.
- **symbolTable.h**: Header file for the dynamic symbol table implementation.

## Contributing
Contributions are welcome! Please fork the repository, create a new branch, and submit a pull request with your changes.

## License
This project is licensed under under the MIT License. See the [LICENSE](LICENSE) file for details.

## Author
- [Your Name](https://github.com/your-username)  
Feel free to reach out for questions or collaboration!