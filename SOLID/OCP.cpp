#include <bits/stdc++.h>
using namespace std;

class PolicyModel {
    public:
        int Id;
        string InsuredName;
        int PolicyTerm;
        string type;
};

namespace BadExample {
    class AutoInsurance : public PolicyModel { };
    class HealthInsurance : public PolicyModel { };
    class LifeInsurance : public PolicyModel { };

    class PolicyPremiumService {
        int CalculatePremium(PolicyModel policyModel) {
            if (policyModel.type == "Auto Insurance") {
                // Returns premium for Auto
            } else if (policyModel.type == "Health Insurance") {
                // Returns premium for Health
            } else if (policyModel.type == "Life Insurance") {
                // Returns premium for Life
            }
        }
    };
}

namespace CorrectedExamples {
    class AutoInsurance : public PolicyModel {
        int CalculatePremium() {
            // Calculates Premium
        }
    };

    class HealthInsurance : public PolicyModel {
        int CalculatePremium() {
            // Calculates Premium
        }
    };

    class LifeInsurance : public PolicyModel {
        int CalculatePremium() {
            // Calculates Premium
        }
    };

    class PolicyPremiumService {
        void CalculatePremium(PolicyModel policyModel) {
            // return policyModel.CalculatePremium();
        }
    };
} 

int main() {

    return 0;
}