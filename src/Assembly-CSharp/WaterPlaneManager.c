
/* Void AddWaterPlaneLogicCube(MVWaterPlane) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_AddWaterPlaneLogicCube
               (WaterPlaneManager *this,MVWaterPlane *logicCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Added_water_plane_to_manager_twi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).waterPlaneLogicCube != (MVWaterPlane *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Added_water_plane_to_manager_twi,(MethodInfo *)0x0);
  }
  bVar1 = iRam_? != 0;
  (this->fields).waterPlaneLogicCube = logicCube;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).waterPlaneLogicCube >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((logicCube != (MVWaterPlane *)0x0) && (pTVar6 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar6,(logicCube->fields)._._.transform,0,(MethodInfo *)0x0);
    pTVar6 = (this->fields).underwaterCameraPlane;
    if (pTVar6 != (Transform *)0x0) {
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar6,(MethodInfo *)0x0);
      pCVar7 = (this->fields).mainCamera;
      if ((pCVar7 != (Camera *)0x0) &&
         (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pCVar7,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar6,parent,0,(MethodInfo *)0x0);
        pCVar7 = (this->fields).mainCamera;
        pTVar6 = (this->fields).underwaterCameraPlane;
        if (pCVar7 != (Camera *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar8 = (pCVar7->fields)._._._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar7,(MethodInfo *)0x0);
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
          fStack_11 = (float)(*pcRam_?)(pvVar8);
          fStack_11 = fStack_11 + _UNK_?;
          if (pTVar6 != (Transform *)0x0) {
            uStack_12 = 0;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar8 = (pTVar6->fields)._._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar8,&uStack_12);
            pTVar6 = (this->fields).underwaterCameraPlane;
            uStack_13 = (ulonglong)_UNK_?;
            uStack_14 = 0;
            uStack_15 = 0;
            uStack_16 = 0;
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
            (*pcRam_?)(&uStack_13);
            if (pTVar6 != (Transform *)0x0) {
              uStack_17 = (undefined4)uStack_15;
              uStack_18 = uStack_15._4_4_;
              uStack_19 = (undefined4)uStack_16;
              uStack_20 = uStack_16._4_4_;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar8 = (pTVar6->fields)._._.m_CachedPtr;
              if (pvVar8 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar8);
              pTVar6 = (this->fields).underwaterCameraPlane;
              if ((pTVar6 != (Transform *)0x0) &&
                 (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
                 pGVar21 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar21,1,(MethodInfo *)0x0);
                pWVar22 = (this->fields).water;
                if ((pWVar22 != (Water *)0x0) &&
                   (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pWVar22,(MethodInfo *)0x0),
                   pGVar21 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar21,1,(MethodInfo *)0x0);
                  pWVar22 = (this->fields).water;
                  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               _1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               _1).field_0x1c == 0) {
                    FUN_?();
                  }
                  iVar23 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                          static_fields->_LightQualityLevel_k__BackingField;
                  if ((iVar23 == 0) || ((iVar23 != 1 && (iVar23 != 2)))) {
                    iVar24 = 0;
                  }
                  else {
                    iVar24 = 1;
                  }
                  if (pWVar22 == (Water *)0x0) {
                    FUN_?();
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  (pWVar22->fields).waterMode = iVar24;
                  return;
                }
              }
            }
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_Awake
               (WaterPlaneManager *this,MethodInfo *method)

{
  pSVar1 = (this->fields).splashController;
  if ((pSVar1 != (SplashController *)0x0) &&
     (pSVar2 = (pSVar1->fields).streamedSplashSound, pSVar2 != (StreamedAudioClip *)0x0)) {
    bVar3 = iRam_? != 0;
    (pSVar2->fields).receiver = (StreamedAudioClip_IReceiver *)pSVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pSVar2->fields).receiver >> 0xc);
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
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Single ComputeAvatarWaterProximity(Vector3) */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                (WaterPlaneManager *this,Vector3 *position,MethodInfo *method)

