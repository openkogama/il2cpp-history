
/* Void Awake() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_Awake
               (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PostProcessingManager_MethodInfo__UnityEngine__Component__GetComponent<PostProcessingManager>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__MainCameraManager->static_fields->baseVolume = fVar3;
  MainCameraManager_set_Mute(0,(MethodInfo *)0x0);
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pPVar5 = (ProtectedTransform *)FUN_?(TypeInfo__ProtectedTransform);
  iVar6 = iRam_?;
  (pPVar5->fields).transform = pTVar4;
  if (iVar6 != 0) {
    uVar7 = (uint)((ulonglong)&pPVar5->fields >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar11);
  }
  (this->fields).protectedTransform = pPVar5;
  if (iVar6 != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields).protectedTransform >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  pPVar12 = (PostProcessingManager *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      PostProcessingManager_MethodInfo__UnityEngine__Component__GetComponent<PostProcessingManager>__
                     );
  bVar11 = iRam_? != 0;
  (this->fields).postProcessingManager = pPVar12;
  if (bVar11) {
    uVar7 = (uint)((ulonglong)&(this->fields).postProcessingManager >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  return;
}


/* Void CancelTransitionCam() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_CancelTransitionCam
               (MainCameraManager *this,MethodInfo *method)

{
  pTVar1 = (this->fields).transitionCamera;
  if (pTVar1 != (TransitionCamera *)0x0) {
    (pTVar1->fields).transitionPercentage = 1.0;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnableScreenOptimizer() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_EnableScreenOptimizer
               (MainCameraManager *this,MethodInfo *method)

{
  obj = (this->fields).screenSizeOptimizer;
  if (obj == (ScreenSizeOptimizer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (ScreenSizeOptimizer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* ICameraSettings GetSettings(MVGameType) */

