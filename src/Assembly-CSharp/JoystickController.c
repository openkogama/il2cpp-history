
/* Void OnDisable() */

void Assembly-CSharp.dll::JoystickController::JoystickController_OnDisable
               (JoystickController *this,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::JoystickController::JoystickController_OnDrag
               (JoystickController *this,PointerEventData *eventData,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pJStack_2 = (this->fields).joystick;
  if (pJStack_2 != (JoystickBase *)0x0) {
    pIStack_1 = (pJStack_2->klass->vtable).__unknown_1.methodPtr;
    pPStack_3 = eventData;
    (*(code *)(pJStack_2->klass->vtable).__unknown.method)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::JoystickController::JoystickController_OnPointerDown
               (JoystickController *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,(this->fields).alphaOn,(MethodInfo *)0x0);
    pJVar1 = (this->fields).joystick;
    if (pJVar1 != (JoystickBase *)0x0) {
      (*(code *)(pJVar1->klass->vtable).__unknown_1.method)
                (pJVar1,eventData,(pJVar1->klass->vtable).__unknown_2.methodPtr);
      this_01 = (Transform *)(this->fields).startPosVisulization;
      if (eventData != (PointerEventData *)0x0) {
        if (this_01 != (Transform *)0x0) {
          value.z = 0.0;
          value.x = (eventData->fields)._position_k__BackingField.x;
          value.y = (eventData->fields)._position_k__BackingField.y;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_01,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::JoystickController::JoystickController_OnPointerUp
               (JoystickController *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    pJVar1 = (this->fields).joystick;
    if (pJVar1 != (JoystickBase *)0x0) {
      (*(code *)(pJVar1->klass->vtable).__unknown_2.method)(pJVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JoystickController() */

void Assembly-CSharp.dll::JoystickController::JoystickController__ctor
               (JoystickController *this,MethodInfo *method)

{
  (this->fields).alphaOn = 0.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

