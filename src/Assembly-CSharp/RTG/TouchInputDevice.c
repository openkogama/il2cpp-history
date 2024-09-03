
/* Vector3 GetFrameDelta() */

Vector3 * Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_GetFrameDelta
                    (Vector3 *__return_storage_ptr__,TouchInputDevice *this,MethodInfo *method)

{
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if (iVar1 == 0) {
    if (cRam_? == '\0') {
      TStack_2.m_FingerId = (int32_t)&TypeInfo__UnityEngine__Vector3;
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    __return_storage_ptr__->x = (pVVar3->zeroVector).x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  TStack_2.m_FingerId = 0x44;
  func_?(&TStack_6,0);
  pTVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                     (&TStack_2,0,(MethodInfo *)0x0);
  TStack_6.m_FingerId = pTVar7->m_FingerId;
  TStack_6.m_Position.x = (pTVar7->m_Position).x;
  TStack_6.m_Position.y = (pTVar7->m_Position).y;
  TStack_6.m_RawPosition.x = (pTVar7->m_RawPosition).x;
  TStack_6.m_RawPosition.y = (pTVar7->m_RawPosition).y;
  TStack_6.m_PositionDelta.x = (pTVar7->m_PositionDelta).x;
  TStack_6.m_PositionDelta.y = (pTVar7->m_PositionDelta).y;
  TStack_6.m_TimeDelta = pTVar7->m_TimeDelta;
  TStack_6.m_TapCount = pTVar7->m_TapCount;
  TStack_6.m_Phase = pTVar7->m_Phase;
  TStack_6.m_Type = pTVar7->m_Type;
  TStack_6.m_Pressure = pTVar7->m_Pressure;
  TStack_6.m_maximumPossiblePressure = pTVar7->m_maximumPossiblePressure;
  TStack_6.m_Radius = pTVar7->m_Radius;
  TStack_6.m_RadiusVariance = pTVar7->m_RadiusVariance;
  TStack_6.m_AltitudeAngle = pTVar7->m_AltitudeAngle;
  TStack_6.m_AzimuthAngle = pTVar7->m_AzimuthAngle;
  VVar8 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_deltaPosition
                    (&TStack_6,(MethodInfo *)0x0);
  fStack_9 = VVar8.x;
  __return_storage_ptr__->x = fStack_9;
  __return_storage_ptr__->y = (float)uStack_10;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 GetPositionYAxisUp() */

Vector3 * Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_GetPositionYAxisUp
                    (Vector3 *__return_storage_ptr__,TouchInputDevice *this,MethodInfo *method)

{
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if (iVar1 == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    __return_storage_ptr__->x = (pVVar2->zeroVector).x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  VVar5 = RTInput::RTInput_TouchPosition(0,(MethodInfo *)0x0);
  fStack_6 = VVar5.x;
  __return_storage_ptr__->x = fStack_6;
  __return_storage_ptr__->y = (float)uStack_7;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Ray GetRay(Camera) */

Ray * Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_GetRay
                (Ray *__return_storage_ptr__,TouchInputDevice *this,Camera *camera,
                MethodInfo *method)

{
  cVar1 = cRam_?;
  (__return_storage_ptr__->m_Origin).x = 0.0;
  (__return_storage_ptr__->m_Origin).y = 0.0;
  (__return_storage_ptr__->m_Origin).z = 0.0;
  (__return_storage_ptr__->m_Direction).x = 0.0;
  (__return_storage_ptr__->m_Direction).y = 0.0;
  (__return_storage_ptr__->m_Direction).z = 0.0;
  if (cVar1 == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->zeroVector).x;
  uVar4 = (pVVar2->zeroVector).y;
  fVar5 = (pVVar2->zeroVector).z;
  if (cVar1 == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  (__return_storage_ptr__->m_Origin).x = (float)uVar3;
  (__return_storage_ptr__->m_Origin).y = (float)uVar4;
  (__return_storage_ptr__->m_Origin).z = fVar5;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffe8,pVVar2->zeroVector,(MethodInfo *)0x0);
  fVar7 = pVVar6->y;
  fVar5 = pVVar6->z;
  (__return_storage_ptr__->m_Direction).x = pVVar6->x;
  (__return_storage_ptr__->m_Direction).y = fVar7;
  (__return_storage_ptr__->m_Direction).z = fVar5;
  iVar8 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if (iVar8 != 0) {
    VVar9 = RTInput::RTInput_TouchPosition(0,(MethodInfo *)0x0);
    fStack_10 = VVar9.y;
    if (camera == (Camera *)0x0) {
      func_?();
      pcVar11 = (code *)swi(3);
      pRVar12 = (Ray *)(*pcVar11)();
      return pRVar12;
    }
    pos.y = fStack_10;
    pos.x = (float)uVar3;
    pos.z = 0.0;
    pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                        ((Ray *)&stack0xffffffdc,camera,pos,(MethodInfo *)0x0);
    fVar5 = (pRVar12->m_Origin).y;
    fVar7 = (pRVar12->m_Origin).z;
    fVar13 = (pRVar12->m_Direction).x;
    (__return_storage_ptr__->m_Origin).x = (pRVar12->m_Origin).x;
    (__return_storage_ptr__->m_Origin).y = fVar5;
    (__return_storage_ptr__->m_Origin).z = fVar7;
    (__return_storage_ptr__->m_Direction).x = fVar13;
    fVar5 = (pRVar12->m_Direction).z;
    (__return_storage_ptr__->m_Direction).y = (pRVar12->m_Direction).y;
    (__return_storage_ptr__->m_Direction).z = fVar5;
  }
  return __return_storage_ptr__;
}


/* Boolean HasPointer() */

bool Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_HasPointer
               (TouchInputDevice *this,MethodInfo *method)

{
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  return iVar1 != 0;
}


/* Boolean IsButtonPressed(Int32) */

bool Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_IsButtonPressed
               (TouchInputDevice *this,int32_t buttonIndex,MethodInfo *method)

{
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if (buttonIndex < iVar1) {
    return iVar1 <= (this->fields)._maxNumberOfTouches;
  }
  return 0;
}


/* Boolean WasButtonPressedInCurrentFrame(Int32) */

bool Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_WasButtonPressedInCurrentFrame
               (TouchInputDevice *this,int32_t buttonIndex,MethodInfo *method)

{
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if ((buttonIndex < iVar1) && (iVar1 <= (this->fields)._maxNumberOfTouches)) {
    TStack_2.m_FingerId = 0x44;
    func_?(auStack_3,0);
    pTVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                       (&TStack_2,buttonIndex,(MethodInfo *)0x0);
    auStack_3._0_4_ = pTVar4->m_FingerId;
    auStack_3._4_4_ = (pTVar4->m_Position).x;
    auStack_3._8_4_ = (pTVar4->m_Position).y;
    fStack_5 = (pTVar4->m_RawPosition).x;
    fStack_6 = (pTVar4->m_RawPosition).y;
    pFStack_7 = (Func_2_Single_Single_ *)(pTVar4->m_PositionDelta).x;
    fStack_8 = (pTVar4->m_PositionDelta).y;
    pAStack_9 = (Action *)pTVar4->m_TimeDelta;
    iStack_10 = pTVar4->m_TapCount;
    pVStack_11 = (VisualElement *)pTVar4->m_Phase;
    pAStack_12 = (Action_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar4->m_Type;
    pFStack_13 = (Func_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar4->m_Pressure;
    pFStack_14 = (Func_4_UnityEngine_UIElements_Experimental_StyleValues_UnityEngine_UIElements_Experimental_StyleValues_Single_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar4->m_maximumPossiblePressure;
    SStack_15.m_StyleValues = (StyleValueCollection *)pTVar4->m_Radius;
    fStack_16 = pTVar4->m_RadiusVariance;
    SStack_17.m_StyleValues = (StyleValueCollection *)pTVar4->m_AltitudeAngle;
    fStack_18 = pTVar4->m_AzimuthAngle;
    pVVar19 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
             ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                       ((ValueAnimation_1_StyleValues_ *)auStack_3,(MethodInfo *)0x0);
    return pVVar19 == (VisualElement *)0x0;
  }
  return 0;
}


/* Boolean WasButtonReleasedInCurrentFrame(Int32) */

bool Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_WasButtonReleasedInCurrentFrame
               (TouchInputDevice *this,int32_t buttonIndex,MethodInfo *method)

{
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if ((buttonIndex < iVar1) && (iVar1 <= (this->fields)._maxNumberOfTouches)) {
    iStack_2 = 0x44;
    func_?(auStack_3,0);
    pTVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                       ((Touch *)&iStack_2,buttonIndex,(MethodInfo *)0x0);
    auStack_3._0_4_ = pTVar4->m_FingerId;
    auStack_3._4_4_ = (pTVar4->m_Position).x;
    auStack_3._8_4_ = (pTVar4->m_Position).y;
    fStack_5 = (pTVar4->m_RawPosition).x;
    fStack_6 = (pTVar4->m_RawPosition).y;
    pFStack_7 = (Func_2_Single_Single_ *)(pTVar4->m_PositionDelta).x;
    fStack_8 = (pTVar4->m_PositionDelta).y;
    pAStack_9 = (Action *)pTVar4->m_TimeDelta;
    iStack_10 = pTVar4->m_TapCount;
    pVStack_11 = (VisualElement *)pTVar4->m_Phase;
    pAStack_12 = (Action_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar4->m_Type;
    pFStack_13 = (Func_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar4->m_Pressure;
    pFStack_14 = (Func_4_UnityEngine_UIElements_Experimental_StyleValues_UnityEngine_UIElements_Experimental_StyleValues_Single_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar4->m_maximumPossiblePressure;
    SStack_15.m_StyleValues = (StyleValueCollection *)pTVar4->m_Radius;
    fStack_16 = pTVar4->m_RadiusVariance;
    SStack_17.m_StyleValues = (StyleValueCollection *)pTVar4->m_AltitudeAngle;
    fStack_18 = pTVar4->m_AzimuthAngle;
    pVVar19 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
             ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                       ((ValueAnimation_1_StyleValues_ *)auStack_3,(MethodInfo *)0x0);
    if (pVVar19 == (VisualElement *)0x3) {
      return 1;
    }
    pVVar19 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
             ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                       ((ValueAnimation_1_StyleValues_ *)auStack_3,(MethodInfo *)0x0);
    return pVVar19 == (VisualElement *)0x4;
  }
  return 0;
}


/* Boolean WasMoved() */

bool Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_WasMoved
               (TouchInputDevice *this,MethodInfo *method)

{
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if ((iVar1 != 0) && (touchIndex = 0, 0 < iVar1)) {
    do {
      if ((this->fields)._maxNumberOfTouches <= touchIndex) {
        return 0;
      }
      bVar2 = RTInput::RTInput_TouchMoved(touchIndex,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return 1;
      }
      touchIndex = touchIndex + 1;
    } while (touchIndex < iVar1);
  }
  return 0;
}


/* TouchInputDevice(Int32) */

void Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice__ctor
               (TouchInputDevice *this,int32_t maxNumberOfTouches,MethodInfo *method)

{
  InputDeviceBase::InputDeviceBase__ctor((InputDeviceBase *)this,(MethodInfo *)0x0);
  iVar1 = 1;
  if (0 < maxNumberOfTouches) {
    iVar1 = maxNumberOfTouches;
  }
  (this->fields)._maxNumberOfTouches = iVar1;
  return;
}

