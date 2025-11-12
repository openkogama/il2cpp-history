
/* Void <OnOptionsButtonPress>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesXpRewardInfo+<>c__DisplayClass12_0::
     GamePassesXpRewardInfo_c_DisplayClass12_0__OnOptionsButtonPress_b__0
               (GamePassesXpRewardInfo_c_DisplayClass12_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popUp;
  if (this_00 != (GamePassesXPRewardOption *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

