
/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::JumpTouchForwardingButton::JumpTouchForwardingButton_OnDrag
               (JumpTouchForwardingButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (((this->fields).touchPadEnabled != 0) || ((this->fields).initialized == 0)) {
    return;
  }
  if (eventData != (PointerEventData *)0x0) {
    fStack_1 = (eventData->fields)._position_k__BackingField.x - (this->fields).startPos.x;
    fStack_2 = (eventData->fields)._position_k__BackingField.y - (this->fields).startPos.y;
    fVar3 = (float10)func_?(&fStack_1,0);
    VVar4 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    fStack_1 = VVar4.x;
    if ((float)fVar3 <= fStack_1 * _UNK_?) {
      return;
    }
    uVar5 = (uint)((this->fields).horizontalEnabled != 0);
    pTVar6 = (this->fields).touchPadAbsolute;
    if (pTVar6 != (TouchPadAbsolute *)0x0) {
      uVar7 = uVar5 | 2;
      if ((this->fields).verticalEnabled == 0) {
        uVar7 = uVar5;
      }
      (pTVar6->fields).state = uVar7;
      pTVar6 = (this->fields).touchPadAbsolute;
      if (pTVar6 != (TouchPadAbsolute *)0x0) {
        UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::TouchPadAbsolute_OnPointerDown
                  (pTVar6,eventData,(MethodInfo *)0x0);
        (this->fields).touchPadEnabled = 1;
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::JumpTouchForwardingButton::JumpTouchForwardingButton_OnPointerDown
               (JumpTouchForwardingButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData != (PointerEventData *)0x0) {
    fVar1 = (eventData->fields)._position_k__BackingField.y;
    (this->fields).startPos.x = (eventData->fields)._position_k__BackingField.x;
    (this->fields).startPos.y = fVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::JumpTouchForwardingButton::JumpTouchForwardingButton_OnPointerUp
               (JumpTouchForwardingButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).initialized != 0) {
    this_00 = (this->fields).touchPadAbsolute;
    if (this_00 == (TouchPadAbsolute *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::TouchPadAbsolute_OnPointerUp
              (this_00,eventData,(MethodInfo *)0x0);
    (this->fields).touchPadEnabled = 0;
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::JumpTouchForwardingButton::JumpTouchForwardingButton_Start
               (JumpTouchForwardingButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).touchPadAbsolute;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  (this->fields).initialized = bVar1;
  return;
}


/* JumpTouchForwardingButton() */

void Assembly-CSharp.dll::JumpTouchForwardingButton::JumpTouchForwardingButton__ctor
               (JumpTouchForwardingButton *this,MethodInfo *method)

{
  (this->fields).horizontalEnabled = 1;
  (this->fields).verticalEnabled = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Single get_DeadZone() */

float Assembly-CSharp.dll::JumpTouchForwardingButton::JumpTouchForwardingButton_get_DeadZone
                (JumpTouchForwardingButton *this,MethodInfo *method)

{
  VVar1 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  return VVar1.x * _UNK_?;
}

