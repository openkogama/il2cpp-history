
/* Void <DisplayInsufficientLevelNotification>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c__DisplayClass14_0::
     ThemePreviewSettingsMenu_c_DisplayClass14_0__DisplayInsufficientLevelNotification_b__0
               (ThemePreviewSettingsMenu_c_DisplayClass14_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pSStack_1 = (String *)&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    pSStack_2 = (String *)&StringLiteral_Error;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pSStack_1 = StringLiteral_Error;
    pSStack_2 = (this->fields).msg;
    pIStack_3 = x;
    func_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  pSStack_1 = (String *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

