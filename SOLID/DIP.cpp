#include <bits/stdc++.h>
using namespace std;

namespace BadExample {
    class EmailService {
        public:
            void SendEmail(string recipient, string content) {
                // Code to send email
            }
    };

    class PolicyNotifier {
        public:
            void NotifyCustomer(string message) {
                EmailService emailService;
                emailService.SendEmail("customer@example.com", message);
            }
    };
}

namespace CorrectedExamples {
    class INotificationService {
        public:
            virtual void Send(string recipient, string message) = 0;
    };

    class EmailService : public INotificationService {
        public:
            void Send(string recipient, string message) override {
                // Actual email sending logic
            }
    };

    class PolicyNotifier {
        private:
            INotificationService* notificationService;

        public:
            // Dependency is injected via constructor
            PolicyNotifier(INotificationService* service) : notificationService(service) {}

            void NotifyCustomer(string message) {
                notificationService->Send("customer@example.com", message);
            }
    };
} 

int main() {

    return 0;
}