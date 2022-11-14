/*******************************************************************************
**     FileName: Word.h
**    ClassName: Word
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 14:53
**  Description: 
*******************************************************************************/

#ifndef WORD_H
#define WORD_H

#include <memory>

/**
 * @brief Word is the minimum data unit in the bookDb.
 */

namespace bookDb
{
    class WordImp;
    class Word
    {
    public:
        Word();
        virtual ~Word();

        /**
         * @brief get the size in bytes of the word.
         * 
         * @return uint16_t size in bytes
         */
        uint16_t sizeInByte();

    protected:
        std::shared_ptr<WordImp> m_pImpl;
    }; // class Word
} // namespace bookDb
#endif // WORD_H