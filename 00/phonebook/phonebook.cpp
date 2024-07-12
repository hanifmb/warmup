#include "phonebook.h"
#include <algorithm>
#include <iomanip>
#include <iostream>

Phonebook::Phonebook() {}

void Phonebook::add(Contact contact) {
  _book[_id_cnt] = contact;
  ++_id_cnt;
}

void Phonebook::add_to_bookmark(int idx) { _bookmark_idxs.push_back(idx); }

void Phonebook::list_bookmark() const {
  std::cout << "\n"
            << std::setw(_width) << "ID" << std::setw(_width) << "NAME"
            << std::setw(_width) << "NICKNAME" << std::setw(_width)
            << "PHONE NO\n";
  for (auto &e : _bookmark_idxs)
    print_by_idx(e, false);
}

void Phonebook::peek_all() const {
  std::cout << "\n"
            << std::setw(_width) << "ID" << std::setw(_width) << "NAME"
            << "\n";

  for (const auto &entry : _book) {
    std::cout << std::setw(_width) << entry.first << std::setw(_width)
              << entry.second._fullname << "\n";
  }
}

void Phonebook::print_by_idx(int idx, bool incl_header) const {
  if (incl_header) {
    std::cout << "\n"
              << std::setw(_width) << "ID" << std::setw(_width) << "NAME"
              << std::setw(_width) << "NICKNAME" << std::setw(_width)
              << "PHONE NO\n";
  }

  std::string fullname = _book.find(idx)->second._fullname;
  std::string nickname = _book.find(idx)->second._nickname;
  std::string phone = _book.find(idx)->second._phone;
  std::cout << std::setw(_width) << idx << std::setw(_width) << fullname
            << std::setw(_width) << nickname << std::setw(_width) << phone
            << "\n";
}

void Phonebook::remove(int idx) {
  _book.erase(idx);
  _bookmark_idxs.erase(
      std::remove(_bookmark_idxs.begin(), _bookmark_idxs.end(), idx),
      _bookmark_idxs.end());
}

bool Phonebook::isempty() const { return _book.size() == 0; }
