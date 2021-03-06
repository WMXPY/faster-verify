#include <node.h>
#include <v8.h>
#include <nan.h>
#include <stdlib.h>

#include "calc/cla.h"
#include "hello/hello.h"
#include "smart/smart.h"
#include "learning/learning.h"

using namespace v8;

void Init(Local<Object> exports)
{
    exports->Set(Nan::New("Hello").ToLocalChecked(), Nan::New<FunctionTemplate>(Hello)->GetFunction());
    exports->Set(Nan::New("World").ToLocalChecked(), Nan::New<FunctionTemplate>(World)->GetFunction());

    // From verifys.cc
    exports->Set(Nan::New("IsPrime").ToLocalChecked(), Nan::New<FunctionTemplate>(IsPrime)->GetFunction());
    exports->Set(Nan::New("IsPrimeExample").ToLocalChecked(), Nan::New<FunctionTemplate>(IsPrimeExample)->GetFunction());
    exports->Set(Nan::New("IsArray").ToLocalChecked(), Nan::New<FunctionTemplate>(IsArray)->GetFunction());
    exports->Set(Nan::New("IsNumber").ToLocalChecked(), Nan::New<FunctionTemplate>(IsNumber)->GetFunction());
    exports->Set(Nan::New("IsFunction").ToLocalChecked(), Nan::New<FunctionTemplate>(IsFunction)->GetFunction());
    exports->Set(Nan::New("IsString").ToLocalChecked(), Nan::New<FunctionTemplate>(IsString)->GetFunction());
    exports->Set(Nan::New("IsObject").ToLocalChecked(), Nan::New<FunctionTemplate>(IsObject)->GetFunction());
    exports->Set(Nan::New("IsDate").ToLocalChecked(), Nan::New<FunctionTemplate>(IsDate)->GetFunction());
    exports->Set(Nan::New("IsBoolean").ToLocalChecked(), Nan::New<FunctionTemplate>(IsBoolean)->GetFunction());
    exports->Set(Nan::New("IsNativeError").ToLocalChecked(), Nan::New<FunctionTemplate>(IsNativeError)->GetFunction());
    exports->Set(Nan::New("IsRegExp").ToLocalChecked(), Nan::New<FunctionTemplate>(IsRegExp)->GetFunction());
    exports->Set(Nan::New("IsNull").ToLocalChecked(), Nan::New<FunctionTemplate>(IsNull)->GetFunction());
    exports->Set(Nan::New("IsUndefined").ToLocalChecked(), Nan::New<FunctionTemplate>(IsUndefined)->GetFunction());

    // From calc.cc
    exports->Set(Nan::New("ForEach").ToLocalChecked(), Nan::New<FunctionTemplate>(ForEach)->GetFunction());
    exports->Set(Nan::New("ArrStatic").ToLocalChecked(), Nan::New<FunctionTemplate>(ArrStatic)->GetFunction());
    exports->Set(Nan::New("Bezier").ToLocalChecked(), Nan::New<FunctionTemplate>(Bezier)->GetFunction());
    exports->Set(Nan::New("LeastSquares").ToLocalChecked(), Nan::New<FunctionTemplate>(LeastSquares)->GetFunction());
    exports->Set(Nan::New("BayesTheorem").ToLocalChecked(), Nan::New<FunctionTemplate>(BayesTheorem)->GetFunction());
    exports->Set(Nan::New("DoubleBayesTheorem").ToLocalChecked(), Nan::New<FunctionTemplate>(DoubleBayesTheorem)->GetFunction());

    // From md5.cc
    exports->Set(Nan::New("MD5").ToLocalChecked(), Nan::New<FunctionTemplate>(MD5)->GetFunction());

    // From smart.cc
    exports->Set(Nan::New("Similar").ToLocalChecked(), Nan::New<FunctionTemplate>(Similar)->GetFunction());
}

NODE_MODULE(dorimt, Init);