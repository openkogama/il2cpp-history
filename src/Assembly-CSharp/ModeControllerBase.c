
/* Boolean CannotLeaveEditPlayMode() */

bool Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_CannotLeaveEditPlayMode
               (ModeControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0x18), lVar1 != 0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
      if ((*(byte *)(lVar1 + 0x10) & 2) != 0) {
        return 1;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar2 != (IPlayModeUI *)0x0) {
        uVar3 = 0;
        pIVar4 = pIVar2->klass;
        uVar5._0_1_ = (pIVar4->_1).rank;
        uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
        if (uVar5 != 0) {
          do {
            if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
                (Il2CppClass *)TypeInfo__IPlayModeUI) {
              pVVar6 = &(pIVar4->vtable).ShowEUseIcon +
                       (pIVar4->interfaceOffsets[uVar3].offset + 0xb);
              UNRECOVERED_JUMPTABLE = pVVar6->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              bVar7 = (*UNRECOVERED_JUMPTABLE)(pIVar2,pVVar6->method,UNRECOVERED_JUMPTABLE);
              return bVar7;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar5);
        }
        puVar8 = (undefined8 *)FUN_?(pIVar2);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar7 = (*(code *)*puVar8)(pIVar2,puVar8[1],(code *)*puVar8);
        return bVar7;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar7 = (*pcVar9)();
  return bVar7;
}


/* Void HandleFpsShortcut() */

void Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_HandleFpsShortcut
               (ModeControllerBase *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)(0x38);
  if (cVar3 != '\0') {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    cVar3 = (*pcRam_?)(0x39);
    if (cVar3 != '\0') {
      if (cRam_? == '\0') {
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = (this->fields).fpsCounter;
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
      if (pGVar4 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
          pGVar4 = (this->fields).fpsCounter;
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
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                          ,0,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pvVar5 = (void *)0x0;
          if (pGVar4 != (GameObject *)0x0) {
            pvVar5 = (pGVar4->fields)._.m_CachedPtr;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar5,0);
          return;
        }
      }
      pGVar4 = (this->fields).fpsCounterPrefab;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar4 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pGVar4,parent,0,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                         );
      bVar6 = iRam_? != 0;
      (this->fields).fpsCounter = pGVar4;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).fpsCounter >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      return;
    }
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_Initialize
               (ModeControllerBase *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
  pCVar3 = (pMVar1->fields).mainCamera;
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UXElement,(MethodInfo *)0x0);
  uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Preview,(MethodInfo *)0x0);
  uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Hidden,(MethodInfo *)0x0);
  uVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UXElementSecondary,(MethodInfo *)0x0);
  if (pCVar3 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (pCVar3,~(1 << ((byte)iVar4 & 0x1f) | 1 << (uVar5 & 0x1f) | 1 << (uVar6 & 0x1f) |
                       1 << (uVar7 & 0x1f)),(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar8 != (GameSessionData *)0x0) {
      if ((pGVar8->fields).gameMode == 1) {
        pCVar3 = (pMVar1->fields).mainCamera;
        if (pCVar3 == (Camera *)0x0) goto code_?;
        uVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar3,(MethodInfo *)0x0);
        uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        if ((uVar6 & uVar5) == uVar7) {
          pCVar3 = (pMVar1->fields).mainCamera;
          if (pCVar3 == (Camera *)0x0) goto code_?;
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                            (pCVar3,(MethodInfo *)0x0);
          iVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Logic,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (pCVar3,iVar4 - (1 << ((byte)iVar9 & 0x1f)),(MethodInfo *)0x0);
        }
      }
      pCVar3 = (pMVar1->fields).mainCamera;
      if (pCVar3 != (Camera *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (pCVar3->fields)._._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar3,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        iVar4 = (*pcRam_?)(pvVar10);
        bVar12 = cRam_? == '\0';
        (pMVar1->fields).cullingMask = iVar4;
        if (bVar12) {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) ||
           ((pMVar1->fields).blueModeEnabled == 0)) {
          return;
        }
        pCVar3 = (pMVar1->fields).mainCamera;
        if (pCVar3 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (pCVar3,0,(MethodInfo *)0x0);
          pCVar3 = (pMVar1->fields).mainCamera;
          if (pCVar3 != (Camera *)0x0) {
            uVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                              (pCVar3,(MethodInfo *)0x0);
            uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (pCVar3,uVar5 | 1 << (uVar6 & 0x1f),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ToggleFps() */

void Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_ToggleFps
               (ModeControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).fpsCounter;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).fpsCounter;
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
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar2 = (void *)0x0;
      if (pGVar1 != (GameObject *)0x0) {
        pvVar2 = (pGVar1->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,0);
      return;
    }
  }
  pGVar1 = (this->fields).fpsCounterPrefab;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar1 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pGVar1,parent,0,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                     );
  bVar5 = iRam_? != 0;
  (this->fields).fpsCounter = pGVar1;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).fpsCounter >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Void TogglePlayerIndicators() */

void Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_TogglePlayerIndicators
               (ModeControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  LocationIndicatorsManager_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicatorsManager>_LocationIndicatorsManager__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).locationIndicatorsManager;
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
  if (pLVar1 != (LocationIndicatorsManager *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pLVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pLVar1 = (this->fields).locationIndicatorsManager;
      if (pLVar1 == (LocationIndicatorsManager *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pLVar1,(MethodInfo *)0x0);
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
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar4 = (void *)0x0;
      if (pGVar3 != (GameObject *)0x0) {
        pvVar4 = (pGVar3->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,0);
      return;
    }
  }
  pLVar1 = (this->fields).locationIndicatorsManagerPrefab;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar1 = (LocationIndicatorsManager *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pLVar1,parent,0,
                      LocationIndicatorsManager_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicatorsManager>_LocationIndicatorsManager__UnityEngine__Transform__bool_
                     );
  bVar6 = iRam_? != 0;
  (this->fields).locationIndicatorsManager = pLVar1;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).locationIndicatorsManager >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void set_IsInPauseMenu(Boolean) */

void Assembly-CSharp.dll::ModeControllerBase::ModeControllerBase_set_IsInPauseMenu
               (ModeControllerBase *this,bool value,MethodInfo *method)

{
  if (value != (this->fields).isInPauseMenu) {
    (this->fields).isInPauseMenu = value;
    pAVar1 = (this->fields)._IsPausedStateChange_k__BackingField;
    if (pAVar1 != (Action_1_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,value,(pAVar1->fields)._._.method);
      return;
    }
  }
  return;
}

