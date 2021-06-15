
/* Void AddWaterPlaneLogicCube(MVWaterPlane) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_AddWaterPlaneLogicCube
               (WaterPlaneManager *this,MVWaterPlane *logicCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).waterPlaneLogicCube != (MVWaterPlane *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Added_water_plane_to_manager_twi,(MethodInfo *)0x0);
  }
  (this->fields).waterPlaneLogicCube = logicCube;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (logicCube != (MVWaterPlane *)0x0) {
    parent = PrefabPool::PrefabPool_get_MVPointLightPrefab
                       ((PrefabPool *)logicCube,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar1,(Transform *)parent,0,(MethodInfo *)0x0);
      pTVar1 = (this->fields).underwaterCameraPlane;
      if (pTVar1 != (Transform *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pTVar1,(MethodInfo *)0x0);
        pCVar2 = (this->fields).mainCamera;
        if (pCVar2 != (Camera *)0x0) {
          parent_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pCVar2,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar1,parent_00,0,(MethodInfo *)0x0);
            pCVar2 = (this->fields).mainCamera;
            pTVar1 = (this->fields).underwaterCameraPlane;
            if (pCVar2 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                        (pCVar2,(MethodInfo *)0x0);
              fVar3 = 0.0;
              uVar4 = 0;
              func_?();
              if (pTVar1 != (Transform *)0x0) {
                value.z = fVar3;
                value.x = (float)(int)uVar4;
                value.y = (float)(int)((ulonglong)uVar4 >> 0x20);
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar1,value,(MethodInfo *)0x0);
                pTVar1 = (this->fields).underwaterCameraPlane;
                if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000
                     ) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Quaternion);
                }
                pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                                   ((Quaternion *)&stack0xffffffe0,-90.0,0.0,0.0,(MethodInfo *)0x0);
                if (pTVar1 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            (pTVar1,*pQVar5,(MethodInfo *)0x0);
                  pTVar1 = (this->fields).underwaterCameraPlane;
                  if (pTVar1 != (Transform *)0x0) {
                    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pTVar1,(MethodInfo *)0x0);
                    if (pGVar6 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar6,1,(MethodInfo *)0x0);
                      this_00 = (this->fields).water;
                      if (this_00 != (Water *)0x0) {
                        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_gameObject
                                           ((Component_1 *)this_00,(MethodInfo *)0x0);
                        if (pGVar6 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar6,1,(MethodInfo *)0x0);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_Awake
               (WaterPlaneManager *this,MethodInfo *method)

{
  pSVar1 = (this->fields).splashController;
  if (pSVar1 == (SplashController *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (pSVar1->fields).streamedSplashSound;
  if (pSVar3 != (StreamedAudioClip *)0x0) {
    (pSVar3->fields).receiver = (StreamedAudioClip_IReceiver *)pSVar1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Single ComputeAvatarWaterProximity(Vector3) */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                (WaterPlaneManager *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).waterPlaneLogicCube != (MVWaterPlane *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
      pMVar2 = (Mathf__Class *)pVVar1->y;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        pMVar2 = TypeInfo__UnityEngine__Mathf;
        func_?();
      }
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                        (((float)pMVar2 - position.y) / _UNK_?,(MethodInfo *)0x0);
      return fVar3;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    fVar5 = (float10)(*pcVar4)();
    return (float)fVar5;
  }
  return 0.0;
}


