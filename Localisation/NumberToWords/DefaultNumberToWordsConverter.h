// automatically converted from C# to C++ by convert_cs_to_cpp.sh ver. 1.1

#ifndef _DefaultNumberToWordsConverter_h_
#define _DefaultNumberToWordsConverter_h_

#include "GenderlessNumberToWordsConverter.h"   // GenderlessNumberToWordsConverter
#include "../../CultureInfo.h"                  // CultureInfo

namespace Humanizer
{
namespace Localisation
{
namespace NumberToWords
{
class DefaultNumberToWordsConverter: public GenderlessNumberToWordsConverter
{
    typedef System::Globalization::CultureInfo CultureInfo;

private:
//    const CultureInfo _culture;

    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="culture">Culture to use.</param>
public:
    DefaultNumberToWordsConverter()
    {
    }

    DefaultNumberToWordsConverter( const CultureInfo * culture )
    {
//        _culture = culture;
    }

    /// <summary>
    /// 3501.ToWords() -> "three thousand five hundred and one"
    /// </summary>
    /// <param name="number">Number to be turned to words</param>
    /// <returns></returns>
public:
    virtual std::string Convert( int number )
    {
        return std::to_string( number );
    }

    /// <summary>
    /// 1.ToOrdinalWords() -> "first"
    /// </summary>
    /// <param name="number">Number to be turned to ordinal words</param>
    /// <returns></returns>
public:
    virtual std::string ConvertToOrdinal( int number )
    {
        return std::to_string( number );
    }
};
}
}
}

#endif // _DefaultNumberToWordsConverter_h_
