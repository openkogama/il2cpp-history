
/* Vector3 GetFrameDelta() */

Vector3 * Assembly-CSharp.dll::RTG::TouchInputDevice::TouchInputDevice_GetFrameDelta
                    (Vector3 *__return_storage_ptr__,TouchInputDevice *this,MethodInfo *method)

{
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if (iVar1 == 0) {
    if (cRam_? == '\0') {
      func_?();
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
  pTVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                     ((Touch *)&stack0xffffff68,0,(MethodInfo *)0x0);
  TStack_6.m_FingerId = pTVar5->m_FingerId;
  TStack_6.m_Position.x = (pTVar5->m_Position).x;
  TStack_6.m_Position.y = (pTVar5->m_Position).y;
  TStack_6.m_RawPosition.x = (pTVar5->m_RawPosition).x;
  TStack_6.m_RawPosition.y = (pTVar5->m_RawPosition).y;
  TStack_6.m_PositionDelta.x = (pTVar5->m_PositionDelta).x;
  TStack_6.m_PositionDelta.y = (pTVar5->m_PositionDelta).y;
  TStack_6.m_TimeDelta = pTVar5->m_TimeDelta;
  TStack_6.m_TapCount = pTVar5->m_TapCount;
  TStack_6.m_Phase = pTVar5->m_Phase;
  TStack_6.m_Type = pTVar5->m_Type;
  TStack_6.m_Pressure = pTVar5->m_Pressure;
  TStack_6.m_maximumPossiblePressure = pTVar5->m_maximumPossiblePressure;
  TStack_6.m_Radius = pTVar5->m_Radius;
  TStack_6.m_RadiusVariance = pTVar5->m_RadiusVariance;
  TStack_6.m_AltitudeAngle = pTVar5->m_AltitudeAngle;
  TStack_6.m_AzimuthAngle = pTVar5->m_AzimuthAngle;
  VVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_deltaPosition
                    (&TStack_6,(MethodInfo *)0x0);
  fStack_8 = VVar7.x;
  __return_storage_ptr__->x = fStack_8;
  __return_storage_ptr__->y = (float)uStack_9;
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
      func_?();
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
  pTVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                     ((Touch *)&stack0xffffff68,0,(MethodInfo *)0x0);
  TStack_6.m_FingerId = pTVar5->m_FingerId;
  TStack_6.m_Position.x = (pTVar5->m_Position).x;
  TStack_6.m_Position.y = (pTVar5->m_Position).y;
  TStack_6.m_RawPosition.x = (pTVar5->m_RawPosition).x;
  TStack_6.m_RawPosition.y = (pTVar5->m_RawPosition).y;
  TStack_6.m_PositionDelta.x = (pTVar5->m_PositionDelta).x;
  TStack_6.m_PositionDelta.y = (pTVar5->m_PositionDelta).y;
  TStack_6.m_TimeDelta = pTVar5->m_TimeDelta;
  TStack_6.m_TapCount = pTVar5->m_TapCount;
  TStack_6.m_Phase = pTVar5->m_Phase;
  TStack_6.m_Type = pTVar5->m_Type;
  TStack_6.m_Pressure = pTVar5->m_Pressure;
  TStack_6.m_maximumPossiblePressure = pTVar5->m_maximumPossiblePressure;
  TStack_6.m_Radius = pTVar5->m_Radius;
  TStack_6.m_RadiusVariance = pTVar5->m_RadiusVariance;
  TStack_6.m_AltitudeAngle = pTVar5->m_AltitudeAngle;
  TStack_6.m_AzimuthAngle = pTVar5->m_AzimuthAngle;
  VVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_position
                    (&TStack_6,(MethodInfo *)0x0);
  fStack_8 = VVar7.x;
  __return_storage_ptr__->x = fStack_8;
  __return_storage_ptr__->y = (float)uStack_9;
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
  VStack_3.x = (pVVar2->zeroVector).x;
  VStack_3.y = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  if (cVar1 == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  (__return_storage_ptr__->m_Origin).x = VStack_3.x;
  (__return_storage_ptr__->m_Origin).y = VStack_3.y;
  (__return_storage_ptr__->m_Origin).z = fVar4;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&RStack_6.m_Direction,pVVar2->zeroVector,(MethodInfo *)0x0);
  fVar7 = pVVar5->y;
  fVar4 = pVVar5->z;
  (__return_storage_ptr__->m_Direction).x = pVVar5->x;
  (__return_storage_ptr__->m_Direction).y = fVar7;
  (__return_storage_ptr__->m_Direction).z = fVar4;
  iVar8 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if (iVar8 != 0) {
    pTVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                       ((Touch *)&puStack_10,0,(MethodInfo *)0x0);
    TStack_11.m_FingerId = pTVar9->m_FingerId;
    TStack_11.m_Position.x = (pTVar9->m_Position).x;
    TStack_11.m_Position.y = (pTVar9->m_Position).y;
    TStack_11.m_RawPosition.x = (pTVar9->m_RawPosition).x;
    TStack_11.m_RawPosition.y = (pTVar9->m_RawPosition).y;
    TStack_11.m_PositionDelta.x = (pTVar9->m_PositionDelta).x;
    TStack_11.m_PositionDelta.y = (pTVar9->m_PositionDelta).y;
    TStack_11.m_TimeDelta = pTVar9->m_TimeDelta;
    TStack_11.m_TapCount = pTVar9->m_TapCount;
    TStack_11.m_Phase = pTVar9->m_Phase;
    TStack_11.m_Type = pTVar9->m_Type;
    TStack_11.m_Pressure = pTVar9->m_Pressure;
    TStack_11.m_maximumPossiblePressure = pTVar9->m_maximumPossiblePressure;
    TStack_11.m_Radius = pTVar9->m_Radius;
    TStack_11.m_RadiusVariance = pTVar9->m_RadiusVariance;
    TStack_11.m_AltitudeAngle = pTVar9->m_AltitudeAngle;
    TStack_11.m_AzimuthAngle = pTVar9->m_AzimuthAngle;
    VVar12 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_position
                       (&TStack_11,(MethodInfo *)0x0);
    RStack_6.m_Direction.x = VStack_3.x;
    VStack_3.y = VVar12.y;
    RStack_6.m_Direction.y = VStack_3.y;
    RStack_6.m_Direction.z = 0.0;
    VStack_3 = VVar12;
    if (camera == (Camera *)0x0) {
      func_?();
      pcVar13 = (code *)swi(3);
      pRVar14 = (Ray *)(*pcVar13)();
      return pRVar14;
    }
    pos.y = VStack_3.y;
    pos.x = VStack_3.x;
    pos.z = 0.0;
    pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                       (&RStack_6,camera,pos,(MethodInfo *)0x0);
    fVar4 = (pRVar14->m_Origin).y;
    fVar7 = (pRVar14->m_Origin).z;
    fVar15 = (pRVar14->m_Direction).x;
    (__return_storage_ptr__->m_Origin).x = (pRVar14->m_Origin).x;
    (__return_storage_ptr__->m_Origin).y = fVar4;
    (__return_storage_ptr__->m_Origin).z = fVar7;
    (__return_storage_ptr__->m_Direction).x = fVar15;
    fVar4 = (pRVar14->m_Direction).z;
    (__return_storage_ptr__->m_Direction).y = (pRVar14->m_Direction).y;
    (__return_storage_ptr__->m_Direction).z = fVar4;
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
  if ((buttonIndex < iVar1) && (iVar1 <= (this->fields)._maxNumberOfTouches)) {
    return 1;
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
    pTVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                       ((Touch *)&stack0xffffff74,buttonIndex,(MethodInfo *)0x0);
    auStack_3._0_4_ = pTVar2->m_FingerId;
    auStack_3._4_4_ = (pTVar2->m_Position).x;
    auStack_3._8_4_ = (pTVar2->m_Position).y;
    fStack_4 = (pTVar2->m_RawPosition).x;
    fStack_5 = (pTVar2->m_RawPosition).y;
    pFStack_6 = (Func_2_Single_Single_ *)(pTVar2->m_PositionDelta).x;
    fStack_7 = (pTVar2->m_PositionDelta).y;
    pAStack_8 = (Action *)pTVar2->m_TimeDelta;
    iStack_9 = pTVar2->m_TapCount;
    pVStack_10 = (VisualElement *)pTVar2->m_Phase;
    pAStack_11 = (Action_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar2->m_Type;
    pFStack_12 = (Func_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar2->m_Pressure;
    pFStack_13 = (Func_4_UnityEngine_UIElements_Experimental_StyleValues_UnityEngine_UIElements_Experimental_StyleValues_Single_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar2->m_maximumPossiblePressure;
    SStack_14.m_StyleValues = (StyleValueCollection *)pTVar2->m_Radius;
    fStack_15 = pTVar2->m_RadiusVariance;
    SStack_16.m_StyleValues = (StyleValueCollection *)pTVar2->m_AltitudeAngle;
    fStack_17 = pTVar2->m_AzimuthAngle;
    pVVar18 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
             ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                       ((ValueAnimation_1_StyleValues_ *)auStack_3,(MethodInfo *)0x0);
    return pVVar18 == (VisualElement *)0x0;
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
    pTVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                       ((Touch *)&stack0xffffff74,buttonIndex,(MethodInfo *)0x0);
    auStack_3._0_4_ = pTVar2->m_FingerId;
    auStack_3._4_4_ = (pTVar2->m_Position).x;
    auStack_3._8_4_ = (pTVar2->m_Position).y;
    fStack_4 = (pTVar2->m_RawPosition).x;
    fStack_5 = (pTVar2->m_RawPosition).y;
    pFStack_6 = (Func_2_Single_Single_ *)(pTVar2->m_PositionDelta).x;
    fStack_7 = (pTVar2->m_PositionDelta).y;
    pAStack_8 = (Action *)pTVar2->m_TimeDelta;
    iStack_9 = pTVar2->m_TapCount;
    pVStack_10 = (VisualElement *)pTVar2->m_Phase;
    pAStack_11 = (Action_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar2->m_Type;
    pFStack_12 = (Func_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar2->m_Pressure;
    pFStack_13 = (Func_4_UnityEngine_UIElements_Experimental_StyleValues_UnityEngine_UIElements_Experimental_StyleValues_Single_UnityEngine_UIElements_Experimental_StyleValues_
                  *)pTVar2->m_maximumPossiblePressure;
    SStack_14.m_StyleValues = (StyleValueCollection *)pTVar2->m_Radius;
    fStack_15 = pTVar2->m_RadiusVariance;
    SStack_16.m_StyleValues = (StyleValueCollection *)pTVar2->m_AltitudeAngle;
    fStack_17 = pTVar2->m_AzimuthAngle;
    pVVar18 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
             ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                       ((ValueAnimation_1_StyleValues_ *)auStack_3,(MethodInfo *)0x0);
    if (pVVar18 == (VisualElement *)0x3) {
      return 1;
    }
    pVVar18 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
             ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                       ((ValueAnimation_1_StyleValues_ *)auStack_3,(MethodInfo *)0x0);
    return pVVar18 == (VisualElement *)0x4;
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

