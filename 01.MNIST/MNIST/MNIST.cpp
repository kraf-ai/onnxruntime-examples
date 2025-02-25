#include "../MLCore/adapter.h"
#include "../MLCore/utils.h"

int main() {
    Logger::Init("log_mlcore.txt");

    auto dmlExecutionProvider = OrtUtils::ExecutionProvider::DirectML;
    std::cout << "Most powerful device for the execution provider " + OrtUtils::ToProviderString(dmlExecutionProvider) + ":" << std::endl;
    MLCore::AdapterInfo powerfulAdapter = MLCore::GetMostPowerfulAdapter(dmlExecutionProvider);
    MLCore::PrintAdapterDetails(powerfulAdapter);

    return 0;
}
