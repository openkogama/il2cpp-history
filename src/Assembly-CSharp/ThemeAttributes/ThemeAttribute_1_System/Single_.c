
/* Void ApplyValue() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Single]::
     ThemeAttribute_1_System_Single__ApplyValue
               (ThemeAttribute_1_System_Single_ *this,MethodInfo *method)

{
  (*(this->klass->vtable).__unknown_2.methodPtr)
            (this,(this->fields).value,(this->klass->vtable).__unknown_2.method);
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
    (this->fields).themeCallback = onChange;
    func_?(&(this->fields).themeCallback,onChange);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ThemeAttribute`1[System.Single]() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Single]::
     ThemeAttribute_1_System_Single___ctor(ThemeAttribute_1_System_Single_ *this,MethodInfo *method)

{
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Single]::
      ThemeAttribute_1_System_Single__get_Value
                (ThemeAttribute_1_System_Single_ *this,MethodInfo *method)

{
  return (this->fields).value;
}

