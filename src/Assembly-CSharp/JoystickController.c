
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


/* Void ScalePhysicalSize() */

void Assembly-CSharp.dll::JoystickController::JoystickController_ScalePhysicalSize
               (JoystickController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                   );
    func_?(&TypeInfo__ScaleToPhysicalSize);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ScaleToPhysicalSize);
  }
  fVar1 = ScaleToPhysicalSize::ScaleToPhysicalSize_get_DpiScale((MethodInfo *)0x0);
  this_00 = (this->fields).joystick;
  if (this_00 != (JoystickBase *)0x0) {
    pRVar2 = (RectTransform *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this_00,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                       );
    if (pRVar2 != (RectTransform *)0x0) {
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (pRVar2,(MethodInfo *)0x0);
      fStack_4 = VVar3.y;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar2,(Vector2)((ulonglong)(uint)(fStack_4 / fVar1) << 0x20),(MethodInfo *)0x0);
      pRVar2 = (this->fields).startPosVisulization;
      if (pRVar2 != (RectTransform *)0x0) {
        VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                          (pRVar2,(MethodInfo *)0x0);
        fStack_4 = VVar3.y;
        VVar3.y = fStack_4 / fVar1;
        VVar3.x = 0.0 / fVar1;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (pRVar2,VVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::JoystickController::JoystickController_Start
               (JoystickController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
          IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                    ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)0x0,in_stack_2);
  if (bVar1 != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__ScaleToPhysicalSize);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  ScaleToPhysicalSize::ScaleToPhysicalSize_get_DpiScale((MethodInfo *)0x0);
  this_00 = (this->fields).joystick;
  if ((this_00 != (JoystickBase *)0x0) &&
     (pRVar3 = (RectTransform *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)this_00,
                          UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                         ), pRVar3 != (RectTransform *)0x0)) {
    fVar4 = 0.0;
    puVar5 = &UNK_?;
    VVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                      (pRVar3,(MethodInfo *)0x0);
    fVar7 = 0.0;
    VVar6.y = VVar6.y / fVar4;
    VVar6.x = (float)puVar5 / fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar3,VVar6,(MethodInfo *)0x0);
    fVar4 = VVar6.x;
    pRVar3 = (this->fields).startPosVisulization;
    if (pRVar3 != (RectTransform *)0x0) {
      VVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (pRVar3,(MethodInfo *)0x0);
      value.y = VVar6.y / fVar7;
      value.x = fVar4 / fVar7;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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

