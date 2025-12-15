
/* Void <DeleteWoid>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController+<>c__DisplayClass77_0::
     DesktopEditModeController_c_DisplayClass77_0__DeleteWoid_b__0
               (DesktopEditModeController_c_DisplayClass77_0 *this,IModalPopupCreator *x,
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
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                  (this->fields).errorText,StringLiteral_Error);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