/* Single GetHeightAboveWaterLevel(Vector3) */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_GetHeightAboveWaterLevel
                (WaterPlaneManager *this,Vector3 position,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->y;
    return position.y - (float)uVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single GetHeightAboveWaterLevel(Single) */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_GetHeightAboveWaterLevel_1
                (WaterPlaneManager *this,float altitude,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->y;
    return altitude - (float)uVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Void HandleQualityChanged(Int32) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_HandleQualityChanged
               (WaterPlaneManager *this,int32_t level,MethodInfo *method)

{
  if ((level != 0) && (level != 2)) {
    if (level == 1) {
      pWVar1 = (this->fields).water;
      if (pWVar1 == (Water *)0x0) goto code_?;
      (pWVar1->fields).m_WaterMode = 1;
      (this->fields).audioHD = 1;
    }
    return;
  }
  pWVar1 = (this->fields).water;
  if (pWVar1 != (Water *)0x0) {
    (pWVar1->fields).m_WaterMode = 0;
    (this->fields).audioHD = 0;
    return;
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleSkyboxColorChanged(Color) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_HandleSkyboxColorChanged
               (WaterPlaneManager *this,Color newColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (AddDotsToTruncatedText_Start_c_Iterator0 *)(this->fields).water;
  if (this_00 != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) {
    this_01 = (Renderer *)
              AddDotsToTruncatedText+<Start>c__Iterator0::
              AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Renderer *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_02,StringLiteral__HorizonColor,(Vector4)newColor,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_OnDestroy
               (WaterPlaneManager *this,MethodInfo *method)

{
  if ((this->fields).splashController == (SplashController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SplashController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SplashController->_1).cctor_started == 0)) {
    func_?(TypeInfo__SplashController);
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)TypeInfo__SplashController->static_fields->objectIDToData;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Clear__
              );
    TypeInfo__SplashController->static_fields->currentObjectID = 0;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_OnDisable
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  pMVar1 = TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__MVQualitySettings__OnQualityLevedChanged);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__WaterPlaneManager__HandleQualityChanged_int_,
             (MethodInfo *)0x0);
  pMStack2 =
       (MVQualitySettings_OnQualityLevedChanged *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pMVar1 = (MVQualitySettings_OnQualityLevedChanged *)0x0;
  if (pMStack2 != (MVQualitySettings_OnQualityLevedChanged *)0x0) {
    if (pMStack2->klass == TypeInfo__MVQualitySettings__OnQualityLevedChanged) {
      pMVar1 = pMStack2;
    }
    if (pMVar1 == (MVQualitySettings_OnQualityLevedChanged *)0x0) {
      pMStack3 = TypeInfo__MVQualitySettings__OnQualityLevedChanged;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged = pMVar1;
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_OnEnable
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  pMVar1 = TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__MVQualitySettings__OnQualityLevedChanged);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__WaterPlaneManager__HandleQualityChanged_int_,
             (MethodInfo *)0x0);
  pMStack2 =
       (MVQualitySettings_OnQualityLevedChanged *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pMVar1 = (MVQualitySettings_OnQualityLevedChanged *)0x0;
  if (pMStack2 != (MVQualitySettings_OnQualityLevedChanged *)0x0) {
    if (pMStack2->klass == TypeInfo__MVQualitySettings__OnQualityLevedChanged) {
      pMVar1 = pMStack2;
    }
    if (pMVar1 == (MVQualitySettings_OnQualityLevedChanged *)0x0) {
      pMStack3 = TypeInfo__MVQualitySettings__OnQualityLevedChanged;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged = pMVar1;
  return;
}


/* Void RemoveWaterPlaneLogicCube(MVWaterPlane) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_RemoveWaterPlaneLogicCube
               (WaterPlaneManager *this,MVWaterPlane *wp,MethodInfo *method)

{
  (this->fields).waterPlaneLogicCube = (MVWaterPlane *)0x0;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,(Transform *)0x0,0,(MethodInfo *)0x0);
    pTVar1 = (this->fields).underwaterCameraPlane;
    if (pTVar1 != (Transform *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar1,value,(MethodInfo *)0x0);
        pTVar1 = (this->fields).underwaterCameraPlane;
        if ((pTVar1 != (Transform *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pTVar1,(MethodInfo *)0x0),
           pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          this_00 = (this->fields).water;
          if ((this_00 != (Water *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)this,1,(MethodInfo *)0x0);
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              pcVar3 = pcRam_?;
              if (pcRam_? == (code *)0x0) {
                pcVar3 = (code *)func_?();
                if (pcVar3 == (code *)0x0) {
                  puStack4 = (undefined *)0x0;
                  puStack5 = (undefined *)0x0;
                  puStack6 = (undefined *)func_?();
                  func_?();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              pcRam_? = pcVar3;
              (*pcRam_?)();
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_Start
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
  (this->fields).skyboxManager = pSVar1;
  if (pSVar1 != (SkyboxManager *)0x0) {
    pSVar2 = (pSVar1->fields).OnSkyboxColorChanged;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__SkyboxManager__SkyboxColorChangedDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__WaterPlaneManager__HandleSkyboxColorChanged_UnityEngine__Color_,
               (MethodInfo *)0x0);
    pSVar3 = (SkyboxManager_SkyboxColorChangedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pSVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    pSVar2 = (SkyboxManager_SkyboxColorChangedDelegate *)0x0;
    if (pSVar3 != (SkyboxManager_SkyboxColorChangedDelegate *)0x0) {
      if (pSVar3->klass == TypeInfo__SkyboxManager__SkyboxColorChangedDelegate) {
        pSVar2 = pSVar3;
      }
      pSVar4 = TypeInfo__SkyboxManager__SkyboxColorChangedDelegate;
      if (pSVar2 == (SkyboxManager_SkyboxColorChangedDelegate *)0x0) goto code_?;
    }
    (pSVar1->fields).OnSkyboxColorChanged = pSVar2;
    pTVar5 = (this->fields).underwaterCameraPlane;
    if (pTVar5 != (Transform *)0x0) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar5,(MethodInfo *)0x0);
      if (pGVar6 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,0,(MethodInfo *)0x0);
        pTVar5 = (this->fields).underwaterCameraPlane;
        if (pTVar5 != (Transform *)0x0) {
          pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                             ((Component_1 *)pTVar5,
                              UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                             );
          (this->fields).underwaterCameraPlaneRenderer = (Renderer *)pMVar7;
          this_00 = (this->fields).water;
          if (this_00 != (Water *)0x0) {
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_00,(MethodInfo *)0x0);
            if (pGVar6 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                 ((MethodInfo *)0x0);
              (this->fields).mainCamera = pCVar8;
              if (pCVar8 != (Camera *)0x0) {
                pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_GetComponent_58
                                   ((Component_1 *)pCVar8,
                                    UnityEngine__AudioLowPassFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioLowPassFilter>__
                                   );
                (this->fields).lowPassFilter = (AudioLowPassFilter *)pMVar7;
                pCVar8 = (this->fields).mainCamera;
                if (pCVar8 != (Camera *)0x0) {
                  pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_GetComponent_58
                                     ((Component_1 *)pCVar8,
                                      UnityEngine__AudioReverbFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioReverbFilter>__
                                     );
                  (this->fields).reverbFilter = (AudioReverbFilter *)pMVar7;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pSVar3 = extraout_ECX;
  pSVar4 = extraout_EDX;
code_?:
  func_?(pSVar3,pSVar4);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_Update
               (WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).waterPlaneLogicCube == (MVWaterPlane *)0x0) {
    return;
  }
  WaterPlaneManager_UpdateUnderwaterCameraEffects(this,(MethodInfo *)0x0);
  this_00 = (this->fields).splashController;
  if (this_00 != (SplashController *)0x0) {
    SplashController::SplashController_CleanUpInactiveObjectIDs(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
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
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pWVar2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (((this_03 != (MainCameraManager *)0x0) &&
              (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)this_03,(MethodInfo *)0x0),
              this_04 != (Transform *)0x0)) &&
             (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xfffffff0,this_04,(MethodInfo *)0x0),
             pTVar3 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar3,*pVVar4,(MethodInfo *)0x0);
            pWVar2 = (this->fields).water;
            if ((pWVar2 != (Water *)0x0) &&
               (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)pWVar2,(MethodInfo *)0x0),
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
                           Component_1_get_transform((Component_1 *)pWVar2,(MethodInfo *)0x0),
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
  if ((pCVar1 != (Camera *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pCVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      fVar3 = 0.0;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
      uVar5 = pVVar4->y;
      pRVar6 = (this->fields).underwaterCameraPlaneRenderer;
      if (pRVar6 != (Renderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (pRVar6,fVar3 < (float)uVar5,(MethodInfo *)0x0);
        pRVar6 = (this->fields).underwaterCameraPlaneRenderer;
        if (pRVar6 != (Renderer *)0x0) {
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                            (pRVar6,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            pRVar6 = (this->fields).underwaterCameraPlaneRenderer;
            if (pRVar6 == (Renderer *)0x0) goto code_?;
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (pRVar6,(MethodInfo *)0x0);
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar2 == (Transform *)0x0) goto code_?;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
            value = pVVar4->y;
            if (this_00 == (Material *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                      (this_00,StringLiteral__WaterY,(float)value,(MethodInfo *)0x0);
          }
          pAVar8 = (this->fields).lowPassFilter;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pAVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            pCVar1 = (this->fields).mainCamera;
            if (pCVar1 == (Camera *)0x0) goto code_?;
            pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                      Component_1_GetComponent_58
                                ((Component_1 *)pCVar1,
                                 UnityEngine__AudioLowPassFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioLowPassFilter>__
                                );
            (this->fields).lowPassFilter = (AudioLowPassFilter *)pMVar9;
          }
          pAVar8 = (this->fields).lowPassFilter;
          if ((float)uVar5 <= fVar3) {
            if (pAVar8 != (AudioLowPassFilter *)0x0) {
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                ((Behaviour *)pAVar8,(MethodInfo *)0x0);
              if (bVar7 == 0) {
                return;
              }
              pAVar8 = (this->fields).lowPassFilter;
              if (pAVar8 != (AudioLowPassFilter *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)pAVar8,0,(MethodInfo *)0x0);
                pAVar10 = (this->fields).reverbFilter;
                if (pAVar10 != (AudioReverbFilter *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pAVar10,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else if (pAVar8 != (AudioLowPassFilter *)0x0) {
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                              ((Behaviour *)pAVar8,(MethodInfo *)0x0);
            if (bVar7 == 0) {
              pAVar8 = (this->fields).lowPassFilter;
              if (pAVar8 == (AudioLowPassFilter *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pAVar8,1,(MethodInfo *)0x0);
              if ((this->fields).audioHD != 0) {
                pAVar10 = (this->fields).reverbFilter;
                if (pAVar10 == (AudioReverbFilter *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)pAVar10,1,(MethodInfo *)0x0);
              }
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Color get_HorizonColor() */

Color * Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_HorizonColor
                  (Color *__return_storage_ptr__,WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (AddDotsToTruncatedText_Start_c_Iterator0 *)(this->fields).water;
  if (this_00 != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) {
    this_01 = (Renderer *)
              AddDotsToTruncatedText+<Start>c__Iterator0::
              AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Renderer *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (Material *)0x0) {
        pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                           ((Color *)&stack0xffffffec,this_02,StringLiteral__HorizonColor,
                            (MethodInfo *)0x0);
        fVar2 = pCVar1->g;
        fVar3 = pCVar1->b;
        fVar4 = pCVar1->a;
        __return_storage_ptr__->r = pCVar1->r;
        __return_storage_ptr__->g = fVar2;
        __return_storage_ptr__->b = fVar3;
        __return_storage_ptr__->a = fVar4;
        return __return_storage_ptr__;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pCVar1 = (Color *)(*pcVar5)();
  return pCVar1;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_IsActive
               (WaterPlaneManager *this,MethodInfo *method)

{
  this_00 = (this->fields).water;
  if ((this_00 == (Water *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar4 = func_?(&UNK_?,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcRam_? = pcVar2;
  bVar3 = (*pcRam_?)();
  return bVar3;
}


/* Color get_WaterColor() */

Color * Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_WaterColor
                  (Color *__return_storage_ptr__,WaterPlaneManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (AddDotsToTruncatedText_Start_c_Iterator0 *)(this->fields).water;
  if (this_00 != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) {
    this_01 = (Renderer *)
              AddDotsToTruncatedText+<Start>c__Iterator0::
              AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Renderer *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (Material *)0x0) {
        pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                           ((Color *)&stack0xffffffec,this_02,StringLiteral__RefrColor,
                            (MethodInfo *)0x0);
        fVar2 = pCVar1->g;
        fVar3 = pCVar1->b;
        fVar4 = pCVar1->a;
        __return_storage_ptr__->r = pCVar1->r;
        __return_storage_ptr__->g = fVar2;
        __return_storage_ptr__->b = fVar3;
        __return_storage_ptr__->a = fVar4;
        return __return_storage_ptr__;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pCVar1 = (Color *)(*pcVar5)();
  return pCVar1;
}


/* Single get_WaterLevel() */

float Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_get_WaterLevel
                (WaterPlaneManager *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->y;
    return (float)uVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Void set_WaterColor(Color) */

void Assembly-CSharp.dll::WaterPlaneManager::WaterPlaneManager_set_WaterColor
               (WaterPlaneManager *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).underwaterCameraPlaneRenderer;
  if (pRVar1 != (Renderer *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       (pRVar1,(MethodInfo *)0x0);
    if (pMVar2 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar2,StringLiteral__Color,(Vector4)value,(MethodInfo *)0x0);
      this_00 = (AddDotsToTruncatedText_Start_c_Iterator0 *)(this->fields).water;
      if (this_00 != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) {
        pRVar1 = (Renderer *)
                 AddDotsToTruncatedText+<Start>c__Iterator0::
                 AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                           (this_00,(MethodInfo *)0x0);
        if (pRVar1 != (Renderer *)0x0) {
          pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar1,(MethodInfo *)0x0);
          if (pMVar2 != (Material *)0x0) {
            value_00.z = (float)&UNK_?;
            value_00.x = (float)(int)value._0_8_;
            value_00.y = (float)(int)((ulonglong)value._0_8_ >> 0x20);
            value_00.w = (float)this_00;
            pAStack3 = this_00;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      (pMVar2,StringLiteral__RefrColor,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

