
/* Void <>m__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsToggle+<ValueChanged>c__AnonStorey0::
     SettingsToggle_ValueChanged_c_AnonStorey0___m__0
               (SettingsToggle_ValueChanged_c_AnonStorey0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._this;
  if (pSVar1 != (SettingsToggle *)0x0) {
    pSVar2 = (pSVar1->fields).key;
    this = (SettingsToggle_ValueChanged_c_AnonStorey0 *)CONCAT13((this->fields).value,this._0_3_);
    uVar3 = func_?(TypeInfo__System__Boolean,(int)&this + 3);
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

