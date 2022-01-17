#include <iostream>
#include "datasourcedecorator.h"
#include "filedatasource.h"

using namespace std;

int main()
{
    FileDatasource data1 = FileDatasource();
    FileDatasource data2 = FileDatasource();
    data1.writeData("test");
    // add encryption
    auto encryptData = EncryptionDecorator(data1);
    encryptData.writeData("test");
    // add compression to the existing encrpted data
    auto ecdata = CompressionDecorator(encryptData);
    ecdata.writeData("test");
    // add compression
    auto cdata = CompressionDecorator(data2);
    cdata.writeData("test");
    return 0;
}