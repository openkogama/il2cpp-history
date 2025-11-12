
/* Void <Initialize>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeleteWoidController+<>c__DisplayClass2_0::
     DeleteWoidController_c_DisplayClass2_0__Initialize_b__0
               (DeleteWoidController_c_DisplayClass2_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).pickHelper;
  if (this_00 != (PickHelper *)0x0) {
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

