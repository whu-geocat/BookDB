/*******************************************************************************
**     FileName: Chapter.h
**    ClassName: Chapter
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 16:38
**  Description: 
*******************************************************************************/

#ifndef CHAPTER_H
#define CHAPTER_H

namespace bookDb
{
    class ChapterImp;
    class Chapter
    {
    public:
        Chapter();
        virtual ~Chapter();

    protected:
        ChapterImp* m_Imp;
    }; // class Chapter
} // namespace boo
#endif // CHAPTER_H