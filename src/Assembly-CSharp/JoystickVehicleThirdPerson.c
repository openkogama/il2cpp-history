
/* Void CreateVirtualAxes() */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_CreateVirtualAxes
               (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).horizontalAxisName;
  pCVar2 = (CrossPlatformInputManager_VirtualAxis *)
           FUN_?(
                        TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                        );
  iVar3 = iRam_?;
  (pCVar2->fields)._name_k__BackingField = pSVar1;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&pCVar2->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (pCVar2->fields)._matchWithInputManager_k__BackingField = 1;
  (this->fields).m_HorizontalVirtualAxis = pCVar2;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).m_HorizontalVirtualAxis >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pSVar1 = (this->fields).verticalAxisName;
  pCVar2 = (CrossPlatformInputManager_VirtualAxis *)
           FUN_?(
                        TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                        );
  iVar3 = iRam_?;
  (pCVar2->fields)._name_k__BackingField = pSVar1;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&pCVar2->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (pCVar2->fields)._matchWithInputManager_k__BackingField = 1;
  (this->fields).m_VerticalVirtualAxis = pCVar2;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).m_VerticalVirtualAxis >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_OnDrag
               (JoystickVehicleThirdPerson *this,PointerEventData *data,MethodInfo *method)

{
  if (data != (PointerEventData *)0x0) {
    VStack_1 = (data->fields)._position_k__BackingField;
    fStack_2 = 0.0;
    JoystickVehicleThirdPerson_UpdateVirtualAxes(this,(Vector3 *)&VStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_OnPointerDown
               (JoystickVehicleThirdPerson *this,PointerEventData *data,MethodInfo *method)

{
  if (data == (PointerEventData *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar2 = (data->fields)._position_k__BackingField.y;
  (this->fields).startPos.x = (data->fields)._position_k__BackingField.x;
  (this->fields).startPos.y = fVar2;
  (this->fields).startPos.z = 0.0;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_3 = CONCAT44((data->fields)._position_k__BackingField.y,
                       (data->fields)._position_k__BackingField.x);
  uStack_4 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_OnPointerUp
               (JoystickVehicleThirdPerson *this,PointerEventData *data,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2._0_4_ = (this->fields).startPos.x;
  uStack_2._4_4_ = (this->fields).startPos.y;
  fStack_3 = (this->fields).startPos.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  VStack_6.x = (this->fields).startPos.x;
  VStack_6.y = (this->fields).startPos.y;
  (this->fields).desiredDeltaX = 0.0;
  (this->fields).currentDeltaX = 0.0;
  VStack_6.z = (this->fields).startPos.z;
  JoystickVehicleThirdPerson_UpdateVirtualAxes(this,&VStack_6,(MethodInfo *)0x0);
  return;
}


/* Void RegisterAxes() */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_RegisterAxes
               (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).m_HorizontalVirtualAxis;
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
  CrossPlatformInputManager_RegisterVirtualAxis(pCVar1,(MethodInfo *)0x0);
  pCVar1 = (this->fields).m_VerticalVirtualAxis;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar2 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pCVar1 != (CrossPlatformInputManager_VirtualAxis *)0x0) &&
       (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)(pVVar2->fields).m_VirtualAxes,
       this_00 !=
       (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
       0x0)) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_00,(Object *)(pCVar1->fields)._name_k__BackingField,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar3) {
        pDVar4 = (pVVar2->fields).m_VirtualAxes;
        if (pDVar4 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)(pCVar1->fields)._name_k__BackingField,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                  );
      }
      pDVar4 = (pVVar2->fields).m_VirtualAxes;
      if (pDVar4 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)(pCVar1->fields)._name_k__BackingField,(Object *)pCVar1,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                   ->klass->rgctx_data[0x22].method);
        pMVar5 = 
        MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
        if ((pCVar1->fields)._matchWithInputManager_k__BackingField != 0) {
          return;
        }
        this_01 = (pVVar2->fields).m_AlwaysUseVirtual;
        item = (pCVar1->fields)._name_k__BackingField;
        if (this_01 != (List_1_System_String_ *)0x0) {
          piVar6 = &(this_01->fields)._version;
          *piVar6 = *piVar6 + 1;
          pSVar7 = (this_01->fields)._items;
          if (pSVar7 != (String__Array *)0x0) {
            uVar8 = (this_01->fields)._size;
            if ((uint)pSVar7->max_length <= uVar8) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)this_01,(Object *)item,
                         pMVar5->klass->rgctx_data[0xe].method);
              return;
            }
            (this_01->fields)._size = uVar8 + 1;
            if (uVar8 < (uint)pSVar7->max_length) {
              bVar9 = iRam_? != 0;
              pSVar7->vector[(int)uVar8] = item;
              if (bVar9) {
                uVar8 = (uint)((ulonglong)(pSVar7->vector + (int)uVar8) >> 0xc);
                puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar11 = *puVar10;
                  LOCK();
                  uVar12 = *puVar10;
                  if (uVar11 == uVar12) {
                    *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar11 != uVar12);
              }
              return;
            }
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_Reset
               (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2._0_4_ = (this->fields).startPos.x;
  uStack_2._4_4_ = (this->fields).startPos.y;
  fStack_3 = (this->fields).startPos.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  VStack_6.x = (this->fields).startPos.x;
  VStack_6.y = (this->fields).startPos.y;
  (this->fields).desiredDeltaX = 0.0;
  (this->fields).currentDeltaX = 0.0;
  VStack_6.z = (this->fields).startPos.z;
  JoystickVehicleThirdPerson_UpdateVirtualAxes(this,&VStack_6,(MethodInfo *)0x0);
  return;
}


