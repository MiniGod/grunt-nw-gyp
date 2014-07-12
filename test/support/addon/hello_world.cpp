#include <node.h>

void Method(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Isolate* isolate = v8::Isolate::GetCurrent();
	v8::HandleScope scope(isolate);

	args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, "hello, world"));
}

void init(v8::Handle<v8::Object> exports) {
	NODE_SET_METHOD(exports, "helloWorld", Method);
}

NODE_MODULE(helloWorld, init)
