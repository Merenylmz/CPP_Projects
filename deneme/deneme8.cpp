#include <iostream> 
#include <vector>

using namespace std;

class HR
{
    private:
        string name;
        string departman;
        int salary;
    public:
        HR(string name, string departman, int salary){
            this->name = name;
            this->departman = departman;
            this->salary = salary;
        }
        
        string getName(){
            return this->name;
        }
        string getDepartman(){
            return this->departman;
        }
        int getSalary(){
            return this->salary;
        }

        void giveRise(double ratio){
            this->salary = this->salary + (this->salary * (ratio /100));
        }
        
        void showInformations(){
            cout << "\n" << "Isim: " << this->name << " Departman: " << this->departman << " Maas " << this->salary;
        }

    
};


int main(){
    HR h1("Muhammet", "BT", 1500);
    HR h2("Eren", "IT", 1900);
    HR h3("Yilmaz", "IK", 2500);

    //enum workers{ h1 ,h2, h3};
    vector<HR*> workersList = {&h1, &h2, &h3};

    for (HR* h: workersList)
    {
        h->giveRise(15);
    }

    int max = h1.getSalary();
    for (HR* h: workersList)
    {
        if (max < h->getSalary())
        {
            max = h->getSalary();
        }
    }

    for (HR* h: workersList)
    {
        if (h->getDepartman() == "IT")
        {
            h->showInformations();
        }
    }
    

    return 0;
}