
/* Void <Push>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsController+<>c__DisplayClass12_0::
     MaterialsController_c_DisplayClass12_0__Push_b__0
               (MaterialsController_c_DisplayClass12_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).__4__this;
  if ((pMVar1 != (MaterialsController *)0x0) &&
     (this_00 = (pMVar1->fields).desktopCubeModelingController,
     this_00 != (DesktopCubeModelingController *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

