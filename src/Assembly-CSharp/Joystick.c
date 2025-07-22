
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
  fVar1 = (this->fields).startPos.z;
  pUVar2 = (this->fields).elipsoidHelper;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  VVar3 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStack_4 = VVar3.x;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  VVar3 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStack_5 = VVar3.x;
  fStack_5 = (float)(int)((float)(int)fStack_6 * fStack_4) * fStack_5;
  if (pUVar2 == (UIElipsoidHelper *)0x0) goto code_?;
  fVar7 = (pUVar2->fields).width;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar8 = (float)((uint)fVar7 & _UNK_?);
  if (fVar8 <= (float)((uint)fStack_9 & _UNK_?)) {
    fVar8 = (float)((uint)fStack_9 & _UNK_?);
  }
  fVar10 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar11 = fVar8 * _UNK_?;
  if (fVar8 * _UNK_? <= fVar10) {
    fVar11 = fVar10;
  }
  if (fVar11 <= (float)((uint)(fStack_9 - fVar7) & _UNK_?)) {
code_?:
    Joystick_get_MovementRangeX(this,(MethodInfo *)0x0);
    fStack_12 = Joystick_get_MovementRangeY(this,(MethodInfo *)0x0);
    pUVar2 = (UIElipsoidHelper *)func_?();
    UIElipsoidHelper::UIElipsoidHelper__ctor(pUVar2,fStack_5,fStack_12,(MethodInfo *)0x0);
    (this->fields).elipsoidHelper = pUVar2;
    func_?();
  }
  else {
    fVar7 = (pUVar2->fields).height;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar8 = (float)((uint)fVar7 & _UNK_?);
    if (fVar8 <= (float)((uint)fStack_5 & _UNK_?)) {
      fVar8 = (float)((uint)fStack_5 & _UNK_?);
    }
    fVar10 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar11 = fVar8 * _UNK_?;
    if (fVar8 * _UNK_? <= fVar10) {
      fVar11 = fVar10;
    }
    if (fVar11 <= (float)((uint)(fStack_5 - fVar7) & _UNK_?)) goto code_?;
  }
  pUVar2 = (this->fields).elipsoidHelper;
  if (pUVar2 != (UIElipsoidHelper *)0x0) {
    MStack_13.m00 = (pUVar2->fields).worldToElipsoidSpace.m00;
    MStack_13.m10 = (pUVar2->fields).worldToElipsoidSpace.m10;
    MStack_13.m20 = (pUVar2->fields).worldToElipsoidSpace.m20;
    MStack_13.m30 = (pUVar2->fields).worldToElipsoidSpace.m30;
    MStack_13.m01 = (pUVar2->fields).worldToElipsoidSpace.m01;
    MStack_13.m11 = (pUVar2->fields).worldToElipsoidSpace.m11;
    MStack_13.m21 = (pUVar2->fields).worldToElipsoidSpace.m21;
    MStack_13.m31 = (pUVar2->fields).worldToElipsoidSpace.m31;
    MStack_13.m02 = (pUVar2->fields).worldToElipsoidSpace.m02;
    MStack_13.m12 = (pUVar2->fields).worldToElipsoidSpace.m12;
    MStack_13.m22 = (pUVar2->fields).worldToElipsoidSpace.m22;
    MStack_13.m32 = (pUVar2->fields).worldToElipsoidSpace.m32;
    MStack_13.m03 = (pUVar2->fields).worldToElipsoidSpace.m03;
    MStack_13.m13 = (pUVar2->fields).worldToElipsoidSpace.m13;
    MStack_13.m23 = (pUVar2->fields).worldToElipsoidSpace.m23;
    MStack_13.m33 = (pUVar2->fields).worldToElipsoidSpace.m33;
    __return_storage_ptr__ = (Vector3 *)auStack_14;
    vector_00.y = fStack_15;
    vector_00.x = value.z - fVar1;
    vector_00.z = fStack_12;
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                       (__return_storage_ptr__,&MStack_13,vector_00,(MethodInfo *)0x0);
    uVar17._0_4_ = pVVar16->x;
    uVar17._4_4_ = pVVar16->y;
    fVar1 = pVVar16->z;
    auStack_14._0_4_ = fVar1;
    auStack_14._8_8_ = uVar17;
    MStack_13.m00 = fVar1;
    if (cRam_? == '\0') {
      func_?();
      fVar1 = in_stack_18;
      uVar17._4_4_ = in_stack_19;
      uVar17._0_4_ = in_stack_20;
      cRam_? = '\x01';
    }
    fVar7 = fStack_21 * fStack_21 + (float)uStack_22 * (float)uStack_22 + 0.0;
    if (_UNK_? < fVar7) {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar23 = (double)fVar7;
      if (dVar23 < 0.0) {
        func_?();
      }
      else {
        dVar23 = SQRT(dVar23);
      }
      fVar7 = (float)dVar23;
      fVar1 = 3.9823844e-29 / fVar7;
      fStack_21 = fStack_21 / fVar7;
      uStack_22._0_4_ = (float)uStack_22 / fVar7;
      uVar17 = uStack_22;
    }
    fVar7 = (pUVar2->fields).elipsoidSpaceToWorld.m30;
    fVar8 = (pUVar2->fields).elipsoidSpaceToWorld.m12;
    vector.z = fVar1;
    vector.x = (float)uVar17;
    vector.y = SUB84(uVar17,4);
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                       ((Vector3 *)&stack0xffffff44,(Matrix4x4 *)&stack0xffffff64,vector,
                        (MethodInfo *)0x0);
    fVar1 = pVVar16->x;
    uStack_22._0_4_ = pVVar16->z;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    uVar24 = (this->fields).startPos.x;
    uVar25 = (this->fields).startPos.y;
    value_00.y = (float)uVar25 + (float)__return_storage_ptr__;
    value_00.x = (float)uVar24 + (float)uStack_22;
    if (this_01 != (Transform *)0x0) {
      value_00.z = fVar1 + (this->fields).startPos.z;
      fVar1 = (float)uStack_22;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value_00,(MethodInfo *)0x0);
      pUVar2 = (this->fields).elipsoidHelper;
      if (pUVar2 != (UIElipsoidHelper *)0x0) {
        deltaDir.y = fVar1;
        deltaDir.x = fVar7;
        deltaDir.z = (float)uStack_22;
        uStack_22._0_4_ =
             UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                       (pUVar2,deltaDir,(MethodInfo *)0x0);
        this_00 = (this->fields).deltaMovementModifier;
        if (this_00 != (AnimationCurve *)0x0) {
          fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                            (this_00,(float)uStack_22,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          dVar23 = (double)((float)auStack_14._0_4_ * (float)auStack_14._0_4_ +
                            (float)uStack_22 * (float)uStack_22 + fVar8 * fVar8);
          if (dVar23 < 0.0) {
            func_?();
          }
          else {
            dVar23 = SQRT(dVar23);
          }
          fVar7 = (float)dVar23;
          if (_UNK_? < fVar7) {
            uVar26 = CONCAT44((float)uStack_22 / fVar7,(float)auStack_14._0_4_ / fVar7);
          }
          else {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar26._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
            uVar26._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
          }
          fStack_9 = (float)uVar26;
          fStack_27 = (float)((ulonglong)uVar26 >> 0x20);
          fStack_27 = fStack_27 * fVar1;
          if (((this->fields).supressAxis & 1) != 0) {
            fStack_27 = 0.0;
          }
          uStack_22._0_4_ = 0.0;
          if (((this->fields).supressAxis & 2) == 0) {
            uStack_22._0_4_ = fStack_9 * fVar1;
          }
          pCVar28 = (this->fields).m_HorizontalVirtualAxis;
          (this->fields).supressAxis = 0;
          if (pCVar28 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
            (pCVar28->fields).m_Value = (float)uStack_22;
            pCVar28 = (this->fields).m_VerticalVirtualAxis;
            if (pCVar28 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
              (pCVar28->fields).m_Value = fStack_27;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
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

