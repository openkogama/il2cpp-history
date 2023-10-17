
/* Void <OnPublishPlanetFinished>b__9_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController+<>c::
     DesktopCubeModelingController_c__OnPublishPlanetFinished_b__9_0
               (DesktopCubeModelingController_c *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

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


/* Void <PublishCallback>b__8_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController+<>c::
     DesktopCubeModelingController_c__PublishCallback_b__8_0
               (DesktopCubeModelingController_c *this,IModalPopupCreator *x,BaseEventData *y,
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


/* Void <PublishCallback>b__8_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController+<>c::
     DesktopCubeModelingController_c__PublishCallback_b__8_2
               (DesktopCubeModelingController_c *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

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


/* Void <TakeScreenshot>b__10_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController+<>c::
     DesktopCubeModelingController_c__TakeScreenshot_b__10_0
               (DesktopCubeModelingController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Image_upload_is_disabled_in_stan);
    func_?(&StringLiteral_Error);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Image_upload_is_disabled_in_stan,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_Error;
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  uVar5 = (x->klass->_1).interface_offsets_count;
  if (uVar5 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        pVVar6 = &(x->klass->vtable).CreateErrorNotificationPopup +
                 x->klass->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,1);
code_?:
  (*pVVar6->methodPtr)(x,pSVar1,pSVar2,pVVar6->method);
  return;
}


/* DesktopCubeModelingController+<>c() */

void Assembly-CSharp.dll::DesktopCubeModelingController+<>c::DesktopCubeModelingController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopCubeModelingController____c);
    cRam_? = '\x01';
  }
  value = (DesktopCubeModelingController_c *)
          func_?(TypeInfo__DesktopCubeModelingController____c);
  if (value != (DesktopCubeModelingController_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__DesktopCubeModelingController____c->static_fields->__9 = value;
    func_?(TypeInfo__DesktopCubeModelingController____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

