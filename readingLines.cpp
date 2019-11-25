//
// Created by Muhammad Hawamdeh on 11/24/19.
//

#include "readingandstrippinglines.h"

vector<string> read_lines(const string & pfile){//passing the reference; const means we are not changing the value of pfile
    vector<string> ret;
    ifstream user_file(pfile);
    if(user_file.is_open()){
        while (!user_file.eof()){
            string line;
            getline(user_file, line);
            ret.push_back(line);
        }
    }
    return ret;

};