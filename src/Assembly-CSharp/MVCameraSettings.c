
/* Void Destroy() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_Destroy
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICameraSettings);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVCameraSettings__OnCameraSettingAdded__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isPreview == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0))
    goto code_?;
    MVar3 = (pMVar2->fields)._GameType_k__BackingField;
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar4 = MainCameraManager::MainCameraManager_HasSetting(MVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      MVar3 = (pMVar2->fields)._GameType_k__BackingField;
      if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar6 = MainCameraManager::MainCameraManager_GetSettings(MVar3,(MethodInfo *)0x0);
      if (pIVar6 == (ICameraSettings *)0x0) goto code_?;
      FUN_?(1);
    }
    if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar7 = TypeInfo__PostProcessingManager->static_fields->OnPostProcessCameraCubeAddedRemoved;
    if (pAVar7 != (Action_1_Boolean_ *)0x0) {
      (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code);
    }
    if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    PostProcessingManager::PostProcessingManager_set_HasGamePostProcessEffects(0,(MethodInfo *)0x0);
  }
  if ((this->fields).needToUnsubscribeToSettingsCallback != 0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    pAVar8 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__MVCameraSettings__OnCameraSettingAdded__,
               (MethodInfo *)0x0);
    pAVar8 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar8 == (Action *)0x0) {
      TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = (Action *)0x0;
    }
    else {
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 == (Action *)0x0) {
        FUN_?(pAVar8,TypeInfo__System__Action);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = pAVar9;
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 == (Action *)0x0) {
        FUN_?(pAVar8,TypeInfo__System__Action);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded
                     >> 0xc);
      puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar12 = *puVar11;
        LOCK();
        uVar13 = *puVar11;
        if (uVar12 == uVar13) {
          *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (uVar12 != uVar13);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar14 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar14) {
      uVar10 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
      puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar12 = *puVar11;
        LOCK();
        uVar13 = *puVar11;
        if (uVar12 == uVar13) {
          *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (uVar12 != uVar13);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar15 = (this->fields)._._.gameObject;
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
  if (pGVar15 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar15->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar15 = (this->fields)._._.gameObject;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar15,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pRVar16 = (pMVar2->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar16 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar16->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                 HashSet_1_System_Int32Enum__Contains
                           (this_00,item,
                            MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar4 != 0) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 == (MVNetworkGame *)0x0) ||
             (pRVar16 = (pMVar2->fields).runtimeVariableNetworkManager,
             pRVar16 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar16,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_Initialize
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this,(this->klass->vtable).OnDataUpdate.method);
  if ((this->fields).isPreview == 0) {
    if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PostProcessingManager);
    }
    pAVar1 = TypeInfo__PostProcessingManager->static_fields->OnPostProcessCameraCubeAddedRemoved;
    if (pAVar1 != (Action_1_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,1,(pAVar1->fields)._._.method);
      return;
    }
  }
  return;
}


/* Void OnCameraSettingAdded() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_OnCameraSettingAdded
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ICameraSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    MVar3 = (pMVar2->fields)._GameType_k__BackingField;
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar4 = MainCameraManager::MainCameraManager_HasSetting(MVar3,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
      MVar3 = (pMVar2->fields)._GameType_k__BackingField;
      if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar5 = MainCameraManager::MainCameraManager_GetSettings(MVar3,(MethodInfo *)0x0);
      if (pIVar5 != (ICameraSettings *)0x0) {
        FUN_?(0,TypeInfo__ICameraSettings,pIVar5,(this->fields)._._._.data);
        (this->fields).needToUnsubscribeToSettingsCallback = 0;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_OnDataUpdate
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICameraSettings);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVCameraSettings__OnCameraSettingAdded__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVCameraSettings_UpdateStaticValues(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    MVar3 = (pMVar2->fields)._GameType_k__BackingField;
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar4 = MainCameraManager::MainCameraManager_HasSetting(MVar3,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MainCameraManager);
      }
      pAVar5 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__MVCameraSettings__OnCameraSettingAdded__,
                 (MethodInfo *)0x0);
      pAVar5 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar5 == (Action *)0x0) {
        TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = (Action *)0x0;
      }
      else {
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) {
          FUN_?(pAVar5,TypeInfo__System__Action);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = pAVar6;
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) {
          FUN_?(pAVar5,TypeInfo__System__Action);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded
                       >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      (this->fields).needToUnsubscribeToSettingsCallback = 1;
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
      MVar3 = (pMVar2->fields)._GameType_k__BackingField;
      if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar12 = MainCameraManager::MainCameraManager_GetSettings(MVar3,(MethodInfo *)0x0);
      if (pIVar12 != (ICameraSettings *)0x0) {
        pDVar13 = (this->fields)._._._.data;
        uVar14 = 0;
        pIVar15 = pIVar12->klass;
        uVar16._0_1_ = (pIVar15->_1).rank;
        uVar16._1_1_ = (pIVar15->_1).minimumAlignment;
        if (uVar16 != 0) {
          do {
            if (pIVar15->interfaceOffsets[uVar14].interfaceType ==
                (Il2CppClass *)TypeInfo__ICameraSettings) {
              pVVar17 = &(pIVar15->vtable).UpdateFromCameraSettings +
                        pIVar15->interfaceOffsets[uVar14].offset;
              goto code_?;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar16);
        }
        pVVar17 = (VirtualInvokeData *)FUN_?(pIVar12);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar17->methodPtr)(pIVar12,pDVar13,pVVar17->method,pVVar17->methodPtr);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateStaticValues() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_UpdateStaticValues
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_distanceToAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_forceFirstPersonCamera);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  cVar2 = '\0';
  pOStackX_8 = (Object *)0x0;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar1,(Object *)StringLiteral_forceFirstPersonCamera,&pOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar4 == (MVGameControllerBase *)0x0) ||
         (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0))
      goto code_?;
      if ((pMVar5->fields)._GameType_k__BackingField != 2) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar6 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar6->fields).gameMode == 1) {
          if (pOStackX_8 == (Object *)0x0) goto code_?;
          if ((pOStackX_8->klass->_0).element_class !=
              *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOStackX_8);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          cVar2 = *(char *)&pOStackX_8[1].klass;
        }
      }
      if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MainCameraManager);
      }
      TypeInfo__MainCameraManager->static_fields->DefaultCameraType = -(uint)(cVar2 != '\0') & 0x10;
      TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson = cVar2 != '\0';
    }
    pDVar1 = (this->fields)._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_distanceToAvatar,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MainCameraManager);
      }
      if (pOVar8 != (Object *)0x0) {
        if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar8,lRam_?);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase =
             *(float *)&pOVar8[1].klass;
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
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
        if (pMVar9 != (MainCameraManager *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (((pMVar9->fields)._._._._.m_CachedPtr != (void *)0x0) &&
             ((this->fields).isPreview == 0)) {
            this_00 = (pMVar9->fields).postProcessingManager;
            FUN_?(&PStack_10,0);
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::PostProcessingSettings::
            PostProcessingSettings__ctor(&PStack_10,(this->fields)._._._.data,(MethodInfo *)0x0);
            if (this_00 == (PostProcessingManager *)0x0) goto code_?;
            PStack_11.colorSettings.colors = PStack_10.colorSettings.colors;
            PStack_11.colorSettings._1_3_ = PStack_10.colorSettings._1_3_;
            PStack_11.colorSettings.postExposure = PStack_10.colorSettings.postExposure;
            PStack_11.colorSettings.temperature = PStack_10.colorSettings.temperature;
            PStack_11.colorSettings.saturation = PStack_10.colorSettings.saturation;
            PStack_11.colorSettings.contrast = PStack_10.colorSettings.contrast;
            PStack_11.bloomSettings.bloom = PStack_10.bloomSettings.bloom;
            PStack_11.bloomSettings._1_3_ = PStack_10.bloomSettings._1_3_;
            PStack_11.bloomSettings.intensity = PStack_10.bloomSettings.intensity;
            PStack_11.bloomSettings.softKnee = PStack_10.bloomSettings.softKnee;
            PStack_11.bloomSettings.diffusion = PStack_10.bloomSettings.diffusion;
            PStack_11.bloomSettings.color.r = PStack_10.bloomSettings.color.r;
            PStack_11.bloomSettings.color.g = PStack_10.bloomSettings.color.g;
            PStack_11.bloomSettings.color.b = PStack_10.bloomSettings.color.b;
            PStack_11.bloomSettings.color.a = PStack_10.bloomSettings.color.a;
            PStack_11.ambientOcclusionSettings.ambientOcclusion =
                 PStack_10.ambientOcclusionSettings.ambientOcclusion;
            PStack_11.ambientOcclusionSettings._1_3_ = PStack_10.ambientOcclusionSettings._1_3_;
            PStack_11.ambientOcclusionSettings.intensity =
                 PStack_10.ambientOcclusionSettings.intensity;
            PStack_11.ambientOcclusionSettings.thickness =
                 PStack_10.ambientOcclusionSettings.thickness;
            PStack_11.ambientOcclusionSettings.color.r = PStack_10.ambientOcclusionSettings.color.r
            ;
            PStack_11.ambientOcclusionSettings.color.g = PStack_10.ambientOcclusionSettings.color.g
            ;
            PStack_11.ambientOcclusionSettings.color.b = PStack_10.ambientOcclusionSettings.color.b
            ;
            PStack_11.ambientOcclusionSettings.color.a = PStack_10.ambientOcclusionSettings.color.a
            ;
            PStack_11.depthOfFieldSettings.depthOfField =
                 PStack_10.depthOfFieldSettings.depthOfField;
            PStack_11.depthOfFieldSettings._1_3_ = PStack_10.depthOfFieldSettings._1_3_;
            PStack_11.depthOfFieldSettings.focusDistance =
                 PStack_10.depthOfFieldSettings.focusDistance;
            PStack_11.depthOfFieldSettings.aperture = PStack_10.depthOfFieldSettings.aperture;
            PStack_11.depthOfFieldSettings.focalLength = PStack_10.depthOfFieldSettings.focalLength
            ;
            PStack_11.depthOfFieldSettings.maxBlurSize = PStack_10.depthOfFieldSettings.maxBlurSize
            ;
            PStack_11.vignetteSettings.vignette = PStack_10.vignetteSettings.vignette;
            PStack_11.vignetteSettings._1_3_ = PStack_10.vignetteSettings._1_3_;
            PStack_11.vignetteSettings.intensity = PStack_10.vignetteSettings.intensity;
            PStack_11.vignetteSettings.smoothness = PStack_10.vignetteSettings.smoothness;
            PStack_11.vignetteSettings.roundness = PStack_10.vignetteSettings.roundness;
            PStack_11.vignetteSettings.color.r = PStack_10.vignetteSettings.color.r;
            PStack_11.vignetteSettings.color.g = PStack_10.vignetteSettings.color.g;
            PStack_11.vignetteSettings.color.b = PStack_10.vignetteSettings.color.b;
            PStack_11.vignetteSettings.color.a = PStack_10.vignetteSettings.color.a;
            PStack_11.vignetteSettings.rounded = PStack_10.vignetteSettings.rounded;
            PStack_11.vignetteSettings._33_3_ = PStack_10.vignetteSettings._33_3_;
            PStack_11.grainSettings.grain = PStack_10.grainSettings.grain;
            PStack_11.grainSettings._1_3_ = PStack_10.grainSettings._1_3_;
            PStack_11.grainSettings.intensity = PStack_10.grainSettings.intensity;
            PStack_11.grainSettings.size = PStack_10.grainSettings.size;
            PStack_11.grainSettings.luminanceContribution =
                 PStack_10.grainSettings.luminanceContribution;
            PStack_11.lensDistortionSettings.lensDistortion =
                 PStack_10.lensDistortionSettings.lensDistortion;
            PStack_11.lensDistortionSettings._1_3_ = PStack_10.lensDistortionSettings._1_3_;
            PStack_11.lensDistortionSettings.intensity = PStack_10.lensDistortionSettings.intensity
            ;
            PStack_11.lensDistortionSettings.xMultiplier =
                 PStack_10.lensDistortionSettings.xMultiplier;
            PStack_11.lensDistortionSettings.yMultiplier =
                 PStack_10.lensDistortionSettings.yMultiplier;
            bVar3 = PostProcessingManager::PostProcessingManager_Initialize
                              (this_00,&PStack_11,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
              FUN_?();
            }
            PostProcessingManager::PostProcessingManager_set_HasGamePostProcessEffects
                      (bVar3,(MethodInfo *)0x0);
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVCameraSettings(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings__ctor
               (MVCameraSettings *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvCameraSettingsPrefab,worldObjects,
               (MethodInfo *)0x0);
    (this->fields)._._.interactionFlags =
         (this->fields)._._.interactionFlags & 0xffffffffffffdfffU | 0x8000;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

