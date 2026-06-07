#include <iostream>

using namespace std;

class PID {
    public: 
        PID(double kp, double ki, double kd){
            this->kp = kp;
            this->ki = ki;
            this->kd = kd;
        }
        ~PID(){

        }

    private: 
        double kp, ki, kd, error, prevError;

    public: 
        double calculatePID(double setPoint, double measuredValue){
            double error = setPoint - measuredValue;
            double integral = 0.0;
            integral += error;

            double derivative = error - this->error;
            double output = this->kp * error + ki*integral + kd*derivative;

            this->error = error;
        }
    
};


int main(){
    double kp = 0;
    double ki = 0;
    double kd = 0;

    PID pid(kp, ki, kd);

    return 0;
}