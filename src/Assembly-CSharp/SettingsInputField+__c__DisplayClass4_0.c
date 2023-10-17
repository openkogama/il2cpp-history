
/* Void <ValueChanged>b__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsInputField+<>c__DisplayClass4_0::
     SettingsInputField_c_DisplayClass4_0__ValueChanged_b__0
               (SettingsInputField_c_DisplayClass4_0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pSStack_1 = (String *)&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged;
    func_?();
    cRam_? = '\x01';
  }
  pSVar2 = (this->fields).__4__this;
  if ((pSVar2 != (SettingsInputField *)0x0) && (handler != (IHandleSettingChanged *)0x0)) {
    pSStack_1 = (this->fields).value;
    pSStack_3 = (pSVar2->fields).key;
    pIStack_4 = handler;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    return;
  }
  pSStack_1 = (String *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

