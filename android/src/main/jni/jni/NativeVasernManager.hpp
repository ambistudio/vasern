// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from vasern.djinni

#pragma once

#include "VasernManager.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeVasernManager final : ::djinni::JniInterface<::vasern::VasernManager, NativeVasernManager> {
public:
    using CppType = std::shared_ptr<::vasern::VasernManager>;
    using CppOptType = std::shared_ptr<::vasern::VasernManager>;
    using JniType = jobject;

    using Boxed = NativeVasernManager;

    ~NativeVasernManager();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeVasernManager>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeVasernManager>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeVasernManager();
    friend ::djinni::JniClass<NativeVasernManager>;
    friend ::djinni::JniInterface<::vasern::VasernManager, NativeVasernManager>;

};

}  // namespace djinni_generated