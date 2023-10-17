
/* Void <MVNetworGame_ScreenshotUploadedHandler>b__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c__DisplayClass43_0::
     AvatarEditModeBodyController_c_DisplayClass43_0__MVNetworGame_ScreenshotUploadedHandler_b__2
               (AvatarEditModeBodyController_c_DisplayClass43_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (NotificationPopup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIStack_1 = x;
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack);
      return;
    }
  }
  uVar2 = func_?(&pIStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

