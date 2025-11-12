
/* Void ApplyValue() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[UnityEngine::Color]::
     ThemeAttribute_1_UnityEngine_Color__ApplyValue
               (ThemeAttribute_1_UnityEngine_Color_ *this,MethodInfo *method)

{
  fStack_1 = (this->fields).value.r;
  fStack_2 = (this->fields).value.g;
  fStack_3 = (this->fields).value.b;
  fStack_4 = (this->fields).value.a;
  (*(this->klass->vtable).__unknown_2.methodPtr)
            (fStack_1,&fStack_1,(this->klass->vtable).__unknown_2.method);
  return;
}


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[UnityEngine::Color]::
     ThemeAttribute_1_UnityEngine_Color__Initialize
               (ThemeAttribute_1_UnityEngine_Color_ *this,SettingsWrapper *settings,String *key,
               int32_t groups,Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (this == (ThemeAttribute_1_UnityEngine_Color_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ThemeAttribute::ThemeAttribute_Initialize
            ((ThemeAttribute *)this,settings,key,groups,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).themeCallback = onChange;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).themeCallback >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Color get_Value() */

Color * Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[UnityEngine::Color]::
        ThemeAttribute_1_UnityEngine_Color__get_Value
                  (Color *__return_storage_ptr__,ThemeAttribute_1_UnityEngine_Color_ *this,
                  MethodInfo *method)

{
  fVar1 = (this->fields).value.g;
  fVar2 = (this->fields).value.b;
  fVar3 = (this->fields).value.a;
  __return_storage_ptr__->r = (this->fields).value.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}

