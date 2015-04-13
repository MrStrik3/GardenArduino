#ifndef CLOCK_H
#define CLOCK_H

class Clock
{
    public:
        /** Default constructor */
        Clock();
        /** Default destructor */
        virtual ~Clock();

        static void setTime(unsigned int year,
                            unsigned int month,
                            unsigned int day,
                            unsigned int hour,
                            unsigned int minute,
                            unsigned int second);
        static void printTime();
    protected:
    private:
};

#endif // CLOCK_H
