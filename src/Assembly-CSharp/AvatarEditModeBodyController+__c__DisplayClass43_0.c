
/* Void <MVNetworGame_ScreenshotUploadedHandler>b__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c__DisplayClass43_0::
     AvatarEditModeBodyController_c_DisplayClass43_0__MVNetworGame_ScreenshotUploadedHandler_b__2
               (AvatarEditModeBodyController_c_DisplayClass43_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (NotificationPopup *)0x0) {
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

