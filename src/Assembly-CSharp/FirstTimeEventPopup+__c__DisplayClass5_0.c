
/* Void <PopSelf>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeEventPopup+<>c__DisplayClass5_0::
     FirstTimeEventPopup_c_DisplayClass5_0__PopSelf_b__0
               (FirstTimeEventPopup_c_DisplayClass5_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    cVar1 = FUN_?(5);
    if (cVar1 != '\0') {
      FUN_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

