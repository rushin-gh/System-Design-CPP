#include <bits/stdc++.h>
using namespace std;

namespace BadExample {
    class InsurancePolicy {
        public:
            virtual void CalculatePremium() = 0;
            virtual void AddBeneficiary(string name) = 0;
            virtual void ScheduleHealthCheck() = 0;
    };

    class AutoInsurance : public InsurancePolicy {
        public:
            void CalculatePremium() override {
                // Logic for auto premium
            }

            void AddBeneficiary(string name) override {
                throw std::logic_error("Auto insurance doesn't support beneficiaries");
            }

            void ScheduleHealthCheck() override {
                throw std::logic_error("Auto insurance doesn't support health checks");
            }
    };
}

namespace CorrectedExamples {
    class PremiumCalculable {
        public:
            virtual void CalculatePremium() = 0;
    };

    class BeneficiarySupport {
        public:
            virtual void AddBeneficiary(string name) = 0;
    };

    class HealthCheckRequired {
        public:
            virtual void ScheduleHealthCheck() = 0;
    };

    class AutoInsurance : public PremiumCalculable {
        public:
            void CalculatePremium() override {
                // Logic for auto premium
            }
    };

    class LifeInsurance : public PremiumCalculable, public BeneficiarySupport {
        public:
            void CalculatePremium() override {
                // Life premium logic
            }

            void AddBeneficiary(string name) override {
                // Add beneficiary logic
            }
    };

    class HealthInsurance : public PremiumCalculable, public HealthCheckRequired {
        public:
            void CalculatePremium() override {
                // Health premium logic
            }

            void ScheduleHealthCheck() override {
                // Schedule medical tests
            }
    };
} 

int main() {

    return 0;
}