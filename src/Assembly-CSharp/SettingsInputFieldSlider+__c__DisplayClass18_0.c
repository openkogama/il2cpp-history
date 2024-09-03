
/* Void <ValueChanged>b__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsInputFieldSlider+<>c__DisplayClass18_0::
     SettingsInputFieldSlider_c_DisplayClass18_0__ValueChanged_b__0
               (SettingsInputFieldSlider_c_DisplayClass18_0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).__4__this;
  if (pSVar1 != (SettingsInputFieldSlider *)0x0) {
    this = (SettingsInputFieldSlider_c_DisplayClass18_0 *)(this->fields).floatValue;
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

