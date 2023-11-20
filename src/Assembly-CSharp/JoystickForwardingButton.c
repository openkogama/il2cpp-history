
/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::JoystickForwardingButton::JoystickForwardingButton_OnDrag
               (JoystickForwardingButton *this,PointerEventData *eventData,MethodInfo *method)

{
  fVar1 = (this->fields).deadZoneBase;
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fVar1 = VStack_3.x * fVar1;
  VStack_3 = VVar2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  fVar4 = (float)((uint)fVar1 & _UNK_?);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar6 = fVar4 * _UNK_?;
  if (fVar4 * _UNK_? <= fVar5) {
    fVar6 = fVar5;
  }
  if (((float)((uint)(0.0 - fVar1) & _UNK_?) < fVar6) || ((this->fields).isDragging != 0)) {
    pJVar7 = (this->fields).joystickBase;
    if (pJVar7 != (JoystickBase *)0x0) {
      (*(code *)(pJVar7->klass->vtable).__unknown.method)
                (pJVar7,eventData,(pJVar7->klass->vtable).__unknown_1.methodPtr);
      return;
    }
  }
  else if (eventData != (PointerEventData *)0x0) {
    VStack_3.y = (eventData->fields)._position_k__BackingField.y - (this->fields).startPosition.y;
    VStack_3.x = (eventData->fields)._position_k__BackingField.x - (this->fields).startPosition.x;
    fVar8 = (float10)func_?(&VStack_3,0);
    fVar1 = (this->fields).deadZoneBase;
    VStack_3.y = (float)fVar8;
    VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    if (VVar2.x * fVar1 <= VStack_3.y) {
      pJVar7 = (this->fields).joystickBase;
      (this->fields).isDragging = 1;
      if (pJVar7 == (JoystickBase *)0x0) goto code_?;
      (*(code *)(pJVar7->klass->vtable).__unknown_1.method)
                (pJVar7,eventData,(pJVar7->klass->vtable).__unknown_2.methodPtr);
    }
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::JoystickForwardingButton::JoystickForwardingButton_OnPointerDown
               (JoystickForwardingButton *this,PointerEventData *eventData,MethodInfo *method)

{
  fVar1 = (this->fields).deadZoneBase;
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fVar1 = VVar2.x * fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  fVar3 = (float)((uint)fVar1 & _UNK_?);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar5 = fVar3 * _UNK_?;
  if (fVar3 * _UNK_? <= fVar4) {
    fVar5 = fVar4;
  }
  if ((float)((uint)(0.0 - fVar1) & _UNK_?) < fVar5) {
    pJVar6 = (this->fields).joystickBase;
    if (pJVar6 != (JoystickBase *)0x0) {
      (*(code *)(pJVar6->klass->vtable).__unknown_1.method)
                (pJVar6,eventData,(pJVar6->klass->vtable).__unknown_2.methodPtr);
      return;
    }
  }
  else if (eventData != (PointerEventData *)0x0) {
    fVar1 = (eventData->fields)._position_k__BackingField.y;
    (this->fields).startPosition.x = (eventData->fields)._position_k__BackingField.x;
    (this->fields).startPosition.y = fVar1;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::JoystickForwardingButton::JoystickForwardingButton_OnPointerUp
               (JoystickForwardingButton *this,PointerEventData *eventData,MethodInfo *method)

{
  pJVar1 = (this->fields).joystickBase;
  if (pJVar1 != (JoystickBase *)0x0) {
    (*(code *)(pJVar1->klass->vtable).__unknown_2.method)
              (pJVar1,eventData,pJVar1->klass[1]._0.image);
    (this->fields).isDragging = 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JoystickForwardingButton() */

void Assembly-CSharp.dll::JoystickForwardingButton::JoystickForwardingButton__ctor
               (JoystickForwardingButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields).startPosition.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields).startPosition.y = fVar1;
  (this->fields).deadZoneBase = 10.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Single get_DeadZone() */

float Assembly-CSharp.dll::JoystickForwardingButton::JoystickForwardingButton_get_DeadZone
                (JoystickForwardingButton *this,MethodInfo *method)

{
  fVar1 = (this->fields).deadZoneBase;
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  return VVar2.x * fVar1;
}

