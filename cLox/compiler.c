#include <stdio.h>

#include "common.h"
#include "compiler.h"
#include "scanner.h"

typedef struct
{
    Token current;
    Token previous;
} Parser;

Parser parser;

static void errorAt(Token *token, const char *message)
{
    // TODO: continue here at page 309
}

static void error(const char *message)
{
    errorAt(&parser.previous, message);
}

static void errorAtCurrent(const char *message)
{
    errorAt(&parser.current, message);
}

static void advance()
{
    parser.previous = parser.current;

    for (;;)
    {
        parser.current = scanToken();
        if (parser.current.type != TOKEN_ERROR)
            break;

        errorAtCurrent(parser.current.start);
    }
}

bool compile(const char *source, Chunk *chunk)
{
    initScanner(source);
    advance();
    expression();
    consume(TOKEN_EOF, "Expected end of expression.");
}