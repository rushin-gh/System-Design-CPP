#include <bits/stdc++.h>
using namespace std;

class PolicyModel {
    public:
        int Id;
        string InsuredName;
        int PolicyTerm;
};

namespace BadExample {
    class FormsService {
        void GetApplicableForms(PolicyModel policyModel);
        void MarkMandatoryForms(PolicyModel policyModel);
        void DownloadForms(PolicyModel PolicyModel);
        void UploadFormsToDMS(PolicyModel PolicyModel);
        void SendForms(PolicyModel policyModel);
    };
}

namespace CorrectedExamples {
    class FormsService {
        void GetApplicableForms(PolicyModel policyModel);
        void MarkMandatoryForms(PolicyModel policyModel);
        void DownloadForms(PolicyModel PolicyModel);
    };

    class DMSService {
        void UploadFormsToDMS(PolicyModel PolicyModel);
    };

    class NotificationService {
        void SendForms(PolicyModel policyModel);

    };
} 

int main() {
    int n;
    cin >> n;

    

    cout << n << endl;
    return 0;
}