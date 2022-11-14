/*******************************************************************************
**     FileName: Paragraph.h
**    ClassName: Paragraph
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 16:38
**  Description: 
*******************************************************************************/

#ifndef PARAGRAPH_H
#define PARAGRAPH_H

namespace bookDb
{
    class ParagraphImp;
    class Paragraph
    {
    public:
        Paragraph();
        virtual ~Paragraph();

    protected:
        ParagraphImp* m_Imp;
    }; // class Paragraph
} // namespace book
#endif // PARAGRAPH_H