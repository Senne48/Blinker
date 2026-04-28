#ifndef BLINKER_H
    #define BLINKER_H
    // Klassedefinitie
    class Blinker{
    private:
        unsigned long _volgendeBlinkOm;
        unsigned long _nu;
        unsigned long _blinkInterval;
        unsigned long _startDelay;
        unsigned int  _ledPin;

    public:
        // Constructor
        Blinker(unsigned int ledPin, unsigned long blinkInterval, const long startDelay = 0);
        // Destructor
        ~Blinker();

    int begin();
    int handle();
};
#endif
