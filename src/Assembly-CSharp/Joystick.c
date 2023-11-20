
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
  if (((this->fields).dragStart == 0) || ((this->fields).useSupressAxis == 0)) {
    return;
  }
  this_00 = (this->fields).joystickLockAxis;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
    this_01 = (this->fields).elipsoidHelper;
    uVar4 = pVVar2->x;
    fVar5 = pVVar2->z;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
      uVar6 = pVVar2->x;
      uVar7 = pVVar2->y;
      uVar8 = (this->fields).startPos.x;
      uVar9 = (this->fields).startPos.y;
      puStack_3 = (undefined *)((float)uVar6 - (float)uVar8);
      if ((this_01 != (UIElipsoidHelper *)0x0) &&
         (deltaDir.y = (float)uVar7 - (float)uVar9, deltaDir.x = (float)puStack_3,
         deltaDir.z = pVVar2->z - (this->fields).startPos.z,
         normalizedDistance =
              UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                        (this_01,deltaDir,(MethodInfo *)0x0), this_00 != (JoystickLockAxis *)0x0)) {
        position.y = normalizedDistance;
        position.x = (float)uVar4;
        position.z = fVar5;
        JVar10 = JoystickLockAxis::JoystickLockAxis_UpdateLockToAxis
                          (this_00,position,normalizedDistance,(MethodInfo *)0x0);
        (this->fields).supressAxis = JVar10;
        return;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  auStack_3._4_4_ = (this->fields).startPos.z;
  uStack_4._4_4_ = value.x - (float)uVar1;
  fStack_5 = value.y - (float)uVar2;
  fStack_6 = value.z - (float)auStack_3._4_4_;
  pUStack_7 = (this->fields).elipsoidHelper;
  auStack_3._0_4_ = uVar2;
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  iVar9 = (this->fields).baseMovementRangeY;
  auStack_3._0_4_ = VVar8.x;
  auStack_3._4_4_ = VVar8.y;
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fVar10 = fStack_11;
  uStack_4._0_4_ = VVar8.x;
  uStack_4._4_4_ = VVar8.y;
  uStack_4._0_4_ = (float)iVar9 * (float)uStack_4;
  if (fStack_11 == 0.0) goto code_?;
  fStack_11 = *(float *)((int)fStack_11 + 0x88);
  fVar12 = (float)(int)fStack_13 * (float)auStack_3._4_4_;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar14 = (float)((uint)fVar12 & _UNK_?);
  fVar15 = (float)((uint)fStack_11 & _UNK_?);
  if ((float)((uint)fStack_11 & _UNK_?) <= fVar14) {
    fVar15 = fVar14;
  }
  fVar16 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar14 = fVar15 * _UNK_?;
  if (fVar15 * _UNK_? <= fVar16) {
    fVar14 = fVar16;
  }
  if (fVar14 <= (float)((uint)(fVar12 - fStack_11) & _UNK_?)) {
code_?:
    uStack_4._0_4_ = (float)(this->fields).baseMovementRangeX;
    VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    iVar9 = (this->fields).baseMovementRangeY;
    fStack_17 = VVar8.x;
    auStack_3._0_4_ = VVar8.y;
    join_0x00000008_0x00000000_ =
         ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    pUVar18 = (UIElipsoidHelper *)func_?();
    UIElipsoidHelper::UIElipsoidHelper__ctor
              (pUVar18,(float)(int)fStack_5 * (float)auStack_3._0_4_,
               (float)iVar9 * (float)auStack_3._12_4_,(MethodInfo *)0x0);
    (this->fields).elipsoidHelper = pUVar18;
    func_?();
  }
  else {
    fVar10 = *(float *)((int)fVar10 + 0x8c);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar12 = (float)((uint)fVar10 & _UNK_?);
    if (fVar12 <= (float)((uint)(float)uStack_4 & _UNK_?)) {
      fVar12 = (float)((uint)(float)uStack_4 & _UNK_?);
    }
    fVar14 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar15 = fVar12 * _UNK_?;
    if (fVar12 * _UNK_? <= fVar14) {
      fVar15 = fVar14;
    }
    fStack_17 = (float)uVar1;
    if (fVar15 <= (float)((uint)((float)uStack_4 - fVar10) & _UNK_?)) goto code_?;
  }
  pUVar18 = (this->fields).elipsoidHelper;
  if (pUVar18 != (UIElipsoidHelper *)0x0) {
    MStack_19.m00 = (pUVar18->fields).worldToElipsoidSpace.m00;
    MStack_19.m10 = (pUVar18->fields).worldToElipsoidSpace.m10;
    MStack_19.m20 = (pUVar18->fields).worldToElipsoidSpace.m20;
    MStack_19.m30 = (pUVar18->fields).worldToElipsoidSpace.m30;
    MStack_19.m01 = (pUVar18->fields).worldToElipsoidSpace.m01;
    MStack_19.m11 = (pUVar18->fields).worldToElipsoidSpace.m11;
    MStack_19.m21 = (pUVar18->fields).worldToElipsoidSpace.m21;
    MStack_19.m31 = (pUVar18->fields).worldToElipsoidSpace.m31;
    MStack_19.m02 = (pUVar18->fields).worldToElipsoidSpace.m02;
    MStack_19.m12 = (pUVar18->fields).worldToElipsoidSpace.m12;
    MStack_19.m22 = (pUVar18->fields).worldToElipsoidSpace.m22;
    MStack_19.m32 = (pUVar18->fields).worldToElipsoidSpace.m32;
    MStack_19.m03 = (pUVar18->fields).worldToElipsoidSpace.m03;
    MStack_19.m13 = (pUVar18->fields).worldToElipsoidSpace.m13;
    MStack_19.m23 = (pUVar18->fields).worldToElipsoidSpace.m23;
    MStack_19.m33 = (pUVar18->fields).worldToElipsoidSpace.m33;
    this_02 = &MStack_19;
    vector_00.y = fStack_20;
    vector_00.x = fStack_6;
    vector_00.z = fStack_21;
    pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        (&VStack_23,this_02,vector_00,(MethodInfo *)0x0);
    pMVar24 = (Matrix4x4 *)pVVar22->x;
    fVar10 = pVVar22->y;
    fStack_25 = pVVar22->z;
    VStack_23.x = 0.0;
    VStack_23.y = 0.0;
    uStack_4._4_4_ = (float)pMVar24;
    fVar12 = fStack_25;
    fStack_5 = fVar10;
    fVar15 = fStack_25;
    pMStack_26 = pMVar24;
    fStack_11 = fVar10;
    if (cRam_? == '\0') {
      fVar10 = fStack_6;
      fStack_6 = fStack_25;
      func_?();
      pMVar24 = this_02;
      cRam_? = '\x01';
      fVar12 = fStack_27;
      fVar15 = fStack_6;
    }
    fStack_6 = fVar15;
    fVar15 = in_stack_28 * in_stack_28 + in_stack_29 * in_stack_29 +
             in_stack_30 * in_stack_30;
    if (_UNK_? < fVar15) {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar31 = (double)fVar15;
      if (dVar31 < 0.0) {
        func_?();
      }
      else {
        dVar31 = SQRT(dVar31);
      }
      fVar10 = (float)dVar31;
      fVar12 = in_stack_30 / fVar10;
      pMVar24 = (Matrix4x4 *)(in_stack_29 / fVar10);
      fVar10 = in_stack_28 / fVar10;
    }
    auStack_3._0_4_ = (pUVar18->fields).elipsoidSpaceToWorld.m00;
    auStack_3._4_4_ = (pUVar18->fields).elipsoidSpaceToWorld.m10;
    auStack_3._8_4_ = (pUVar18->fields).elipsoidSpaceToWorld.m20;
    auStack_3._12_4_ = (pUVar18->fields).elipsoidSpaceToWorld.m30;
    fStack_32 = (pUVar18->fields).elipsoidSpaceToWorld.m01;
    fStack_33 = (pUVar18->fields).elipsoidSpaceToWorld.m11;
    uStack_4._0_4_ = (pUVar18->fields).elipsoidSpaceToWorld.m21;
    uStack_4._4_4_ = (pUVar18->fields).elipsoidSpaceToWorld.m31;
    fStack_5 = (pUVar18->fields).elipsoidSpaceToWorld.m02;
    fStack_6 = (pUVar18->fields).elipsoidSpaceToWorld.m12;
    fStack_20 = (pUVar18->fields).elipsoidSpaceToWorld.m22;
    fStack_21 = (pUVar18->fields).elipsoidSpaceToWorld.m32;
    fStack_25 = (pUVar18->fields).elipsoidSpaceToWorld.m03;
    fStack_34 = (pUVar18->fields).elipsoidSpaceToWorld.m13;
    pUStack_7 = (UIElipsoidHelper *)(pUVar18->fields).elipsoidSpaceToWorld.m23;
    pMStack_26 = (Matrix4x4 *)(pUVar18->fields).elipsoidSpaceToWorld.m33;
    vector.y = fVar10;
    vector.x = (float)pMVar24;
    vector.z = fVar12;
    pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)&stack0xffffff34,(Matrix4x4 *)auStack_3,vector,
                         (MethodInfo *)0x0);
    uVar35 = pVVar22->x;
    uVar36 = pVVar22->y;
    fVar10 = pVVar22->z;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    uVar37 = (this->fields).startPos.x;
    uVar38 = (this->fields).startPos.y;
    fVar12 = (float)uVar37 + fVar10;
    fStack_32 = fVar10;
    fStack_33 = 0.0;
    uStack_4._0_4_ = 0.0;
    uStack_4._4_4_ = 0.0;
    fVar15 = (float)uVar38 + (float)uVar35;
    if (this_01 != (Transform *)0x0) {
      value_00.y = fVar15;
      value_00.x = fVar12;
      value_00.z = (float)uVar36 + (this->fields).startPos.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value_00,(MethodInfo *)0x0);
      pUVar18 = (this->fields).elipsoidHelper;
      if (pUVar18 != (UIElipsoidHelper *)0x0) {
        deltaDir.y = fVar15;
        deltaDir.x = fVar12;
        deltaDir.z = fVar10;
        fVar10 = UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                           (pUVar18,deltaDir,(MethodInfo *)0x0);
        this_00 = (this->fields).deltaMovementModifier;
        auStack_3._12_4_ = fVar10;
        if (this_00 != (AnimationCurve *)0x0) {
          fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (this_00,fVar10,(MethodInfo *)0x0);
          uStack_4._0_4_ = fVar10;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          dVar31 = (double)(VStack_23.x * VStack_23.x + fStack_17 * fStack_17 +
                           (float)auStack_3._0_4_ * (float)auStack_3._0_4_);
          if (dVar31 < 0.0) {
            func_?();
          }
          else {
            dVar31 = SQRT(dVar31);
          }
          fVar10 = (float)dVar31;
          if (_UNK_? < fVar10) {
            uVar39 = CONCAT44(fStack_17 / fVar10,VStack_23.x / fVar10);
          }
          else {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar39._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
            uVar39._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
          }
          fStack_13 = (float)uVar39;
          fStack_17 = (float)((ulonglong)uVar39 >> 0x20);
          fStack_17 = fStack_17 * (float)uStack_4;
          if (((this->fields).supressAxis & 1) != 0) {
            fStack_17 = 0.0;
          }
          fVar10 = 0.0;
          if (((this->fields).supressAxis & 2) == 0) {
            fVar10 = fStack_13 * (float)uStack_4;
          }
          pCVar40 = (this->fields).m_HorizontalVirtualAxis;
          (this->fields).supressAxis = 0;
          if (pCVar40 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
            (pCVar40->fields).m_Value = fVar10;
            pCVar40 = (this->fields).m_VerticalVirtualAxis;
            if (pCVar40 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
              (pCVar40->fields).m_Value = fStack_17;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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

