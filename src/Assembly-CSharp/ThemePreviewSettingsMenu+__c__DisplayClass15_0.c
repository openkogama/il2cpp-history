
/* Void <DisplayInsufficientGoldNotification>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c__DisplayClass15_0::
     ThemePreviewSettingsMenu_c_DisplayClass15_0__DisplayInsufficientGoldNotification_b__0
               (ThemePreviewSettingsMenu_c_DisplayClass15_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,(this->fields).msg,
                  StringLiteral_Error);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

