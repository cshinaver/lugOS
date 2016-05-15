# Interpreter/OS (Name TBD)
## Notre Dame Linux User Group project

## Overview

This is NDLUG's first group project.
Our goal is to write a language/interpreter and use it as
the init process (PID 1) for an operating system (Linux base kernel).

## Interpreter/Language

The first part of this project is the creation of a language and an
interpreter/runtime for that language. Our interpreter read in a source file,
compile it to bytecode (that we must create), and then run that bytecode using
a stack-based virtual machine (also known as a bytecode interpreter).
As we would like to be able to delegate the work involved,
the major tasks have been split into a few different parts.

The interpreter is broken up into a few major sections.

* Language design:
    - In the interest of learning, we have decided to create our own language
        to use for the operating system. This task will require a [Context Free
        Grammar](https://www.cs.rochester.edu/~nelson/courses/csc_173/grammars/cfg.html).
        The grammar is a very useful method for specifying language syntax and
        parser creation. Currently, we do not have a finished language
        specification. Work on this task will require discussion and debate in
        the lug slack channel. This step must be mostly completed in order to
        begin work on the parser.
* Front-end Interpreter implementation
    1. Lexer (Scanner)
        - The [lexer](https://en.wikipedia.org/wiki/Lexical_analysis) reads the
            source file and groups characters into tokens. These tokens are
            then used by the parser in order to generate bytecode. The lexer
            will probably be one of the easiest parts of the interpreter to
            build as it only requires use of regular expressions. This step can
            probably be done before finishing the langauge spec but will be
            easier when the language is formalized.
    2. Parser
        - The [parser](https://en.wikipedia.org/wiki/Parsing) reads the tokens
            from the lexer and creates an intermediate representation of the
            source file. This intermediate representation is then used by
            later stages of the interpreter for execution. Depending on the
            parser,
            the IR may be an [abstract syntax tree](http://c2.com/cgi/wiki?AbstractSyntaxTree),
            bytecode (a list of instructions, very similar to assembly code),
            or some combination of the two. For example, CPython
            (implementation of the Python specification written in C, the
            standard Python implementation) creates a parse tree, transforms
            the parse tree into an AST, transforms the AST into a Control Flow
            Graph, and then emits bytecode based on the Control Flow Graph.
            We will only be emitting bytecode (unless otherwise decided). The
            full parser will emit bytecode that will then be sent to the
            virtual machine for execution.
        - This will probably be the hardest part of the interpreter. It
            requires the full langauge specification to be formalized as well
            as knowledge of the interpreter as a whole. Nonetheless anyone is
            able and encouraged to work on it!
* Back-end Interpreter implementation
    1. Optimizations
        - Currently we have no plans for optimizations. We just want to get a
            working interpreter.
    2. Virtual Machine
        - The virtual machine will execute the bytecode generated from the
            parser. This will require the creation of a bytecode spec
            (shouldn't be too difficult, can look at CPython implementation for
            examples). The vm will use a stack for operands. A great example of
            what we need is
            [here](http://aosabook.org/en/500L/a-python-interpreter-written-in-python.html).
            This stage will require the handling of simple instructions as well
            as the implementation of function calls with stack frames. This is
            also where we would implement any features of the language such as
            data structures (dictionaries, resizable arrays, etc). Much excite!




## Contributions

If you would like to contribute and are a member of NDLUG, please feel free to
send me a message and I'll add you as a contributer (I'm lazy and don't want to
go through and add everyone in the group). If you are not a part of NDLUG and
would still like to contribute, feel free to submit a pull request for
discussion etc.
