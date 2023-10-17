
/* Void <Push>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsController+<>c__DisplayClass12_0::
     MaterialsController_c_DisplayClass12_0__Push_b__0
               (MaterialsController_c_DisplayClass12_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).__4__this;
  if ((pMVar1 != (MaterialsController *)0x0) &&
     (this_00 = (pMVar1->fields).desktopCubeModelingController,
     this_00 != (DesktopCubeModelingController *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar2,
                      (this->fields).pushOption,(this->fields).onPop,1);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

