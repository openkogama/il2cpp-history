
/* Void <ValueChanged>b__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsSlider+<>c__DisplayClass8_0::
     SettingsSlider_c_DisplayClass8_0__ValueChanged_b__0
               (SettingsSlider_c_DisplayClass8_0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).__4__this;
  if (pSVar1 != (SettingsSlider *)0x0) {
    this = (SettingsSlider_c_DisplayClass8_0 *)(this->fields).value;
    pSVar2 = (pSVar1->fields).key;
    uVar3 = func_?(TypeInfo__System__Single,&this);
    if (handler != (IHandleSettingChanged *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,handler,pSVar2,
                      uVar3);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

