#include "readingandstrippinglines.h"

vector<string> tokenize_line(const string & line, char delimenter) {//to pass only the address(reference) so that we do not make the program heavy in passing the actual line
    stringstream sline(line);
    string field;
    vector<string> tokens;
    while (getline(sline, field, delimenter)) {
        tokens.push_back(field);
    }

    return tokens;
}

