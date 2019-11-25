
#include "readingandstrippinglines.h"

using namespace std;


int main() {

    user_info passfile;
    passfile.user_infor("/etc/passwd", "root");

    return 0;
}
