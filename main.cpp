#include <string>
#include <vector>

void collect_triples() {
    std::vector<int> values;
    for (int i = 1; i <= 5; ++i) values.push_back(i * 3);
    int total = 0;
    for (std::size_t i = 0; i < values.size(); ++i) total += values[i];
    (void)total;
}

void digit_product() {
    int n = 2345;
    int product = 1;
    while (n > 0) {
        product *= (n % 10);
        n /= 10;
    }
    (void)product;
}

void reverse_text() {
    std::string text = "signal";
    std::string rev;
    for (std::size_t i = text.size(); i > 0; --i) rev += text[i - 1];
    (void)rev;
}

void absolute_diff() {
    int a = 41, b = 90;
    int diff = (a > b) ? (a - b) : (b - a);
    (void)diff;
}

extern "C" int mellow_hollow();
extern "C" void mellow_harbor();
extern "C" void hidden_boulder();

int main() {
    collect_triples();
    digit_product();
    reverse_text();
    absolute_diff();
    mellow_harbor();
    hidden_boulder();
    return mellow_hollow();
}
