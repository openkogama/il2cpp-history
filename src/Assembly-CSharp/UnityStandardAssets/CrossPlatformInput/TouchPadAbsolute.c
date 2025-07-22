
/* Void CreateVirtualAxes() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_CreateVirtualAxes(TouchPadAbsolute *this,MethodInfo *method)

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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pCVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar2);
  (pCVar3->fields)._name_k__BackingField = pSVar1;
  func_?(&pCVar3->fields,pSVar1);
  (pCVar3->fields)._matchWithInputManager_k__BackingField = 1;
  (this->fields).horizontalVirtualAxis = pCVar3;
  func_?(&(this->fields).horizontalVirtualAxis,pCVar3);
  pSVar1 = (this->fields).verticalAxisName;
  pCVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
  ;
  pCVar3 = (CrossPlatformInputManager_VirtualAxis *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pCVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar2);
  (pCVar3->fields)._name_k__BackingField = pSVar1;
  func_?(&pCVar3->fields,pSVar1);
  (pCVar3->fields)._matchWithInputManager_k__BackingField = 1;
  (this->fields).verticalVirtualAxis = pCVar3;
  func_?(&(this->fields).verticalVirtualAxis,pCVar3);
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_OnDisable(TouchPadAbsolute *this,MethodInfo *method)

{
  (this->fields).dragging = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  uVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  if (((this->fields).state & 1) != 0) {
    pCVar3 = (this->fields).horizontalVirtualAxis;
    if (pCVar3 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
    (pCVar3->fields).m_Value = (float)uVar1;
  }
  if (((this->fields).state & 2) != 0) {
    pCVar3 = (this->fields).verticalVirtualAxis;
    if (pCVar3 == (CrossPlatformInputManager_VirtualAxis *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pCVar3->fields).m_Value = (float)uVar2;
  }
  (this->fields).state = 3;
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_OnPointerDown
               (TouchPadAbsolute *this,PointerEventData *data,MethodInfo *method)

{
  if ((this->fields).dragging == 0) {
    bVar1 = cRam_? == '\0';
    (this->fields).dragging = 1;
    if (bVar1) {
      func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager)
      ;
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    bVar2 = mscorlib.dll::System::String::String_op_Inequality
                      ((this->fields).onTouchButtonName,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      name = (this->fields).onTouchButtonName;
      if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       );
      }
      CrossPlatformInputManager::CrossPlatformInputManager_SetButtonDown(name,(MethodInfo *)0x0);
    }
    if (data == (PointerEventData *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).fingerId = (data->fields)._pointerId_k__BackingField;
    fVar4 = (data->fields)._position_k__BackingField.y;
    (this->fields).previousInputPosition.x = (data->fields)._position_k__BackingField.x;
    (this->fields).previousInputPosition.y = fVar4;
  }
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_OnPointerUp(TouchPadAbsolute *this,PointerEventData *data,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).state = 3;
  (this->fields).dragging = 0;
  if (bVar1) {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar2 = mscorlib.dll::System::String::String_op_Inequality
                    ((this->fields).onTouchButtonName,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    name = (this->fields).onTouchButtonName;
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    CrossPlatformInputManager::CrossPlatformInputManager_SetButtonUp(name,(MethodInfo *)0x0);
  }
  (this->fields).fingerId = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  uVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  if (((this->fields).state & 1) != 0) {
    pCVar5 = (this->fields).horizontalVirtualAxis;
    if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
    (pCVar5->fields).m_Value = (float)uVar3;
  }
  if (((this->fields).state & 2) != 0) {
    pCVar5 = (this->fields).verticalVirtualAxis;
    if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (pCVar5->fields).m_Value = (float)uVar4;
  }
  return;
}


/* Void RegisterAxes() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_RegisterAxes(TouchPadAbsolute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  axis = (this->fields).horizontalVirtualAxis;
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  CrossPlatformInputManager::CrossPlatformInputManager_RegisterVirtualAxis(axis,(MethodInfo *)0x0);
  CrossPlatformInputManager::CrossPlatformInputManager_RegisterVirtualAxis
            ((this->fields).verticalVirtualAxis,(MethodInfo *)0x0);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_Reset(TouchPadAbsolute *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).fingerId = -1;
  (this->fields).dragging = 0;
  if (bVar1) {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar2 = mscorlib.dll::System::String::String_op_Inequality
                    ((this->fields).onTouchButtonName,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    name = (this->fields).onTouchButtonName;
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    CrossPlatformInputManager::CrossPlatformInputManager_SetButtonUp(name,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  uVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  if (((this->fields).state & 1) != 0) {
    pCVar5 = (this->fields).horizontalVirtualAxis;
    if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
    (pCVar5->fields).m_Value = (float)uVar3;
  }
  if (((this->fields).state & 2) != 0) {
    pCVar5 = (this->fields).verticalVirtualAxis;
    if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (pCVar5->fields).m_Value = (float)uVar4;
  }
  return;
}


/* Void SetOnPointButton(Boolean) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_SetOnPointButton(TouchPadAbsolute *this,bool isDown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Inequality
                    ((this->fields).onTouchButtonName,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    name = (this->fields).onTouchButtonName;
    if (isDown == 0) {
      if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      CrossPlatformInputManager::CrossPlatformInputManager_SetButtonUp(name,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    CrossPlatformInputManager::CrossPlatformInputManager_SetButtonDown(name,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean TryGetTouch(Touch ByRef, Int32) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_TryGetTouch
               (TouchPadAbsolute *this,Touch *touch,int32_t fingerId,MethodInfo *method)

{
  func_?(&iStack_1,0,0x44);
  func_?(touch,0,0x44);
  pTVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touches
                     ((MethodInfo *)0x0);
  uVar3 = 0;
  if (pTVar2 == (Touch__Array *)0x0) {
    func_?();
  }
  else {
    pTVar4 = pTVar2->vector;
    while( true ) {
      if ((int)pTVar2->max_length <= (int)uVar3) {
        return 0;
      }
      if (pTVar2->max_length <= uVar3) break;
      iStack_1 = pTVar4->m_FingerId;
      fStack_5 = (pTVar4->m_Position).x;
      fStack_6 = (pTVar4->m_Position).y;
      fStack_7 = (pTVar4->m_RawPosition).x;
      fStack_8 = (pTVar4->m_RawPosition).y;
      fStack_9 = (pTVar4->m_PositionDelta).x;
      fStack_10 = (pTVar4->m_PositionDelta).y;
      fStack_11 = pTVar4->m_TimeDelta;
      iStack_12 = pTVar4->m_TapCount;
      iStack_13 = pTVar4->m_Phase;
      iStack_14 = pTVar4->m_Type;
      fStack_15 = pTVar4->m_Pressure;
      fStack_16 = pTVar4->m_maximumPossiblePressure;
      fStack_17 = pTVar4->m_Radius;
      fStack_18 = pTVar4->m_RadiusVariance;
      fStack_19 = pTVar4->m_AltitudeAngle;
      fStack_20 = pTVar4->m_AzimuthAngle;
      pvVar21 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_6
                         ((uint8_t *)&iStack_1,(MethodInfo *)0x0);
      if (pvVar21 == (void *)fingerId) {
        touch->m_FingerId = iStack_1;
        (touch->m_Position).x = fStack_5;
        (touch->m_Position).y = fStack_6;
        (touch->m_RawPosition).x = fStack_7;
        (touch->m_RawPosition).y = fStack_8;
        (touch->m_PositionDelta).x = fStack_9;
        (touch->m_PositionDelta).y = fStack_10;
        touch->m_TimeDelta = fStack_11;
        touch->m_TapCount = iStack_12;
        touch->m_Phase = iStack_13;
        touch->m_Type = iStack_14;
        touch->m_Pressure = fStack_15;
        touch->m_maximumPossiblePressure = fStack_16;
        touch->m_Radius = fStack_17;
        touch->m_RadiusVariance = fStack_18;
        touch->m_AltitudeAngle = fStack_19;
        touch->m_AzimuthAngle = fStack_20;
        return 1;
      }
      uVar3 = uVar3 + 1;
      pTVar4 = pTVar4 + 1;
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  bVar23 = (*pcVar22)();
  return bVar23;
}


/* Void Update() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_Update(TouchPadAbsolute *this,MethodInfo *method)

{
  if ((this->fields).dragging == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  pvStack_1 = (void *)(this->fields).fingerId;
  func_?(&pRStack_2,0,0x44);
  func_?(&TStack_3,0,0x44);
  pTStack_4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touches
                        ((MethodInfo *)0x0);
  uVar5 = 0;
  if (pTStack_4 != (Touch__Array *)0x0) {
    pTVar6 = pTStack_4->vector;
    for (; (int)uVar5 < (int)pTStack_4->max_length; uVar5 = uVar5 + 1) {
      if (pTStack_4->max_length <= uVar5) goto code_?;
      pRStack_2 = (ResolutionManager__Class *)pTVar6->m_FingerId;
      fStack_7 = (pTVar6->m_Position).x;
      fStack_8 = (pTVar6->m_Position).y;
      fStack_9 = (pTVar6->m_RawPosition).x;
      fStack_10 = (pTVar6->m_RawPosition).y;
      fStack_11 = (pTVar6->m_PositionDelta).x;
      fStack_12 = (pTVar6->m_PositionDelta).y;
      fStack_13 = pTVar6->m_TimeDelta;
      iStack_14 = pTVar6->m_TapCount;
      iStack_15 = pTVar6->m_Phase;
      iStack_16 = pTVar6->m_Type;
      fStack_17 = pTVar6->m_Pressure;
      fStack_18 = pTVar6->m_maximumPossiblePressure;
      fStack_19 = pTVar6->m_Radius;
      fStack_20 = pTVar6->m_RadiusVariance;
      fStack_21 = pTVar6->m_AltitudeAngle;
      fStack_22 = pTVar6->m_AzimuthAngle;
      pvVar23 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_6
                         ((uint8_t *)&pRStack_2,(MethodInfo *)0x0);
      if (pvVar23 == pvStack_1) {
        TStack_3.m_AzimuthAngle = fStack_22;
        TStack_3.m_FingerId = (int32_t)pRStack_2;
        TStack_3.m_Position.x = fStack_7;
        TStack_3.m_Position.y = fStack_8;
        TStack_3.m_RawPosition.x = fStack_9;
        TStack_3.m_RawPosition.y = fStack_10;
        TStack_3.m_PositionDelta.x = fStack_11;
        TStack_3.m_PositionDelta.y = fStack_12;
        TStack_3.m_TimeDelta = fStack_13;
        TStack_3.m_TapCount = iStack_14;
        TStack_3.m_Phase = iStack_15;
        TStack_3.m_Type = iStack_16;
        TStack_3.m_Pressure = fStack_17;
        TStack_3.m_maximumPossiblePressure = fStack_18;
        TStack_3.m_Radius = fStack_19;
        TStack_3.m_RadiusVariance = fStack_20;
        TStack_3.m_AltitudeAngle = fStack_21;
        if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
          TStack_3.m_FingerId = (int32_t)TypeInfo__ResolutionManager;
          func_?();
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__ResolutionManager);
          cRam_? = '\x01';
        }
        if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__ResolutionManager);
        }
        VStack_24 = ResolutionManager::ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
        iVar25 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0)
        ;
        pTStack_4 = (Touch__Array *)TypeInfo__ResolutionManager->static_fields->dpiScale;
        VVar26 = ResolutionManager::ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
        fStack_27 = VVar26.y;
        iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        pTStack_4 = (Touch__Array *)((VStack_24.x / (float)iVar25) * (float)pTStack_4);
        fVar29 = (this->fields).previousInputPosition.x;
        fStack_27 = (fStack_27 / (float)iVar28) *
                    TypeInfo__ResolutionManager->static_fields->dpiScale;
        VVar26 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_position
                           (&TStack_3,(MethodInfo *)0x0);
        fStack_30 = VVar26.x;
        pvStack_1 = (void *)(this->fields).previousInputPosition.y;
        VVar26 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_position
                           (&TStack_3,(MethodInfo *)0x0);
        fStack_31 = VVar26.y;
        VStack_24 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_position
                              (&TStack_3,(MethodInfo *)0x0);
        iVar25 = (this->fields).state;
        (this->fields).previousInputPosition.x = VStack_24.x;
        (this->fields).previousInputPosition.y = VStack_24.y;
        if ((iVar25 & 1) != 0) {
          pCVar32 = (this->fields).horizontalVirtualAxis;
          if (pCVar32 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
          (pCVar32->fields).m_Value =
               (float)((uint)((fVar29 - fStack_30) * (float)pTStack_4) ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        }
        if (((this->fields).state & 2) == 0) {
          return;
        }
        pCVar32 = (this->fields).verticalVirtualAxis;
        if (pCVar32 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
          (pCVar32->fields).m_Value = ((float)pvStack_1 - fStack_31) * fStack_27;
          return;
        }
        goto code_?;
      }
      pTVar6 = pTVar6 + 1;
    }
    bVar33 = cRam_? == '\0';
    (this->fields).fingerId = -1;
    (this->fields).dragging = 0;
    if (bVar33) {
      func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager)
      ;
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    bVar34 = mscorlib.dll::System::String::String_op_Inequality
                      ((this->fields).onTouchButtonName,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar34 != 0) {
      name = (this->fields).onTouchButtonName;
      if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       );
      }
      CrossPlatformInputManager::CrossPlatformInputManager_SetButtonUp(name,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uStack_35._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uStack_35._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    if (((this->fields).state & 1) != 0) {
      pCVar32 = (this->fields).horizontalVirtualAxis;
      if (pCVar32 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar32->fields).m_Value = (float)(undefined4)uStack_35;
    }
    if (((this->fields).state & 2) == 0) {
      return;
    }
    pCVar32 = (this->fields).verticalVirtualAxis;
    if (pCVar32 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
      (pCVar32->fields).m_Value = (float)uStack_35._4_4_;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void UpdateAxis() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_UpdateAxis(TouchPadAbsolute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  pvStack_1 = (void *)(this->fields).fingerId;
  func_?(&pRStack_2,0,0x44);
  func_?(&TStack_3,0,0x44);
  pTStack_4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touches
                        ((MethodInfo *)0x0);
  uVar5 = 0;
  if (pTStack_4 != (Touch__Array *)0x0) {
    pTVar6 = pTStack_4->vector;
    for (; (int)uVar5 < (int)pTStack_4->max_length; uVar5 = uVar5 + 1) {
      if (pTStack_4->max_length <= uVar5) goto code_?;
      pRStack_2 = (ResolutionManager__Class *)pTVar6->m_FingerId;
      fStack_7 = (pTVar6->m_Position).x;
      fStack_8 = (pTVar6->m_Position).y;
      fStack_9 = (pTVar6->m_RawPosition).x;
      fStack_10 = (pTVar6->m_RawPosition).y;
      fStack_11 = (pTVar6->m_PositionDelta).x;
      fStack_12 = (pTVar6->m_PositionDelta).y;
      fStack_13 = pTVar6->m_TimeDelta;
      iStack_14 = pTVar6->m_TapCount;
      iStack_15 = pTVar6->m_Phase;
      iStack_16 = pTVar6->m_Type;
      fStack_17 = pTVar6->m_Pressure;
      fStack_18 = pTVar6->m_maximumPossiblePressure;
      fStack_19 = pTVar6->m_Radius;
      fStack_20 = pTVar6->m_RadiusVariance;
      fStack_21 = pTVar6->m_AltitudeAngle;
      fStack_22 = pTVar6->m_AzimuthAngle;
      pvVar23 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_6
                         ((uint8_t *)&pRStack_2,(MethodInfo *)0x0);
      if (pvVar23 == pvStack_1) {
        TStack_3.m_AzimuthAngle = fStack_22;
        TStack_3.m_FingerId = (int32_t)pRStack_2;
        TStack_3.m_Position.x = fStack_7;
        TStack_3.m_Position.y = fStack_8;
        TStack_3.m_RawPosition.x = fStack_9;
        TStack_3.m_RawPosition.y = fStack_10;
        TStack_3.m_PositionDelta.x = fStack_11;
        TStack_3.m_PositionDelta.y = fStack_12;
        TStack_3.m_TimeDelta = fStack_13;
        TStack_3.m_TapCount = iStack_14;
        TStack_3.m_Phase = iStack_15;
        TStack_3.m_Type = iStack_16;
        TStack_3.m_Pressure = fStack_17;
        TStack_3.m_maximumPossiblePressure = fStack_18;
        TStack_3.m_Radius = fStack_19;
        TStack_3.m_RadiusVariance = fStack_20;
        TStack_3.m_AltitudeAngle = fStack_21;
        if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
          TStack_3.m_FingerId = (int32_t)TypeInfo__ResolutionManager;
          func_?();
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__ResolutionManager);
          cRam_? = '\x01';
        }
        if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__ResolutionManager);
        }
        VStack_24 = ResolutionManager::ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
        iVar25 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0)
        ;
        pTStack_4 = (Touch__Array *)TypeInfo__ResolutionManager->static_fields->dpiScale;
        VVar26 = ResolutionManager::ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
        fStack_27 = VVar26.y;
        iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        pTStack_4 = (Touch__Array *)((VStack_24.x / (float)iVar25) * (float)pTStack_4);
        fVar29 = (this->fields).previousInputPosition.x;
        fStack_27 = (fStack_27 / (float)iVar28) *
                    TypeInfo__ResolutionManager->static_fields->dpiScale;
        VVar26 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_position
                           (&TStack_3,(MethodInfo *)0x0);
        fStack_30 = VVar26.x;
        pvStack_1 = (void *)(this->fields).previousInputPosition.y;
        VVar26 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_position
                           (&TStack_3,(MethodInfo *)0x0);
        fStack_31 = VVar26.y;
        VStack_24 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_position
                              (&TStack_3,(MethodInfo *)0x0);
        iVar25 = (this->fields).state;
        (this->fields).previousInputPosition.x = VStack_24.x;
        (this->fields).previousInputPosition.y = VStack_24.y;
        if ((iVar25 & 1) != 0) {
          pCVar32 = (this->fields).horizontalVirtualAxis;
          if (pCVar32 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
          (pCVar32->fields).m_Value =
               (float)((uint)((fVar29 - fStack_30) * (float)pTStack_4) ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        }
        if (((this->fields).state & 2) == 0) {
          return;
        }
        pCVar32 = (this->fields).verticalVirtualAxis;
        if (pCVar32 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
          (pCVar32->fields).m_Value = ((float)pvStack_1 - fStack_31) * fStack_27;
          return;
        }
        goto code_?;
      }
      pTVar6 = pTVar6 + 1;
    }
    bVar33 = cRam_? == '\0';
    (this->fields).fingerId = -1;
    (this->fields).dragging = 0;
    if (bVar33) {
      func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager)
      ;
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    bVar34 = mscorlib.dll::System::String::String_op_Inequality
                      ((this->fields).onTouchButtonName,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar34 != 0) {
      name = (this->fields).onTouchButtonName;
      if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       );
      }
      CrossPlatformInputManager::CrossPlatformInputManager_SetButtonUp(name,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uStack_35._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uStack_35._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    if (((this->fields).state & 1) != 0) {
      pCVar32 = (this->fields).horizontalVirtualAxis;
      if (pCVar32 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar32->fields).m_Value = (float)(undefined4)uStack_35;
    }
    if (((this->fields).state & 2) == 0) {
      return;
    }
    pCVar32 = (this->fields).verticalVirtualAxis;
    if (pCVar32 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
      (pCVar32->fields).m_Value = (float)uStack_35._4_4_;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void UpdateVirtualAxes(Vector3) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_UpdateVirtualAxes(TouchPadAbsolute *this,Vector3 value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (((this->fields).state & 1) != 0) {
    pCVar2 = (this->fields).horizontalVirtualAxis;
    if (pCVar2 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
    (pCVar2->fields).m_Value = value.x;
  }
  if (((this->fields).state & 2) != 0) {
    pCVar2 = (this->fields).verticalVirtualAxis;
    if (pCVar2 == (CrossPlatformInputManager_VirtualAxis *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pCVar2->fields).m_Value = value.y;
  }
  return;
}


/* TouchPadAbsolute() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute__ctor(TouchPadAbsolute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Vertical);
    func_?(&StringLiteral_Horizontal);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).state = 3;
  (this->fields).horizontalAxisName = StringLiteral_Horizontal;
  func_?(&(this->fields).horizontalAxisName,StringLiteral_Horizontal);
  (this->fields).verticalAxisName = StringLiteral_Vertical;
  func_?(&(this->fields).verticalAxisName,StringLiteral_Vertical);
  (this->fields).onTouchButtonName = ::StringLiteral__;
  func_?(&(this->fields).onTouchButtonName,::StringLiteral__);
  (this->fields).fingerId = -1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

