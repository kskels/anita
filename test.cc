#include <list>
#include <string>

int main() {
  std::list<std::string> list;
  int i = 0;
  while (i < 1000000) {
    list.push_back("San Jose");
    i = i + 1;
  }  
}
