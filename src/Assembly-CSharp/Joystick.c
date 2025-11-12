
/* Void Awake() */

void Assembly-CSharp.dll::Joystick::Joystick_Awake(Joystick *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UIElipsoidHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
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
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
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
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
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
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar3 = (this->fields).baseMovementRangeX;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar9 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  fStackX_8 = VVar9.x;
  width = (float)iVar3 * fStackX_8;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar3 = (this->fields).baseMovementRangeY;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar9 = ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  this_00 = (UIElipsoidHelper *)FUN_?(TypeInfo__UIElipsoidHelper);
  fStackX_8 = VVar9.x;
  UIElipsoidHelper::UIElipsoidHelper__ctor(this_00,width,(float)iVar3 * fStackX_8,(MethodInfo *)0x0)
  ;
  bVar8 = iRam_? != 0;
  (this->fields).elipsoidHelper = this_00;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(this->fields).elipsoidHelper >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
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


/* Void CreateVirtualAxes() */

void Assembly-CSharp.dll::Joystick::Joystick_CreateVirtualAxes(Joystick *this,MethodInfo *method)

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

void Assembly-CSharp.dll::Joystick::Joystick_OnDrag
               (Joystick *this,PointerEventData *data,MethodInfo *method)

{
  if (data != (PointerEventData *)0x0) {
    VStack_1 = (data->fields)._position_k__BackingField;
    fStack_2 = 0.0;
    Joystick_UpdateVirtualAxes(this,(Vector3 *)&VStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this,(MethodInfo *)0x0);
    if (obj == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar5,&uStack_3);
    fVar1 = (data->fields)._position_k__BackingField.x;
    fVar7 = (data->fields)._position_k__BackingField.y;
    pJVar8 = (this->fields).joystickLockAxis;
    if ((pJVar8 != (JoystickLockAxis *)0x0) &&
       (pSVar9 = (pJVar8->fields).smoothTouchAxis, pSVar9 != (SmoothTouchAxis *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Clear__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar10 = (pSVar9->fields).prevVelocities;
      if (pQVar10 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
        if ((pQVar10->fields)._size != 0) {
          (pQVar10->fields)._size = 0;
        }
        piVar11 = &(pQVar10->fields)._version;
        *piVar11 = *piVar11 + 1;
        (pQVar10->fields)._head = 0;
        (pQVar10->fields)._tail = 0;
        (pJVar8->fields).prevPos.x = fVar1;
        (pJVar8->fields).prevPos.y = fVar7;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::Joystick::Joystick_OnPointerUp
               (Joystick *this,PointerEventData *data,MethodInfo *method)

{
  (this->fields).dragStart = 0;
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
  VStack_6.z = (this->fields).startPos.z;
  Joystick_UpdateVirtualAxes(this,&VStack_6,(MethodInfo *)0x0);
  return;
}


/* Void RegisterAxes() */

void Assembly-CSharp.dll::Joystick::Joystick_RegisterAxes(Joystick *this,MethodInfo *method)

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

void Assembly-CSharp.dll::Joystick::Joystick_Reset(Joystick *this,MethodInfo *method)

{
  (this->fields).dragStart = 0;
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
  VStack_6.z = (this->fields).startPos.z;
  Joystick_UpdateVirtualAxes(this,&VStack_6,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Joystick::Joystick_Update(Joystick *this,MethodInfo *method)

{
  if (((this->fields).dragStart == 0) || ((this->fields).useSupressAxis == 0)) {
    return;
  }
  pJVar1 = (this->fields).joystickLockAxis;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    this_00 = (this->fields).elipsoidHelper;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_7.x = 0.0;
      VStack_7.y = 0.0;
      VStack_7.z = 0.0;
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&VStack_7);
      aVStack_8[0].x = (this->fields).startPos.x;
      aVStack_8[0].y = (this->fields).startPos.y;
      uVar6._0_4_ = VStack_7.x - aVStack_8[0].x;
      if (this_00 != (UIElipsoidHelper *)0x0) {
        uVar6._4_4_ = VStack_7.y - aVStack_8[0].y;
        VStack_7._0_8_ = uVar6;
        VStack_7.z = VStack_7.z - (this->fields).startPos.z;
        fVar9 = UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance
                           (this_00,&VStack_7,(MethodInfo *)0x0);
        if (pJVar1 != (JoystickLockAxis *)0x0) {
          fVar10 = VStack_3.x;
          fVar11 = VStack_3.y;
          this_01 = (pJVar1->fields).smoothTouchAxis;
          uVar12._0_4_ = (pJVar1->fields).prevPos.x - VStack_3.x;
          if (this_01 != (SmoothTouchAxis *)0x0) {
            uVar12._4_4_ = (pJVar1->fields).prevPos.y - VStack_3.y;
            VStack_3.z = 0.0;
            VStack_3._0_8_ = uVar12;
            pVVar13 = SmoothTouchAxis::SmoothTouchAxis_UpdateSmoothVelocity
                               (aVStack_8,this_01,&VStack_3,(MethodInfo *)0x0);
            fVar14 = _UNK_?;
            uStackX_8._0_4_ = pVVar13->x;
            uStackX_8._4_4_ = pVVar13->y;
            VStack_3.z = pVVar13->z;
            (pJVar1->fields).prevPos.x = fVar10;
            (pJVar1->fields).prevPos.y = fVar11;
            if (fVar14 < fVar9) {
              uVar15 = 0;
            }
            else {
              VStack_3._0_8_ = uStackX_8;
              uStackX_8 = FUN_?(&uStackX_8);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector2);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              fVar9 = _UNK_?;
              fVar11 = uStackX_8._4_4_;
              fVar10 = (float)uStackX_8;
              uVar16 = (uint)(_UNK_? <
                             (float)((uint)((TypeInfo__UnityEngine__Vector2->static_fields->
                                            rightVector).y * uStackX_8._4_4_ +
                                           (TypeInfo__UnityEngine__Vector2->static_fields->
                                           rightVector).x * (float)uStackX_8) & (uint)_UNK_?
                                    ));
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector2);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uVar15 = uVar16 | 2;
              if ((float)((uint)((TypeInfo__UnityEngine__Vector2->static_fields->upVector).y * fVar11
                                + (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x *
                                  fVar10) & (uint)_UNK_?) <= fVar9) {
                uVar15 = uVar16;
              }
            }
            (this->fields).supressAxis = uVar15;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateVirtualAxes(Vector3) */

void Assembly-CSharp.dll::Joystick::Joystick_UpdateVirtualAxes
               (Joystick *this,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UIElipsoidHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = (this->fields).startPos.x;
  VStack_1.y = (this->fields).startPos.y;
  uVar2 = value->x;
  uVar3 = value->y;
  VStack_4.y = (float)uVar3 - VStack_1.y;
  VStack_4.x = (float)uVar2 - VStack_1.x;
  VStack_4.z = value->z - (this->fields).startPos.z;
  pUVar5 = (this->fields).elipsoidHelper;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance((MethodInfo *)0x0);
  if (pUVar5 != (UIElipsoidHelper *)0x0) {
    cVar6 = FUN_?();
    if ((cVar6 == '\0') || (cVar6 = FUN_?(), cVar6 == '\0')) {
      fVar7 = Joystick_get_MovementRangeX(this,(MethodInfo *)0x0);
      fVar8 = Joystick_get_MovementRangeY(this,(MethodInfo *)0x0);
      pUVar5 = (UIElipsoidHelper *)FUN_?(TypeInfo__UIElipsoidHelper);
      UIElipsoidHelper::UIElipsoidHelper__ctor(pUVar5,fVar7,fVar8,(MethodInfo *)0x0);
      bVar9 = iRam_? != 0;
      (this->fields).elipsoidHelper = pUVar5;
      if (bVar9) {
        uVar10 = (uint)((ulonglong)&(this->fields).elipsoidHelper >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar12 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
    pUVar5 = (this->fields).elipsoidHelper;
    if (pUVar5 != (UIElipsoidHelper *)0x0) {
      VStack_1.x = VStack_4.x;
      VStack_1.y = VStack_4.y;
      VStack_1.z = VStack_4.z;
      pVVar14 = UIElipsoidHelper::UIElipsoidHelper_Clamp
                         (aVStack_15,pUVar5,&VStack_1,(MethodInfo *)0x0);
      uVar16._0_4_ = pVVar14->x;
      uVar16._4_4_ = pVVar14->y;
      fVar7 = pVVar14->z;
      obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      aVStack_15[0].x = (this->fields).startPos.x;
      aVStack_15[0].y = (this->fields).startPos.y;
      fVar8 = (this->fields).startPos.z + fVar7;
      VStack_4._0_8_ = uVar16;
      if (obj_00 != (Transform *)0x0) {
        VStack_1.y = aVStack_15[0].y + uVar16._4_4_;
        VStack_1.x = aVStack_15[0].x + (float)uVar16;
        VStack_1.z = fVar8;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar17 = (obj_00->fields)._._.m_CachedPtr;
        if (pvVar17 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcVar18 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcRam_? = pcVar18;
        (*pcRam_?)(pvVar17,&VStack_1);
        pUVar5 = (this->fields).elipsoidHelper;
        if (pUVar5 != (UIElipsoidHelper *)0x0) {
          VStack_4._0_8_ = uVar16;
          VStack_4.z = fVar7;
          UIElipsoidHelper::UIElipsoidHelper_NormalizedDistance(pUVar5,&VStack_4,(MethodInfo *)0x0)
          ;
          obj = (this->fields).deltaMovementModifier;
          if (obj != (AnimationCurve *)0x0) {
            pvVar17 = (obj->fields).m_Ptr;
            if (pvVar17 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pcVar18 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pcRam_? = pcVar18;
            fVar8 = (float)(*pcRam_?)(pvVar17);
            VStack_4._0_8_ = uVar16;
            VStack_4.z = fVar7;
            fVar7 = (float)FUN_?(&VStack_4);
            if (_UNK_? < fVar7) {
              fVar19 = uVar16._4_4_ / fVar7;
              uVar11 = (ulonglong)(uint)((float)uVar16 / fVar7);
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uVar11._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
              uVar11._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
              fVar19 = (float)uVar11._4_4_;
            }
            fVar7 = (float)uVar11 * fVar8;
            fVar19 = fVar19 * fVar8;
            if (((this->fields).supressAxis & 1) != 0) {
              fVar19 = 0.0;
            }
            if (((this->fields).supressAxis & 2) != 0) {
              fVar7 = 0.0;
            }
            pCVar20 = (this->fields).m_HorizontalVirtualAxis;
            (this->fields).supressAxis = 0;
            if (pCVar20 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
              (pCVar20->fields).m_Value = fVar7;
              pCVar20 = (this->fields).m_VerticalVirtualAxis;
              if (pCVar20 != (CrossPlatformInputManager_VirtualAxis *)0x0) {
                (pCVar20->fields).m_Value = fVar19;
                return;
              }
            }
            goto code_?;
          }
        }
      }
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Joystick() */

void Assembly-CSharp.dll::Joystick::Joystick__ctor(Joystick *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__JoystickLockAxis);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vertical);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Horizontal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).baseMovementRangeX = 0x28;
  (this->fields).baseMovementRangeY = 0x28;
  pJVar1 = (JoystickLockAxis *)FUN_?(TypeInfo__JoystickLockAxis);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SmoothTouchAxis);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = (SmoothTouchAxis *)FUN_?(TypeInfo__SmoothTouchAxis);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar3 = (Queue_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  FUN_?(pQVar3);
  iVar4 = iRam_?;
  (pSVar2->fields).prevVelocities = pQVar3;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&(pSVar2->fields).prevVelocities >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar4 = iRam_?;
    } while (!bVar9);
  }
  (pSVar2->fields).sampleLength = 3;
  (pJVar1->fields).smoothTouchAxis = pSVar2;
  iVar10 = 0;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&(pJVar1->fields).smoothTouchAxis >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar9);
  }
  (this->fields).joystickLockAxis = pJVar1;
  iVar4 = 0;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).joystickLockAxis >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar4 = iRam_?;
    } while (!bVar9);
  }
  (this->fields).horizontalAxisName = StringLiteral_Horizontal;
  iVar10 = 0;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).horizontalAxisName >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar9);
  }
  (this->fields).verticalAxisName = StringLiteral_Vertical;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).verticalAxisName >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  bVar9 = cRam_? == '\0';
  (this->fields).useSupressAxis = 1;
  if (bVar9) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Single get_MovementRangeX() */

float Assembly-CSharp.dll::Joystick::Joystick_get_MovementRangeX(Joystick *this,MethodInfo *method)

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

float Assembly-CSharp.dll::Joystick::Joystick_get_MovementRangeY(Joystick *this,MethodInfo *method)

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

