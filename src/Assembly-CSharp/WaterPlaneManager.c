
/* Void AddWaterPlaneLogicCube(MVWaterPlane) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_AddWaterPlaneLogicCube
               (WaterPlaneManager *this,MVWaterPlane *logicCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&StringLiteral_Added_water_plane_to_manager_twi);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields).waterPlaneLogicCube;
  if ((this->fields).waterPlaneLogicCube != (MVWaterPlane *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Added_water_plane_to_manager_twi,(MethodInfo *)0x0);
  }
  *ppMVar1 = logicCube;
  func_?(ppMVar1,logicCube);
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((logicCube != (MVWaterPlane *)0x0) && (pTVar2 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar2,(logicCube->fields)._._.transform,0,(MethodInfo *)0x0);
    pTVar2 = (this->fields).underwaterCameraPlane;
    if (pTVar2 != (Transform *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar2,(MethodInfo *)0x0);
      pCVar3 = (this->fields).mainCamera;
      if (pCVar3 != (Camera *)0x0) {
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pCVar3,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar2,parent,0,(MethodInfo *)0x0);
          pCVar3 = (this->fields).mainCamera;
          pTVar2 = (this->fields).underwaterCameraPlane;
          if (pCVar3 != (Camera *)0x0) {
            fVar4 = 0.0;
            fVar5 = 0.0;
            fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                               (pCVar3,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              value.y = fVar5;
              value.x = fVar4;
              value.z = fVar6 + _UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar2,value,(MethodInfo *)0x0);
              pTVar2 = (this->fields).underwaterCameraPlane;
              euler.y = 0.0;
              euler.z = 0.0;
              euler.x = (float)_UNK_?;
              pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                       Quaternion_Internal_FromEulerRad
                                 ((Quaternion *)&puStack_8,euler,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                          (pTVar2,*pQVar7,(MethodInfo *)0x0);
                pTVar2 = (this->fields).underwaterCameraPlane;
                if (pTVar2 != (Transform *)0x0) {
                  pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0);
                  if (pGVar9 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar9,1,(MethodInfo *)0x0);
                    pWVar10 = (this->fields).water;
                    if (pWVar10 != (Water *)0x0) {
                      pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pWVar10,(MethodInfo *)0x0);
                      if (pGVar9 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar9,1,(MethodInfo *)0x0);
                        pWVar10 = (this->fields).water;
                        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1)
                            .cctor_finished_or_no_cctor == 0) {
                          ppPStack11 =
                               (ProfileSettingsManager__Class **)
                               TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
                          func_?();
                        }
                        if (cRam_? == '\0') {
                          ppPStack11 =
                               &TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
                          func_?();
                          cRam_? = '\x01';
                        }
                        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1)
                            .cctor_finished_or_no_cctor == 0) {
                          ppPStack11 =
                               (ProfileSettingsManager__Class **)
                               TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
                          func_?();
                        }
                        iVar12 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                                static_fields->_LightQualityLevel_k__BackingField;
                        if ((iVar12 == 0) || ((iVar12 != 1 && (iVar12 != 2)))) {
                          iVar13 = 0;
                        }
                        else {
                          iVar13 = 1;
                        }
                        if (pWVar10 != (Water *)0x0) {
                          (pWVar10->fields).waterMode = iVar13;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_Awake
               (WaterPlaneManager *this,MethodInfo *method)

{
  ppSStack_1 = (StreamedAudioClip_IReceiver **)&stack0xfffffffc;
  pSVar2 = (this->fields).splashController;
  if ((pSVar2 != (SplashController *)0x0) &&
     (pSVar3 = (pSVar2->fields).streamedSplashSound, pSVar3 != (StreamedAudioClip *)0x0)) {
    ppSStack_1 = &(pSVar3->fields).receiver;
    *ppSStack_1 = (StreamedAudioClip_IReceiver *)pSVar2;
    func_?();
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Single ComputeAvatarWaterProximity(Vector3) */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                (WaterPlaneManager *this,Vector3 position,MethodInfo *method)

