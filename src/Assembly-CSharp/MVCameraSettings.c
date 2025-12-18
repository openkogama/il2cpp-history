
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
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = MainCameraManager::MainCameraManager_HasSetting((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      lVar2 = FUN_?();
      if (lVar2 == 0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_?(1);
    }
    if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar4 = TypeInfo__PostProcessingManager->static_fields->OnPostProcessCameraCubeAddedRemoved;
    if (pAVar4 != (Action_1_Boolean_ *)0x0) {
      (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code);
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
    pAVar5 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__MVCameraSettings__OnCameraSettingAdded__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
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
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = pAVar6;
      pAVar6 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 == (Action *)0x0) {
        FUN_?(pAVar5,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded
                     >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
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
    bVar11 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar11) {
      uVar7 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar12 = (this->fields)._._.gameObject;
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
  if (pGVar12 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar12->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar12 = (this->fields)._._.gameObject;
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
                ((Object_1 *)pGVar12,0.0,(MethodInfo *)0x0);
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
  pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar13 != (MVGameControllerBase *)0x0) &&
     (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) {
    pRVar15 = (pMVar14->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar15 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar15->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_00,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar1 != 0) {
          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar14 == (MVNetworkGame *)0x0) ||
             (pRVar15 = (pMVar14->fields).runtimeVariableNetworkManager,
             pRVar15 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar15,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__MainCameraManager->static_fields->cameraSettings != (ICameraSettings *)0x0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    lVar1 = FUN_?();
    if (lVar1 == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(0,TypeInfo__ICameraSettings,lVar1,(this->fields)._._._.data);
    (this->fields).needToUnsubscribeToSettingsCallback = 0;
  }
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
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__MainCameraManager->static_fields->cameraSettings == (ICameraSettings *)0x0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar1 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__MVCameraSettings__OnCameraSettingAdded__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = (Action *)0x0;
    }
    else {
      pAVar2 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 == (Action *)0x0) {
        FUN_?(pAVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = pAVar2;
      pAVar2 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 == (Action *)0x0) {
        FUN_?(pAVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded
                     >> 0xc);
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
    (this->fields).needToUnsubscribeToSettingsCallback = 1;
    return;
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  plVar8 = (longlong *)FUN_?();
  if (plVar8 == (longlong *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pDVar9 = (this->fields)._._._.data;
  uVar10 = 0;
  lVar11 = *plVar8;
  if (*(ushort *)(lVar11 + 0x12e) != 0) {
    do {
      if (*(ICameraSettings__Class **)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
          TypeInfo__ICameraSettings) {
        puVar12 = (undefined8 *)
                 ((longlong)*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) *
                  0x10 + 0x138 + lVar11);
        goto code_?;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ushort *)(lVar11 + 0x12e));
  }
  puVar12 = (undefined8 *)FUN_?(plVar8);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar12)(plVar8,pDVar9,puVar12[1],(code *)*puVar12);
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
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
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
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar4->fields).gameMode == 1) {
code_?:
      if (pOStackX_8 == (Object *)0x0) goto code_?;
      if ((pOStackX_8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOStackX_8);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      cVar2 = *(char *)&pOStackX_8[1].klass;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar4 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar4->fields).gameMode == 3) goto code_?;
    }
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    TypeInfo__MainCameraManager->static_fields->DefaultCameraType = -(uint)(cVar2 != '\0') & 0x10;
    TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson = cVar2 != '\0';
  }
  pDVar1 = (this->fields)._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,(Object *)StringLiteral_distanceToAvatar,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    if (pOVar6 != (Object *)0x0) {
      if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar6,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase = *(float *)&pOVar6[1].klass;
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
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
      if (pMVar7 != (MainCameraManager *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (((pMVar7->fields)._._._._.m_CachedPtr != (void *)0x0) && ((this->fields).isPreview == 0)
           ) {
          this_00 = (pMVar7->fields).postProcessingManager;
          FUN_?(&PStack_8,0);
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::PostProcessingSettings::
          PostProcessingSettings__ctor(&PStack_8,(this->fields)._._._.data,(MethodInfo *)0x0);
          if (this_00 == (PostProcessingManager *)0x0) goto code_?;
          PStack_9.colorSettings.colors = PStack_8.colorSettings.colors;
          PStack_9.colorSettings._1_3_ = PStack_8.colorSettings._1_3_;
          PStack_9.colorSettings.postExposure = PStack_8.colorSettings.postExposure;
          PStack_9.colorSettings.temperature = PStack_8.colorSettings.temperature;
          PStack_9.colorSettings.saturation = PStack_8.colorSettings.saturation;
          PStack_9.colorSettings.contrast = PStack_8.colorSettings.contrast;
          PStack_9.bloomSettings.bloom = PStack_8.bloomSettings.bloom;
          PStack_9.bloomSettings._1_3_ = PStack_8.bloomSettings._1_3_;
          PStack_9.bloomSettings.intensity = PStack_8.bloomSettings.intensity;
          PStack_9.bloomSettings.softKnee = PStack_8.bloomSettings.softKnee;
          PStack_9.bloomSettings.diffusion = PStack_8.bloomSettings.diffusion;
          PStack_9.bloomSettings.color.r = PStack_8.bloomSettings.color.r;
          PStack_9.bloomSettings.color.g = PStack_8.bloomSettings.color.g;
          PStack_9.bloomSettings.color.b = PStack_8.bloomSettings.color.b;
          PStack_9.bloomSettings.color.a = PStack_8.bloomSettings.color.a;
          PStack_9.ambientOcclusionSettings.ambientOcclusion =
               PStack_8.ambientOcclusionSettings.ambientOcclusion;
          PStack_9.ambientOcclusionSettings._1_3_ = PStack_8.ambientOcclusionSettings._1_3_;
          PStack_9.ambientOcclusionSettings.intensity =
               PStack_8.ambientOcclusionSettings.intensity;
          PStack_9.ambientOcclusionSettings.thickness =
               PStack_8.ambientOcclusionSettings.thickness;
          PStack_9.ambientOcclusionSettings.color.r = PStack_8.ambientOcclusionSettings.color.r;
          PStack_9.ambientOcclusionSettings.color.g = PStack_8.ambientOcclusionSettings.color.g;
          PStack_9.ambientOcclusionSettings.color.b = PStack_8.ambientOcclusionSettings.color.b;
          PStack_9.ambientOcclusionSettings.color.a = PStack_8.ambientOcclusionSettings.color.a;
          PStack_9.depthOfFieldSettings.depthOfField = PStack_8.depthOfFieldSettings.depthOfField
          ;
          PStack_9.depthOfFieldSettings._1_3_ = PStack_8.depthOfFieldSettings._1_3_;
          PStack_9.depthOfFieldSettings.focusDistance =
               PStack_8.depthOfFieldSettings.focusDistance;
          PStack_9.depthOfFieldSettings.aperture = PStack_8.depthOfFieldSettings.aperture;
          PStack_9.depthOfFieldSettings.focalLength = PStack_8.depthOfFieldSettings.focalLength;
          PStack_9.depthOfFieldSettings.maxBlurSize = PStack_8.depthOfFieldSettings.maxBlurSize;
          PStack_9.vignetteSettings.vignette = PStack_8.vignetteSettings.vignette;
          PStack_9.vignetteSettings._1_3_ = PStack_8.vignetteSettings._1_3_;
          PStack_9.vignetteSettings.intensity = PStack_8.vignetteSettings.intensity;
          PStack_9.vignetteSettings.smoothness = PStack_8.vignetteSettings.smoothness;
          PStack_9.vignetteSettings.roundness = PStack_8.vignetteSettings.roundness;
          PStack_9.vignetteSettings.color.r = PStack_8.vignetteSettings.color.r;
          PStack_9.vignetteSettings.color.g = PStack_8.vignetteSettings.color.g;
          PStack_9.vignetteSettings.color.b = PStack_8.vignetteSettings.color.b;
          PStack_9.vignetteSettings.color.a = PStack_8.vignetteSettings.color.a;
          PStack_9.vignetteSettings.rounded = PStack_8.vignetteSettings.rounded;
          PStack_9.vignetteSettings._33_3_ = PStack_8.vignetteSettings._33_3_;
          PStack_9.grainSettings.grain = PStack_8.grainSettings.grain;
          PStack_9.grainSettings._1_3_ = PStack_8.grainSettings._1_3_;
          PStack_9.grainSettings.intensity = PStack_8.grainSettings.intensity;
          PStack_9.grainSettings.size = PStack_8.grainSettings.size;
          PStack_9.grainSettings.luminanceContribution =
               PStack_8.grainSettings.luminanceContribution;
          PStack_9.lensDistortionSettings.lensDistortion =
               PStack_8.lensDistortionSettings.lensDistortion;
          PStack_9.lensDistortionSettings._1_3_ = PStack_8.lensDistortionSettings._1_3_;
          PStack_9.lensDistortionSettings.intensity = PStack_8.lensDistortionSettings.intensity;
          PStack_9.lensDistortionSettings.xMultiplier =
               PStack_8.lensDistortionSettings.xMultiplier;
          PStack_9.lensDistortionSettings.yMultiplier =
               PStack_8.lensDistortionSettings.yMultiplier;
          bVar3 = PostProcessingManager::PostProcessingManager_Initialize
                            (this_00,&PStack_9,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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

