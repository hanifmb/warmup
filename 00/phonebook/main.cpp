#include "phonebook.h"
#include <iostream>
#include <sstream>

template <typename T> T prompt(const std::string &prompt) {
  T input;
  std::cout << prompt;
  std::string line;
  std::getline(std::cin, line); // Read entire line from input
  std::istringstream iss(line);
  iss >> input;
  return input;
}

void search_loop(Phonebook &book) {
  if (book.isempty()) {
    std::cout << "Phonebook is empty\n";
    return;
  }
  book.peek_all();
  std::string entry_command = prompt<std::string>("\n1. Show details\n"
                                                  "2. Bookmark\n"
                                                  "Select command: ");
  if (entry_command == "1") {
    int idx = prompt<int>("Enter id to show details: ");
    book.print_by_idx(idx, true);
  } else if (entry_command == "2") {
    int idx = prompt<int>("Enter id to bookmark: ");
    book.add_to_bookmark(idx);
  } else {
    std::cout << "Command is unknown :(\n";
  }
}

int main() {
  Phonebook book;
  while (true) {
    std::string user_input = prompt<std::string>("\nEnter command: ");

    if (user_input == "SEARCH") {
      search_loop(book);
    } else if (user_input == "ADD") {
      std::string fullname = prompt<std::string>("Full name: ");
      std::string nickname = prompt<std::string>("Nickname: ");
      std::string phone = prompt<std::string>("Phone No.: ");

      book.add(Contact(fullname, nickname, phone));
      std::cout << "Contact is added :)\n";
    } else if (user_input == "BOOKMARK") {
      book.list_bookmark();
    } else if (user_input == "REMOVE") {
      int idx = prompt<int>("Enter ID to remove: ");
      book.remove(idx);
    } else if (user_input == "EXIT") {
      return 0;
    } else {
      std::cout << "Command is unrecognized :(\n";
    }
  }

  return 0;
}
