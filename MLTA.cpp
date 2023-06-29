#include <iostream>
#include <vector>
#include <string>

std::string getBinaryRepresentation(int value, int numVars) {
    std::string binary;

    for (int i = numVars - 1; i >= 0; --i) {
        int bit = (value >> i) & 1;
        binary += std::to_string(bit);
    }

    return binary;
}

std::string constructSDNF(const std::vector<int>& functionValues) {
    std::string sdnf;
    int numVars = static_cast<int>(log2(functionValues.size()));

    for (int i = 0; i < functionValues.size(); ++i) {
        if (functionValues[i] == 1) {
            std::string binaryRep = getBinaryRepresentation(i, numVars);

            std::string term;
            for (int j = 0; j < binaryRep.length(); ++j) {
                if (binaryRep[j] == '0') {
                    term += "!";
                }
                term += "x" + std::to_string(j + 1);
                if (j < binaryRep.length() - 1) {
                    term += " && ";
                }
            }

            if (!sdnf.empty()) {
                sdnf += " || ";
            }
            sdnf += "(" + term + ")";
        }
    }

    return sdnf;
}

int main() {
    std::vector<int> functionValues = {0, 1, 1, 0, 1, 0, 0, 1}; // Пример вектора значений функции
    std::string sdnf = constructSDNF(functionValues);
    std::cout << "СДНФ: " << sdnf << std::endl;

    return 0;
}
