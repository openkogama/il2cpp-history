
/* Void <OnAddCubeModelPressed>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::CreateNewCubeModel+<>c__DisplayClass3_0::
     CreateNewCubeModel_c_DisplayClass3_0__OnAddCubeModelPressed_b__1
               (CreateNewCubeModel_c_DisplayClass3_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (CubeModelPopup *)0x0) {
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

