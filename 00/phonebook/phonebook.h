#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <unordered_map>
#include <vector>

struct Contact {
  std::string _nickname;
  std::string _fullname;
  std::string _phone;

  Contact() {}
  Contact(std::string fullname, std::string nickname, std::string phone)
      : _fullname(fullname), _nickname(nickname), _phone(phone) {}
};

class Phonebook {
private:
  std::unordered_map<int, Contact> _book;
  std::vector<int> _bookmark_idxs;
  int _id_cnt = 0;
  const int _width = 15;

public:
  Phonebook();
  void add(Contact contact);
  void remove(int idx);
  void add_to_bookmark(int idx);
  void list_bookmark() const;
  bool isempty() const;
  void peek_all() const;
  void print_by_idx(int idx, bool incl_header) const;
};

#endif // PHONEBOOK_H
