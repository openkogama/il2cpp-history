
/* Void <CreatePopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIWithTimeout+<>c__DisplayClass17_0::
     AdUIWithTimeout_c_DisplayClass17_0__CreatePopup_b__0
               (AdUIWithTimeout_c_DisplayClass17_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    bVar1 = FUN_?(0,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    (this->fields).stackReady = bVar1;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

