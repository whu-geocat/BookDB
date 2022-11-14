/*******************************************************************************
**     FileName: Index.h
**    ClassName: Index
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 16:41
**  Description: 
*******************************************************************************/

#ifndef INDEX_H
#define INDEX_H

namespace bookDb
{
    /**
     * @brief 索引的基类，派生出章节索引、段落索引
     * 
     */
    class Index
    {
    public:
        Index();
        virtual ~Index();

    protected:
    }; // class Index
} // namespace book
#endif // INDEX_H