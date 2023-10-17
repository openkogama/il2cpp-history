
/* Void <OnScreenShotUploaded>b__6_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<>c::
     UploadGameScreenshotHandler_c__OnScreenShotUploaded_b__6_0
               (UploadGameScreenshotHandler_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnScreenShotUploaded>b__6_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<>c::
     UploadGameScreenshotHandler_c__OnScreenShotUploaded_b__6_1
               (UploadGameScreenshotHandler_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <UploadScreenshot>b__5_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<>c::
     UploadGameScreenshotHandler_c__UploadScreenshot_b__5_0
               (UploadGameScreenshotHandler_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IModalPopupCreator *)&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IModalPopupCreator *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* UploadGameScreenshotHandler+<>c() */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<>c::UploadGameScreenshotHandler_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UploadGameScreenshotHandler____c);
    cRam_? = '\x01';
  }
  value = (UploadGameScreenshotHandler_c *)
          func_?(TypeInfo__UploadGameScreenshotHandler____c);
  if (value != (UploadGameScreenshotHandler_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9 = value;
    func_?(TypeInfo__UploadGameScreenshotHandler____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

