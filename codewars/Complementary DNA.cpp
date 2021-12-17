#include <string>

std::string DNAStrand(const std::string& dna)
{
    std::string s = "";
    for (int i = 0; i < dna.length(); ++i) {
        if (dna[i] == 'A') {
            s += 'T';
        }
        if (dna[i] == 'T') {
            s += 'A';
        }
        if (dna[i] == 'C') {
            s += 'G';
        }
        if (dna[i] == 'G') {
            s += 'C';
        }
    }
    return s;
}
