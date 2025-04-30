
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
  iVar4 = (this->fields).baseMovementRangeX;
  VVar5 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  iVar6 = (this->fields).baseMovementRangeY;
  VVar7 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fVar8 = VVar7.x;
  this_00 = (UIElipsoidHelper *)func_?(TypeInfo__UIElipsoidHelper);
  UIElipsoidHelper::UIElipsoidHelper__ctor
            (this_00,(float)iVar4 * VVar5.x,(float)iVar6 * fVar8,(MethodInfo *)0x0);
  ppUVar9 = &(this->fields).elipsoidHelper;
  *ppUVar9 = this_00;
  func_?(ppUVar9,this_00);
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
  auStack_3._12_4_ = (this->fields).startPos.z;
  VStack_4.y = value.y - (float)uVar2;
  VStack_4.x = value.x - (float)uVar1;
  fStack_5 = value.z - (float)auStack_3._12_4_;
  ppUVar6 = &(this->fields).elipsoidHelper;
  pUStack_7 = *ppUVar6;
  fStack_8 = (float)(this->fields).baseMovementRangeX;
  auStack_3._4_4_ = uVar1;
  auStack_3._8_4_ = uVar2;
  VVar9 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  iVar10 = (this->fields).baseMovementRangeY;
  auStack_3._8_4_ = VVar9.x;
  auStack_3._12_4_ = VVar9.y;
  VVar9 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  auStack_3._0_4_ = VVar9.x;
  auStack_3._4_4_ = VVar9.y;
  auStack_3._0_4_ = (float)iVar10 * (float)auStack_3._0_4_;
  if (iStack_11 == 0) goto code_?;
  auStack_12._0_4_ = *(float *)(iStack_11 + 0x88);
  fStack_13 = (float)(int)fStack_13 * (float)auStack_3._12_4_;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar14 = (float)(auStack_12._0_4_ & _UNK_?);
  if ((float)(auStack_12._0_4_ & _UNK_?) <= (float)((uint)fStack_13 & _UNK_?)) {
    fVar14 = (float)((uint)fStack_13 & _UNK_?);
  }
  fVar15 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar16 = fVar14 * _UNK_?;
  if (fVar14 * _UNK_? <= fVar15) {
    fVar16 = fVar15;
  }
  if (fVar16 <= (float)((uint)(fStack_13 - (float)auStack_12._0_4_) & _UNK_?)) {
code_?:
    auStack_3._0_4_ = (this->fields).baseMovementRangeX;
    join_0x00000008_0x00000000_ =
         ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    iVar10 = (this->fields).baseMovementRangeY;
    VStack_4 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0)
    ;
    pUVar17 = (UIElipsoidHelper *)func_?();
    UIElipsoidHelper::UIElipsoidHelper__ctor
              (pUVar17,(float)(int)auStack_3._8_4_ * fStack_8,(float)iVar10 * VStack_4.x,
               (MethodInfo *)0x0);
    *(UIElipsoidHelper **)VStack_4.x = pUVar17;
    ppUVar6 = (UIElipsoidHelper **)VStack_4.x;
    func_?();
  }
  else {
    auStack_12._0_4_ = *(float *)(iStack_11 + 0x8c);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar14 = (float)(auStack_12._0_4_ & _UNK_?);
    if ((float)(auStack_12._0_4_ & _UNK_?) <= (float)(auStack_3._0_4_ & _UNK_?)) {
      fVar14 = (float)(auStack_3._0_4_ & _UNK_?);
    }
    fVar15 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar16 = fVar14 * _UNK_?;
    if (fVar14 * _UNK_? <= fVar15) {
      fVar16 = fVar15;
    }
    if (fVar16 <= (float)((uint)((float)auStack_3._0_4_ - (float)auStack_12._0_4_) & _UNK_?)
       ) goto code_?;
  }
  pUVar17 = (this->fields).elipsoidHelper;
  if (pUVar17 != (UIElipsoidHelper *)0x0) {
    MStack_18.m00 = (pUVar17->fields).worldToElipsoidSpace.m00;
    MStack_18.m10 = (pUVar17->fields).worldToElipsoidSpace.m10;
    MStack_18.m20 = (pUVar17->fields).worldToElipsoidSpace.m20;
    MStack_18.m30 = (pUVar17->fields).worldToElipsoidSpace.m30;
    fVar15 = 0.0;
    MStack_18.m01 = (pUVar17->fields).worldToElipsoidSpace.m01;
    MStack_18.m11 = (pUVar17->fields).worldToElipsoidSpace.m11;
    MStack_18.m21 = (pUVar17->fields).worldToElipsoidSpace.m21;
    MStack_18.m31 = (pUVar17->fields).worldToElipsoidSpace.m31;
    MStack_18.m02 = (pUVar17->fields).worldToElipsoidSpace.m02;
    MStack_18.m12 = (pUVar17->fields).worldToElipsoidSpace.m12;
    MStack_18.m22 = (pUVar17->fields).worldToElipsoidSpace.m22;
    MStack_18.m32 = (pUVar17->fields).worldToElipsoidSpace.m32;
    MStack_18.m03 = (pUVar17->fields).worldToElipsoidSpace.m03;
    MStack_18.m13 = (pUVar17->fields).worldToElipsoidSpace.m13;
    MStack_18.m23 = (pUVar17->fields).worldToElipsoidSpace.m23;
    MStack_18.m33 = (pUVar17->fields).worldToElipsoidSpace.m33;
    vector_00.y = fStack_19;
    vector_00.x = fStack_5;
    vector_00.z = fStack_20;
    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)auStack_12,&MStack_18,vector_00,(MethodInfo *)0x0);
    fVar14 = pVVar21->x;
    ppUVar22 = (UIElipsoidHelper **)pVVar21->y;
    auStack_12._0_4_ = pVVar21->z;
    MStack_18.m01 = 0.0;
    MStack_18.m11 = 0.0;
    VStack_4.x = (float)auStack_12._0_4_;
    fVar16 = (float)auStack_12._0_4_;
    fStack_20 = fVar14;
    ppUStack_23 = ppUVar22;
    MStack_18.m20 = fVar14;
    MStack_18.m30 = (float)ppUVar22;
    if (cRam_? == '\0') {
      auStack_3._8_4_ = &TypeInfo__System__Math;
      auStack_3._4_4_ = &UNK_?;
      func_?();
      ppUVar22 = ppUVar6;
      fVar14 = fVar15;
      cRam_? = '\x01';
      fVar16 = fStack_24;
    }
    fVar15 = in_stack_25 * in_stack_25 + in_stack_26 * in_stack_26 +
             in_stack_27 * in_stack_27;
    if (_UNK_? < fVar15) {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar28 = (double)fVar15;
      if (dVar28 < 0.0) {
        func_?();
      }
      else {
        dVar28 = SQRT(dVar28);
      }
      fVar15 = (float)dVar28;
      fVar16 = in_stack_27 / fVar15;
      fVar14 = in_stack_26 / fVar15;
      ppUVar22 = (UIElipsoidHelper **)(in_stack_25 / fVar15);
    }
    auStack_3._0_4_ = (pUVar17->fields).elipsoidSpaceToWorld.m00;
    auStack_3._4_4_ = (pUVar17->fields).elipsoidSpaceToWorld.m10;
    auStack_3._8_4_ = (pUVar17->fields).elipsoidSpaceToWorld.m20;
    auStack_3._12_4_ = (pUVar17->fields).elipsoidSpaceToWorld.m30;
    auStack_3._16_4_ = (pUVar17->fields).elipsoidSpaceToWorld.m01;
    VStack_4.x = (pUVar17->fields).elipsoidSpaceToWorld.m11;
    VStack_4.y = (pUVar17->fields).elipsoidSpaceToWorld.m21;
    fStack_5 = (pUVar17->fields).elipsoidSpaceToWorld.m31;
    fStack_19 = (pUVar17->fields).elipsoidSpaceToWorld.m02;
    fStack_20 = (pUVar17->fields).elipsoidSpaceToWorld.m12;
    ppUStack_23 = (UIElipsoidHelper **)(pUVar17->fields).elipsoidSpaceToWorld.m22;
    auStack_12._0_4_ = (pUVar17->fields).elipsoidSpaceToWorld.m32;
    auStack_12._4_4_ = (pUVar17->fields).elipsoidSpaceToWorld.m03;
    fStack_8 = (pUVar17->fields).elipsoidSpaceToWorld.m13;
    pUStack_7 = (UIElipsoidHelper *)(pUVar17->fields).elipsoidSpaceToWorld.m23;
    fStack_13 = (pUVar17->fields).elipsoidSpaceToWorld.m33;
    vector.y = (float)ppUVar22;
    vector.x = fVar14;
    vector.z = fVar16;
    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)&stack0xffffff2c,(Matrix4x4 *)auStack_3,vector,
                         (MethodInfo *)0x0);
    uVar29 = pVVar21->x;
    uVar30 = pVVar21->y;
    fVar16 = pVVar21->z;
    fVar31 = fVar16;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    uVar32 = (this->fields).startPos.x;
    fVar14 = (this->fields).startPos.y;
    fVar15 = (this->fields).startPos.z;
    VStack_4.x = 0.0;
    VStack_4.y = 0.0;
    fStack_5 = 0.0;
    auStack_3._0_4_ = (float)uVar30 + fVar15;
    auStack_3._16_4_ = fVar31;
    if (this_01 != (Transform *)0x0) {
      value_00.y = fVar14 + (float)uVar29;
      value_00.x = (float)uVar32 + fVar31;
      value_00.z = (float)auStack_3._0_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value_00,(MethodInfo *)0x0);
      pUVar17 = (this->fields).elipsoidHelper;
      if (pUVar17 != (UIElipsoidHelper *)0x0) {
        deltaDir.y = fVar15;
        deltaDir.x = fVar14;
        deltaDir.z = fVar16;
        fVar14 = UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                          (pUVar17,deltaDir,(MethodInfo *)0x0);
        this_00 = (this->fields).deltaMovementModifier;
        if (this_00 != (AnimationCurve *)0x0) {
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                            (this_00,fVar14,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          dVar28 = (double)(fStack_33 * fStack_33 +
                            (float)auStack_3._4_4_ * (float)auStack_3._4_4_ +
                           (float)auStack_3._8_4_ * (float)auStack_3._8_4_);
          if (dVar28 < 0.0) {
            func_?();
          }
          else {
            dVar28 = SQRT(dVar28);
          }
          fVar16 = (float)dVar28;
          if (_UNK_? < fVar16) {
            uVar34 = CONCAT44((float)auStack_3._4_4_ / fVar16,fStack_33 / fVar16);
          }
          else {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar34._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
            uVar34._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
          }
          auStack_3._0_4_ = (undefined4)uVar34;
          auStack_3._4_4_ = (undefined4)((ulonglong)uVar34 >> 0x20);
          auStack_3._0_4_ = (float)auStack_3._0_4_ * fVar14;
          auStack_3._4_4_ = (float)auStack_3._4_4_ * fVar14;
          uVar35 = (this->fields).supressAxis;
          puVar36 = (undefined *)auStack_3._4_4_;
          if ((uVar35 & 1) != 0) {
            puVar36 = (undefined *)0x0;
          }
          fVar14 = 0.0;
          if ((uVar35 & 2) == 0) {
            fVar14 = (float)auStack_3._0_4_;
          }
          pCVar37 = (this->fields).m_HorizontalVirtualAxis;
          (this->fields).supressAxis = 0;
          if (pCVar37 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
            (pCVar37->fields).m_Value = fVar14;
            pCVar37 = (this->fields).m_VerticalVirtualAxis;
            if (pCVar37 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
              (pCVar37->fields).m_Value = (float)puVar36;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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
  *(SmoothTouchAxis **)method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  ppJVar1 = &(this->fields).joystickLockAxis;
  *ppJVar1 = value;
  func_?(ppJVar1,value);
  ppSVar2 = &(this->fields).horizontalAxisName;
  *ppSVar2 = StringLiteral_Horizontal;
  func_?(ppSVar2,StringLiteral_Horizontal);
  ppSVar2 = &(this->fields).verticalAxisName;
  *ppSVar2 = StringLiteral_Vertical;
  func_?(ppSVar2,StringLiteral_Vertical);
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

