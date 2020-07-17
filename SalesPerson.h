#include <string>

using namespace std;

class SalesPerson {
public:
    SalesPerson(double weeklyGrossSales){
        setWeeklyGrossSales(weeklyGrossSales);
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() const {
        return name;
    }

    void setWeeklyGrossSales(double weeklyGrossSales) {
        if(weeklyGrossSales < 0.00) {
            this->weeklyGrossSales = 0.00;
        }

        this->weeklyGrossSales = weeklyGrossSales;
    }

    double getWeeklyGrossSales() const {
        return weeklyGrossSales;
    }

    double commission() const {
        return getPercentageCommission() * getWeeklyGrossSales() + 200;
    }

    void setPercentageCommission(int percentageCommission) {
        this->percentageCommission = percentageCommission;
    }

    double getPercentageCommission() const {
        return static_cast<double >(percentageCommission) / 100;
    }

private:
    string name;
    double weeklyGrossSales{0.00};
    int percentageCommission{9};
};