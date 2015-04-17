#ifndef CLOCK_H
#define CLOCK_H

class Clock
{
    public:
        /** Default constructor */
        Clock();
        /** Default destructor */
        virtual ~Clock();

        static void setTime(unsigned short year,
                            unsigned short month,
                            unsigned short day,
                            unsigned short hour,
                            unsigned short minute,
                            unsigned short second);
        static void printTime();
    protected:
    private:
};

#endif // CLOCK_H
