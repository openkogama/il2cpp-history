
/* Void Awake() */

void Assembly-CSharp.dll::Joystick::Joystick_Awake(Joystick *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UIElipsoidHelper);
    cRam_? = '\x01';
  }
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
  iVar3 = (this->fields).baseMovementRangeX;
  VVar4 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  iVar5 = (this->fields).baseMovementRangeY;
  VVar6 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fVar7 = VVar6.x;
  this_00 = (UIElipsoidHelper *)func_?(TypeInfo__UIElipsoidHelper);
  UIElipsoidHelper::UIElipsoidHelper__ctor
            (this_00,(float)iVar3 * VVar4.x,(float)iVar5 * fVar7,(MethodInfo *)0x0);
  (this->fields).elipsoidHelper = this_00;
  func_?(&(this->fields).elipsoidHelper,this_00);
  return;
}


/* Void CreateVirtualAxes() */

void Assembly-CSharp.dll::Joystick::Joystick_CreateVirtualAxes(Joystick *this,MethodInfo *method)

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

void Assembly-CSharp.dll::Joystick::Joystick_OnDisable(Joystick *this,MethodInfo *method)

{
  (this->fields).dragStart = 0;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,(this->fields).startPos,(MethodInfo *)0x0);
    fStack1 = (this->fields).startPos.z;
    Joystick_UpdateVirtualAxes(this,(this->fields).startPos,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::Joystick::Joystick_OnDrag
               (Joystick *this,PointerEventData *data,MethodInfo *method)

{
  if (data != (PointerEventData *)0x0) {
    value.z = 0.0;
    value.x = (data->fields)._position_k__BackingField.x;
    value.y = (data->fields)._position_k__BackingField.y;
    Joystick_UpdateVirtualAxes(this,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::Joystick::Joystick_OnPointerDown
               (Joystick *this,PointerEventData *data,MethodInfo *method)

{
  (this->fields).dragStart = 1;
  if (data != (PointerEventData *)0x0) {
    fVar1 = (data->fields)._position_k__BackingField.y;
    (this->fields).startPos.x = (data->fields)._position_k__BackingField.x;
    (this->fields).startPos.y = fVar1;
    (this->fields).startPos.z = 0.0;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      value.z = 0.0;
      value.x = (data->fields)._position_k__BackingField.x;
      value.y = (data->fields)._position_k__BackingField.y;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value,(MethodInfo *)0x0);
      fVar1 = (data->fields)._position_k__BackingField.x;
      fVar2 = (data->fields)._position_k__BackingField.y;
      pJVar3 = (this->fields).joystickLockAxis;
      if ((pJVar3 != (JoystickLockAxis *)0x0) &&
         (this_00 = (pJVar3->fields).smoothTouchAxis, this_00 != (SmoothTouchAxis *)0x0)) {
        SmoothTouchAxis::SmoothTouchAxis_Reset(this_00,(MethodInfo *)0x0);
        (pJVar3->fields).prevPos.x = fVar1;
        (pJVar3->fields).prevPos.y = fVar2;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::Joystick::Joystick_OnPointerUp
               (Joystick *this,PointerEventData *data,MethodInfo *method)

{
  Joystick_Reset(this,(MethodInfo *)0x0);
  return;
}


/* Void RegisterAxes() */

void Assembly-CSharp.dll::Joystick::Joystick_RegisterAxes(Joystick *this,MethodInfo *method)

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

void Assembly-CSharp.dll::Joystick::Joystick_Reset(Joystick *this,MethodInfo *method)

{
  (this->fields).dragStart = 0;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,(this->fields).startPos,(MethodInfo *)0x0);
    fStack1 = (this->fields).startPos.z;
    Joystick_UpdateVirtualAxes(this,(this->fields).startPos,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Joystick::Joystick_Update(Joystick *this,MethodInfo *method)

{
  if (((this->fields).dragStart != 0) && ((this->fields).useSupressAxis != 0)) {
    this_00 = (this->fields).joystickLockAxis;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
      this_01 = (this->fields).elipsoidHelper;
      uVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        stack0xffffffdc = (float)&puStack_3;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
        uVar6 = pVVar2->x;
        uVar7 = pVVar2->y;
        uVar8 = (this->fields).startPos.x;
        uVar9 = (this->fields).startPos.y;
        puStack_3 = (undefined *)((float)uVar6 - (float)uVar8);
        stack0xffffffdc = (float)uVar7 - (float)uVar9;
        if (this_01 != (UIElipsoidHelper *)0x0) {
          uVar10 = 0;
          stack0xffffffdc = (float)&UNK_?;
          deltaDir.y = (float)uVar7 - (float)uVar9;
          deltaDir.x = (float)puStack_3;
          deltaDir.z = pVVar2->z - (this->fields).startPos.z;
          normalizedDistance =
               UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                         (this_01,deltaDir,(MethodInfo *)0x0);
          if (this_00 != (JoystickLockAxis *)0x0) {
            position.y = (float)uVar4;
            position.x = (float)uVar10;
            position.z = fVar5;
            JVar11 = JoystickLockAxis::JoystickLockAxis_UpdateLockToAxis
                              (this_00,position,normalizedDistance,(MethodInfo *)0x0);
            (this->fields).supressAxis = JVar11;
            return;
          }
        }
      }
    }
    func_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  return;
}


/* Void UpdateVirtualAxes(Vector3) */

void Assembly-CSharp.dll::Joystick::Joystick_UpdateVirtualAxes
               (Joystick *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).startPos.z;
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  iVar3 = (this->fields).baseMovementRangeY;
  fStack_4 = VVar2.y;
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fVar5 = (float)iVar3 * VVar2.x;
  if (fStack_6 == 0.0) goto code_?;
  fVar7 = *(float *)((int)fStack_6 + 0x88);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar8 = (float)((uint)fVar7 & _UNK_?);
  fVar9 = (float)((uint)((float)(int)fStack_10 * fStack_4) & _UNK_?);
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  fVar11 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar9 = fVar8 * _UNK_?;
  if (fVar8 * _UNK_? <= fVar11) {
    fVar9 = fVar11;
  }
  if (fVar9 <= (float)((uint)((float)(int)fStack_10 * fStack_4 - fVar7) & _UNK_?)) {
code_?:
    VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    iVar3 = (this->fields).baseMovementRangeY;
    fStack_12 = VVar2.y;
    VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    fStack_13 = VVar2.x;
    pUVar14 = (UIElipsoidHelper *)func_?();
    UIElipsoidHelper::UIElipsoidHelper__ctor
              (pUVar14,(float)(int)fStack_4 * fStack_12,(float)iVar3 * fStack_13,(MethodInfo *)0x0);
    (this->fields).elipsoidHelper = pUVar14;
    func_?();
  }
  else {
    fVar7 = *(float *)((int)fStack_6 + 0x8c);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar9 = (float)((uint)fVar5 & _UNK_?);
    fVar8 = (float)((uint)fVar7 & _UNK_?);
    if (fVar8 <= fVar9) {
      fVar8 = fVar9;
    }
    fVar11 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar9 = fVar8 * _UNK_?;
    if (fVar8 * _UNK_? <= fVar11) {
      fVar9 = fVar11;
    }
    if (fVar9 <= (float)((uint)(fVar5 - fVar7) & _UNK_?)) goto code_?;
  }
  pUVar14 = (this->fields).elipsoidHelper;
  if (pUVar14 != (UIElipsoidHelper *)0x0) {
    MStack_15.m00 = (pUVar14->fields).worldToElipsoidSpace.m00;
    MStack_15.m10 = (pUVar14->fields).worldToElipsoidSpace.m10;
    MStack_15.m20 = (pUVar14->fields).worldToElipsoidSpace.m20;
    MStack_15.m30 = (pUVar14->fields).worldToElipsoidSpace.m30;
    MStack_15.m01 = (pUVar14->fields).worldToElipsoidSpace.m01;
    MStack_15.m11 = (pUVar14->fields).worldToElipsoidSpace.m11;
    MStack_15.m21 = (pUVar14->fields).worldToElipsoidSpace.m21;
    MStack_15.m31 = (pUVar14->fields).worldToElipsoidSpace.m31;
    MStack_15.m02 = (pUVar14->fields).worldToElipsoidSpace.m02;
    MStack_15.m12 = (pUVar14->fields).worldToElipsoidSpace.m12;
    MStack_15.m22 = (pUVar14->fields).worldToElipsoidSpace.m22;
    MStack_15.m32 = (pUVar14->fields).worldToElipsoidSpace.m32;
    MStack_15.m03 = (pUVar14->fields).worldToElipsoidSpace.m03;
    MStack_15.m13 = (pUVar14->fields).worldToElipsoidSpace.m13;
    MStack_15.m23 = (pUVar14->fields).worldToElipsoidSpace.m23;
    MStack_15.m33 = (pUVar14->fields).worldToElipsoidSpace.m33;
    vector_00.y = fStack_16;
    vector_00.x = value.z - fVar1;
    vector_00.z = fStack_17;
    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                       (&VStack_19,&MStack_15,vector_00,(MethodInfo *)0x0);
    uVar20._0_4_ = pVVar18->x;
    uVar20._4_4_ = pVVar18->y;
    fVar1 = pVVar18->z;
    if (cRam_? == '\0') {
      fVar1 = in_stack_21;
      func_?();
      uVar20 = CONCAT44(in_stack_22,in_stack_23);
      cRam_? = '\x01';
    }
    fVar5 = in_stack_24 * in_stack_24 + in_stack_25 * in_stack_25 +
            in_stack_26 * in_stack_26;
    if (_UNK_? < fVar5) {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar27 = (double)fVar5;
      if (dVar27 < 0.0) {
        func_?();
      }
      else {
        dVar27 = SQRT(dVar27);
      }
      fVar5 = (float)dVar27;
      fVar1 = in_stack_26 / fVar5;
      in_stack_28 = in_stack_25 / fVar5;
      fStack_29 = in_stack_24 / fVar5;
      uVar20 = CONCAT44(fStack_29,in_stack_28);
    }
    vector.z = fVar1;
    vector.x = (float)(int)uVar20;
    vector.y = (float)(int)((ulonglong)uVar20 >> 0x20);
    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                       ((Vector3 *)&stack0xffffff44,(Matrix4x4 *)&stack0xffffff64,vector,
                        (MethodInfo *)0x0);
    fVar1 = pVVar18->z;
    fVar5 = fVar1;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    uVar30 = (this->fields).startPos.x;
    uVar31 = (this->fields).startPos.y;
    in_stack_28 = (float)uVar31 + in_stack_28;
    fVar7 = fStack_29 + (this->fields).startPos.z;
    if (this_01 != (Transform *)0x0) {
      value_00.y = in_stack_28;
      value_00.x = (float)uVar30 + fVar5;
      value_00.z = fVar7;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value_00,(MethodInfo *)0x0);
      pUVar14 = (this->fields).elipsoidHelper;
      if (pUVar14 != (UIElipsoidHelper *)0x0) {
        deltaDir.y = fVar7;
        deltaDir.x = in_stack_28;
        deltaDir.z = fVar1;
        fVar1 = UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                           (pUVar14,deltaDir,(MethodInfo *)0x0);
        this_00 = (this->fields).deltaMovementModifier;
        if (this_00 != (AnimationCurve *)0x0) {
          fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (this_00,fVar1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          dVar27 = (double)(VStack_19.x * VStack_19.x + 0.0 + 0.0);
          if (dVar27 < 0.0) {
            func_?();
          }
          else {
            dVar27 = SQRT(dVar27);
          }
          fVar5 = (float)dVar27;
          if (_UNK_? < fVar5) {
            uVar32 = CONCAT44(0.0 / fVar5,VStack_19.x / fVar5);
          }
          else {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar32._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
            uVar32._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
          }
          fStack_10 = (float)uVar32;
          fStack_33 = (float)((ulonglong)uVar32 >> 0x20);
          fStack_33 = fStack_33 * fVar1;
          if (((this->fields).supressAxis & 1) != 0) {
            fStack_33 = 0.0;
          }
          fVar5 = 0.0;
          if (((this->fields).supressAxis & 2) == 0) {
            fVar5 = fStack_10 * fVar1;
          }
          pCVar34 = (this->fields).m_HorizontalVirtualAxis;
          (this->fields).supressAxis = 0;
          if (pCVar34 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
            (pCVar34->fields).m_Value = fVar5;
            pCVar34 = (this->fields).m_VerticalVirtualAxis;
            if (pCVar34 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
              (pCVar34->fields).m_Value = fStack_33;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Joystick() */

void Assembly-CSharp.dll::Joystick::Joystick__ctor(Joystick *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__JoystickLockAxis);
    func_?(&StringLiteral_Vertical);
    func_?(&StringLiteral_Horizontal);
    cRam_? = '\x01';
  }
  (this->fields).baseMovementRangeX = 0x28;
  (this->fields).baseMovementRangeY = 0x28;
  value = (JoystickLockAxis *)func_?(TypeInfo__JoystickLockAxis);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SmoothTouchAxis);
    cRam_? = '\x01';
  }
  this_00 = (SmoothTouchAxis *)func_?(TypeInfo__SmoothTouchAxis);
  SmoothTouchAxis::SmoothTouchAxis__ctor(this_00,3,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(value->fields).smoothTouchAxis;
  (value->fields).smoothTouchAxis = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  (this->fields).joystickLockAxis = value;
  func_?(&(this->fields).joystickLockAxis,value);
  (this->fields).horizontalAxisName = StringLiteral_Horizontal;
  func_?(&(this->fields).horizontalAxisName,StringLiteral_Horizontal);
  (this->fields).verticalAxisName = StringLiteral_Vertical;
  func_?(&(this->fields).verticalAxisName,StringLiteral_Vertical);
  (this->fields).useSupressAxis = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_MovementRangeX() */

float Assembly-CSharp.dll::Joystick::Joystick_get_MovementRangeX(Joystick *this,MethodInfo *method)

{
  iVar1 = (this->fields).baseMovementRangeX;
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  return (float)iVar1 * VVar2.x;
}


/* Single get_MovementRangeY() */

float Assembly-CSharp.dll::Joystick::Joystick_get_MovementRangeY(Joystick *this,MethodInfo *method)

{
  iVar1 = (this->fields).baseMovementRangeY;
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  return (float)iVar1 * VVar2.x;
}