ICameraSettings *
Assembly-CSharp.dll::MainCameraManager::MainCameraManager_GetSettings
          (MVGameType__Enum gameType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__get_Item_MV__Common__MVGameType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__get_Item_MV__Common__MVGameType_
  ;
  this = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
         TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (ICameraSettings *)(*pcVar2)();
    return pIVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this,gameType,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__get_Item_MV__Common__MVGameType_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar4 < 0) {
    uVar5 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar5);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pIVar3 = (ICameraSettings *)(*pcVar2)();
    return pIVar3;
  }
  pDVar6 = (this->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)0x0)
  {
    if (uVar4 < (uint)pDVar6->max_length) {
      return *(ICameraSettings **)&pDVar6->vector[(int)uVar4].value.y;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (ICameraSettings *)(*pcVar2)();
    return pIVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (ICameraSettings *)(*pcVar2)();
  return pIVar3;
}


/* Boolean HasSetting(MVGameType) */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_HasSetting
               (MVGameType__Enum gameType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__ContainsKey_MV__Common__MVGameType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  this = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
         TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this,gameType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__ContainsKey_MV__Common__MVGameType_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void IgnoreInputTypes(IgnoreInputTypes) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_IgnoreInputTypes
               (MainCameraManager *this,IgnoreInputTypes__Enum inputTypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__OnIgnoreInputTypesArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).OnIgnoreInputTypes;
  if (pEVar1 != (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
    lVar2 = FUN_?(TypeInfo__OnIgnoreInputTypesArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(IgnoreInputTypes__Enum *)(lVar2 + 0x10) = inputTypes;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,lVar2,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void Init() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_Init
               (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UXElementSecondary);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CamRotateTarget);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UXElement);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hidden);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UXElement,(MethodInfo *)0x0);
  uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Preview,(MethodInfo *)0x0);
  uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Hidden,(MethodInfo *)0x0);
  uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UXElementSecondary,(MethodInfo *)0x0);
  if (pCVar1 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (pCVar1,~(1 << ((byte)iVar2 & 0x1f) | 1 << (uVar3 & 0x1f) | 1 << (uVar4 & 0x1f) |
                       1 << (uVar5 & 0x1f)),(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar6 != (GameSessionData *)0x0) {
      if ((pGVar6->fields).gameMode == 1) {
        pCVar1 = (this->fields).mainCamera;
        if (pCVar1 == (Camera *)0x0) goto code_?;
        uVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar1,(MethodInfo *)0x0);
        uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        if ((uVar4 & uVar3) == uVar5) {
          pCVar1 = (this->fields).mainCamera;
          if (pCVar1 == (Camera *)0x0) goto code_?;
          iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                            (pCVar1,(MethodInfo *)0x0);
          iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Logic,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (pCVar1,iVar2 - (1 << ((byte)iVar7 & 0x1f)),(MethodInfo *)0x0);
        }
      }
      pCVar1 = (this->fields).mainCamera;
      if (pCVar1 != (Camera *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (pCVar1->fields)._._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        iVar2 = (*pcRam_?)(pvVar8);
        bVar11 = cRam_? == '\0';
        (this->fields).cullingMask = iVar2;
        if (bVar11) {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) ||
           ((this->fields).blueModeEnabled == 0)) {
          return;
        }
        pCVar1 = (this->fields).mainCamera;
        if (pCVar1 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (pCVar1,0,(MethodInfo *)0x0);
          pCVar1 = (this->fields).mainCamera;
          if (pCVar1 != (Camera *)0x0) {
            uVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                              (pCVar1,(MethodInfo *)0x0);
            uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (pCVar1,uVar3 | 1 << (uVar4 & 0x1f),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean IsCameraControllerSet() */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_IsCameraControllerSet
               (MainCameraManager *this,MethodInfo *method)

{
  return (this->fields).cameraController != (MVCameraController *)0x0;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_OnDestroy
               (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  pDVar1 = TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (pDVar1 != (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)0x0) {
    length = (pDVar1->fields)._count;
    if (0 < length) {
      pIVar2 = (pDVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) goto code_?;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pDVar1->fields)._count = 0;
      (pDVar1->fields)._freeCount = 0;
      (pDVar1->fields)._freeList = -1;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._entries,0,length,(MethodInfo *)0x0);
    }
    piVar3 = &(pDVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PlayPlingSound() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_PlayPlingSound
               (MainCameraManager *this,MethodInfo *method)

{
  obj = (this->fields).plingSound;
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (AudioSource *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException((Object *)0x0,StringLiteral_source,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException((Object *)obj,StringLiteral_source,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void RegisterCameraWithSettings(MVGameType, ICameraSettings) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_RegisterCameraWithSettings
               (MVGameType__Enum gameType,ICameraSettings *camSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Add_MV__Common__MVGameType__ICameraSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  this = (Dictionary_2_System_Int32Enum_System_Object_ *)
         TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              (this,gameType,(Object *)camSettings,CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Add_MV__Common__MVGameType__ICameraSettings_
               ->klass->rgctx_data[0x22].method);
    pAVar1 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
    if (pAVar1 != (Action *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RenderLogic(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_RenderLogic
               (MainCameraManager *this,bool renderLogic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if (renderLogic == 0) {
    if (this_00 == (Camera *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 & ~(1 << (uVar3 & 0x1f));
  }
  else {
    if (this_00 == (Camera *)0x0) goto code_?;
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 | 1 << (uVar3 & 0x1f);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (this_00,uVar2,(MethodInfo *)0x0);
  (this->fields).isLogicRendered = renderLogic;
  return;
}


/* Void SetCameraController(MVCameraController) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_SetCameraController
               (MainCameraManager *this,MVCameraController *camController,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if (pMVar1 != (MVCameraController *)0x0) {
    pMVar2 = (pMVar1->fields).cameraStack;
    if (pMVar2 == (MVCameraController_CameraStack *)0x0) goto code_?;
    MVCameraController+CameraStack::MVCameraController_CameraStack_Deactivate
              (pMVar2,(MethodInfo *)0x0);
  }
  bVar3 = iRam_? != 0;
  (this->fields).cameraController = camController;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).cameraController >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pMVar1 = (this->fields).cameraController;
  if ((pMVar1 != (MVCameraController *)0x0) &&
     (pMVar2 = (pMVar1->fields).cameraStack, pMVar2 != (MVCameraController_CameraStack *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                    ,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(pMVar2->fields).cameras;
    if ((this_00 ==
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) || (pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                           UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                           Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                     (this_00,
                                      MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                                     ),
                 pDVar8 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                            *)0x0)) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_10 = (pDVar8->fields)._dictionary;
    puStack_11 = (undefined4 *)0x0;
    puStack_12 = (undefined *)0x0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_10 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    if (uStack_10 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_13 = (uStack_10->fields)._version;
    puStack_12 = (undefined *)0x0;
    uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
    uStack_14 = (undefined4)uStack_10;
    uStack_15 = uStack_10._4_4_;
    uStack_16 = 0;
    aplStack_17[0] = (longlong *)0x0;
    uStack_10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_11 = &uStack_14;
    do {
      lVar18 = CONCAT44(uStack_15,uStack_14);
      if (lVar18 == 0) {
code_?:
        FUN_?();
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (iStack_13 != *(int *)(lVar18 + 0x2c)) {
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
        goto code_?;
      }
      do {
        if (lVar18 == 0) goto code_?;
        if (*(uint *)(lVar18 + 0x20) <= uStack_16) {
          return;
        }
        lVar19 = *(longlong *)(lVar18 + 0x18);
        lVar20 = (longlong)(int)uStack_16;
        uVar4 = uStack_16 + 1;
        if (lVar19 == 0) goto code_?;
        if (*(uint *)(lVar19 + 0x18) <= uStack_16) {
          uStack_16 = uVar4;
          FUN_?();
          goto code_?;
        }
        uStack_16 = uVar4;
      } while (*(int *)(lVar19 + 0x20 + lVar20 * 0x18) < 0);
      aplStack_17[0] = *(longlong **)(lVar19 + (lVar20 + 2) * 0x18);
      func_?(aplStack_17);
      if (aplStack_17[0] == (longlong *)0x0) {
code_?:
        FUN_?();
        uVar4 = uStack_16;
code_?:
        uStack_16 = uVar4;
        FUN_?();
code_?:
        FUN_?();
        goto code_?;
      }
      (**(code **)(*aplStack_17[0] + 0x228))
                (aplStack_17[0],*(undefined8 *)(*aplStack_17[0] + 0x230));
    } while( true );
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void StartTransitionCam(Single, Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_StartTransitionCam
               (MainCameraManager *this,float transitionTime,bool soft,MethodInfo *method)

{
  this_00 = (this->fields).transitionCamera;
  pMVar1 = (this->fields).cameraController;
  if ((pMVar1 != (MVCameraController *)0x0) &&
     (this_01 = (pMVar1->fields).cameraStack, this_01 != (MVCameraController_CameraStack *)0x0)) {
    this_02 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                        (this_01,(MethodInfo *)0x0);
    if (this_02 != (MVCameraBase *)0x0) {
      targetCameraTransform =
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this_02,(MethodInfo *)0x0);
      if (this_00 != (TransitionCamera *)0x0) {
        TransitionCamera::TransitionCamera_InitTransition
                  (this_00,targetCameraTransform,transitionTime,soft,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TemporaryMute(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_TemporaryMute
               (bool muteTemporarily,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  bVar1 = 0;
  if (TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted == 0) {
    bVar1 = muteTemporarily;
  }
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    if ((TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted == 0) ||
       (muteTemporarily != 0)) {
      return;
    }
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted = 0;
    bVar1 = TypeInfo__MainCameraManager->static_fields->storedMuteValue;
  }
  else {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted = 1;
    TypeInfo__MainCameraManager->static_fields->storedMuteValue =
         TypeInfo__MainCameraManager->static_fields->isMuted;
    bVar1 = 1;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  TypeInfo__MainCameraManager->static_fields->isMuted = bVar1;
  if (TypeInfo__MainCameraManager->static_fields->isMuted == 0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar2 = TypeInfo__MainCameraManager->static_fields->baseVolume;
  }
  else {
    fVar2 = 0.0;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(fVar2);
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  pAVar5 = TypeInfo__MainCameraManager->static_fields->OnMuteChange;
  if (pAVar5 != (Action_1_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    (*(pAVar5->fields)._._.invoke_impl)
              ((pAVar5->fields)._._.method_code,TypeInfo__MainCameraManager->static_fields->isMuted,
               (pAVar5->fields)._._.method);
  }
  return;
}


/* Void UnRegisterCameraWithSettings(MVGameType) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_UnRegisterCameraWithSettings
               (MVGameType__Enum gameType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Remove_MV__Common__MVGameType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Remove_MV__Common__MVGameType_
  ;
  pDVar2 = TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (pDVar2 == (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pDVar2->fields)._buckets != (Int32__Array *)0x0) {
    pIVar4 = (pDVar2->fields)._comparer;
    MVar5 = gameType;
    if (pIVar4 != (IEqualityComparer_1_MV_Common_MVGameType_ *)0x0) {
      pvVar6 = MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Remove_MV__Common__MVGameType_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
        pvVar6 = (void *)FUN_?(pvVar6);
      }
      MVar5 = FUN_?(1,pvVar6,pIVar4,gameType);
    }
    pIVar7 = (pDVar2->fields)._buckets;
    if (pIVar7 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = (int)(MVar5 & 0x7fffffff) % (int)pIVar7->max_length;
    if ((uint)pIVar7->max_length <= uVar8) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = pIVar7->vector[(int)uVar8] - 1;
    uVar10 = 0xffffffff;
    while (uVar11 = uVar9, -1 < (int)uVar11) {
      pDVar12 = (pDVar2->fields)._entries;
      if (pDVar12 == (Dictionary_2_TKey_TValue_Entry_MV_Common_MVGameType_ICameraSettings___Array *)
                    0x0) goto code_?;
      if ((uint)pDVar12->max_length <= uVar11) goto code_?;
      if (pDVar12->vector[(int)uVar11].hashCode == (MVar5 & 0x7fffffff)) {
        pIVar13 = pMVar1->klass->rgctx_data;
        if ((pDVar2->fields)._comparer == (IEqualityComparer_1_MV_Common_MVGameType_ *)0x0) {
          pEVar14 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::
                    Int32Enum]::EqualityComparer_1_System_Int32Enum__get_Default(pIVar13[3].method);
          if (pEVar14 == (EqualityComparer_1_System_Int32Enum_ *)0x0) goto code_?;
          cVar15 = (*(pEVar14->klass->vtable).__unknown.methodPtr)
                             (pEVar14,(ulonglong)(uint)pDVar12->vector[(int)uVar11].key,
                              (ulonglong)gameType,(pEVar14->klass->vtable).__unknown.method);
        }
        else {
          pvVar6 = pIVar13[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
            FUN_?(pvVar6);
          }
          cVar15 = FUN_?();
        }
        if (cVar15 != '\0') {
          if ((int)uVar10 < 0) {
            pIVar7 = (pDVar2->fields)._buckets;
            if (pIVar7 == (Int32__Array *)0x0) goto code_?;
            if ((uint)pIVar7->max_length <= uVar8) goto code_?;
            pIVar7->vector[(int)uVar8] = pDVar12->vector[(int)uVar11].next + 1;
          }
          else {
            pDVar16 = (pDVar2->fields)._entries;
            if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_MV_Common_MVGameType_ICameraSettings___Array
                           *)0x0) goto code_?;
            if ((uint)pDVar16->max_length <= uVar10) goto code_?;
            pDVar16->vector[(int)uVar10].next = pDVar12->vector[(int)uVar11].next;
          }
          pDVar12->vector[(int)uVar11].hashCode = -1;
          pDVar12->vector[(int)uVar11].next = (pDVar2->fields)._freeList;
          pDVar12->vector[(int)uVar11].value = (ICameraSettings *)0x0;
          piVar17 = &(pDVar2->fields)._freeCount;
          *piVar17 = *piVar17 + 1;
          piVar17 = &(pDVar2->fields)._version;
          *piVar17 = *piVar17 + 1;
          (pDVar2->fields)._freeList = uVar11;
          return;
        }
      }
      uVar10 = uVar11;
      uVar9 = pDVar12->vector[(int)uVar11].next;
    }
  }
  return;
}


/* Void UpdateAudioListener() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_UpdateAudioListener
               (MainCameraManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if (pMVar1 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (pMVar1->fields).cameraStack;
  if (pMVar2 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                     (pMVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar3 == (MVCameraBase *)0x0) {
code_?:
    value = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar3->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar2 = (pMVar1->fields).cameraStack;
    if ((pMVar2 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                           (pMVar2,(MethodInfo *)0x0), pMVar3 == (MVCameraBase *)0x0))
    goto code_?;
    uVar4 = (*(pMVar3->klass->vtable).__unknown.methodPtr)
                      (pMVar3,(pMVar3->klass->vtable).__unknown.method);
    if ((uVar4 < 0x15) && ((0x100441U >> (uVar4 & 0x1f) & 1) != 0)) {
      value = true;
    }
    else {
      value = uVar4 == 0x13;
    }
  }
  this_00 = (this->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(value ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,value ^ 1U,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (this_02 != (MVLocalPlayer *)0x0) {
      pMVar5 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_02,(MethodInfo *)0x0);
      if (pMVar5 == (MVAvatarLocal *)0x0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AvatarLocal);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar6 = (pMVar5->fields)._.avatar;
      if (pAVar6 != (Avatar *)0x0) {
        bVar7 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        if (((pAVar6->klass->_1).naturalAligment < bVar7) ||
           ((pAVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLocal)) {
          FUN_?(pAVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_01 = pAVar6[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateCamera() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_UpdateCamera
               (MainCameraManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if (pMVar1 != (MVCameraController *)0x0) {
    this_00 = (pMVar1->fields).cameraStack;
    pPVar2 = (this->fields).protectedTransform;
    if (this_00 != (MVCameraController_CameraStack *)0x0) {
      pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                         (this_00,(MethodInfo *)0x0);
      if (pMVar3 != (MVCameraBase *)0x0) {
        (*(pMVar3->klass->vtable).UpdateCamera.methodPtr)
                  (pMVar3,pMVar1,pPVar2,(pMVar3->klass->vtable).UpdateCamera.method);
        pTVar4 = (this->fields).transitionCamera;
        if (pTVar4 != (TransitionCamera *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pTVar4->klass->vtable).UpdateCamera.methodPtr)
                    (pTVar4,(this->fields).cameraController,(this->fields).protectedTransform,
                     (pTVar4->klass->vtable).UpdateCamera.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MainCameraManager() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase = 5.0;
  TypeInfo__MainCameraManager->static_fields->DefaultCameraType = 0;
  TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson = 0;
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Dictionary__
            );
  TypeInfo__MainCameraManager->static_fields->cameraSettings =
       (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__MainCameraManager->static_fields->cameraSettings >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__MainCameraManager->static_fields->baseVolume = 0.0;
  TypeInfo__MainCameraManager->static_fields->isMuted = 0;
  TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted = 0;
  TypeInfo__MainCameraManager->static_fields->storedMuteValue = 0;
  return;
}


/* Void add_OnIgnoreInputTypes(EventHandler`1[OnIgnoreInputTypesArgs]) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_add_OnIgnoreInputTypes
               (MainCameraManager *this,EventHandler_1_OnIgnoreInputTypesArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnIgnoreInputTypes;
  a = (this->fields).OnIgnoreInputTypes;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      if (pEVar4 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Boolean get_BlueModeEnabled() */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_BlueModeEnabled
               (MainCameraManager *this,MethodInfo *method)

{
  return (this->fields).blueModeEnabled;
}


/* MVCameraBase get_CurrentCamera() */

MVCameraBase *
Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_CurrentCamera
          (MainCameraManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if ((pMVar1 == (MVCameraController *)0x0) ||
     (pMVar2 = (pMVar1->fields).cameraStack, pMVar2 == (MVCameraController_CameraStack *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pMVar4 = (MVCameraBase *)(*pcVar3)();
    return pMVar4;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar5 = (pMVar2->fields).activeCameras;
  if (pLVar5 != (List_1_MVCameraBase_ *)0x0) {
    if ((pLVar5->fields)._size == 0) {
      return (MVCameraBase *)0x0;
    }
    iVar6 = (pLVar5->fields)._size;
    if ((uint)(pLVar5->fields)._size <= iVar6 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVCameraBase *)(*pcVar3)();
      return pMVar4;
    }
    pMVar7 = (pLVar5->fields)._items;
    if (pMVar7 != (MVCameraBase__Array *)0x0) {
      if (iVar6 - 1U < (uint)pMVar7->max_length) {
        return pMVar7->vector[(longlong)iVar6 + -1];
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVCameraBase *)(*pcVar3)();
      return pMVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVCameraBase *)(*pcVar3)();
  return pMVar4;
}


/* Single get_FieldOfView() */

float Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_FieldOfView
                (MainCameraManager *this,MethodInfo *method)

{
  obj = (this->fields).mainCamera;
  if (obj == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(*pcRam_?)(pvVar3);
  return fVar2;
}


/* Vector3 get_FireDirection() */

Vector3 * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_FireDirection
                    (Vector3 *__return_storage_ptr__,MainCameraManager *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Vector3 get_FireOrigin() */

Vector3 * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_FireOrigin
                    (Vector3 *__return_storage_ptr__,MainCameraManager *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar3)();
      return pVVar4;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar3)();
      return pVVar4;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_6,pTVar1,(MethodInfo *)0x0);
      pMVar7 = (this->fields).cameraController;
      uVar8 = pVVar4->x;
      uVar9 = pVVar4->y;
      fVar10 = pVVar4->z;
      if (((pMVar7 != (MVCameraController *)0x0) &&
          (this_00 = (pMVar7->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)
          ) && (pMVar11 = MVCameraController+CameraStack::
                          MVCameraController_CameraStack_get_CurCamera(this_00,(MethodInfo *)0x0),
               pMVar11 != (MVCameraBase *)0x0)) {
        fVar12 = (pMVar11->fields).cameraRadius;
        __return_storage_ptr__->x = fVar12 * (float)uVar8 + 0.0;
        __return_storage_ptr__->y = fVar12 * (float)uVar9 + 0.0;
        __return_storage_ptr__->z = fVar12 * fVar10 + 0.0;
        return __return_storage_ptr__;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar3)();
  return pVVar4;
}


/* Boolean get_Mute() */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_Mute(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  return TypeInfo__MainCameraManager->static_fields->isMuted;
}


/* Camera get_SecondaryCamera() */

Camera * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_SecondaryCamera
                   (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__;
  this_00 = (this->fields).secondaryCamera;
  if (this_00 != (Transform *)0x0) {
    if ((UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                   );
    }
    uStack_2 = 0;
    pvVar3 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar3 == (void *)0x0) {
      type = (Type *)0x0;
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar4 = FUN_?(pvVar3,1);
      type = (Type *)FUN_?(lVar4 + 0x20);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentFastPath
              ((Component *)this_00,type,&uStack_2,(MethodInfo *)0x0);
    return (Camera *)0x0;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Camera *)(*pcVar5)();
  return pCVar6;
}


/* Camera get_TertiaryCamera() */

Camera * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_TertiaryCamera
                   (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__;
  this_00 = (this->fields).tertiaryCamera;
  if (this_00 != (Transform *)0x0) {
    if ((UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                   );
    }
    uStack_2 = 0;
    pvVar3 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar3 == (void *)0x0) {
      type = (Type *)0x0;
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar4 = FUN_?(pvVar3,1);
      type = (Type *)FUN_?(lVar4 + 0x20);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentFastPath
              ((Component *)this_00,type,&uStack_2,(MethodInfo *)0x0);
    return (Camera *)0x0;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Camera *)(*pcVar5)();
  return pCVar6;
}


/* Boolean get_TertiaryCameraActive() */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_TertiaryCameraActive
               (MainCameraManager *this,MethodInfo *method)

{
  this_00 = (this->fields).tertiaryCamera;
  if ((this_00 == (Transform *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*pcRam_?)(pvVar3);
  return bVar2;
}


/* Void remove_OnIgnoreInputTypes(EventHandler`1[OnIgnoreInputTypesArgs]) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_remove_OnIgnoreInputTypes
               (MainCameraManager *this,EventHandler_1_OnIgnoreInputTypesArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnIgnoreInputTypes;
  source = (this->fields).OnIgnoreInputTypes;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      if (pEVar4 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}


/* Void set_BlueModeEnabled(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_BlueModeEnabled
               (MainCameraManager *this,bool value,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).blueModeEnabled = value;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return;
  }
  this_00 = (this->fields).secondaryCamera;
  if ((this_00 != (Transform *)0x0) &&
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_02,value,(MethodInfo *)0x0);
    this_01 = (this->fields).greyScaleEffect;
    if (this_01 != (GrayscaleEffect *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_CamMaskMode(MaskMode) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_CamMaskMode
               (MainCameraManager *this,MaskMode__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_CamRotateTarget);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).maskMode = value;
  if (value == MaskMode__Enum_Default) {
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar1,(this->fields).cullingMask,(MethodInfo *)0x0);
      bVar2 = (this->fields).isLogicRendered;
      (this->fields).blueModeEnabled = 0;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Logic);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pCVar1 = (this->fields).mainCamera;
      if (bVar2 == 0) {
        if (pCVar1 == (Camera *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar1,(MethodInfo *)0x0);
        uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar4 = uVar4 & ~(1 << (uVar5 & 0x1f));
      }
      else {
        if (pCVar1 == (Camera *)0x0) goto code_?;
        uVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar1,(MethodInfo *)0x0);
        uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar4 = uVar4 | 1 << (uVar5 & 0x1f);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar1,uVar4,(MethodInfo *)0x0);
      (this->fields).isLogicRendered = bVar2;
      return;
    }
  }
  else {
    if (value != MaskMode__Enum_AvatarLobbyFocus) {
      if (value == MaskMode__Enum_SkyBoxOnly) {
        pCVar1 = (this->fields).mainCamera;
        if (pCVar1 == (Camera *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar1,0,(MethodInfo *)0x0);
      }
      return;
    }
    pCVar1 = (this->fields).mainCamera;
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (pCVar1 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar1,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
      (this->fields).blueModeEnabled = 1;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_FieldOfView(Single) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_FieldOfView
               (MainCameraManager *this,float value,MethodInfo *method)

{
  obj = (this->fields).mainCamera;
  if (obj == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                  ,in_RDX,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,value);
  return;
}


/* Void set_IsLogicRendered(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_IsLogicRendered
               (MainCameraManager *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if (value == 0) {
    if (this_00 == (Camera *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 & ~(1 << (uVar3 & 0x1f));
  }
  else {
    if (this_00 == (Camera *)0x0) goto code_?;
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 | 1 << (uVar3 & 0x1f);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (this_00,uVar2,(MethodInfo *)0x0);
  (this->fields).isLogicRendered = value;
  return;
}


/* Void set_Mute(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_Mute
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  TypeInfo__MainCameraManager->static_fields->isMuted = value;
  if (TypeInfo__MainCameraManager->static_fields->isMuted == 0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar1 = TypeInfo__MainCameraManager->static_fields->baseVolume;
  }
  else {
    fVar1 = 0.0;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(fVar1);
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  pAVar4 = TypeInfo__MainCameraManager->static_fields->OnMuteChange;
  if (pAVar4 != (Action_1_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    (*(pAVar4->fields)._._.invoke_impl)
              ((pAVar4->fields)._._.method_code,TypeInfo__MainCameraManager->static_fields->isMuted,
               (pAVar4->fields)._._.method);
  }
  return;
}


/* Void set_TertiaryCameraActive(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_TertiaryCameraActive
               (MainCameraManager *this,bool value,MethodInfo *method)

{
  this_00 = (this->fields).tertiaryCamera;
  if ((this_00 == (Transform *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,value,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,value);
  return;
}

