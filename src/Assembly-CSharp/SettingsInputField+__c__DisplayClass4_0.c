
/* Void <ValueChanged>b__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsInputField+<>c__DisplayClass4_0::
     SettingsInputField_c_DisplayClass4_0__ValueChanged_b__0
               (SettingsInputField_c_DisplayClass4_0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).__4__this;
  if ((pSVar1 != (SettingsInputField *)0x0) && (handler != (IHandleSettingChanged *)0x0)) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,handler,
                  (pSVar1->fields).key,(this->fields).value);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

