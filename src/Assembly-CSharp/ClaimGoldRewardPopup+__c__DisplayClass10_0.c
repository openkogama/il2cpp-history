
/* Void <ClaimGold>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ClaimGoldRewardPopup+<>c__DisplayClass10_0::
     ClaimGoldRewardPopup_c_DisplayClass10_0__ClaimGold_b__1
               (ClaimGoldRewardPopup_c_DisplayClass10_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).goldRewardUnlockedPopup != (GameObject *)0x0) && (x != (IUIStack *)0x0)) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

