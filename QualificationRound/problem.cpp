#include <algorithm>
#include <iostream>
#include <vector>

struct library_t {
  unsigned long long n_books;
  unsigned long long singup_time;
  unsigned long long ships_per_day;
  std::vector<int> books;
};

unsigned long long n_books;
unsigned long long n_libraries;
unsigned long long n_days;
std::vector<int> book_value;
std::vector<library_t> libraries;

bool compare(unsigned long long a, unsigned long long b) {
  if (book_value[a] > book_value[b])
    return true;
  if (book_value[a] == book_value[b] and a > b)
    return true;
  return false;
}

int main() {

  // Input data

  // Read input
  std::cin >> n_books;
  std::cin >> n_libraries;
  std::cin >> n_days;

  unsigned long long aux, aux2, aux3, aux4;

  for (unsigned long long i = 0; i < n_books; i++) {
    std::cin >> aux;
    book_value.push_back(aux);
  }

  for (unsigned long long i = 0; i < n_libraries; i++) {
    std::cin >> aux;
    std::cin >> aux2;
    std::cin >> aux3;
    std::vector<int> aux5;
    for (unsigned long long j = 0; j < aux; j++) {
      std::cin >> aux4;
      aux5.push_back(aux4);
    }
    std::sort(aux5.begin(), aux5.end(), compare);
    libraries.push_back({aux, aux2, aux3, aux5});
  }
}