{
  if ((this->fields).waterPlaneLogicCube == (MVWaterPlane *)0x0) {
    return 0.0;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_1 = 0;
    uStack_2 = 0;
    pvVar3 = (obj->fields)._._.m_CachedPtr;
    if (pvVar3 != (void *)0x0) {
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        fVar6 = (float)(*pcVar4)();
        return fVar6;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,&uStack_1);
      fVar6 = (uStack_1._4_4_ - position->y) / _UNK_?;
      if (fVar6 < 0.0) {
        return 0.0;
      }
      if (_UNK_? < fVar6) {
        fVar6 = _UNK_?;
      }
      return fVar6;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    fVar6 = (float)(*pcVar4)();
    return fVar6;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar6 = (float)(*pcVar4)();
  return fVar6;
}


/* Single GetHeightAboveWaterLevel(Vector3) */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_GetHeightAboveWaterLevel
                (WaterPlaneManager *this,Vector3 *position,MethodInfo *method)

{
  fVar1 = WaterPlaneManager_get_WaterLevel(this,(MethodInfo *)0x0);
  return position->y - fVar1;
}


/* Single GetHeightAboveWaterLevel(Single) */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_GetHeightAboveWaterLevel_1
                (WaterPlaneManager *this,float altitude,MethodInfo *method)

{
  fVar1 = WaterPlaneManager_get_WaterLevel(this,(MethodInfo *)0x0);
  return altitude - fVar1;
}


/* Void HandleQualityChanged(Object) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_HandleQualityChanged
               (WaterPlaneManager *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      FUN_?(value);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pWVar2 = (this->fields).water;
    if (pWVar2 != (Water *)0x0) {
      if (*(int *)&value[1].klass != 0) {
        (pWVar2->fields).waterMode = 1;
        (this->fields).audioHD = 1;
        return;
      }
      (pWVar2->fields).waterMode = 0;
      (this->fields).audioHD = 0;
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleSkyboxColorChanged(Color) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_HandleSkyboxColorChanged
               (WaterPlaneManager *this,Color *newColor,MethodInfo *method)

{
  pWVar1 = (this->fields).water;
  if (pWVar1 != (Water *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__HorizonColor);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar2 = (pWVar1->fields).isLethal;
    fVar3 = newColor->g;
    fVar4 = newColor->b;
    fVar5 = newColor->a;
    (pWVar1->fields).m_WaterHorizon.r = newColor->r;
    (pWVar1->fields).m_WaterHorizon.g = fVar3;
    (pWVar1->fields).m_WaterHorizon.b = fVar4;
    (pWVar1->fields).m_WaterHorizon.a = fVar5;
    if (bVar2 != 0) {
      return;
    }
    this_00 = (pWVar1->fields).meshRenderer;
    if ((this_00 != (Renderer *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            (this_00,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
      CStack_6.r = (pWVar1->fields).m_WaterHorizon.r;
      CStack_6.g = (pWVar1->fields).m_WaterHorizon.g;
      CStack_6.b = (pWVar1->fields).m_WaterHorizon.b;
      CStack_6.a = (pWVar1->fields).m_WaterHorizon.a;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (this_01,StringLiteral__HorizonColor,&CStack_6,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_OnDestroy
               (WaterPlaneManager *this,MethodInfo *method)

{
  if ((this->fields).splashController != (SplashController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Clear__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__SplashController);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SplashController);
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)TypeInfo__SplashController->static_fields->objectIDToData;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Clear__
                );
      TypeInfo__SplashController->static_fields->currentObjectID = 0;
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_OnDisable
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WaterPlaneManager__HandleQualityChanged_System__Object_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__WaterPlaneManager__HandleQualityChanged_System__Object_,(MethodInfo *)0x0
              );
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<System::Object>;
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)FUN_?(pDVar1,TypeInfo__System__Action<System::Object>);
      if (value == (Object *)0x0) {
        FUN_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pIVar5 = pMVar3->klass->rgctx_data;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar5 >> 8),1),
               pIVar5[0x22].method);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_OnEnable
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WaterPlaneManager__HandleQualityChanged_System__Object_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__WaterPlaneManager__HandleQualityChanged_System__Object_,(MethodInfo *)0x0
              );
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<System::Object>;
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)FUN_?(pDVar1,TypeInfo__System__Action<System::Object>);
      if (value == (Object *)0x0) {
        FUN_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pIVar5 = pMVar3->klass->rgctx_data;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar5 >> 8),1),
               pIVar5[0x22].method);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveWaterPlaneLogicCube(MVWaterPlane) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_RemoveWaterPlaneLogicCube
               (WaterPlaneManager *this,MVWaterPlane *wp,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).waterPlaneLogicCube = (MVWaterPlane *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).waterPlaneLogicCube >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar6 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (pTVar6->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7);
    pTVar6 = (this->fields).underwaterCameraPlane;
    if (pTVar6 != (Transform *)0x0) {
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar6,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar6,value,(MethodInfo *)0x0);
        pTVar6 = (this->fields).underwaterCameraPlane;
        if ((pTVar6 != (Transform *)0x0) &&
           (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar6,(MethodInfo *)0x0), pGVar10 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar10,0,(MethodInfo *)0x0);
          this_00 = (this->fields).water;
          if ((this_00 != (Water *)0x0) &&
             (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0),
             pGVar10 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar10,0,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)this,1,(MethodInfo *)0x0);
            pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if (pGVar10 != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,1,0,in_R9,unaff_RSI);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar10 == (GameObject *)0x0) {
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pvVar7 = (pGVar10->fields)._.m_CachedPtr;
              if (pvVar7 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar10,(MethodInfo *)0x0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pcVar8 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                uVar9 = func_?(&UNK_?);
                FUN_?(uVar9,0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar7,1);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_Start
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__AudioLowPassFilter_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::AudioLowPassFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__AudioReverbFilter_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::AudioReverbFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SkyboxManager__SkyboxColorChangedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WaterPlaneManager__HandleSkyboxColorChanged_UnityEngine__Color_);
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
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    bVar2 = iRam_? != 0;
    (this->fields).skyboxManager = (pMVar1->fields).skyboxManager;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).skyboxManager >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pSVar7 = (this->fields).skyboxManager;
    if (pSVar7 != (SkyboxManager *)0x0) {
      pSVar8 = (pSVar7->fields).OnSkyboxColorChanged;
      b = (Delegate *)FUN_?(TypeInfo__SkyboxManager__SkyboxColorChangedDelegate);
      pMVar9 = MethodInfo__WaterPlaneManager__HandleSkyboxColorChanged_UnityEngine__Color_;
      bVar2 = iRam_? != 0;
      (b->fields).method_ptr =
           MethodInfo__WaterPlaneManager__HandleSkyboxColorChanged_UnityEngine__Color_->
           virtualMethodPointer;
      (b->fields).method = pMVar9;
      (b->fields).m_target = (Object *)this;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      uVar10 = pMVar9->parameters_count;
      (b->fields).method_code = b;
      if (((pMVar9->flags & 0x10) == 0) || (uVar10 != 1)) {
        (b->fields).method_code = (b->fields).m_target;
        pcVar11 = (b->fields).method_ptr;
      }
      else {
        pcVar11 = FUN_?;
      }
      (b->fields).invoke_impl = pcVar11;
      (b->fields).extra_arg = FUN_?;
      pSVar8 = (SkyboxManager_SkyboxColorChangedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pSVar8,b,(MethodInfo *)0x0);
      if (pSVar8 == (SkyboxManager_SkyboxColorChangedDelegate *)0x0) {
        (pSVar7->fields).OnSkyboxColorChanged = (SkyboxManager_SkyboxColorChangedDelegate *)0x0;
      }
      else {
        pSVar12 = (SkyboxManager_SkyboxColorChangedDelegate *)0x0;
        if (pSVar8->klass == TypeInfo__SkyboxManager__SkyboxColorChangedDelegate) {
          pSVar12 = pSVar8;
        }
        if (pSVar12 == (SkyboxManager_SkyboxColorChangedDelegate *)0x0) {
          FUN_?(pSVar8,TypeInfo__SkyboxManager__SkyboxColorChangedDelegate);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pSVar7->fields).OnSkyboxColorChanged = pSVar12;
        pSVar12 = (SkyboxManager_SkyboxColorChangedDelegate *)0x0;
        if (pSVar8->klass == TypeInfo__SkyboxManager__SkyboxColorChangedDelegate) {
          pSVar12 = pSVar8;
        }
        if (pSVar12 == (SkyboxManager_SkyboxColorChangedDelegate *)0x0) {
          FUN_?(pSVar8);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pSVar7->fields).OnSkyboxColorChanged >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pTVar13 = (this->fields).underwaterCameraPlane;
      if ((pTVar13 != (Transform *)0x0) &&
         (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar13,(MethodInfo *)0x0), pGVar14 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar14,0,(MethodInfo *)0x0);
        pTVar13 = (this->fields).underwaterCameraPlane;
        if (pTVar13 != (Transform *)0x0) {
          pRVar15 = (Renderer *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)pTVar13,
                               UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                              );
          bVar2 = iRam_? != 0;
          (this->fields).underwaterCameraPlaneRenderer = pRVar15;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&(this->fields).underwaterCameraPlaneRenderer >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          this_00 = (this->fields).water;
          if ((this_00 != (Water *)0x0) &&
             (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0),
             pGVar14 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar14,0,(MethodInfo *)0x0);
            pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                ((MethodInfo *)0x0);
            bVar2 = iRam_? != 0;
            (this->fields).mainCamera = pCVar16;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            pCVar16 = (this->fields).mainCamera;
            if (pCVar16 != (Camera *)0x0) {
              pAVar17 = (AudioLowPassFilter *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_GetComponentInChildren_1
                                  ((Component *)pCVar16,
                                   UnityEngine__AudioLowPassFilter_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::AudioLowPassFilter>__
                                  );
              bVar2 = iRam_? != 0;
              (this->fields).lowPassFilter = pAVar17;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)&(this->fields).lowPassFilter >> 0xc);
                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              pCVar16 = (this->fields).mainCamera;
              if (pCVar16 != (Camera *)0x0) {
                pAVar18 = (AudioReverbFilter *)
                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_GetComponentInChildren_1
                                    ((Component *)pCVar16,
                                     UnityEngine__AudioReverbFilter_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::AudioReverbFilter>__
                                    );
                bVar2 = iRam_? != 0;
                (this->fields).reverbFilter = pAVar18;
                if (bVar2) {
                  uVar3 = (uint)((ulonglong)&(this->fields).reverbFilter >> 0xc);
                  lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                    puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                    LOCK();
                    bVar2 = uVar5 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar2);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_Update
               (WaterPlaneManager *this,MethodInfo *method)

{
  if ((this->fields).waterPlaneLogicCube == (MVWaterPlane *)0x0) {
    return;
  }
  WaterPlaneManager_UpdateUnderwaterCameraEffects(this,(MethodInfo *)0x0);
  this_00 = (this->fields).splashController;
  if (this_00 != (SplashController *)0x0) {
    SplashController::SplashController_CleanUpInactiveObjectIDs(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
        (this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) &&
       (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0)) {
      if ((pMVar3->fields)._.playerState != 1) {
        return;
      }
      pWVar4 = (this->fields).water;
      if (pWVar4 != (Water *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pWVar4,(MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if ((this_02 != (MainCameraManager *)0x0) &&
           (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_6 = 0;
          uStack_7 = 0;
          pvVar8 = (obj->fields)._._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar8);
          if (pTVar5 != (Transform *)0x0) {
            uStack_11 = uStack_6;
            uStack_12 = uStack_7;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar8 = (pTVar5->fields)._._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar8);
            pWVar4 = (this->fields).water;
            if ((pWVar4 != (Water *)0x0) &&
               (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pWVar4,(MethodInfo *)0x0),
               pTVar5 != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_6 = 0;
              uStack_7 = 0;
              pvVar8 = (pTVar5->fields)._._.m_CachedPtr;
              if (pvVar8 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar8);
              uVar13 = uStack_7;
              pWVar4 = (this->fields).water;
              uStack_11 = uStack_6 & 0xffffffff;
              if ((pWVar4 != (Water *)0x0) &&
                 (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pWVar4,(MethodInfo *)0x0),
                 pTVar5 != (Transform *)0x0)) {
                uStack_6 = uStack_11;
                uStack_7 = uVar13;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar8 = (pTVar5->fields)._._.m_CachedPtr;
                if (pvVar8 != (void *)0x0) {
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
                  (*pcRam_?)(pvVar8,&uStack_6);
                  return;
                }
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateUnderwaterCameraEffects() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_UpdateUnderwaterCameraEffects
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__AudioLowPassFilter_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::AudioLowPassFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__WaterY);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
  if ((pCVar1 == (Camera *)0x0) ||
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar5);
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_8 = 0;
  uStack_9 = 0;
  pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar5,&uStack_8);
  fVar10 = uStack_8._4_4_;
  fVar11 = uStack_3._4_4_;
  pWVar12 = (this->fields).water;
  if (pWVar12 == (Water *)0x0) goto code_?;
  (pWVar12->fields).isCameraAboveWater = uStack_8._4_4_ <= uStack_3._4_4_;
  pRVar13 = (this->fields).underwaterCameraPlaneRenderer;
  if (pRVar13 == (Renderer *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
            (pRVar13,uStack_3._4_4_ < uStack_8._4_4_,(MethodInfo *)0x0);
  pRVar13 = (this->fields).underwaterCameraPlaneRenderer;
  if (pRVar13 == (Renderer *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (pRVar13->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar13,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  cVar14 = (*pcRam_?)(pvVar5);
  if (cVar14 != '\0') {
    pRVar13 = (this->fields).underwaterCameraPlaneRenderer;
    if (pRVar13 == (Renderer *)0x0) goto code_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (pRVar13,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5);
    if (this_00 == (Material *)0x0) goto code_?;
    name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                     (StringLiteral__WaterY,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
              (this_00,name,uStack_3._4_4_,(MethodInfo *)0x0);
  }
  pAVar15 = (this->fields).lowPassFilter;
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
  if (pAVar15 == (AudioLowPassFilter *)0x0) {
code_?:
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 == (Camera *)0x0) goto code_?;
    pAVar15 = (AudioLowPassFilter *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                        ((Component *)pCVar1,
                         UnityEngine__AudioLowPassFilter_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::AudioLowPassFilter>__
                        );
    bVar16 = iRam_? != 0;
    (this->fields).lowPassFilter = pAVar15;
    if (bVar16) {
      uVar17 = (uint)((ulonglong)&(this->fields).lowPassFilter >> 0xc);
      uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar16 = uVar19 == *puVar20;
        if (bVar16) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar16);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar15->fields)._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pAVar15 = (this->fields).lowPassFilter;
  if (fVar10 <= fVar11) {
    if (pAVar15 != (AudioLowPassFilter *)0x0) {
      bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                         ((Behaviour *)pAVar15,(MethodInfo *)0x0);
      if (bVar21 == 0) {
        return;
      }
      pAVar15 = (this->fields).lowPassFilter;
      if (pAVar15 != (AudioLowPassFilter *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pAVar15,0,(MethodInfo *)0x0);
        this_01 = (this->fields).reverbFilter;
        if (this_01 != (AudioReverbFilter *)0x0) {
          bVar21 = 0;
          goto code_?;
        }
      }
    }
  }
  else if (pAVar15 != (AudioLowPassFilter *)0x0) {
    bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                       ((Behaviour *)pAVar15,(MethodInfo *)0x0);
    if (bVar21 != 0) {
      return;
    }
    pAVar15 = (this->fields).lowPassFilter;
    if (pAVar15 != (AudioLowPassFilter *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pAVar15,1,(MethodInfo *)0x0);
      if ((this->fields).audioHD == 0) {
        return;
      }
      this_01 = (this->fields).reverbFilter;
      if (this_01 != (AudioReverbFilter *)0x0) {
        bVar21 = 1;
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,bVar21,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_IsActive
               (WaterPlaneManager *this,MethodInfo *method)

{
  this_00 = (this->fields).water;
  if ((this_00 == (Water *)0x0) ||
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


/* Boolean get_IsLethal() */

bool Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_IsLethal
               (WaterPlaneManager *this,MethodInfo *method)

{
  pWVar1 = (this->fields).water;
  if (pWVar1 != (Water *)0x0) {
    return (pWVar1->fields).isLethal;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Color get_WaterColor() */

Color * Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_WaterColor
                  (Color *__return_storage_ptr__,WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__RefrColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).water;
  if ((pWVar1 != (Water *)0x0) &&
     (this_00 = (pWVar1->fields).meshRenderer, this_00 != (Renderer *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Material *)0x0) {
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                         (&CStack_3,this_01,StringLiteral__RefrColor,(MethodInfo *)0x0);
      fVar4 = pCVar2->g;
      fVar5 = pCVar2->b;
      fVar6 = pCVar2->a;
      __return_storage_ptr__->r = pCVar2->r;
      __return_storage_ptr__->g = fVar4;
      __return_storage_ptr__->b = fVar5;
      __return_storage_ptr__->a = fVar6;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pCVar2 = (Color *)(*pcVar7)();
  return pCVar2;
}


/* Single get_WaterLevel() */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_WaterLevel
                (WaterPlaneManager *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  return uStack_3._4_4_;
}


/* Void set_IsLethal(Boolean) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_set_IsLethal
               (WaterPlaneManager *this,bool value,MethodInfo *method)

{
  pWVar1 = (this->fields).water;
  if (pWVar1 != (Water *)0x0) {
    bVar2 = cRam_? == '\0';
    (pWVar1->fields).isLethal = value;
    if (bVar2) {
      FUN_?(&StringLiteral__HorizonColor);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__BumpMap);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pWVar1->fields).meshRenderer;
    if (this_00 != (Renderer *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (this_00,(MethodInfo *)0x0);
      if (value == 0) {
        pTVar3 = (pWVar1->fields).m_WaterBumpTexture;
        if (this_01 == (Material *)0x0) goto code_?;
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__BumpMap,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                  (this_01,iVar4,pTVar3,(MethodInfo *)0x0);
        CStack_5.r = (pWVar1->fields).m_WaterHorizon.r;
        CStack_5.g = (pWVar1->fields).m_WaterHorizon.g;
        CStack_5.b = (pWVar1->fields).m_WaterHorizon.b;
        CStack_5.a = (pWVar1->fields).m_WaterHorizon.a;
      }
      else {
        pTVar3 = (pWVar1->fields).m_LethalBumpTexture;
        if (this_01 == (Material *)0x0) goto code_?;
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          (StringLiteral__BumpMap,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                  (this_01,iVar4,pTVar3,(MethodInfo *)0x0);
        CStack_5.r = (pWVar1->fields).m_LethalHorizon.r;
        CStack_5.g = (pWVar1->fields).m_LethalHorizon.g;
        CStack_5.b = (pWVar1->fields).m_LethalHorizon.b;
        CStack_5.a = (pWVar1->fields).m_LethalHorizon.a;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (this_01,StringLiteral__HorizonColor,&CStack_5,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_WaterColor(Color) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_set_WaterColor
               (WaterPlaneManager *this,Color *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__RefrColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).underwaterCameraPlaneRenderer;
  if (pRVar1 != (Renderer *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       (pRVar1,(MethodInfo *)0x0);
    if (pMVar2 != (Material *)0x0) {
      CStack_3.r = value->r;
      CStack_3.g = value->g;
      CStack_3.b = value->b;
      CStack_3.a = value->a;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (pMVar2,StringLiteral__Color,&CStack_3,(MethodInfo *)0x0);
      pWVar4 = (this->fields).water;
      if ((pWVar4 != (Water *)0x0) &&
         (pRVar1 = (pWVar4->fields).meshRenderer, pRVar1 != (Renderer *)0x0)) {
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar1,(MethodInfo *)0x0);
        if (pMVar2 != (Material *)0x0) {
          CStack_3.r = value->r;
          CStack_3.g = value->g;
          CStack_3.b = value->b;
          CStack_3.a = value->a;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar2,StringLiteral__RefrColor,&CStack_3,(MethodInfo *)0x0);
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

