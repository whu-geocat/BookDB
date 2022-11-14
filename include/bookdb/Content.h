/*******************************************************************************
**     FileName: Content.h
**    ClassName: Content
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 16:39
**  Description: 
*******************************************************************************/

#ifndef CONTENT_H
#define CONTENT_H

namespace bookDb
{
    /**
     * @brief 目录
     * 
     */
    class ContentImp;
    class Content
    {
    public:
        Content();
        virtual ~Content();

    protected:
        ContentImp* m_Imp;
    }; // class Content
} // namespace book
#endif // CONTENT_H