// automatically converted from C# to C++ by convert_cs_to_cpp.sh ver. 1.0

#ifndef _NumberToWordsConverterRegistry_h_
#define _NumberToWordsConverterRegistry_h_


using Humanizer::Localisation::NumberToWords;

namespace Humanizer
{
namespace Configuration
{
    class NumberToWordsConverterRegistry : LocaliserRegistry<INumberToWordsConverter>
    {
        public:
 NumberToWordsConverterRegistry()
            : base((culture) => new DefaultNumberToWordsConverter(culture))
        {
            Register("af", new AfrikaansNumberToWordsConverter());
            Register("en", new EnglishNumberToWordsConverter());
            Register("ar", new ArabicNumberToWordsConverter());
            Register("fa", new FarsiNumberToWordsConverter());
            Register("es", new SpanishNumberToWordsConverter());
            Register("pl", (culture) => new PolishNumberToWordsConverter(culture));
            Register("pt-BR", new BrazilianPortugueseNumberToWordsConverter());
            Register("ru", new RussianNumberToWordsConverter());
            Register("fr", new FrenchNumberToWordsConverter());
            Register("nl", new DutchNumberToWordsConverter());
            Register("he", (culture) => new HebrewNumberToWordsConverter(culture));
            Register("sl", (culture) => new SlovenianNumberToWordsConverter(culture));
            Register("de", new GermanNumberToWordsConverter());
            Register("bn-BD", new BanglaNumberToWordsConverter());
            Register("tr", new TurkishNumberToWordConverter());
            Register("it", new ItalianNumberToWordsConverter());
            Register("uk", new UkrainianNumberToWordsConverter());
            Register("uz-Latn-UZ", new UzbekLatnNumberToWordConverter());
            Register("uz-Cyrl-UZ", new UzbekCyrlNumberToWordConverter());
            Register("sr", (culture) => new SerbianCyrlNumberToWordsConverter(culture));
            Register("sr-Latn", (culture) => new SerbianNumberToWordsConverter(culture));
        }
    }
}


#endif // _NumberToWordsConverterRegistry_h_
