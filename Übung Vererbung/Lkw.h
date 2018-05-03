#include "kfz.h"

class Lkw : public Kfz {
    
    public:
        Lkw(int a, double t, int n, const string &hs);
        ~Lkw();
        void setAchsen(int a){this->achsen = a;};
        int getAchsen() const {return this->achsen;};
        void setKapazitaet(double cp){this->ladeKapazitaet=cp;};        
        int getKapazitaet() const {return ladeKapazitaet;};
        void display() const;
        
    private:
        int achsen;
        double ladeKapazitaet;
};