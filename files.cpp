#include<iostream>
#include<fstream>

using std::string;

int main() {
    // working with files

    // ifstream reads from files, ofstream writes and creates files, fstream is a combination of the two
    

    std::ofstream file("file.txt");

    file << "This is going to be the text there.\n";

    for (int i = 0; i < 10; i++) {
        file << "I am on iteration " << i << ",\n";
    }

    file.close();
    // good practice to always close this

    // to read files
    string filetext;

    std::ifstream read_file("file.txt");

    // use a while loop to loop over lines in the file
    while (getline(read_file, filetext)) {
    // while (read_file >> filetext) { // this is word by word

        // it reads it line by line
        std::cout << filetext << "|";
    }

    read_file.close();
    // good practice to always close this
}
