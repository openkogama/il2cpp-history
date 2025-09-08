
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar3 = (this->fields).baseMovementRangeY;
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  VVar4 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  this_00 = (UIElipsoidHelper *)func_?();
  UIElipsoidHelper::UIElipsoidHelper__ctor(this_00,0.0,(float)iVar3 * VVar4.x,(MethodInfo *)0x0);
  (this->fields).elipsoidHelper = this_00;
  func_?();
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
  uVar1 = (this->fields).startPos.x;
  uVar2 = (this->fields).startPos.y;
  fStack_3 = value.z - (this->fields).startPos.z;
  fStack_4 = value.y - (float)uVar2;
  VStack_5.z = value.x - (float)uVar1;
  pUVar6 = (this->fields).elipsoidHelper;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStack_8 = VVar7.x;
  VStack_5.x = VVar7.y;
  fStack_8 = (float)(int)in_stack_9 * fStack_8;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  VStack_5.x = VVar7.x;
  VStack_5.y = VVar7.y;
  VStack_5.x = (float)(int)fStack_8 * VStack_5.x;
  if (pUVar6 == (UIElipsoidHelper *)0x0) goto code_?;
  fVar10 = (pUVar6->fields).width;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar11 = (float)((uint)fVar10 & _UNK_?);
  if ((float)((uint)fVar10 & _UNK_?) <= (float)((uint)fStack_12 & _UNK_?)) {
    fVar11 = (float)((uint)fStack_12 & _UNK_?);
  }
  fVar13 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar14 = fVar11 * _UNK_?;
  if (fVar11 * _UNK_? <= fVar13) {
    fVar14 = fVar13;
  }
  if (fVar14 <= (float)((uint)(fStack_12 - fVar10) & _UNK_?)) {
code_?:
    Joystick_get_MovementRangeX(this,(MethodInfo *)0x0);
    fStack_3 = Joystick_get_MovementRangeY(this,(MethodInfo *)0x0);
    pUVar6 = (UIElipsoidHelper *)func_?();
    UIElipsoidHelper::UIElipsoidHelper__ctor(pUVar6,VStack_5.x,fStack_3,(MethodInfo *)0x0);
    (this->fields).elipsoidHelper = pUVar6;
    func_?();
  }
  else {
    fVar10 = (pUVar6->fields).height;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar11 = (float)((uint)fVar10 & _UNK_?);
    if (fVar11 <= (float)((uint)VStack_5.x & _UNK_?)) {
      fVar11 = (float)((uint)VStack_5.x & _UNK_?);
    }
    fVar13 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar14 = fVar11 * _UNK_?;
    if (fVar11 * _UNK_? <= fVar13) {
      fVar14 = fVar13;
    }
    if (fVar14 <= (float)((uint)(VStack_5.x - fVar10) & _UNK_?)) goto code_?;
  }
  pUVar6 = (this->fields).elipsoidHelper;
  if (pUVar6 != (UIElipsoidHelper *)0x0) {
    MStack_15.m00 = (pUVar6->fields).worldToElipsoidSpace.m00;
    MStack_15.m10 = (pUVar6->fields).worldToElipsoidSpace.m10;
    MStack_15.m20 = (pUVar6->fields).worldToElipsoidSpace.m20;
    MStack_15.m30 = (pUVar6->fields).worldToElipsoidSpace.m30;
    MStack_15.m01 = (pUVar6->fields).worldToElipsoidSpace.m01;
    MStack_15.m11 = (pUVar6->fields).worldToElipsoidSpace.m11;
    MStack_15.m21 = (pUVar6->fields).worldToElipsoidSpace.m21;
    MStack_15.m31 = (pUVar6->fields).worldToElipsoidSpace.m31;
    MStack_15.m02 = (pUVar6->fields).worldToElipsoidSpace.m02;
    MStack_15.m12 = (pUVar6->fields).worldToElipsoidSpace.m12;
    MStack_15.m22 = (pUVar6->fields).worldToElipsoidSpace.m22;
    MStack_15.m32 = (pUVar6->fields).worldToElipsoidSpace.m32;
    MStack_15.m03 = (pUVar6->fields).worldToElipsoidSpace.m03;
    MStack_15.m13 = (pUVar6->fields).worldToElipsoidSpace.m13;
    MStack_15.m23 = (pUVar6->fields).worldToElipsoidSpace.m23;
    MStack_15.m33 = (pUVar6->fields).worldToElipsoidSpace.m33;
    vector_00.y = fStack_16;
    vector_00.x = fStack_3;
    vector_00.z = fStack_17;
    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                       (&VStack_5,&MStack_15,vector_00,(MethodInfo *)0x0);
    uVar19._0_4_ = pVVar18->x;
    uVar19._4_4_ = pVVar18->y;
    fVar10 = pVVar18->z;
    unique0x10000c44 = uVar19;
    fStack_17 = fVar10;
    uStack_20 = uVar19;
    MStack_15.m00 = fVar10;
    if (cRam_? == '\0') {
      func_?();
      fVar10 = in_stack_21;
      uVar19 = in_stack_22;
      cRam_? = '\x01';
    }
    fVar11 = fStack_23 * fStack_23 + in_stack_24 * in_stack_24 + 0.0;
    if (_UNK_? < fVar11) {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar25 = (double)fVar11;
      if (dVar25 < 0.0) {
        func_?();
      }
      else {
        dVar25 = SQRT(dVar25);
      }
      fVar11 = (float)dVar25;
      fVar10 = 3.9800396e-29 / fVar11;
      fStack_23 = fStack_23 / fVar11;
      uVar19._4_4_ = fStack_23;
      uVar19._0_4_ = in_stack_24 / fVar11;
    }
    VStack_5.x = (pUVar6->fields).elipsoidSpaceToWorld.m12;
    VStack_5.y = (pUVar6->fields).elipsoidSpaceToWorld.m22;
    VStack_5.z = (pUVar6->fields).elipsoidSpaceToWorld.m32;
    fStack_4 = (pUVar6->fields).elipsoidSpaceToWorld.m03;
    fStack_3 = (pUVar6->fields).elipsoidSpaceToWorld.m13;
    fStack_16 = (pUVar6->fields).elipsoidSpaceToWorld.m23;
    fStack_17 = (pUVar6->fields).elipsoidSpaceToWorld.m33;
    vector.z = fVar10;
    vector.x = (float)uVar19;
    vector.y = SUB84(uVar19,4);
    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                       ((Vector3 *)&stack0xffffff44,(Matrix4x4 *)&stack0xffffff64,vector,
                        (MethodInfo *)0x0);
    uVar26 = pVVar18->x;
    fVar10 = pVVar18->z;
    fVar11 = fVar10;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    uVar27 = (this->fields).startPos.x;
    uVar28 = (this->fields).startPos.y;
    fVar13 = (float)uVar28 + fStack_23;
    fVar14 = (float)uVar26 + (this->fields).startPos.z;
    if (this_01 != (Transform *)0x0) {
      value_00.y = fVar13;
      value_00.x = (float)uVar27 + fVar11;
      value_00.z = fVar14;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value_00,(MethodInfo *)0x0);
      pUVar6 = (this->fields).elipsoidHelper;
      if (pUVar6 != (UIElipsoidHelper *)0x0) {
        deltaDir.y = fVar14;
        deltaDir.x = fVar13;
        deltaDir.z = fVar10;
        fVar10 = UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                           (pUVar6,deltaDir,(MethodInfo *)0x0);
        this_00 = (this->fields).deltaMovementModifier;
        if (this_00 != (AnimationCurve *)0x0) {
          VStack_5.x = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                        AnimationCurve_Evaluate(this_00,fVar10,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          dVar25 = (double)(fStack_29 * fStack_29 + fVar10 * fVar10 + 0.0);
          if (dVar25 < 0.0) {
            func_?();
          }
          else {
            dVar25 = SQRT(dVar25);
          }
          fVar11 = (float)dVar25;
          if (_UNK_? < fVar11) {
            uVar30 = CONCAT44(fVar10 / fVar11,fStack_29 / fVar11);
          }
          else {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar30._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
            uVar30._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
          }
          fStack_12 = (float)uVar30;
          fStack_31 = (float)((ulonglong)uVar30 >> 0x20);
          fStack_31 = fStack_31 * VStack_5.x;
          if (((this->fields).supressAxis & 1) != 0) {
            fStack_31 = 0.0;
          }
          fVar10 = 0.0;
          if (((this->fields).supressAxis & 2) == 0) {
            fVar10 = fStack_12 * VStack_5.x;
          }
          pCVar32 = (this->fields).m_HorizontalVirtualAxis;
          (this->fields).supressAxis = 0;
          if (pCVar32 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
            (pCVar32->fields).m_Value = fVar10;
            pCVar32 = (this->fields).m_VerticalVirtualAxis;
            if (pCVar32 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
              (pCVar32->fields).m_Value = fStack_31;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
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

float Assembly-CSharp.dll::Joystick::Joystick_get_MovementRangeY(Joystick *this,MethodInfo *method)

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