/* Void UpdateVirtualAxes(Vector3) */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_UpdateVirtualAxes
               (JoystickVehicleThirdPerson *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = value->x;
  uVar2 = value->y;
  uVar3 = (this->fields).startPos.x;
  uVar4 = (this->fields).startPos.y;
  fVar5 = (float)uVar1 - (float)uVar3;
  fVar6 = (float)uVar2 - (float)uVar4;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar7 = (this->fields).baseMovementRangeX;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStackX_8 = VVar8.x;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar9 = (this->fields).baseMovementRangeX;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  uVar10 = _UNK_?;
  fVar11 = (float)((uint)((float)iVar7 * fStackX_8) ^ _UNK_?);
  fStackX_8 = VVar8.x;
  fStackX_8 = (float)iVar9 * fStackX_8;
  if (fVar5 < fVar11) {
    fVar12 = 0.0;
  }
  else {
    fVar11 = fVar5;
    fVar12 = (float)uVar2;
    if (fStackX_8 < fVar5) {
      fVar11 = fStackX_8;
      fVar12 = 0.0;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar7 = (this->fields).baseMovementRangeY;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStackX_8 = VVar8.x;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar9 = (this->fields).baseMovementRangeY;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fVar5 = (float)((uint)((float)iVar7 * fStackX_8) ^ uVar10);
  fVar13 = 0.0;
  fStackX_8 = VVar8.x;
  fStackX_8 = (float)iVar9 * fStackX_8;
  if ((fVar5 <= fVar6) && (fVar5 = fVar6, fVar13 = (float)uVar2, fStackX_8 < fVar6)) {
    fVar13 = 0.0;
    fVar5 = fStackX_8;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar15 = (obj->fields)._._.m_CachedPtr;
  if (pvVar15 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(pvVar15);
  fVar6 = _UNK_?;
  if (fVar11 < 0.0) {
    fVar6 = _UNK_?;
  }
  fVar17 = _UNK_?;
  if (fVar5 < 0.0) {
    fVar17 = _UNK_?;
  }
  pAVar18 = (this->fields).deltaMovementModifierX;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar7 = (this->fields).baseMovementRangeX;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  if (pAVar18 != (AnimationCurve *)0x0) {
    pvVar15 = (pAVar18->fields).m_Ptr;
    if (pvVar15 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar18,(MethodInfo *)0x0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    fStackX_8 = VVar8.x;
    uVar10 = (uint)(fVar11 / ((float)iVar7 * fStackX_8)) & _UNK_?;
    uVar19 = (uint)fVar12 & _UNK_?;
    pcVar14 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pcRam_? = pcVar14;
    fVar11 = (float)(*pcRam_?)(pvVar15,CONCAT44(uVar19,uVar10));
    bVar20 = cRam_? == '\0';
    pAVar18 = (this->fields).deltaMovementModifierY;
    (this->fields).desiredDeltaX = fVar11 * fVar6;
    if (bVar20) {
      FUN_?(&TypeInfo__ResolutionManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar7 = (this->fields).baseMovementRangeY;
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    VVar8 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
    if (pAVar18 != (AnimationCurve *)0x0) {
      pvVar15 = (pAVar18->fields).m_Ptr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar18,(MethodInfo *)0x0);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      fStackX_8 = VVar8.x;
      uVar10 = (uint)(fVar5 / ((float)iVar7 * fStackX_8)) & _UNK_?;
      uVar19 = (uint)fVar13 & _UNK_?;
      pcVar14 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pcRam_? = pcVar14;
      fVar5 = (float)(*pcRam_?)(pvVar15,CONCAT44(uVar19,uVar10));
      pCVar21 = (this->fields).m_HorizontalVirtualAxis;
      fVar6 = (this->fields).desiredDeltaX;
      (this->fields).currentDeltaX = fVar6;
      if (pCVar21 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
        (pCVar21->fields).m_Value = fVar6;
        pCVar21 = (this->fields).m_VerticalVirtualAxis;
        if (pCVar21 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
          (pCVar21->fields).m_Value = fVar5 * fVar17;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* JoystickVehicleThirdPerson() */

void Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson__ctor
               (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Vertical);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Horizontal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).baseMovementRangeX = 0x28;
  (this->fields).baseMovementRangeY = 0x28;
  (this->fields).horizontalAxisName = StringLiteral_Horizontal;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).horizontalAxisName >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).verticalAxisName = StringLiteral_Vertical;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).verticalAxisName >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar7 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar8 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar3 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar8;
  if (lVar3 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar3 = lRam_?;
  }
  else {
    do {
      uVar2 = (uint)ppMVar9;
      LOCK();
      bVar6 = uVar2 != uRam_?;
      uVar10 = uVar2;
      uVar11 = uVar2 + 1;
      if (bVar6) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar6) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar10, uVar2 = uVar10, uVar10 != 2)
            );
    while (uVar2 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar2 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar3;
  puVar12 = &(pOVar7->_1).field_0x1c;
  LOCK();
  bVar6 = *(int *)puVar12 == 1;
  if (bVar6) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar2 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar7->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar6 = *puVar13 == 1;
  if (bVar6) {
    *puVar13 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar2 = GetCurrentThreadId();
    psVar14 = &(pOVar7->_1).cctor_thread;
    LOCK();
    bVar6 = (ulonglong)uVar2 == *psVar14;
    if (bVar6) {
      *psVar14 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (bVar6) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar7->_1).field_0x1c;
      LOCK();
      bVar6 = *(int *)puVar12 == 1;
      if (bVar6) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar6) break;
      LOCK();
      lVar3._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
      lVar3._4_4_ = (pOVar7->_1).cctor_started;
      if (lVar3 == 0) {
        (pOVar7->_1).initializationExceptionGCHandle = 0;
        (pOVar7->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar3 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar7->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar2 = GetCurrentThreadId();
    LOCK();
    (pOVar7->_1).cctor_thread = (ulonglong)uVar2;
    UNLOCK();
    LOCK();
    (pOVar7->_1).cctor_finished_or_no_cctor = 1;
    uVar2 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar7->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar7);
      ppMVar9 = ppMVar8;
      pIVar16 = (Il2CppClass *)pOVar7;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar9 = pIVar16->methods;
            pMVar17 = *ppMVar9;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar8;
                while (pcVar19 = (char *)((longlong)ppMVar18 + 0xADDR),
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *pcVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar9 = ppMVar8;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar7->_1).cctor_thread = 0;
    uVar4 = _UNK_?;
    uVar20 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar7->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar7->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_23 < 0x10) {
code_?:
      lVar3 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      uStack_22 = uVar20;
      uStack_23 = uVar4;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar3 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar3;
        if (iRam_? != 0) {
          uVar2 = (uint)(lVar15 + 0x28U >> 0xc);
          puVar5 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar25 = *puVar5;
            LOCK();
            uVar4 = *puVar5;
            if (uVar25 == uVar4) {
              *puVar5 = uVar25 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (uVar25 != uVar4);
        }
      }
      FUN_?(pOVar7,lVar15);
      if (0xf < uStack_24) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17))))
        goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      uVar20 = _UNK_?;
      uVar4 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar20._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
  uVar20._4_4_ = (pOVar7->_1).cctor_started;
  uVar20 = FUN_?(uVar20);
  FUN_?(uVar20,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Single get_MovementRangeX() */

float Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_get_MovementRangeX
                (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).baseMovementRangeX;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStackX_8 = VVar2.x;
  return (float)iVar1 * fStackX_8;
}


/* Single get_MovementRangeY() */

float Assembly-CSharp.dll::JoystickVehicleThirdPerson::JoystickVehicleThirdPerson_get_MovementRangeY
                (JoystickVehicleThirdPerson *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).baseMovementRangeY;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar2 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStackX_8 = VVar2.x;
  return (float)iVar1 * fStackX_8;
}

