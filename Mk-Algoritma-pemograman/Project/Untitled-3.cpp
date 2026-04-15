#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

// Fakta-fakta awal (dapat diubah sesuai dengan masalah yang dihadapi)
unordered_map<string, bool> facts = {
    {"Overheat", false},
    {"ErrorSystem", false},
};

// Aturan-aturan yang dapat digunakan untuk forward chaining
vector<pair<string, vector<string>>> rules = {
    {"Rule1", {"Overheat", "ErrorSystem"}},
    {"Rule2", {"Overheat"}},
    {"Rule3", {"ErrorSystem"}},
};

// Fungsi untuk mengevaluasi aturan-aturan
bool EvaluateRule(const vector<string>& conditions) {
    for (const string& condition : conditions) {
        if (!facts[condition]) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Masalah System:\n";

    // Forward chaining
    bool changed = true;
    while (changed) {
        changed = false;
        for (const auto& rule : rules) {
            if (!facts[rule.first] && EvaluateRule(rule.second)) {
                facts[rule.first] = true;
                changed = true;
                cout << "Solusi: " << rule.first << " dijalankan.\n";
            }
        }
    }

    // Menampilkan hasil akhir
    if (facts["Overheat"] && facts["ErrorSystem"]) {
        cout << "Masalah overheat dan error sistem telah diatasi.\n";
    } else if (facts["Overheat"]) {
        cout << "Masalah overheat telah diatasi.\n";
    } else if (facts["ErrorSystem"]) {
        cout << "Masalah error sistem telah diatasi.\n";
    } else {
        cout << "Tidak ada masalah yang ditemukan.\n";
    }

    return 0;
}