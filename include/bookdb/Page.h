/*******************************************************************************
**     FileName: Page.h
**    ClassName: Page
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 16:39
**  Description: 
*******************************************************************************/

#ifndef PAGE_H
#define PAGE_H

namespace bookDb
{
    class PageImp;
    class Page
    {
    public:
        Page();
        virtual ~Page();

    protected:
        PageImp* m_Imp;
    }; // class Page
} // namespace boo
#endif // PAGE_H