
/* Void <PushCubeEditCubeTutorialTools>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SetupCubeModelTutorialUI+<>c__DisplayClass4_0::
     SetupCubeModelTutorialUI_c_DisplayClass4_0__PushCubeEditCubeTutorialTools_b__1
               (SetupCubeModelTutorialUI_c_DisplayClass4_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cubeModelTutorialController;
  if (this_00 != (DesktopCubeModelingControllerCubeTutorial *)0x0) {
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

