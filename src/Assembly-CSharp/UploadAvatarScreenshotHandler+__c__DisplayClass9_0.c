
/* Void <PrepareScreenshot>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler+<>c__DisplayClass9_0::
     UploadAvatarScreenshotHandler_c_DisplayClass9_0__PrepareScreenshot_b__0
               (UploadAvatarScreenshotHandler_c_DisplayClass9_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x20;
    puStack_2 = (undefined *)0x0;
    uStack_3 = 5;
    func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,(this->fields).popup);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

