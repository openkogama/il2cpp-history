
/* Void <PostErrorPopup>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::PlayerSocialPopup+<>c__DisplayClass24_0::
     PlayerSocialPopup_c_DisplayClass24_0__PostErrorPopup_b__0
               (PlayerSocialPopup_c_DisplayClass24_0 *this,IModalPopupCreator *x,BaseEventData *y,
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

