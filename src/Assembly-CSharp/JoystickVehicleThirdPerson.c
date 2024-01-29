
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
  pCVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
  ;
  pCVar3 = (CrossPlatformInputManager_VirtualAxis *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pCVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar2);
  (pCVar3->fields)._name_k__BackingField = pSVar1;
  func_?(&pCVar3->fields,pSVar1);
  (pCVar3->fields)._matchWithInputManager_k__BackingField = 1;
  (this->fields).m_HorizontalVirtualAxis = pCVar3;
  func_?(&(this->fields).m_HorizontalVirtualAxis,pCVar3);
  pSVar1 = (this->fields).verticalAxisName;
  pCVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
  ;
  pCVar3 = (CrossPlatformInputManager_VirtualAxis *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pCVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar2);
  (pCVar3->fields)._name_k__BackingField = pSVar1;
  func_?(&pCVar3->fields,pSVar1);
  (pCVar3->fields)._matchWithInputManager_k__BackingField = 1;
  (this->fields).m_VerticalVirtualAxis = pCVar3;
  func_?(&(this->fields).m_VerticalVirtualAxis,pCVar3);
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
  uVar1 = (this->fields).startPos.x;
  uVar2 = (this->fields).startPos.y;
  fVar3 = (this->fields).startPos.z;
  fVar4 = value.x - (float)uVar1;
  fVar5 = value.y - (float)uVar2;
  iVar6 = (this->fields).baseMovementRangeX;
  VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  iVar8 = (this->fields).baseMovementRangeX;
  fVar9 = VVar7.x;
  VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStack_10 = (float)((uint)((float)iVar6 * fVar9) ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fVar9 = (float)iVar8 * VVar7.x;
  if ((fStack_10 <= fVar4) && (fStack_10 = fVar4, fVar9 < fVar4)) {
    fStack_10 = fVar9;
  }
  iVar6 = (this->fields).baseMovementRangeY;
  VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  iVar8 = (this->fields).baseMovementRangeY;
  VVar11 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStack_12 = (float)((uint)((float)iVar6 * VVar7.x) ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fVar4 = (float)iVar8 * VVar11.x;
  if ((fStack_12 <= fVar5) && (fStack_12 = fVar5, fVar4 < fVar5)) {
    fStack_12 = fVar4;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  uVar13 = (this->fields).startPos.x;
  uVar14 = (this->fields).startPos.y;
  if (this_00 != (Transform *)0x0) {
    value_00.y = (float)uVar14 + fStack_12;
    value_00.x = (float)uVar13 + fStack_10;
    value_00.z = (this->fields).startPos.z + (value.z - fVar3);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value_00,(MethodInfo *)0x0);
    iVar6 = (this->fields).baseMovementRangeX;
    pAVar15 = (this->fields).deltaMovementModifierX;
    VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    if (pAVar15 != (AnimationCurve *)0x0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar15,(float)((uint)(fStack_10 / ((float)iVar6 * VVar7.x)) &
                                        _UNK_?),(MethodInfo *)0x0);
      method_00 = (MethodInfo *)(this->fields).baseMovementRangeY;
      pAVar15 = (this->fields).deltaMovementModifierY;
      (this->fields).desiredDeltaX = fVar3 * 0.0;
      VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance(method_00);
      if (pAVar15 != (AnimationCurve *)0x0) {
        fVar4 = (float)((uint)(fStack_12 / ((float)(int)method_00 * VVar7.x)) & _UNK_?);
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar15,fVar4,(MethodInfo *)0x0);
        fVar3 = (this->fields).desiredDeltaX;
        pCVar16 = (this->fields).m_HorizontalVirtualAxis;
        (this->fields).currentDeltaX = fVar3;
        if (pCVar16 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
          (pCVar16->fields).m_Value = fVar3;
          pCVar16 = (this->fields).m_VerticalVirtualAxis;
          if (pCVar16 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
            (pCVar16->fields).m_Value = fVar5 * fVar4;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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

