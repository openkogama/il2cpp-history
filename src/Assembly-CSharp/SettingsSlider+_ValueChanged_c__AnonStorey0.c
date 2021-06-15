
/* Void <>m__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsSlider+<ValueChanged>c__AnonStorey0::
     SettingsSlider_ValueChanged_c_AnonStorey0___m__0
               (SettingsSlider_ValueChanged_c_AnonStorey0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._this;
  if (pSVar1 != (SettingsSlider *)0x0) {
    this = (SettingsSlider_ValueChanged_c_AnonStorey0 *)(this->fields).value;
    pSVar2 = (pSVar1->fields).key;
    uVar3 = func_?(TypeInfo__System__Single,&this);
    if (handler != (IHandleSettingChanged *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,handler,pSVar2,
                      uVar3);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

