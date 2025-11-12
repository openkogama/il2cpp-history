
/* Void <Update>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ClaimGoldRewardPopup+<>c__DisplayClass4_0::
     ClaimGoldRewardPopup_c_DisplayClass4_0__Update_b__0
               (ClaimGoldRewardPopup_c_DisplayClass4_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  if (this_00 != (ClaimGoldRewardPopup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      bVar1 = FUN_?(6);
      (this->fields).isBlocked = bVar1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

