#include <napi.h>
#include <string>
#include "isPrime.h"

// native C++ function that is assigned to `greetHello` property on `exports` object
Napi::Boolean isPrimeNum(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    int num = (int)info[0].ToNumber();
    bool result = isPrime(num);

    // return new `Napi::String` value
    return Napi::Boolean::New(env, result);
}

// callback method when module is registered with Node.js
Napi::Object Init(Napi::Env env, Napi::Object exports)
{

    // set a key on `exports` object
    exports.Set(
        Napi::String::New(env, "isPrime"),   // property name => "greetHello"
        Napi::Function::New(env, isPrimeNum) // property value => `greetHello` function
    );

    // return `exports` object (always)
    return exports;
}

// register `greet` module which calls `Init` method
NODE_API_MODULE(prime, Init)