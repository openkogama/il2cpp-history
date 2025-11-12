
/* Void <OnInactiveTierButtonPressed>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GameSetupMenu+<>c__DisplayClass15_0::
     GameSetupMenu_c_DisplayClass15_0__OnInactiveTierButtonPressed_b__0
               (GameSetupMenu_c_DisplayClass15_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

