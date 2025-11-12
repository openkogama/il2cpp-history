
/* Void <ShowEditPopup>b__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BoostEditMenuItem+<>c__DisplayClass14_2::
     BoostEditMenuItem_c_DisplayClass14_2__ShowEditPopup_b__2
               (BoostEditMenuItem_c_DisplayClass14_2 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).boostEditPopup;
  if (this_00 != (BoostEditPopup *)0x0) {
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

