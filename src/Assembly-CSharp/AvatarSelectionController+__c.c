
/* Void <OpenAvatarShop>b__20_0(IActivateUIElement, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController+<>c::
     AvatarSelectionController_c__OpenAvatarShop_b__20_0
               (AvatarSelectionController_c *this,IActivateUIElement *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IActivateUIElement;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IActivateUIElement *)0x0) {
    ppIStack_1 = (IActivateUIElement__Class **)0x3;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IActivateUIElement;
    func_?(0);
    return;
  }
  ppIStack_1 = (IActivateUIElement__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <SellCurrentAvatar>b__17_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController+<>c::
     AvatarSelectionController_c__SellCurrentAvatar_b__17_0
               (AvatarSelectionController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_Error);
    func_?(&StringLiteral_You_cannot_sell_your_avatar_thro);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_You_cannot_sell_your_avatar_thro,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <SetStateToRoam>b__15_1(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController+<>c::
     AvatarSelectionController_c__SetStateToRoam_b__15_1
               (AvatarSelectionController_c *this,IEditStateCommands *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IEditStateCommands;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    ppIStack_1 = (IEditStateCommands__Class **)0x34;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__IEditStateCommands;
    func_?(0);
    return;
  }
  ppIStack_1 = (IEditStateCommands__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AvatarSelectionController+<>c() */

void Assembly-CSharp.dll::AvatarSelectionController+<>c::AvatarSelectionController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarSelectionController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarSelectionController____c;
  value = (AvatarSelectionController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AvatarSelectionController____c->static_fields->__9 = value;
  func_?(TypeInfo__AvatarSelectionController____c->static_fields,value);
  return;
}

