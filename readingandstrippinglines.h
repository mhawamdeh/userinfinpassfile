//
// Created by Muhammad Hawamdeh on 11/24/19.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "hash256.h"

using namespace std;
#ifndef FILES_READINGANDSTRIPPINGLINES_H
#define FILES_READINGANDSTRIPPINGLINES_H
vector<string> read_lines(const string &pfile);
vector<string> tokenize_line(const string & line, char delimenter);


class user_info {
    vector<string> lines_to_pass;

public:

    void user_infor(const string &pfile, string user);
};



#endif //FILES_READINGANDSTRIPPINGLINES_H

