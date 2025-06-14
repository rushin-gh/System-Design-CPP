#include <bits/stdc++.h>
using namespace std;

namespace BadExample {
    class Policy {
        public:
            virtual void AddBeneficiary(string name) = 0;
    };

    class LifeInsurance : public Policy {
        public:
            void AddBeneficiary(string name) override {
                // Add beneficiary logic
            }
    };

    class VehicleInsurance : public Policy {
        public:
            void AddBeneficiary(string name) override {
                throw std::logic_error("Vehicle insurance does not support beneficiaries");
            }
    };
}

namespace CorrectedExamples {
    class Policy {
        public:
            virtual void PrintSummary() = 0;
    };

    class BeneficiaryPolicy : public virtual Policy {
        public:
            virtual void AddBeneficiary(string name) = 0;
    };

    class LifeInsurance : public BeneficiaryPolicy {
        public:
            void PrintSummary() override {
                // summary logic
            }

            void AddBeneficiary(string name) override {
                // Add beneficiary logic
            }
    };

    class VehicleInsurance : public Policy {
        public:
            void PrintSummary() override {
                // summary logic
            }
    };
} 

int main() {

    return 0;
}