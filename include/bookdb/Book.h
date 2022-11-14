/*******************************************************************************
**     FileName: Book.h
**    ClassName: Book
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 16:39
**  Description: 
*******************************************************************************/

#ifndef BOOK_H
#define BOOK_H

#include <cstdint>

namespace bookDb
{
    class BookImp;
    class Book
    {
    public:
        Book();
        virtual ~Book();

        uint64_t pageCount() const;

    protected:
        BookImp* m_Imp;
    }; // class Book
} // namespace bookDb
#endif // BOOK_H