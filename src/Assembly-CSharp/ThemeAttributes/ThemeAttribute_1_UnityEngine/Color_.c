
/* Void ApplyValue() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[UnityEngine::Color]::
     ThemeAttribute_1_UnityEngine_Color__ApplyValue
               (ThemeAttribute_1_UnityEngine_Color_ *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).__unknown_2.method)
            (this,(this->fields).value.r,(this->fields).value.g,(this->fields).value.b,
             (this->fields).value.a,this->klass[1]._0.image);
  return;
}


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[UnityEngine::Color]::
     ThemeAttribute_1_UnityEngine_Color__Initialize
               (ThemeAttribute_1_UnityEngine_Color_ *this,SettingsWrapper *settings,String *key,
               int32_t groups,Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (this != (ThemeAttribute_1_UnityEngine_Color_ *)0x0) {
    ThemeAttribute::ThemeAttribute_Initialize
              ((ThemeAttribute *)this,settings,key,groups,(MethodInfo *)0x0);
    (this->fields).themeCallback = onChange;
    func_?(&(this->fields).themeCallback,onChange);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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