{
  if ((this->fields).waterPlaneLogicCube == (MVWaterPlane *)0x0) {
    return 0.0;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 == (Transform *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float10)(*pcVar1)();
    return (float)fVar2;
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
  fVar4 = (pVVar3->y - position.y) / _UNK_?;
  if (fVar4 < 0.0) {
    return 0.0;
  }
  if (fVar4 <= _UNK_?) {
    return fVar4;
  }
  return 1.0;
}


/* Single GetHeightAboveWaterLevel(Vector3) */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_GetHeightAboveWaterLevel
                (WaterPlaneManager *this,Vector3 position,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    return position.y - pVVar1->y;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Single GetHeightAboveWaterLevel(Single) */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_GetHeightAboveWaterLevel_1
                (WaterPlaneManager *this,float altitude,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    return altitude - pVVar1->y;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Void HandleQualityChanged(Object) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_HandleQualityChanged
               (WaterPlaneManager *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pLStack_1 = (LightingQualityLevel__Enum__Class *)
                &TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
    func_?();
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      pLStack_1 = TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
      pOStack_2 = value;
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pLStack_1 = (LightingQualityLevel__Enum__Class *)value;
    piVar4 = (int *)func_?();
    pWVar5 = (this->fields).water;
    if (*piVar4 == 0) {
      if (pWVar5 != (Water *)0x0) {
        (pWVar5->fields).waterMode = 0;
        (this->fields).audioHD = 0;
        return;
      }
    }
    else if (pWVar5 != (Water *)0x0) {
      (pWVar5->fields).waterMode = 1;
      (this->fields).audioHD = 1;
      return;
    }
  }
  pLStack_1 = (LightingQualityLevel__Enum__Class *)&stack0xfffffffc;
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleSkyboxColorChanged(Color) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_HandleSkyboxColorChanged
               (WaterPlaneManager *this,Color newColor,MethodInfo *method)

{
  this_00 = (this->fields).water;
  if (this_00 != (Water *)0x0) {
    Assembly-CSharp-firstpass.dll::Water::Water_set_WaterHorizon(this_00,newColor,(MethodInfo *)0x0)
    ;
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_OnDestroy
               (WaterPlaneManager *this,MethodInfo *method)

{
  if ((this->fields).splashController != (SplashController *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)TypeInfo__SplashController->static_fields->objectIDToData;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Clear__
                );
      TypeInfo__SplashController->static_fields->currentObjectID = 0;
      return;
    }
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_OnDisable
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&MethodInfo__WaterPlaneManager__HandleQualityChanged_System__Object_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<System::Object>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__WaterPlaneManager__HandleQualityChanged_System__Object_,(MethodInfo *)0x0
              );
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)func_?();
      if (value == (Object *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,value,method_00);
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_OnEnable
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&MethodInfo__WaterPlaneManager__HandleQualityChanged_System__Object_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<System::Object>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__WaterPlaneManager__HandleQualityChanged_System__Object_,(MethodInfo *)0x0
              );
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)func_?();
      if (value == (Object *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,value,method_00);
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveWaterPlaneLogicCube(MVWaterPlane) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_RemoveWaterPlaneLogicCube
               (WaterPlaneManager *this,MVWaterPlane *wp,MethodInfo *method)

{
  ppMVar1 = &(this->fields).waterPlaneLogicCube;
  *ppMVar1 = (MVWaterPlane *)0x0;
  func_?(ppMVar1,0);
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar2,(Transform *)0x0,0,(MethodInfo *)0x0);
    pTVar2 = (this->fields).underwaterCameraPlane;
    if (pTVar2 != (Transform *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar2,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar2,value,(MethodInfo *)0x0);
        pTVar2 = (this->fields).underwaterCameraPlane;
        if (pTVar2 != (Transform *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            this_00 = (this->fields).water;
            if (this_00 != (Water *)0x0) {
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,0,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)this,1,(MethodInfo *)0x0);
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                if (pGVar3 != (GameObject *)0x0) {
                  if (pcRam_? == (code *)0x0) {
                    pcRam_? = (code *)func_?();
                  }
                  (*pcRam_?)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_Start
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__AudioLowPassFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioLowPassFilter>__
                   );
    func_?(&
                    UnityEngine__AudioReverbFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioReverbFilter>__
                   );
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&TypeInfo__SkyboxManager__SkyboxColorChangedDelegate);
    func_?(&MethodInfo__WaterPlaneManager__HandleSkyboxColorChanged_UnityEngine__Color_);
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
  ppSVar2 = &(this->fields).skyboxManager;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,&stack0xfffffffc,&UNK_?,ppSVar2,pSVar1);
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
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVLocalPlayer *)0x0) {
        bVar1 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return;
        }
        pWVar2 = (this->fields).water;
        if (pWVar2 != (Water *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pWVar2,(MethodInfo *)0x0);
          this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (((this_03 != (MainCameraManager *)0x0) &&
              (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this_03,(MethodInfo *)0x0),
              this_04 != (Transform *)0x0)) &&
             (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xfffffff0,this_04,(MethodInfo *)0x0),
             pTVar3 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar3,*pVVar4,(MethodInfo *)0x0);
            pWVar2 = (this->fields).water;
            if ((pWVar2 != (Water *)0x0) &&
               (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pWVar2,(MethodInfo *)0x0),
               pTVar3 != (Transform *)0x0)) {
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition((Vector3 *)&puStack_5,pTVar3,(MethodInfo *)0x0);
              uVar6._0_4_ = pVVar4->x;
              uVar6._4_4_ = pVVar4->y;
              fVar7 = pVVar4->z;
              pWVar2 = (this->fields).water;
              uVar6 = uVar6 & 0xffffffff;
              if ((pWVar2 != (Water *)0x0) &&
                 (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pWVar2,(MethodInfo *)0x0),
                 pTVar3 != (Transform *)0x0)) {
                value.z = fVar7;
                value.x = (float)(int)uVar6;
                value.y = (float)(int)(uVar6 >> 0x20);
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar3,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateUnderwaterCameraEffects() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_UpdateUnderwaterCameraEffects
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__AudioLowPassFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioLowPassFilter>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__WaterY);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
  if ((pCVar1 != (Camera *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&puStack_4,pTVar2,(MethodInfo *)0x0);
    fVar5 = pVVar3->y;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&puStack_4,pTVar2,(MethodInfo *)0x0);
      pWVar6 = (this->fields).water;
      fVar7 = pVVar3->y;
      if (pWVar6 != (Water *)0x0) {
        (pWVar6->fields).isCameraAboveWater = fVar7 <= fVar5;
        pRVar8 = (this->fields).underwaterCameraPlaneRenderer;
        if (pRVar8 != (Renderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    (pRVar8,fVar5 < fVar7,(MethodInfo *)0x0);
          pRVar8 = (this->fields).underwaterCameraPlaneRenderer;
          if (pRVar8 != (Renderer *)0x0) {
            bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                              (pRVar8,(MethodInfo *)0x0);
            if (bVar9 != 0) {
              pRVar8 = (this->fields).underwaterCameraPlaneRenderer;
              if (pRVar8 == (Renderer *)0x0) goto code_?;
              this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  (pRVar8,(MethodInfo *)0x0);
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar2 == (Transform *)0x0) goto code_?;
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&puStack_4,pTVar2,(MethodInfo *)0x0);
              if (this_00 == (Material *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                        (this_00,StringLiteral__WaterY,pVVar3->y,(MethodInfo *)0x0);
            }
            pAVar10 = (this->fields).lowPassFilter;
            ppAVar11 = &(this->fields).lowPassFilter;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)pAVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar9 != 0) {
              pCVar1 = (this->fields).mainCamera;
              if (pCVar1 == (Camera *)0x0) goto code_?;
              pAVar10 = (AudioLowPassFilter *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  ((Component *)pCVar1,
                                   UnityEngine__AudioLowPassFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioLowPassFilter>__
                                  );
              *ppAVar11 = pAVar10;
              func_?(ppAVar11,pAVar10);
            }
            pAVar10 = *ppAVar11;
            if (fVar7 <= fVar5) {
              if (pAVar10 != (AudioLowPassFilter *)0x0) {
                bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                  ((Behaviour *)pAVar10,(MethodInfo *)0x0);
                if (bVar9 == 0) {
                  return;
                }
                if (*ppAVar11 != (AudioLowPassFilter *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)*ppAVar11,0,(MethodInfo *)0x0);
                  pAVar12 = (this->fields).reverbFilter;
                  if (pAVar12 != (AudioReverbFilter *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pAVar12,0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else if (pAVar10 != (AudioLowPassFilter *)0x0) {
              bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                ((Behaviour *)pAVar10,(MethodInfo *)0x0);
              if (bVar9 == 0) {
                if (*ppAVar11 == (AudioLowPassFilter *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)*ppAVar11,1,(MethodInfo *)0x0);
                if ((this->fields).audioHD != 0) {
                  pAVar12 = (this->fields).reverbFilter;
                  if (pAVar12 == (AudioReverbFilter *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pAVar12,1,(MethodInfo *)0x0);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_IsActive
               (WaterPlaneManager *this,MethodInfo *method)

{
  this_00 = (this->fields).water;
  if (this_00 != (Water *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      bVar2 = (*pcRam_?)();
      return bVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean get_IsLethal() */

bool Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_IsLethal
               (WaterPlaneManager *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pWVar2 = (this->fields).water;
  if (pWVar2 != (Water *)0x0) {
    return (pWVar2->fields).isLethal;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Color get_WaterColor() */

Color * Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_WaterColor
                  (Color *__return_storage_ptr__,WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__RefrColor);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).water;
  if ((pWVar1 != (Water *)0x0) &&
     (this_00 = (pWVar1->fields).meshRenderer, this_00 != (Renderer *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Material *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                         ((Vector4 *)&stack0xffffffec,this_01,StringLiteral__RefrColor,
                          (MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      fVar5 = pVVar2->w;
      __return_storage_ptr__->r = pVVar2->x;
      __return_storage_ptr__->g = fVar3;
      __return_storage_ptr__->b = fVar4;
      __return_storage_ptr__->a = fVar5;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pCVar7 = (Color *)(*pcVar6)();
  return pCVar7;
}


/* Single get_WaterLevel() */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_WaterLevel
                (WaterPlaneManager *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    return pVVar1->y;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
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
      func_?(&StringLiteral__HorizonColor);
      func_?(&StringLiteral__BumpMap);
      cRam_? = '\x01';
    }
    this_00 = (pWVar1->fields).meshRenderer;
    if ((this_00 != (Renderer *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            (this_00,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
      if (value == 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                  (this_01,StringLiteral__BumpMap,(pWVar1->fields).m_WaterBumpTexture,
                   (MethodInfo *)0x0);
        fVar3 = (pWVar1->fields).m_WaterHorizon.r;
        fVar4 = (pWVar1->fields).m_WaterHorizon.g;
        fVar5 = (pWVar1->fields).m_WaterHorizon.b;
        fStack6 = (pWVar1->fields).m_WaterHorizon.a;
      }
      else {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                  (this_01,StringLiteral__BumpMap,(pWVar1->fields).m_LethalBumpTexture,
                   (MethodInfo *)0x0);
        fVar3 = (pWVar1->fields).m_LethalHorizon.r;
        fVar4 = (pWVar1->fields).m_LethalHorizon.g;
        fVar5 = (pWVar1->fields).m_LethalHorizon.b;
        fStack6 = (pWVar1->fields).m_LethalHorizon.a;
      }
      value_00.y = fVar4;
      value_00.x = fVar3;
      value_00.z = fVar5;
      value_00.w = fStack6;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_01,StringLiteral__HorizonColor,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  uVar7 = func_?(&stack0xfffffff0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_WaterColor(Color) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_set_WaterColor
               (WaterPlaneManager *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__RefrColor);
    func_?(&StringLiteral__Color);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).underwaterCameraPlaneRenderer;
  if (pRVar1 != (Renderer *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       (pRVar1,(MethodInfo *)0x0);
    if (pMVar2 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar2,StringLiteral__Color,(Vector4)value,(MethodInfo *)0x0);
      pWVar3 = (this->fields).water;
      if ((pWVar3 != (Water *)0x0) &&
         (pRVar1 = (pWVar3->fields).meshRenderer, pRVar1 != (Renderer *)0x0)) {
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar1,(MethodInfo *)0x0);
        if (pMVar2 != (Material *)0x0) {
          value_00.z = (float)&UNK_?;
          value_00.x = (float)(int)value._0_8_;
          value_00.y = (float)(int)((ulonglong)value._0_8_ >> 0x20);
          value_00.w = (float)pRVar1;
          pRStack4 = pRVar1;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar2,StringLiteral__RefrColor,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

