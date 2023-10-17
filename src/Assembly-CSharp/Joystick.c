
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
  if (pCVar2 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
    UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
    CrossPlatformInputManager_VirtualAxis__ctor(pCVar2,pSVar1,(MethodInfo *)0x0);
    (this->fields).m_HorizontalVirtualAxis = pCVar2;
    func_?(&(this->fields).m_HorizontalVirtualAxis,pCVar2);
    pSVar1 = (this->fields).verticalAxisName;
    pCVar2 = (CrossPlatformInputManager_VirtualAxis *)
             func_?(
                            TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                            );
    if (pCVar2 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
      UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
      CrossPlatformInputManager_VirtualAxis__ctor(pCVar2,pSVar1,(MethodInfo *)0x0);
      (this->fields).m_VerticalVirtualAxis = pCVar2;
      func_?(&(this->fields).m_VerticalVirtualAxis,pCVar2);
      iVar3 = (this->fields).baseMovementRangeX;
      VVar4 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
      iVar5 = (this->fields).baseMovementRangeY;
      VVar6 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
      this_00 = (UIElipsoidHelper *)func_?(TypeInfo__UIElipsoidHelper);
      if (this_00 != (UIElipsoidHelper *)0x0) {
        UIElipsoidHelper::UIElipsoidHelper__ctor
                  (this_00,(float)iVar3 * VVar4.x,(float)iVar5 * VVar6.x,(MethodInfo *)0x0);
        (this->fields).elipsoidHelper = this_00;
        func_?(&(this->fields).elipsoidHelper,this_00);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  if (pCVar2 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
    UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
    CrossPlatformInputManager_VirtualAxis__ctor(pCVar2,pSVar1,(MethodInfo *)0x0);
    (this->fields).m_HorizontalVirtualAxis = pCVar2;
    func_?(&(this->fields).m_HorizontalVirtualAxis,pCVar2);
    pSVar1 = (this->fields).verticalAxisName;
    pCVar2 = (CrossPlatformInputManager_VirtualAxis *)
             func_?(
                            TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                            );
    if (pCVar2 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
      UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
      CrossPlatformInputManager_VirtualAxis__ctor(pCVar2,pSVar1,(MethodInfo *)0x0);
      (this->fields).m_VerticalVirtualAxis = pCVar2;
      func_?(&(this->fields).m_VerticalVirtualAxis,pCVar2);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  fStack_3 = (this->fields).startPos.z;
  pMStack_4 = (Matrix4x4 *)(value.x - (float)uVar1);
  fStack_5 = value.y - (float)uVar2;
  fStack_6 = value.z - fStack_3;
  auStack_7._8_4_ = (this->fields).baseMovementRangeX;
  fStack_8 = (float)uVar1;
  fStack_9 = (float)uVar2;
  VVar10 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  iVar11 = (this->fields).baseMovementRangeY;
  fStack_9 = VVar10.x;
  fStack_3 = VVar10.y;
  VVar10 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  uVar12 = auStack_7._4_4_;
  fStack_13 = VVar10.x;
  fStack_13 = (float)iVar11 * fStack_13;
  pMStack_4 = (Matrix4x4 *)VVar10.y;
  if ((undefined *)auStack_7._4_4_ == (undefined *)0x0) goto code_?;
  auStack_7._4_4_ = *(undefined4 *)(auStack_7._4_4_ + 0x88);
  fStack_9 = (float)(int)fStack_9 * fStack_3;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar14 = (float)(auStack_7._4_4_ & _UNK_?);
  if ((float)(auStack_7._4_4_ & _UNK_?) <= (float)((uint)fStack_9 & _UNK_?)) {
    fVar14 = (float)((uint)fStack_9 & _UNK_?);
  }
  fVar15 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar16 = fVar14 * _UNK_?;
  if (fVar14 * _UNK_? <= fVar15) {
    fVar16 = fVar15;
  }
  if (fVar16 <= (float)((uint)(fStack_9 - (float)auStack_7._4_4_) & _UNK_?)) {
code_?:
    fStack_9 = (float)(this->fields).baseMovementRangeX;
    join_0x00000008_0x00000000_ =
         ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    pMStack_4 = (Matrix4x4 *)(this->fields).baseMovementRangeY;
    VStack_17 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0)
    ;
    pUVar18 = (UIElipsoidHelper *)func_?();
    if (pUVar18 == (UIElipsoidHelper *)0x0) goto code_?;
    UIElipsoidHelper::UIElipsoidHelper__ctor
              (pUVar18,(float)(int)fStack_9 * (float)auStack_7._4_4_,
               (float)(int)fStack_13 * fStack_3,(MethodInfo *)0x0);
    (this->fields).elipsoidHelper = pUVar18;
    func_?();
  }
  else {
    fStack_9 = *(float *)(uVar12 + 0x8c);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar14 = (float)((uint)fStack_9 & _UNK_?);
    if ((float)((uint)fStack_9 & _UNK_?) <= (float)((uint)fStack_13 & _UNK_?)) {
      fVar14 = (float)((uint)fStack_13 & _UNK_?);
    }
    fVar15 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar16 = fVar14 * _UNK_?;
    if (fVar14 * _UNK_? <= fVar15) {
      fVar16 = fVar15;
    }
    if (fVar16 <= (float)((uint)(fStack_13 - fStack_9) & _UNK_?)) goto code_?;
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
    fVar14 = pVVar22->y;
    fStack_25 = pVVar22->z;
    MStack_19.m00 = 0.0;
    MStack_19.m10 = 0.0;
    pMStack_4 = pMVar24;
    fVar16 = fStack_25;
    fStack_5 = fVar14;
    fVar15 = fStack_25;
    VStack_23.z = (float)pMVar24;
    fStack_26 = fVar14;
    if (cRam_? == '\0') {
      auStack_7._8_4_ = &TypeInfo__System__Math;
      auStack_7._4_4_ = &UNK_?;
      fVar14 = fStack_6;
      fStack_6 = fStack_25;
      func_?();
      pMVar24 = this_02;
      cRam_? = '\x01';
      fVar16 = fStack_27;
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
      fVar14 = (float)dVar31;
      fVar16 = in_stack_30 / fVar14;
      pMVar24 = (Matrix4x4 *)(in_stack_29 / fVar14);
      fVar14 = in_stack_28 / fVar14;
    }
    auStack_7._0_4_ = (pUVar18->fields).elipsoidSpaceToWorld.m00;
    auStack_7._4_4_ = (pUVar18->fields).elipsoidSpaceToWorld.m10;
    auStack_7._8_4_ = (pUVar18->fields).elipsoidSpaceToWorld.m20;
    fStack_8 = (pUVar18->fields).elipsoidSpaceToWorld.m30;
    fStack_9 = (pUVar18->fields).elipsoidSpaceToWorld.m01;
    fStack_3 = (pUVar18->fields).elipsoidSpaceToWorld.m11;
    fStack_32 = (pUVar18->fields).elipsoidSpaceToWorld.m21;
    VStack_17.x = (pUVar18->fields).elipsoidSpaceToWorld.m31;
    VStack_17.y = (pUVar18->fields).elipsoidSpaceToWorld.m02;
    fStack_33 = (pUVar18->fields).elipsoidSpaceToWorld.m12;
    fStack_13 = (pUVar18->fields).elipsoidSpaceToWorld.m22;
    pMStack_4 = (Matrix4x4 *)(pUVar18->fields).elipsoidSpaceToWorld.m32;
    fStack_5 = (pUVar18->fields).elipsoidSpaceToWorld.m03;
    fStack_6 = (pUVar18->fields).elipsoidSpaceToWorld.m13;
    fStack_20 = (pUVar18->fields).elipsoidSpaceToWorld.m23;
    fStack_21 = (pUVar18->fields).elipsoidSpaceToWorld.m33;
    vector.y = fVar14;
    vector.x = (float)pMVar24;
    vector.z = fVar16;
    pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)&stack0xffffff44,(Matrix4x4 *)auStack_7,vector,
                         (MethodInfo *)0x0);
    uVar34 = pVVar22->x;
    fVar14 = pVVar22->z;
    fVar16 = fVar14;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    uVar35 = (this->fields).startPos.x;
    uVar36 = (this->fields).startPos.y;
    auStack_7._8_4_ = (this->fields).startPos.z;
    fStack_3 = 0.0;
    fStack_32 = 0.0;
    VStack_17 = (Vector2)((ulonglong)(uint)VStack_17.y << 0x20);
    auStack_7._0_4_ = uVar35;
    auStack_7._4_4_ = uVar36;
    fStack_9 = fVar16;
    if (this_01 != (Transform *)0x0) {
      value_00.y = (float)uVar36 + fVar15;
      value_00.x = (float)uVar35 + fVar16;
      value_00.z = (float)uVar34 + (float)auStack_7._8_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value_00,(MethodInfo *)0x0);
      pUVar18 = (this->fields).elipsoidHelper;
      if (pUVar18 != (UIElipsoidHelper *)0x0) {
        deltaDir.y = (float)uVar36 + fVar15;
        deltaDir.x = (float)uVar35 + fVar16;
        deltaDir.z = fVar14;
        fVar14 = UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                           (pUVar18,deltaDir,(MethodInfo *)0x0);
        this_00 = (this->fields).deltaMovementModifier;
        VStack_17.x = fVar14;
        if (this_00 != (AnimationCurve *)0x0) {
          fStack_13 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                      AnimationCurve_Evaluate(this_00,fVar14,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          dVar31 = (double)(VStack_23.x * VStack_23.x +
                            (float)auStack_7._8_4_ * (float)auStack_7._8_4_ +
                           fStack_8 * fStack_8);
          if (dVar31 < 0.0) {
            func_?();
          }
          else {
            dVar31 = SQRT(dVar31);
          }
          fVar14 = (float)dVar31;
          if (_UNK_? < fVar14) {
            uVar37 = CONCAT44((float)auStack_7._8_4_ / fVar14,VStack_23.x / fVar14);
          }
          else {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar37._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
            uVar37._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
          }
          auStack_7._4_4_ = (undefined4)uVar37;
          auStack_7._8_4_ = (undefined4)((ulonglong)uVar37 >> 0x20);
          auStack_7._4_4_ = (float)auStack_7._4_4_ * fStack_13;
          fVar14 = (float)auStack_7._8_4_ * fStack_13;
          VVar10.y = fStack_8;
          VVar10.x = fVar14;
          auStack_7._8_4_ = fVar14;
          if (((this->fields).supressAxis & 1) != 0) {
            fVar14 = 0.0;
          }
          puVar38 = (undefined *)0x0;
          if (((this->fields).supressAxis & 2) == 0) {
            puVar38 = (undefined *)auStack_7._4_4_;
          }
          pCVar39 = (this->fields).m_HorizontalVirtualAxis;
          (this->fields).supressAxis = 0;
          if (pCVar39 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
            (pCVar39->fields).m_Value = (float)puVar38;
            pCVar39 = (this->fields).m_VerticalVirtualAxis;
            unique0x10000d16 = VVar10;
            if (pCVar39 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
              (pCVar39->fields).m_Value = fVar14;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
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
  if (value != (JoystickLockAxis *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__SmoothTouchAxis);
      cRam_? = '\x01';
    }
    this_00 = (SmoothTouchAxis *)func_?(TypeInfo__SmoothTouchAxis);
    if (this_00 != (SmoothTouchAxis *)0x0) {
      SmoothTouchAxis::SmoothTouchAxis__ctor(this_00,3,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&(value->fields).smoothTouchAxis;
      (value->fields).smoothTouchAxis = this_00;
      func_?(method_00,this_00);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,method_00);
      (this->fields).joystickLockAxis = value;
      func_?(&(this->fields).joystickLockAxis,value);
      (this->fields).horizontalAxisName = StringLiteral_Horizontal;
      func_?(&(this->fields).horizontalAxisName,StringLiteral_Horizontal);
      (this->fields).verticalAxisName = StringLiteral_Vertical;
      func_?(&(this->fields).verticalAxisName,StringLiteral_Vertical);
      (this->fields).useSupressAxis = 1;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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

