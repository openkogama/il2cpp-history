
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::
     ThemePreviewSettingsMenu+<DisplayInsufficientLevelNotification>c__AnonStorey1::
     ThemePreviewSettingsMenu_DisplayInsufficientLevelNotification_c_AnonStorey1___m__0
               (ThemePreviewSettingsMenu_DisplayInsufficientLevelNotification_c_AnonStorey1 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,(this->fields).msg,
                    StringLiteral_Error);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

