#include <iostream> 

using namespace std;

class Reservation{
    public:
        Reservation(string guestName, int roomNo, double nightPrice, int stayingDuration){
            this->guestName = guestName;
            this->roomNo = roomNo;
            this->nightPrice = nightPrice;
            this->stayingDuration = stayingDuration;
        }
        ~Reservation(){
            cout << "\n" << this->guestName << " Odadan cikis yapti.";
        }

        void setStayingDuration(int stayingDuration){
            if (stayingDuration < 1)
            {
                cout << "Kalma sureniz 1' den kucuk olamaz";
            }
            else if (stayingDuration > 7)
            {
                this->nightPrice = this->nightPrice * ((double)9/(double)10);
            }
        }
        int sumPrice(){
            setStayingDuration(this->stayingDuration);
            return this->nightPrice * this->stayingDuration;
        }
        private: 
            string guestName;
            int roomNo;
            double nightPrice;
            int stayingDuration;
        
    
};
int main(){
    Reservation reserv1("Muhammet", 1, 500, 2); 
    Reservation reserv2("Eren", 5, 850, 1); 
    Reservation reserv3("Yilmaz", 8, 1230, 10); 

    cout << "Toplam gelir: " << (reserv1.sumPrice()+ reserv2.sumPrice()+ reserv3.sumPrice());

    return 0;
}