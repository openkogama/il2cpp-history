
/* Void <SetupButtons>b__4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::PlayerElementState+<>c__DisplayClass11_1::
     PlayerElementState_c_DisplayClass11_1__SetupButtons_b__4
               (PlayerElementState_c_DisplayClass11_1 *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

