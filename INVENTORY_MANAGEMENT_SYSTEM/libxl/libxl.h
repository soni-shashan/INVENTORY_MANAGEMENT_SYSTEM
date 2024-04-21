///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                    LibXL C++ headers version 4.2.0                        //
//                                                                           //
//                 Copyright (c) 2008 - 2023 XLware s.r.o.                   //
//                                                                           //
//   THIS FILE AND THE SOFTWARE CONTAINED HEREIN IS PROVIDED 'AS IS' AND     //
//                COMES WITH NO WARRANTIES OF ANY KIND.                      //
//                                                                           //
//          Please define LIBXL_STATIC variable for static linking.          //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#ifndef LIBXL_CPP_H
#define LIBXL_CPP_H

#define LIBXL_VERSION 0x04020000

#include "IBookT.h"
#include "ISheetT.h"
#include "IFormatT.h"
#include "IFontT.h"
#include "IAutoFilterT.h"
#include "IFilterColumnT.h"
#include "IRichStringT.h"
#include "IFormControlT.h"
#include "IConditionalFormatT.h"
#include "IConditionalFormattingT.h"

namespace libxl {

    #ifdef _UNICODE
        typedef IBookT<char> Book;
        typedef ISheetT<char> Sheet;
        typedef IFormatT<char> Format;
        typedef IFontT<char> Font;
        typedef IAutoFilterT<char> AutoFilter;
        typedef IFilterColumnT<char> FilterColumn;
        typedef IRichStringT<char> RichString;
        typedef IFormControlT<char> FormControl;
        typedef IConditionalFormatT<char> ConditionalFormat;
        typedef IConditionalFormattingT<char> ConditionalFormatting;
        #define xlCreateBook xlCreateBookA
        #define xlCreateXMLBook xlCreateXMLBookA
    #else
        typedef IBookT<char> Book;
        typedef ISheetT<char> Sheet;
        typedef IFormatT<char> Format;
        typedef IFontT<char> Font;
        typedef IAutoFilterT<char> AutoFilter;
        typedef IFilterColumnT<char> FilterColumn;
        typedef IRichStringT<char> RichString;
        typedef IFormControlT<char> FormControl;
        typedef IConditionalFormatT<char> ConditionalFormat;
        typedef IConditionalFormattingT<char> ConditionalFormatting;
        #define xlCreateBook xlCreateBookA
        #define xlCreateXMLBook xlCreateXMLBookA
    #endif

}

#endif
