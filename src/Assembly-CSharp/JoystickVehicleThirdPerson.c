
/* Void CreateVirtualAxes() */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_CreateVirtualAxes
               (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).horizontalAxisName;
  pCVar2 = (CrossPlatformInputManager_VirtualAxis *)
           func_?(
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                          );
  UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
  CrossPlatformInputManager_VirtualAxis__ctor(pCVar2,pSVar1,(MethodInfo *)0x0);
  ppCVar3 = &(this->fields).m_HorizontalVirtualAxis;
  *ppCVar3 = pCVar2;
  func_?(ppCVar3,pCVar2);
  pSVar1 = (this->fields).verticalAxisName;
  pCVar2 = (CrossPlatformInputManager_VirtualAxis *)
           func_?(
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                          );
  UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
  CrossPlatformInputManager_VirtualAxis__ctor(pCVar2,pSVar1,(MethodInfo *)0x0);
  ppCVar3 = &(this->fields).m_VerticalVirtualAxis;
  *ppCVar3 = pCVar2;
  func_?(ppCVar3,pCVar2);
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_OnDisable
               (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,(this->fields).startPos,(MethodInfo *)0x0);
    fStack1 = (this->fields).startPos.z;
    (this->fields).currentDeltaX = 0.0;
    (this->fields).desiredDeltaX = 0.0;
    JoystickVehicleThirdPerson_UpdateVirtualAxes(this,(this->fields).startPos,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_OnDrag
               (JoystickVehicleThirdPerson *this,PointerEventData *data,MethodInfo *method)

{
  if (data != (PointerEventData *)0x0) {
    value.z = 0.0;
    value.x = (data->fields)._position_k__BackingField.x;
    value.y = (data->fields)._position_k__BackingField.y;
    JoystickVehicleThirdPerson_UpdateVirtualAxes(this,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_OnPointerDown
               (JoystickVehicleThirdPerson *this,PointerEventData *data,MethodInfo *method)

{
  if (data != (PointerEventData *)0x0) {
    fVar1 = (data->fields)._position_k__BackingField.y;
    (this->fields).startPos.x = (data->fields)._position_k__BackingField.x;
    (this->fields).startPos.y = fVar1;
    (this->fields).startPos.z = 0.0;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      value.z = 0.0;
      value.x = (data->fields)._position_k__BackingField.x;
      value.y = (data->fields)._position_k__BackingField.y;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_OnPointerUp
               (JoystickVehicleThirdPerson *this,PointerEventData *data,MethodInfo *method)

{
  JoystickVehicleThirdPerson_Reset(this,(MethodInfo *)0x0);
  return;
}


/* Void RegisterAxes() */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_RegisterAxes
               (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  axis = (this->fields).m_HorizontalVirtualAxis;
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
  CrossPlatformInputManager_RegisterVirtualAxis(axis,(MethodInfo *)0x0);
  UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
  CrossPlatformInputManager_RegisterVirtualAxis
            ((this->fields).m_VerticalVirtualAxis,(MethodInfo *)0x0);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_Reset
               (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,(this->fields).startPos,(MethodInfo *)0x0);
    fStack1 = (this->fields).startPos.z;
    (this->fields).currentDeltaX = 0.0;
    (this->fields).desiredDeltaX = 0.0;
    JoystickVehicleThirdPerson_UpdateVirtualAxes(this,(this->fields).startPos,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateVirtualAxes(Vector3) */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_UpdateVirtualAxes
               (JoystickVehicleThirdPerson *this,Vector3 value,MethodInfo *method)

{
  pJVar1 = this;
  uVar2 = (this->fields).startPos.x;
  uVar3 = (this->fields).startPos.y;
  fVar4 = value.x - (float)uVar2;
  fVar5 = value.y - (float)uVar3;
  fVar6 = value.z - (this->fields).startPos.z;
  iVar7 = (this->fields).baseMovementRangeX;
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  iVar9 = (this->fields).baseMovementRangeX;
  fVar10 = VVar8.x;
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  value.y = VVar8.x;
  fStack_11 = (float)((uint)((float)iVar7 * fVar10) ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fVar10 = (float)iVar9 * value.y;
  if ((fStack_11 <= fVar4) && (fStack_11 = fVar4, fVar10 < fVar4)) {
    fStack_11 = fVar10;
  }
  iVar7 = (this->fields).baseMovementRangeY;
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  iVar9 = (this->fields).baseMovementRangeY;
  fVar10 = VVar8.x;
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  value.y = VVar8.x;
  value.z = (float)((uint)((float)iVar7 * fVar10) ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fVar10 = (float)iVar9 * value.y;
  if ((value.z <= fVar5) && (value.z = fVar5, fVar10 < fVar5)) {
    value.z = fVar10;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  uVar12 = (this->fields).startPos.x;
  uVar13 = (this->fields).startPos.y;
  if (this_00 != (Transform *)0x0) {
    value_00.y = (float)uVar13 + value.z;
    value_00.x = (float)uVar12 + fStack_11;
    value_00.z = fVar6 + (this->fields).startPos.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value_00,(MethodInfo *)0x0);
    this = (JoystickVehicleThirdPerson *)0x3f800000;
    if (fStack_11 < 0.0) {
      this = (JoystickVehicleThirdPerson *)0xbf800000;
    }
    method_00 = (MethodInfo *)(pJVar1->fields).baseMovementRangeX;
    pAVar14 = (pJVar1->fields).deltaMovementModifierX;
    VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance(method_00);
    if (pAVar14 != (AnimationCurve *)0x0) {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar14,(float)((uint)(fStack_11 / ((float)(int)method_00 * VVar8.x)) &
                                        _UNK_?),(MethodInfo *)0x0);
      iVar7 = (pJVar1->fields).baseMovementRangeY;
      pAVar14 = (pJVar1->fields).deltaMovementModifierY;
      fVar5 = 0.0;
      (pJVar1->fields).desiredDeltaX = fVar6 * (float)this;
      VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
      if (pAVar14 != (AnimationCurve *)0x0) {
        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar14,(float)((uint)(value.z / ((float)iVar7 * VVar8.x)) &
                                          _UNK_?),(MethodInfo *)0x0);
        fVar6 = (pJVar1->fields).desiredDeltaX;
        pCVar15 = (pJVar1->fields).m_HorizontalVirtualAxis;
        (pJVar1->fields).currentDeltaX = fVar6;
        if (pCVar15 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
          (pCVar15->fields).m_Value = fVar6;
          pCVar15 = (pJVar1->fields).m_VerticalVirtualAxis;
          if (pCVar15 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
            (pCVar15->fields).m_Value = fVar10 * fVar5;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* JoystickVehicleThirdPerson() */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson__ctor
               (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Vertical);
    func_?(&StringLiteral_Horizontal);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).horizontalAxisName;
  (this->fields).baseMovementRangeX = 0x28;
  (this->fields).baseMovementRangeY = 0x28;
  *ppSVar1 = StringLiteral_Horizontal;
  func_?(ppSVar1,StringLiteral_Horizontal);
  ppSVar1 = &(this->fields).verticalAxisName;
  *ppSVar1 = StringLiteral_Vertical;
  func_?(ppSVar1,StringLiteral_Vertical);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_MovementRangeX() */

float Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_get_MovementRangeX
                (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  iVar1 = (this->fields).baseMovementRangeX;
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  return (float)iVar1 * VVar2.x;
}


/* Single get_MovementRangeY() */

float Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_get_MovementRangeY
                (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  iVar1 = (this->fields).baseMovementRangeY;
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  return (float)iVar1 * VVar2.x;
}

