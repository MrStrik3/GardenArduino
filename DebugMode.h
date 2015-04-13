#ifndef DEBUGMODE_H
#define DEBUGMODE_H

#ifdef DEBUG
    #define DBG_PRINT(x) Serial.print(x)
    #define DBG_PRINTLN(x) Serial.println(x)
#else
    #define DBG_PRINT(x)
    #define DBG_PRINTLN(x)
#endif // DEBUG

#endif // DEBUGMODE_H
