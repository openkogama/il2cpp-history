
/* Void <ExecuteToggleState>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::FullscreenToggleExecute+<>c__DisplayClass3_0::
     FullscreenToggleExecute_c_DisplayClass3_0__ExecuteToggleState_b__0
               (FullscreenToggleExecute_c_DisplayClass3_0 *this,IModalPopupCreator *x,
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
  TM::TM__(StringLiteral_Error,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

