
/* Void <>m__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsInputField+<ValueChanged>c__AnonStorey0::
     SettingsInputField_ValueChanged_c_AnonStorey0___m__0
               (SettingsInputField_ValueChanged_c_AnonStorey0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._this;
  if ((pSVar1 != (SettingsInputField *)0x0) && (handler != (IHandleSettingChanged *)0x0)) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,handler,
                    (pSVar1->fields).key,(this->fields).value);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

