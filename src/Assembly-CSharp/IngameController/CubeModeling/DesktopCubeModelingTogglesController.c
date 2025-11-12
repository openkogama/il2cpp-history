
/* Void Awake() */

void Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_Awake
               (DesktopCubeModelingTogglesController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__CamEffectsUpdate_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__OnGameCameraEffectsChange_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__StartSetValue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ToggleStateHandlerOnStartSetValue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toggleCameraEffects;
  if ((pTVar1 == (ToggleCameraEffects *)0x0) ||
     (pTVar2 = (pTVar1->fields).toggleStatHandlerBase, pTVar2 == (ToggleStatHandlerBase *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = (pTVar2->fields).OnStartSetValue;
  this_00 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
            FUN_?(TypeInfo__ToggleStateHandlerOnStartSetValue);
  mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
  Func_1_System_Threading_Tasks_VoidTaskResult___ctor
            (this_00,(Object *)this,
             MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__StartSetValue__
             ,(MethodInfo *)0x0);
  pTVar4 = (ToggleStateHandlerOnStartSetValue *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pTVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pTVar4 == (ToggleStateHandlerOnStartSetValue *)0x0) {
    (pTVar2->fields).OnStartSetValue = (ToggleStateHandlerOnStartSetValue *)0x0;
  }
  else {
    pTVar5 = (ToggleStateHandlerOnStartSetValue *)0x0;
    if (pTVar4->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
      pTVar5 = pTVar4;
    }
    if (pTVar5 == (ToggleStateHandlerOnStartSetValue *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pTVar2->fields).OnStartSetValue = pTVar5;
    pTVar5 = (ToggleStateHandlerOnStartSetValue *)0x0;
    if (pTVar4->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
      pTVar5 = pTVar4;
    }
    if (pTVar5 == (ToggleStateHandlerOnStartSetValue *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(pTVar2->fields).OnStartSetValue >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  pAVar11 = TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged;
  pDVar12 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pDVar12,this);
  pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar11,pDVar12,(MethodInfo *)0x0);
  pAVar13 = TypeInfo__System__Action<bool>;
  if (pDVar12 == (Delegate *)0x0) {
    TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged =
         (Action_1_Boolean_ *)0x0;
  }
  else {
    pAVar11 = (Action_1_Boolean_ *)FUN_?(pDVar12,TypeInfo__System__Action<bool>);
    if (pAVar11 == (Action_1_Boolean_ *)0x0) {
      FUN_?(pDVar12,pAVar13);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged = pAVar11;
    pAVar13 = TypeInfo__System__Action<bool>;
    lVar7 = FUN_?(pDVar12,TypeInfo__System__Action<bool>);
    if (lVar7 == 0) {
      FUN_?(pDVar12,pAVar13);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                    &TypeInfo__PostProcessingManager->static_fields->
                     OnIsPostProcessEffectsEnabledChanged >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pAVar11 = TypeInfo__PostProcessingManager->static_fields->OnGameHasPostProcessingChanged;
  pDVar12 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pDVar12,this);
  pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar11,pDVar12,(MethodInfo *)0x0);
  pAVar13 = TypeInfo__System__Action<bool>;
  if (pDVar12 == (Delegate *)0x0) {
    TypeInfo__PostProcessingManager->static_fields->OnGameHasPostProcessingChanged =
         (Action_1_Boolean_ *)0x0;
  }
  else {
    pAVar11 = (Action_1_Boolean_ *)FUN_?(pDVar12,TypeInfo__System__Action<bool>);
    if (pAVar11 == (Action_1_Boolean_ *)0x0) {
      FUN_?(pDVar12,pAVar13);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__PostProcessingManager->static_fields->OnGameHasPostProcessingChanged = pAVar11;
    pAVar13 = TypeInfo__System__Action<bool>;
    lVar7 = FUN_?(pDVar12,TypeInfo__System__Action<bool>);
    if (lVar7 == 0) {
      FUN_?(pDVar12,pAVar13);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                    &TypeInfo__PostProcessingManager->static_fields->OnGameHasPostProcessingChanged
                   >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  return;
}


/* Void CamEffectsUpdate(Boolean) */

void Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_CamEffectsUpdate
               (DesktopCubeModelingTogglesController *this,bool obj,MethodInfo *method)

{
  pTVar1 = (this->fields).toggleCameraEffects;
  if (pTVar1 != (ToggleCameraEffects *)0x0) {
    if ((pTVar1->fields).ignoreCamEffectCallback == 0) {
      this_00 = (pTVar1->fields).toggleStatHandlerBase;
      if (this_00 == (ToggleStatHandlerBase *)0x0) goto code_?;
      ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState(this_00,obj,(MethodInfo *)0x0);
    }
    pTVar1 = (this->fields).toggleCameraEffects;
    if (pTVar1 != (ToggleCameraEffects *)0x0) {
      (pTVar1->fields).ignoreCamEffectCallback = 0;
      pTVar1 = (this->fields).toggleCameraEffects;
      if ((pTVar1 != (ToggleCameraEffects *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pGVar2->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        cVar6 = (*pcRam_?)(pvVar3);
        if (cVar6 == '\0') {
          pTVar1 = (this->fields).toggleCameraEffects;
          if ((pTVar1 == (ToggleCameraEffects *)0x0) ||
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar1,(MethodInfo *)0x0),
             pGVar2 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,1,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(CubeModelingStateMachine) */

void Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_Initialize
               (DesktopCubeModelingTogglesController *this,
               CubeModelingStateMachine *cubeModelingStateMachine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  cVar1 = FUN_?();
  if (cVar1 != '\0') {
    return;
  }
  this_00 = (this->fields).toggleCameraEffects;
  if ((this_00 == (ToggleCameraEffects *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_OnDestroy
               (DesktopCubeModelingTogglesController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__CamEffectsUpdate_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__OnGameCameraEffectsChange_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__StartSetValue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ToggleStateHandlerOnStartSetValue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toggleCameraEffects;
  if ((pTVar1 == (ToggleCameraEffects *)0x0) ||
     (pTVar2 = (pTVar1->fields).toggleStatHandlerBase, pTVar2 == (ToggleStatHandlerBase *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = (pTVar2->fields).OnStartSetValue;
  this_00 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
            FUN_?(TypeInfo__ToggleStateHandlerOnStartSetValue);
  mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
  Func_1_System_Threading_Tasks_VoidTaskResult___ctor
            (this_00,(Object *)this,
             MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__StartSetValue__
             ,(MethodInfo *)0x0);
  pTVar4 = (ToggleStateHandlerOnStartSetValue *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pTVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pTVar4 == (ToggleStateHandlerOnStartSetValue *)0x0) {
    (pTVar2->fields).OnStartSetValue = (ToggleStateHandlerOnStartSetValue *)0x0;
  }
  else {
    pTVar5 = (ToggleStateHandlerOnStartSetValue *)0x0;
    if (pTVar4->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
      pTVar5 = pTVar4;
    }
    if (pTVar5 == (ToggleStateHandlerOnStartSetValue *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pTVar2->fields).OnStartSetValue = pTVar5;
    pTVar5 = (ToggleStateHandlerOnStartSetValue *)0x0;
    if (pTVar4->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
      pTVar5 = pTVar4;
    }
    if (pTVar5 == (ToggleStateHandlerOnStartSetValue *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(pTVar2->fields).OnStartSetValue >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  pAVar11 = TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged;
  pDVar12 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pDVar12,this);
  pDVar12 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar11,pDVar12,(MethodInfo *)0x0);
  pAVar13 = TypeInfo__System__Action<bool>;
  if (pDVar12 == (Delegate *)0x0) {
    TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged =
         (Action_1_Boolean_ *)0x0;
  }
  else {
    pAVar11 = (Action_1_Boolean_ *)FUN_?(pDVar12,TypeInfo__System__Action<bool>);
    if (pAVar11 == (Action_1_Boolean_ *)0x0) {
      FUN_?(pDVar12,pAVar13);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged = pAVar11;
    pAVar13 = TypeInfo__System__Action<bool>;
    lVar7 = FUN_?(pDVar12,TypeInfo__System__Action<bool>);
    if (lVar7 == 0) {
      FUN_?(pDVar12,pAVar13);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                    &TypeInfo__PostProcessingManager->static_fields->
                     OnIsPostProcessEffectsEnabledChanged >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pAVar11 = TypeInfo__PostProcessingManager->static_fields->OnGameHasPostProcessingChanged;
  pDVar12 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pDVar12,this);
  pDVar12 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar11,pDVar12,(MethodInfo *)0x0);
  pAVar13 = TypeInfo__System__Action<bool>;
  if (pDVar12 == (Delegate *)0x0) {
    TypeInfo__PostProcessingManager->static_fields->OnGameHasPostProcessingChanged =
         (Action_1_Boolean_ *)0x0;
  }
  else {
    pAVar11 = (Action_1_Boolean_ *)FUN_?(pDVar12,TypeInfo__System__Action<bool>);
    if (pAVar11 == (Action_1_Boolean_ *)0x0) {
      FUN_?(pDVar12,pAVar13);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__PostProcessingManager->static_fields->OnGameHasPostProcessingChanged = pAVar11;
    pAVar13 = TypeInfo__System__Action<bool>;
    lVar7 = FUN_?(pDVar12,TypeInfo__System__Action<bool>);
    if (lVar7 == 0) {
      FUN_?(pDVar12,pAVar13);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                    &TypeInfo__PostProcessingManager->static_fields->OnGameHasPostProcessingChanged
                   >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  return;
}


/* Void OnGameCameraEffectsChange(Boolean) */

void Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_OnGameCameraEffectsChange
               (DesktopCubeModelingTogglesController *this,bool obj,MethodInfo *method)

{
  this_00 = (this->fields).toggleCameraEffects;
  if ((this_00 == (ToggleCameraEffects *)0x0) ||
     (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), obj_00 == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,obj,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj_00 == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj_00->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar2,obj);
  return;
}


/* Boolean StartSetValue() */

bool Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_StartSetValue
               (DesktopCubeModelingTogglesController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  return TypeInfo__PostProcessingManager->static_fields->isPostProcessEffectsEnabled;
}

