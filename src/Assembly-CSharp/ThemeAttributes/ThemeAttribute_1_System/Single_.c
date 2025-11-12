
/* Void ApplyValue() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Single]::
     ThemeAttribute_1_System_Single__ApplyValue
               (ThemeAttribute_1_System_Single_ *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
  if (this == (ThemeAttribute_1_System_Single_ *)0x0) {
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


/* Single get_Value() */

float Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Single]::
      ThemeAttribute_1_System_Single__get_Value
                (ThemeAttribute_1_System_Single_ *this,MethodInfo *method)

{
  return (this->fields).value;
}

