#include "stdafx.h"

#include "V8Helpers.h"
#include "V8ResourceImpl.h"
#include "helpers/BindHelpers.h"

using namespace alt;

// clang-format off
extern V8Class v8Entity;
extern V8Class v8Ped("Ped", v8Entity, [](v8::Local<v8::FunctionTemplate> tpl)
{
    v8::Isolate* isolate = v8::Isolate::GetCurrent();

    V8Helpers::SetAccessor<IPed, uint32_t, &IPed::GetCurrentWeapon>(isolate, tpl, "currentWeapon");
    V8Helpers::SetAccessor<IPed, uint16_t, &IPed::GetHealth>(isolate, tpl, "health");
    V8Helpers::SetAccessor<IPed, uint16_t, &IPed::GetMaxHealth>(isolate, tpl, "maxHealth");
    V8Helpers::SetAccessor<IPed, uint16_t, &IPed::GetArmour>(isolate, tpl, "armour");
});
