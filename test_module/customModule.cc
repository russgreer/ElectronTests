// hello.cc
#include <node.h>
#include <nan.h>

#include <windows.h>
#include <shellapi.h>

namespace demo {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void RunProgram(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  
  
  // use shellexecute to start the XMRig.exe..
  CoInitializeEx(NULL, COINIT_APARTMENTTHREADED | COINIT_DISABLE_OLE1DDE);


  SHELLEXECUTEINFO sei = {0};
  
  sei.cbSize = sizeof(SHELLEXECUTEINFO);  
  sei.lpFile = "c:\\windows\\System32\\calc.exe";
  sei.nShow = SW_SHOWNORMAL;
  sei.lpVerb = "open";
  ShellExecuteEx(&sei);

  // NOTE: sei.hProcess  <--- holds the handle to the running process

  // end execute the .exe...

  std::string theString = "Testing!";
  
  args.GetReturnValue().Set(Nan::New(theString).ToLocalChecked());
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "RunProgram", RunProgram);
}

NODE_MODULE(customModule, init)

}  // namespace demo