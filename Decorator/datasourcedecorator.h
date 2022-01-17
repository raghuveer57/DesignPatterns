#pragma once
#include "datasource.h"

// abstract class for the decorator classes
class DataSourceDecorator : public Datasource
{
    //no implementation required here 
};

//concrete decorator
class EncryptionDecorator : public Datasource
{
public:
    EncryptionDecorator(Datasource &data)
    {
        this->method = data.method;
        this->method += "Encryption ";
    }
};

//concrete decorator
class CompressionDecorator : public Datasource
{
public:
    CompressionDecorator(Datasource &data)
    {
        this->method = data.method;
        this->method += "Compression ";
    }
};