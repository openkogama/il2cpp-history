
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::TouchForwardingButton::TouchForwardingButton_OnPointerDown
               (TouchForwardingButton *this,PointerEventData *eventData,MethodInfo *method)

{
  uVar1 = (uint)((this->fields).horizontalEnabled != 0);
  if ((this->fields).initialized == 0) {
    return;
  }
  pTVar2 = (this->fields).touchPadAbsolute;
  if (pTVar2 != (TouchPadAbsolute *)0x0) {
    uVar3 = uVar1 | 2;
    if ((this->fields).verticalEnabled == 0) {
      uVar3 = uVar1;
    }
    (pTVar2->fields).state = uVar3;
    pTVar2 = (this->fields).touchPadAbsolute;
    if (pTVar2 != (TouchPadAbsolute *)0x0) {
      if ((pTVar2->fields).dragging == 0) {
        bVar4 = cRam_? == '\0';
        (pTVar2->fields).dragging = 1;
        if (bVar4) {
          func_?(&
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                         );
          func_?(&::StringLiteral__);
          cRam_? = '\x01';
        }
        bVar5 = mscorlib.dll::System::String::String_op_Inequality
                          ((pTVar2->fields).onTouchButtonName,::StringLiteral__,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          name = (pTVar2->fields).onTouchButtonName;
          if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(
                           TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                           );
          }
          UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
          CrossPlatformInputManager_SetButtonDown(name,(MethodInfo *)0x0);
        }
        if (eventData == (PointerEventData *)0x0) {
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pTVar2->fields).fingerId = (eventData->fields)._pointerId_k__BackingField;
        fVar7 = (eventData->fields)._position_k__BackingField.y;
        (pTVar2->fields).previousInputPosition.x = (eventData->fields)._position_k__BackingField.x;
        (pTVar2->fields).previousInputPosition.y = fVar7;
      }
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::TouchForwardingButton::TouchForwardingButton_OnPointerUp
               (TouchForwardingButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).initialized == 0) {
    return;
  }
  pTVar1 = (this->fields).touchPadAbsolute;
  if (pTVar1 != (TouchPadAbsolute *)0x0) {
    bVar2 = cRam_? == '\0';
    (pTVar1->fields).state = 3;
    (pTVar1->fields).dragging = 0;
    if (bVar2) {
      func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager)
      ;
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    bVar3 = mscorlib.dll::System::String::String_op_Inequality
                      ((pTVar1->fields).onTouchButtonName,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      name = (pTVar1->fields).onTouchButtonName;
      if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
      CrossPlatformInputManager_SetButtonUp(name,(MethodInfo *)0x0);
    }
    (pTVar1->fields).fingerId = -1;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    if (((pTVar1->fields).state & 1) != 0) {
      pCVar6 = (pTVar1->fields).horizontalVirtualAxis;
      if (pCVar6 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar6->fields).m_Value = (float)uVar4;
    }
    if (((pTVar1->fields).state & 2) != 0) {
      pCVar6 = (pTVar1->fields).verticalVirtualAxis;
      if (pCVar6 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar6->fields).m_Value = (float)uVar5;
    }
    return;
  }
code_?:
  uVar7 = func_?(&stack0xfffffff0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TouchForwardingButton::TouchForwardingButton_Start
               (TouchForwardingButton *this,MethodInfo *method)

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


/* TouchForwardingButton() */

void Assembly-CSharp.dll::TouchForwardingButton::TouchForwardingButton__ctor
               (TouchForwardingButton *this,MethodInfo *method)

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

