
/* Void <OpenUserManagement>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerElementState+<>c__DisplayClass9_1::
     PlayerElementState_c_DisplayClass9_1__OpenUserManagement_b__1
               (PlayerElementState_c_DisplayClass9_1 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ownerTools;
  if (this_00 != (OwnerToolController *)0x0) {
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

