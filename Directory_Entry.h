/** EXAMPLE FROM TEXTBOOK. */

#ifndef DIRECTORY_ENTRY_
#define DIRECTORY_ENTRY_

#include <string>
using std::string;

class Directory_Entry {

public:

  // Constructors
	Directory_Entry(std::string n, std::string num):
	  name(n), number(num) {}

	Directory_Entry():
	  name(""), number("") {}

	// Accessors functions
	/** get Directory objects name. */
	std::string get_name() const {return name;};

	/** get Directory objects number. */
	std::string get_number() const {return number;}

	// Mutator function
	/** Set Directory objects number. */
	void set_number(const string& nuw_num);

private:

	// Data fields
	std::string name;
	std::string number;

};

#endif
