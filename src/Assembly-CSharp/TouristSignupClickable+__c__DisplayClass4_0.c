
/* Void <OnClick>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TouristSignupClickable+<>c__DisplayClass4_0::
     TouristSignupClickable_c_DisplayClass4_0__OnClick_b__0
               (TouristSignupClickable_c_DisplayClass4_0 *this,IUIStack *x,BaseEventData *y,
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

