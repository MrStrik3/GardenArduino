#ifndef UTILS_H
#define UTILS_H

/**
 * This object contains utility functions
 */
class Utils
{
    public:
        static char *monthName[12];
        /** Default constructor */
        Utils();
        static char* ftoa( char* a, const float f, const int precision);
        static unsigned short getMonthNumber(const char* monthAbr);
    protected:
    private:
};

#endif // UTILS_H
