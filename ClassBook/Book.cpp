#include "Book.h"

Book::~Book()
{
	if(nameAuthor != nullptr && strlen(nameAuthor) >= 1)
		delete[] nameAuthor;
	if (nameBook != nullptr && strlen(nameBook) >= 1)
		delete[] nameBook;
	if (publishing != nullptr && strlen(publishing) >= 1)
		delete[] publishing;
	if (date != nullptr && strlen(date) >= 1)
		delete[] date;
}
