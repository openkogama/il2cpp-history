
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsController+<Push>c__AnonStorey0::
     MaterialsController_Push_c_AnonStorey0___m__0
               (MaterialsController_Push_c_AnonStorey0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._this;
  if ((pMVar1 != (MaterialsController *)0x0) &&
     (this_00 = (pMVar1->fields).desktopCubeModelingController,
     this_00 != (DesktopCubeModelingController *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar2,
                      (this->fields).pushOption,(this->fields).onPop,1);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

