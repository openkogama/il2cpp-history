
/* Void ApplyValue() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Single]::
     ThemeAttribute_1_System_Single__ApplyValue
               (ThemeAttribute_1_System_Single_ *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).__unknown_2.method)
            (this,(this->fields).value,this->klass[1]._0.image);
  return;
}


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[Single]) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Single]::
     ThemeAttribute_1_System_Single__Initialize
               (ThemeAttribute_1_System_Single_ *this,SettingsWrapper *settings,String *key,
               int32_t groups,Action_1_Single_ *onChange,MethodInfo *method)

{
  if (this != (ThemeAttribute_1_System_Single_ *)0x0) {
    ThemeAttribute::ThemeAttribute_Initialize
              ((ThemeAttribute *)this,settings,key,groups,(MethodInfo *)0x0);
    ppAVar1 = &(this->fields).themeCallback;
    *ppAVar1 = onChange;
    func_?(ppAVar1,onChange);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Single]::
      ThemeAttribute_1_System_Single__get_Value
                (ThemeAttribute_1_System_Single_ *this,MethodInfo *method)

{
  return (this->fields).value;
}

