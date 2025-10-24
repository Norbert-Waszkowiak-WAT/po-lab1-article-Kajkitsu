#include "chapter.h"
#include <iostream>


Chapter::Chapter() : title(""), author(Author()), chapterNumber(1) {}

Chapter::Chapter(const string &chapterTitle, const Author &chapterAuthor, int number)
        : title(chapterTitle), author(chapterAuthor), chapterNumber(number) {}

Chapter::Chapter(const Chapter &other)
        : title(other.title), author(other.author), chapterNumber(other.chapterNumber) {}

Chapter::Chapter(const Article &other) : title(other.getTitle()), author(other.getAuthor()), chapterNumber(1) {}

void Chapter::displayInfo() const {
    std::cout << "Chapter " << chapterNumber <<": " << title << " by " << author.toString() << std::endl;
}

const string &Chapter::getTitle() const {
    return title;
}

const Author &Chapter::getAuthor() const {
    return author;
}

int Chapter::getChapterNumber() const {
    return chapterNumber;
}
