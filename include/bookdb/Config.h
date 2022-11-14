/*******************************************************************************
**     FileName: Config.h
**       Author: Geocat & LittleBottle
**  Create Time: 2022/11/14 14:46
**  Description: This file is used to define all the configurations needed
**               by the BookDB.
*******************************************************************************/

#ifndef CONFIG_H
#define CONFIG_H

/**
 * bellows are the cross platform definitions
 */
#ifndef BOOKDB_EXPORT
#define BOOKDB_EXPORT
    #if defined(_MSC_VER) || defined(_WIN32) || defined(_WIN64)
        #define BOOKDB_EXPORT __declspec(dllexport)
    #elif defined(__GNUC__)
        #define BOOKDB_EXPORT 
    #else
    
    #endif
#endif

#ifndef BOOKDB_VERSION
#define BOOKDB_VERSION "0.0.0"
#endif


#endif // CONFIG_H