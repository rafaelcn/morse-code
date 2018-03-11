/**
 * MIT License
 *
 * Copyright (c) 2018 Rafael C. Nunes
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE  SOFTWARE.
 */

#include <iostream>
#include <cstring>
#include <string>

#include "morse.h"

void usage();

/**
 * @brief Builds a string of what to be encoded/decoded from argv
 */
std::string build_string(char **argv);

int main(int argc, char **argv) {

    Morse m;

    if (argc == 1) {
        usage();
        return 0;
    } else if (argc == 2) {
        usage();
        return 0;
    } else {
        if (std::strcmp(argv[1], "--encode") == 0) {
            std::cout << "Result: " << m.encode(build_string(argv)) << "\n";
        } else if (std::strcmp(argv[1], "--decode") == 0) {
            std::cout << "Result: " << m.decode(build_string(argv)) << "\n";
        } else {
            std::cerr << "Invalid usage of the Morse encoder/decoder\n";
            usage();
            return 0;
        }
    }


    return 0;
}

void usage() {
    std::cerr << "Morse encoder/decoder\n\n"
              << "Usage:\n\t./morse <option> <code>\n\n"
              << "Options:\n"
              << "\t--encode\tEncodes a Latin based string into Morse code\n"
              << "\t--decode\tDecodes a Morse code into a Latin based "
              << "string\n\n"
              << "Examples:\n"
              << "\t./morse --encode \"Rafael Campos Nunes\"\n"
              << "\t./morse --encode \"UTFPR\"\n"
              << "\t./morse --decode \"-. -.\"\n";
}

std::string build_string(char **argv) {
    std::string r;
    // start building from the third char string
    int i = 2;

    while (argv[i] != NULL) {
        r += argv[i];
        r += " ";
        i++;
    }

    return r;
}
