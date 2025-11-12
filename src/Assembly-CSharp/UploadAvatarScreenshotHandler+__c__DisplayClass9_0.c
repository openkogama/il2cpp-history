
/* Void <PrepareScreenshot>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler+<>c__DisplayClass9_0::
     UploadAvatarScreenshotHandler_c_DisplayClass9_0__PrepareScreenshot_b__0
               (UploadAvatarScreenshotHandler_c_DisplayClass9_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

