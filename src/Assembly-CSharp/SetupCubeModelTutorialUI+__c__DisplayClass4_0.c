
/* Void <PushCubeEditCubeTutorialTools>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SetupCubeModelTutorialUI+<>c__DisplayClass4_0::
     SetupCubeModelTutorialUI_c_DisplayClass4_0__PushCubeEditCubeTutorialTools_b__1
               (SetupCubeModelTutorialUI_c_DisplayClass4_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cubeModelTutorialController;
  if (this_00 != (DesktopCubeModelingControllerCubeTutorial *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,8,
                      (this->fields).closeAction,1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

