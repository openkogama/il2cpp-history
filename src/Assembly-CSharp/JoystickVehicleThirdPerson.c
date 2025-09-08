
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
  (this->fields).m_HorizontalVirtualAxis = pCVar2;
  func_?(&(this->fields).m_HorizontalVirtualAxis,pCVar2);
  pSVar1 = (this->fields).verticalAxisName;
  pCVar2 = (CrossPlatformInputManager_VirtualAxis *)
           func_?(
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                          );
  UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
  CrossPlatformInputManager_VirtualAxis__ctor(pCVar2,pSVar1,(MethodInfo *)0x0);
  (this->fields).m_VerticalVirtualAxis = pCVar2;
  func_?(&(this->fields).m_VerticalVirtualAxis,pCVar2);
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
  this_00 = this;
  uVar1 = (this->fields).startPos.x;
  uVar2 = (this->fields).startPos.y;
  fVar3 = (this->fields).startPos.z;
  pJVar4 = (JoystickVehicleThirdPerson *)(value.x - (float)uVar1);
  fVar5 = value.y - (float)uVar2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  iVar6 = (this->fields).baseMovementRangeX;
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  value.y = VVar7.x;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  iVar8 = (this->fields).baseMovementRangeX;
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  this = (JoystickVehicleThirdPerson *)
         ((uint)((float)iVar6 * value.y) ^
         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  pJVar9 = (JoystickVehicleThirdPerson *)((float)iVar8 * VVar7.x);
  if (((float)this <= (float)pJVar4) && (this = pJVar4, (float)pJVar9 < (float)pJVar4)) {
    this = pJVar9;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  iVar6 = (this_00->fields).baseMovementRangeY;
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  value.y = VVar7.x;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  iVar8 = (this_00->fields).baseMovementRangeY;
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStack_10 = (float)((uint)((float)iVar6 * value.y) ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fVar11 = (float)iVar8 * VVar7.x;
  if ((fStack_10 <= fVar5) && (fStack_10 = fVar5, fVar11 < fVar5)) {
    fStack_10 = fVar11;
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0);
  uVar12 = (this_00->fields).startPos.x;
  uVar13 = (this_00->fields).startPos.y;
  if (this_01 != (Transform *)0x0) {
    value_00.y = (float)uVar13 + fStack_10;
    value_00.x = (float)uVar12 + (float)this;
    value_00.z = (this_00->fields).startPos.z + (value.z - fVar3);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_01,value_00,(MethodInfo *)0x0);
    value.z = 1.0;
    fStack_14 = 1.0;
    if ((float)this < 0.0) {
      value.z = -1.0;
    }
    if (fStack_10 < 0.0) {
      fStack_14 = -1.0;
    }
    pAVar15 = (this_00->fields).deltaMovementModifierX;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    iVar6 = (this_00->fields).baseMovementRangeX;
    if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    if (pAVar15 != (AnimationCurve *)0x0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar15,(float)((uint)((float)this / ((float)iVar6 * VVar7.x)) &
                                        _UNK_?),(MethodInfo *)0x0);
      bVar16 = cRam_? == '\0';
      pAVar15 = (this_00->fields).deltaMovementModifierY;
      (this_00->fields).desiredDeltaX = fVar3 * value.z;
      if (bVar16) {
        func_?();
        cRam_? = '\x01';
      }
      iVar6 = (this_00->fields).baseMovementRangeY;
      if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
      if (pAVar15 != (AnimationCurve *)0x0) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar15,(float)((uint)(3.9793197e-29 / ((float)iVar6 * VVar7.x)) &
                                          _UNK_?),(MethodInfo *)0x0);
        fVar3 = (this_00->fields).desiredDeltaX;
        pCVar17 = (this_00->fields).m_HorizontalVirtualAxis;
        (this_00->fields).currentDeltaX = fVar3;
        if (pCVar17 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
          (pCVar17->fields).m_Value = fVar3;
          pCVar17 = (this_00->fields).m_VerticalVirtualAxis;
          if (pCVar17 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
            (pCVar17->fields).m_Value = fVar5 * fStack_14;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  (this->fields).baseMovementRangeX = 0x28;
  (this->fields).baseMovementRangeY = 0x28;
  (this->fields).horizontalAxisName = StringLiteral_Horizontal;
  func_?(&(this->fields).horizontalAxisName,StringLiteral_Horizontal);
  (this->fields).verticalAxisName = StringLiteral_Vertical;
  func_?(&(this->fields).verticalAxisName,StringLiteral_Vertical);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_MovementRangeX() */

float Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_get_MovementRangeX
                (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).baseMovementRangeX;
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  return (float)iVar1 * VVar2.x;
}


/* Single get_MovementRangeY() */

float Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_get_MovementRangeY
                (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).baseMovementRangeY;
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  return (float)iVar1 * VVar2.x;
}

