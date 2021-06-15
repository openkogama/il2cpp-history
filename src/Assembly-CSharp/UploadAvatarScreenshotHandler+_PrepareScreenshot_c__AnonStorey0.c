
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler+<PrepareScreenshot>c__AnonStorey0::
     UploadAvatarScreenshotHandler_PrepareScreenshot_c_AnonStorey0___m__0
               (UploadAvatarScreenshotHandler_PrepareScreenshot_c_AnonStorey0 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,(this->fields).popup,5,0,0x20)
    ;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

