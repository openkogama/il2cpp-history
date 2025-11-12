
/* Void <ValueChanged>b__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsSlider+<>c__DisplayClass8_0::
     SettingsSlider_c_DisplayClass8_0__ValueChanged_b__0
               (SettingsSlider_c_DisplayClass8_0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).__4__this;
  if (pSVar1 != (SettingsSlider *)0x0) {
    afStackX_8[0] = (this->fields).value;
    pSVar2 = (pSVar1->fields).key;
    uVar3 = FUN_?(uRam_?,afStackX_8);
    if (handler != (IHandleSettingChanged *)0x0) {
      FUN_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,handler,pSVar2,
                    uVar3);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

