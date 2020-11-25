#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

vector<string> nm;

int main () {
    FILE * f = fopen ("22_names.txt", "r");
    nm.clear ();
    while (not feof(f)) {
        char str[100];
        fscanf (f, "\"%[a-zA-Z]\",", str);
        nm.push_back (string (str));
    };
    sort (nm.begin (), nm.end ());
    long long int score = 0;
    for (int i = 0; i < nm.size (); i ++) {
        long long int sum = 0;
        for (int j = 0; j < nm[i].size (); j ++) {
            sum += nm[i][j] - 'A' + 1;
        };
        score += sum * (i + 1);
    };
    printf ("%I64d\n", score);
    getchar ();
    fclose (f);
};

