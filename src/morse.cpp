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


#include "morse.h"

Morse::Morse() {
    /* Construct the entire morse alphabet
     * Might not be the best way to construct, it is ugly but I'm going with
     * this for now. For sure there is a better way to encode this information.
     */
    morse_alphabet.insert(std::make_pair('a', ".-"));
    morse_alphabet.insert(std::make_pair('b', "-..."));
    morse_alphabet.insert(std::make_pair('c', "-.-."));
    morse_alphabet.insert(std::make_pair('d', "-.."));
    morse_alphabet.insert(std::make_pair('e', "."));
    morse_alphabet.insert(std::make_pair('f', "..-."));
    morse_alphabet.insert(std::make_pair('g', "--."));
    morse_alphabet.insert(std::make_pair('h', "...."));
    morse_alphabet.insert(std::make_pair('i', ".."));
    morse_alphabet.insert(std::make_pair('j', ".---"));
    morse_alphabet.insert(std::make_pair('k', "-.-"));
    morse_alphabet.insert(std::make_pair('l', ".-.."));
    morse_alphabet.insert(std::make_pair('m', "--"));
    morse_alphabet.insert(std::make_pair('n', "-."));
    morse_alphabet.insert(std::make_pair('o', "---"));
    morse_alphabet.insert(std::make_pair('p', ".--."));
    morse_alphabet.insert(std::make_pair('q', "--.-"));
    morse_alphabet.insert(std::make_pair('r', ".-."));
    morse_alphabet.insert(std::make_pair('s', "..."));
    morse_alphabet.insert(std::make_pair('t', "-"));
    morse_alphabet.insert(std::make_pair('u', "..-"));
    morse_alphabet.insert(std::make_pair('v', "...-"));
    morse_alphabet.insert(std::make_pair('w', ".--"));
    morse_alphabet.insert(std::make_pair('x', "-..-"));
    morse_alphabet.insert(std::make_pair('y', "-.--"));
    morse_alphabet.insert(std::make_pair('z', "--.."));
    morse_alphabet.insert(std::make_pair('0', "-----"));
    morse_alphabet.insert(std::make_pair('1', ".----"));
    morse_alphabet.insert(std::make_pair('2', "..---"));
    morse_alphabet.insert(std::make_pair('3', "...--"));
    morse_alphabet.insert(std::make_pair('4', "....-"));
    morse_alphabet.insert(std::make_pair('5', "....."));
    morse_alphabet.insert(std::make_pair('6', "-...."));
    morse_alphabet.insert(std::make_pair('7', "--..."));
    morse_alphabet.insert(std::make_pair('8', "---.."));
    morse_alphabet.insert(std::make_pair('9', "----."));
}


Morse::~Morse() {

}

std::string Morse::encode(const std::string &s) {
    std::string r = "";

    for (char c : s) {
        auto morse = morse_alphabet.find(c);
        r += morse->second;
    }

    return r;
}

std::string Morse::decode(const std::string &s) {
    // quite a pain to decode if there is a continuous string of morse code
    // to ease the solution each morse character should be separated by a
    // space character, otherwise it would be interpreted erroneously
    std::string r = s;

    return r;
}
