//
// Created by Muhammad Hawamdeh on 11/25/19.
//
#include "readingandstrippinglines.h"

struct line {
    string userName;
    string password;
    string UID;
    string GID;
    string UIDINFO;
    string homeDirectory;
    string Shell;
};
    vector<string> lines_to_pass;

    line uinfo;

    void user_info::user_infor(const string &pfile, string user) {

        lines_to_pass = read_lines(pfile);

        for (auto userline: lines_to_pass) {
            if (userline[0] == '#' || userline[0] == '\n') {
                continue;
            }

            auto tokens = tokenize_line(userline, ':');

            uinfo.userName = tokens[0];
            uinfo.password = tokens[1];
            uinfo.UID = tokens[2];
            uinfo.GID = tokens[3];
            uinfo.UIDINFO = tokens[4];
            uinfo.homeDirectory = tokens[5];
            uinfo.Shell = tokens[6];

            if (uinfo.userName == user){
                cout << "$user: " << uinfo.userName <<endl<< "$groupid: " << uinfo.GID <<endl << "$path: "
                     << uinfo.homeDirectory <<endl << "hash: "<<endl << picosha2::hash256_hex_string(userline) << '\n';
            }
        }

    };
