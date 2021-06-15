
/* Void AlternatePortTest() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_AlternatePortTest
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_Testing_alternate_port_by_settin,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if ((pGVar1 != (GameSessionData *)0x0) &&
     (pSVar2 = (pGVar1->fields).serverIP, pSVar2 != (String *)0x0)) {
    startIndex = mscorlib.dll::System::String::String_LastIndexOf(pSVar2,0x3a,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if ((pGVar1 != (GameSessionData *)0x0) &&
       (pSVar2 = (pGVar1->fields).serverIP, pSVar2 != (String *)0x0)) {
      pSVar2 = mscorlib.dll::System::String::String_Remove(pSVar2,startIndex,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      arg2 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_1
                         ((Object *)pSVar2,(Object *)::StringLiteral__,arg2,(MethodInfo *)0x0);
      if (pGVar1 != (GameSessionData *)0x0) {
        (pGVar1->fields).serverIP = pSVar2;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ApplicationQuit(QuitBaseCallback) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_ApplicationQuit
               (QuitBaseCallback *applicationQuitObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVGameControllerBase___ApplicationQuit_c__AnonStorey0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields)._._._._.m_CachedPtr = applicationQuitObject;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Application_quit,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      if ((pMVar1->fields).quitHasBeenCalled == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar1 == (MVGameControllerBase *)0x0) goto code_?;
        (pMVar1->fields).quitHasBeenCalled = 1;
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)this,
                   MethodInfo__MVGameControllerBase___ApplicationQuit_c__AnonStorey0____m__0__,
                   (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
          func_?();
        }
        AsyncWWWManager::AsyncWWWManager_ShutDown((Action *)this_00,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_Awake
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppppuStack_3c = (undefined4 *****)0x0;
  puStack_1 = (undefined *)0x0;
  uStack_2 = 0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  TypeInfo__MVGameControllerBase->static_fields->instance = this;
  this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_03 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
              (this_03,MVUtils_MethodInfo__UnityEngine__GameObject__AddComponent<MVUtils>__);
    this_04 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_3
              (this_04,0x100,(MethodInfo *)0x0);
    if (this_04 != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                (this_04,StringLiteral_Build_infou000A,(MethodInfo *)0x0);
      pKVar3 = MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
      if (pKVar3 != (KoGaMaSettingsContainer *)0x0) {
        pSVar4 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                           (pKVar3,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_2
                  (this_04,StringLiteral_Version_Number___0_u000A,(Object *)pSVar4,(MethodInfo *)0x0
                  );
        pKVar3 = MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
        if (pKVar3 != (KoGaMaSettingsContainer *)0x0) {
          pSVar4 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_ReleaseName
                             (pKVar3,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_2
                    (this_04,StringLiteral_Release_Name___0_u000A,(Object *)pSVar4,(MethodInfo *)0x0
                    );
          this_05 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                    MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
          if (this_05 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) {
            arg0 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             (this_05,(MethodInfo *)0x0);
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_2
                      (this_04,StringLiteral_Branch___0_u000A,arg0,(MethodInfo *)0x0);
            pKVar3 = (this->fields).koGaMaSettings;
            if (pKVar3 != (KoGaMaSettingsContainer *)0x0) {
              pSVar4 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                       NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                 ((NamedThemeAttribute_1_UnityEngine_Color_ *)pKVar3,
                                  (MethodInfo *)0x0);
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_2
                        (this_04,StringLiteral_Build_time___0_u000A,(Object *)pSVar4,
                         (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)this_04,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
                func_?(TypeInfo__PlayerPrefsManager);
              }
              PlayerPrefsManager::PlayerPrefsManager_EarlyInitialize((MethodInfo *)0x0);
              isFirstTimeSession =
                   PlayerPrefsManager::PlayerPrefsManager_get_IsFirstTimeSession((MethodInfo *)0x0);
              pRVar5 = (this->fields).regionConfigManager;
              if (pRVar5 != (RegionConfigManager *)0x0) {
                pRVar6 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                                   (pRVar5,(MethodInfo *)0x0);
                if (pRVar6 != (RegionConfig *)0x0) {
                  statHatConfig = (pRVar6->fields).StathatConfig;
                  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
                    func_?(TypeInfo__StatHatWrapper);
                  }
                  StatHatWrapper::StatHatWrapper_Initialize
                            (isFirstTimeSession,statHatConfig,(MethodInfo *)0x0);
                  pRVar5 = (this->fields).regionConfigManager;
                  this_00 = (this->fields).debugLogHandler;
                  if (pRVar5 != (RegionConfigManager *)0x0) {
                    pRVar6 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                                       (pRVar5,(MethodInfo *)0x0);
                    if (pRVar6 != (RegionConfig *)0x0) {
                      auStack_7._8_8_ = *(undefined8 *)&(pRVar6->fields).DebuggerLoggerConfig;
                      PVar8.filterLogTypeConsoleWrite =
                           (pRVar6->fields).DebuggerLoggerConfig.proxyLogHandlerConfig.
                           filterLogTypeConsoleWrite;
                      pRVar5 = (this->fields).regionConfigManager;
                      if (pRVar5 != (RegionConfigManager *)0x0) {
                        pRVar6 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                                           (pRVar5,(MethodInfo *)0x0);
                        if ((pRVar6 != (RegionConfig *)0x0) && (this_00 != (DebugLogHandler_1 *)0x0)
                           ) {
                          debugLogHandlerConfig.proxyLogHandlerConfig.filterLogTypeConsoleWrite =
                               PVar8.filterLogTypeConsoleWrite;
                          debugLogHandlerConfig.useSamplingOnAndroidAndWebGL = auStack_7[8];
                          debugLogHandlerConfig.useProxyLogHandler = auStack_7[9];
                          debugLogHandlerConfig._2_2_ = auStack_7._10_2_;
                          debugLogHandlerConfig.maxLogContextQueueCount = auStack_7._12_4_;
                          DebugLogHandler::DebugLogHandler_1_Initialize
                                    (this_00,debugLogHandlerConfig,(pRVar6->fields).sentryConfig,
                                     (MethodInfo *)0x0);
                          pSVar9 = (this->fields).styles;
                          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                            func_?(TypeInfo__UnityEngine__Object);
                          }
                          pSVar9 = (Styles *)
                                   UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_Instantiate_251
                                             ((XpBoostParticlePreviewer *)pSVar9,
                                              Styles_MethodInfo__UnityEngine__Object__Instantiate<Styles>_Styles_
                                             );
                          (this->fields).styles = pSVar9;
                          if (pSVar9 != (Styles *)0x0) {
                            this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_1_get_transform
                                                ((Component_1 *)pSVar9,(MethodInfo *)0x0);
                            value = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0)
                            ;
                            if (this_06 != (Transform *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_parent(this_06,value,(MethodInfo *)0x0);
                              this_07 = (LoadStats *)func_?(TypeInfo__LoadStats);
                              WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
                              WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
                                        ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                                         this_07,(MethodInfo *)0x0);
                              (this->fields).loadStats = this_07;
                              if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr &
                                   0x2000000) != 0) &&
                                 ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
                                func_?();
                              }
                              pDVar10 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                                                 ((DateTime *)auStack_7,(MethodInfo *)0x0);
                              ppppuStack_3c = *(undefined4 *****)&(pDVar10->ticks)._ticks;
                              puStack_1 = *(undefined **)((int)&(pDVar10->ticks)._ticks + 4);
                              uStack_11 = 0;
                              uStack_12 = 0;
                              uStack_13 = 0;
                              uStack_14 = 0;
                              func_?(&uStack_11,0x7b2,1,1,0);
                              uStack_12 = 0;
                              puStack_1 = (undefined *)uStack_11;
                              uStack_11 = uStack_14;
                              ppppuStack_3c = &ppppuStack_3c;
                              uStack_2 = func_?();
                              fVar15 = (float10)func_?(&uStack_2,0);
                              auStack_7._8_8_ = (undefined8)fVar15;
                              if (this_07 != (LoadStats *)0x0) {
                                (this_07->fields).GameStartTime = (double)auStack_7._8_8_;
                                UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_Instantiate_251
                                          ((XpBoostParticlePreviewer *)(this->fields).prefabPool,
                                           PrefabPool_MethodInfo__UnityEngine__Object__Instantiate<PrefabPool>_PrefabPool_
                                          );
                                pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_1_GetComponent_58
                                                    ((Component_1 *)this,
                                                                                                          
                                                  LevelLoader_MethodInfo__UnityEngine__Component__GetComponent<LevelLoader>__
                                                  );
                                (this->fields).levelLoader = (LevelLoader *)pMVar16;
                                pAVar17 = (AudioManager *)
                                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_1_GetComponent_58
                                                    ((Component_1 *)this,
                                                                                                          
                                                  AudioManager_MethodInfo__UnityEngine__Component__GetComponent<AudioManager>__
                                                  );
                                (this->fields).audioManager = pAVar17;
                                pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_1_GetComponentInChildren_12
                                                    ((Component_1 *)this,
                                                                                                          
                                                  BrowserComm_MethodInfo__UnityEngine__Component__GetComponentInChildren<BrowserComm>__
                                                  );
                                (this->fields).browserComm = (BrowserComm *)pTVar18;
                                pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_1_GetComponentInChildren_12
                                                    ((Component_1 *)this,
                                                                                                          
                                                  OverrideMaterials_MethodInfo__UnityEngine__Component__GetComponentInChildren<OverrideMaterials>__
                                                  );
                                (this->fields).overrideMaterials = (OverrideMaterials *)pTVar18;
                                this_08 = (TimeReward *)func_?(TypeInfo__TimeReward);
                                TimeReward::TimeReward__ctor(this_08,(MethodInfo *)0x0);
                                (this->fields).timeReward = this_08;
                                CheatHandling::CheatHandling_Init((MethodInfo *)0x0);
                                audioBuild = (this->fields).audioBuild;
                                if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr &
                                     0x2000000) != 0) &&
                                   ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
                                  func_?(TypeInfo__AudioEventHandler);
                                }
                                AudioEventHandler::AudioEventHandler_Init
                                          (audioBuild,(MethodInfo *)0x0);
                                this_01 = (this->fields).textureIntegrityChecker;
                                if (this_01 != (TextureIntegrityChecker *)0x0) {
                                  AntiHack::TextureIntegrityChecker::
                                  TextureIntegrityChecker_Initialize(this_01,(MethodInfo *)0x0);
                                  this_02 = (this->fields).themeRepository;
                                  if (this_02 != (ThemeRepository *)0x0) {
                                    ThemeRepository::ThemeRepository_Initialize
                                              (this_02,(MethodInfo *)0x0);
                                    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.
                                                methodPtr & 0x2000000) != 0) &&
                                       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
                                      func_?(TypeInfo__UpdateController);
                                    }
                                    UpdateController::UpdateController_AddUpdateObject
                                              ((IUpdatecontrollerSubscriberUpdate *)this,
                                               UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
                                               (MethodInfo *)0x0);
                                    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr &
                                         0x2000000) != 0) &&
                                       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
                                      func_?(TypeInfo__MeshDataPool);
                                    }
                                    MeshDataPool::MeshDataPool_Create((MethodInfo *)0x0);
                                    pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance
                                    ;
                                    if (pMVar19 != (MVGameControllerBase *)0x0) {
                                      pWVar20 = (WaterPlaneManager *)
                                                UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                Object_1_Instantiate_251
                                                          ((XpBoostParticlePreviewer *)
                                                           (pMVar19->fields).waterPlaneManagerPrefab,
                                                                                                                      
                                                  WaterPlaneManager_MethodInfo__UnityEngine__Object__Instantiate<WaterPlaneManager>_WaterPlaneManager_
                                                  );
                                      (this->fields).waterPlaneManager = pWVar20;
                                      UnityEngine.CoreModule.dll::UnityEngine::Application::
                                      Application_set_runInBackground(1,(MethodInfo *)0x0);
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
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void CleanUp() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_CleanUp
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_Cleanup(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) {
code_?:
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_01 != (MainCameraManager *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pGVar1,(MethodInfo *)0x0);
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,0,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__GameLoader->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GameLoader->_1).cctor_started == 0)) {
              func_?();
            }
            GameLoader::GameLoader_UnloadGame((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar2 = (Component_1 *)
               TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pCVar2 != (Component_1 *)0x0) {
        bVar3 = (TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment;
        pIVar4 = (IPlayModeUI__Class *)pCVar2->klass;
        bVar5 = (pIVar4->_1).naturalAligment;
        if ((bVar5 < bVar3) ||
           ((pIVar4->_1).typeHierarchy[bVar3 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pCVar7 = (Component_1 *)0x0;
        if (bVar6) {
          pCVar7 = pCVar2;
        }
        if (pCVar7 == (Component_1 *)0x0) goto code_?;
        if ((bVar5 < bVar3) ||
           ((pIVar4->_1).typeHierarchy[bVar3 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pCVar7 = (Component_1 *)0x0;
        if (bVar6) {
          pCVar7 = pCVar2;
        }
        if (pCVar7 == (Component_1 *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           (pCVar7,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DeleteScreenPlayerPrefs() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_DeleteScreenPlayerPrefs
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Is_Fullscreen_mode,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Resolution_Height,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Resolution_Width,(MethodInfo *)0x0);
  return;
}


/* IntPtr FindWindow(String, String) */

void * Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_FindWindow
                 (String *className,String *windowName,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    uStack_1 = 10;
    uStack_2 = 10;
    uStack_3 = 0;
    uStack_4 = 2;
    uStack_5 = 8;
    uStack_6 = 0;
    pcRam_? = (code *)func_?(&puStack_7);
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      pvVar10 = (void *)(*pcVar9)();
      return pvVar10;
    }
  }
  uVar8 = func_?(className);
  uVar11 = func_?(windowName);
  pvVar10 = (void *)(*pcRam_?)(uVar8,uVar11);
  func_?(uVar8);
  func_?(uVar11);
  return pvVar10;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_FixedUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_FixedUpdate((MethodInfo *)0x0);
  return;
}


/* Void HandleDebugShortCuts() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_HandleDebugShortCuts
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKey
                    (KeyCode__Enum_Alpha7,(MethodInfo *)0x0);
  if ((bVar1 == 0) ||
     (bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyUp
                        (KeyCode__Enum_Alpha9,(MethodInfo *)0x0), bVar1 == 0)) {
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  pIStack2 =
       UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger((MethodInfo *)0x0);
  if (pIStack2 != (ILogger *)0x0) {
    iVar3 = func_?();
    if (iVar3 == 2) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar4 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger
                         ((MethodInfo *)0x0);
      if (pIVar4 != (ILogger *)0x0) {
        pIStack2 = (ILogger *)0x3;
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Enabling_logging_,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      pIStack2 =
           UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger
                     ((MethodInfo *)0x0);
      if (pIStack2 != (ILogger *)0x0) {
        iVar3 = func_?();
        if (iVar3 != 3) {
          return;
        }
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Disabling_logging_,(MethodInfo *)0x0);
        pIVar4 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger
                           ((MethodInfo *)0x0);
        if (pIVar4 != (ILogger *)0x0) {
          pIStack2 = (ILogger *)0x2;
          func_?();
          return;
        }
      }
    }
  }
  pIStack2 = (ILogger *)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleQuitDisconnect() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_HandleQuitDisconnect
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = 1;
  pMVar1 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
      (GameSessionData *)0x0) {
    SessionLocatorPing::SessionLocatorPing_LeaveSession((MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pSVar2 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                       ((AvatarUIHandlerRemote *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 == (ShieldBar *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pMVar1,(MethodInfo *)0x0);
      if (pIVar3 != (IKogamaSetting *)0x4) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pSStack4 =
               AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                         ((AvatarUIHandlerRemote *)pMVar1,(MethodInfo *)0x0),
         pSStack4 != (ShieldBar *)0x0)) {
        _Stack00000024 = pSStack4->klass[1]._0.this_arg.data;
        (**(code **)&pSStack4->klass[1]._0.byval_arg.attrs)();
        return;
      }
    }
  }
  _Stack00000024 = (_union_86)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitStandAlone(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_InitStandAlone
               (MVGameControllerBase *this,bool developmentMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Is_Fullscreen_mode,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Resolution_Height,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Resolution_Width,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__BrowserComm->static_fields->enableBrowserRequest = developmentMode ^ 1;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if ((pcRam_? == (code *)0x0) &&
     (pcRam_? = (code *)func_?(), pcRam_? == (code *)0x0)) {
    func_?();
    func_?();
  }
  else {
    func_?();
    func_?();
    uVar1 = (*pcRam_?)();
    func_?();
    func_?();
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    if ((pcRam_? != (code *)0x0) ||
       (pcRam_? = (code *)func_?(), pcRam_? != (code *)0x0)) {
      (*pcRam_?)(uVar1,0,0,0);
      UnityEngine.CoreModule.dll::UnityEngine::Application::Application_set_targetFrameRate
                (0x3c,(MethodInfo *)0x0);
      if (developmentMode != 0) {
        (*(code *)(this->klass->vtable).StartGame.method)
                  (this,(this->klass->vtable).InitWebGL.methodPtr);
        return;
      }
      pSVar2 = mscorlib.dll::System::Environment::Environment_GetCommandLineArgs((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      uVar3 = 0;
      _developmentMode = TypeInfo__System__String->static_fields->Empty;
      if (pSVar2 != (String__Array *)0x0) {
        ppSVar4 = pSVar2->vector;
        for (; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
          if (pSVar2->max_length <= uVar3) goto code_?;
          pSVar5 = *ppSVar4;
          pSVar6 = (String__Array *)func_?(TypeInfo__System__String,1);
          if (pSVar6 == (String__Array *)0x0) goto code_?;
          if ((StringLiteral_kogamaPackage_ != (String *)0x0) &&
             (iVar7 = func_?(StringLiteral_kogamaPackage_,(pSVar6->klass->_0).element_class
                                     ), iVar7 == 0)) goto code_?;
          if (pSVar6->max_length == 0) goto code_?;
          pSVar6->vector[0] = StringLiteral_kogamaPackage_;
          if ((pSVar5 == (String *)0x0) ||
             (pSVar6 = mscorlib.dll::System::String::String_Split_5
                                 (pSVar5,pSVar6,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
             pSVar6 == (String__Array *)0x0)) goto code_?;
          if (pSVar6->max_length == 2) {
            pSVar5 = (String *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            _developmentMode =
                 mscorlib.dll::System::String::String_Concat_2
                           (_developmentMode,pSVar5,(MethodInfo *)0x0);
          }
          ppSVar4 = ppSVar4 + 1;
        }
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar5 = mscorlib.dll::System::String::String_Concat_2
                           (StringLiteral_combined_,_developmentMode,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar5,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Convert);
        }
        pBVar8 = mscorlib.dll::System::Convert::Convert_FromBase64String
                           (_developmentMode,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Text__Encoding);
        }
        pEVar9 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        if (pEVar9 != (Encoding *)0x0) {
          pSVar5 = (String *)
                   (*(code *)(pEVar9->klass->vtable).GetString_1.method)
                             (pEVar9,pBVar8,(pEVar9->klass->vtable).get_HeaderName.methodPtr);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_00,(Object *)this,
                     MethodInfo__MVGameControllerBase__OnReceivedSessionData_UnityEngine__Networking__UnityWebRequest_
                     ,
                     MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                    );
          this_01 = (GetRequest *)func_?(TypeInfo__GetRequest);
          GetRequest::GetRequest__ctor
                    (this_01,pSVar5,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                     WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
            func_?();
          }
          AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitWebGL(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_InitWebGL
               (MVGameControllerBase *this,bool developmentMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  TypeInfo__BrowserComm->static_fields->enableExternalCall = developmentMode ^ 1;
  if (developmentMode == 0) {
    if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_GetBrowserVersion((MethodInfo *)0x0);
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<bool,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this,
               MethodInfo__MVGameControllerBase__StartGameWithSessionData_bool__System__String_,
               MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
              (StringLiteral_sendPlayerParams,(Action_2_Boolean_String_ *)pUVar1,(MethodInfo *)0x0);
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<bool,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this,
               MethodInfo__MVGameControllerBase__ReceivedLoadStatsCallback_bool__System__String_,
               MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
              (StringLiteral_sendLoadStats,(Action_2_Boolean_String_ *)pUVar1,(MethodInfo *)0x0);
    return;
  }
  (*(code *)(this->klass->vtable).StartGame.method)(this,(this->klass->vtable).InitWebGL.methodPtr);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_Initialize
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = 1;
  object = (this->fields).materialLoader;
  if (object == (MaterialLoader *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  bVar2 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pUVar3 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)object,MethodInfo__MaterialLoader__DownloadWhenPossible__,
               (MethodInfo *)0x0);
    pUVar5 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pUVar3 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar5 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      if (pUVar5->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar3 = pUVar5;
      }
      if (pUVar3 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
code_?:
        func_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar3;
    return;
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pUVar3 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)object,MethodInfo__MaterialLoader__DownloadWhenPossible__,
             (MethodInfo *)0x0);
  pUVar5 = (Urls_OnStreamingAssetsUrlAvailable *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
  pUVar3 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
  if (pUVar5 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
    if (pUVar5->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar3 = pUVar5;
    }
    if (pUVar3 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
  }
  TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar3;
  pSVar6 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar6 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar6,StringLiteral_AssetBundles_Atlas_atlas1_unity3,(MethodInfo *)0x0);
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)object,
             MethodInfo__MaterialLoader__Callback_UnityEngine__Networking__UnityWebRequest_,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  this_00 = (AssetBundleRequest *)func_?();
  AssetBundleRequest::AssetBundleRequest__ctor
            (this_00,pSVar6,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar4,
             WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_LateUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_LateUpdate((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                 CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_00,(MethodInfo *)0x0),
      this_01 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)) &&
     (this_02 = (MVWorldInventory *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (this_01,(MethodInfo *)0x0), this_02 != (MVWorldInventory *)0x0)) {
    MVWorldInventory::MVWorldInventory_LateUpdate(this_02,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_03 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_UpdateCamera(this_03,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnApplicationQuit() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnApplicationQuit
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField = 1;
  MVGameControllerBase_HandleQuitDisconnect(this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).CleanUp.method)(this,(this->klass->vtable).StartGame.methodPtr);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnDestroy
               (MVGameControllerBase *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  DrawPlane::DrawPlane_Reset((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_Reset((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?();
  }
  MeshDataPool::MeshDataPool_Destroy((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?();
  }
  LevelingManager::LevelingManager_Destroy((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__StreamedSharedMaterialHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__StreamedSharedMaterialHandler->_1).cctor_started == 0)) {
    func_?();
  }
  StreamedSharedMaterialHandler::StreamedSharedMaterialHandler_Reset((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?();
  }
  LoggerManager::LoggerManager_Destroy((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  CullingApiWrapper::CullingApiWrapper_Destroy((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
    func_?();
  }
  HighlightManager::HighlightManager_Reset((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?();
  }
  FirstTimeEventManager::FirstTimeEventManager_Destroy((MethodInfo *)0x0);
  ThemeRepository::ThemeRepository_Destroy((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
    func_?();
  }
  AudioEventHandler::AudioEventHandler_Destroy((MethodInfo *)0x0);
  this_00 = (this->fields).debugLogHandler;
  uVar1 = 0;
  if (this_00 == (DebugLogHandler_1 *)0x0) {
    func_?();
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DebugLogHandler::DebugLogHandler_1_Destroy(this_00,(MethodInfo *)0x0);
  AwayMonitor::AwayMonitor_Destroy((MethodInfo *)0x0);
  TM::TM_Destroy((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_Reset((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_Clear((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
    func_?();
  }
  StreamingAsset::StreamingAsset_ClearCache((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?();
  }
  AccessoryDataManager::AccessoryDataManager_Reset((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
    func_?();
  }
  DataUploadManager::DataUploadManager_Reset((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
    func_?();
  }
  TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_Reset((MethodInfo *)0x0);
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    pMStack3 = TypeInfo__MVGameControllerBase;
    func_?();
  }
  bVar4 = cRam_? == '\0';
  TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit =
       (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
  if (bVar4) {
    pMStack3 = (MVGameControllerBase__Class *)_UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    pMStack3 = TypeInfo__MVGameControllerBase;
    func_?();
  }
  bVar4 = cRam_? == '\0';
  TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField =
       (GameSessionData *)0x0;
  if (bVar4) {
    pMStack3 = (MVGameControllerBase__Class *)_UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    pMStack3 = TypeInfo__MVGameControllerBase;
    func_?();
  }
  TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = 0;
  TypeInfo__MVGameControllerBase->static_fields->instance = (MVGameControllerBase *)0x0;
  *unaff_FS_OFFSET = uVar1;
  return;
}


/* Void OnDrawGizmos() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnDrawGizmos
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_DebugVisualize((MethodInfo *)0x0);
  return;
}


/* Void OnReceivedReAuthWebParametersFromHttpRequest(UnityWebRequest) */

void Assembly-CSharp.dll::MVGameControllerBase::
     MVGameControllerBase_OnReceivedReAuthWebParametersFromHttpRequest
               (MVGameControllerBase *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    this_00 = (ActDetectorBase *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)www,
                         (MethodInfo *)0x0);
    if (this_00 != (ActDetectorBase *)0x0) {
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
      ActDetectorBase_OnApplicationQuit(this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = mscorlib.dll::System::String::String_Concat_2
                          (StringLiteral_Reauth_webParameters_,str1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      MVGameControllerBase_StartGameWithSessionData
                ((MVGameControllerBase *)0x1,1,str1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnReceivedSessionData(UnityWebRequest) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnReceivedSessionData
               (MVGameControllerBase *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    this_00 = (ActDetectorBase *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)www,
                         (MethodInfo *)0x0);
    if (this_00 != (ActDetectorBase *)0x0) {
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
      ActDetectorBase_OnApplicationQuit(this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)sessionDataJson,(MethodInfo *)0x0);
      MVGameControllerBase_StartGameWithSessionData
                ((MVGameControllerBase *)0x0,1,sessionDataJson,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PostDestroyCleanup() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PostDestroyCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification !=
      (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_OnReceivedNotification_still_hav,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
      (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_OnReceivedGameMsg_still_have_sub,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
  }
  return;
}


/* Void PostGameMsg(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PostGameMsg
               (MVGameMsgType__Enum gameMsgType,
               Dictionary_2_System_Object_System_Object_ *gameMsgData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
      (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this = (Action_2_Int32_Object_ *)
           TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
    if (this == (Action_2_Int32_Object_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
              (this,gameMsgType,(Object *)gameMsgData,(MethodInfo *)0x0);
  }
  return;
}


/* Void PostGameMsg(MVGameMsgType, String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
               (MVGameMsgType__Enum gameMsgType,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (String *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (this_00 !=
      (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,key,(CrossPlatformInputManager_VirtualButton *)message,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
        (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this = (Action_2_Int32_Object_ *)
             TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
      if (this == (Action_2_Int32_Object_ *)0x0) goto code_?;
      System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                (this,(int32_t)this_00,(Object *)this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReceivedLoadStatsCallback(Boolean, String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_ReceivedLoadStatsCallback
               (MVGameControllerBase *this,bool ok,String *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (ok == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Failed_to_get_load_stats_data,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pXVar1 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                     (data,
                      LoadStats_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<LoadStats>_System__String_
                     );
  pLVar2 = (this->fields).loadStats;
  if ((pXVar1 != (XPLevelLimits *)0x0) && (pLVar2 != (LoadStats *)0x0)) {
    (pLVar2->fields).DOMReady = *(double *)&pXVar1->fields;
    (pLVar2->fields).PluginInit = *(double *)&(pXVar1->fields)._Level_k__BackingField;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RegisterOverrideMaterials() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_RegisterOverrideMaterials
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,unaff_retaddr);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 == (MVGameControllerBase *)0x0) ||
       (this = (pMVar2->fields).overrideMaterials, this == (OverrideMaterials *)0x0)) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    OverrideMaterials::OverrideMaterials_Register(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetGameSessionData(GameSessionData) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_SetGameSessionData
               (GameSessionData *gameSessionData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField = gameSessionData;
  if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__PlayerPrefsManager);
  }
  PlayerPrefsManager::PlayerPrefsManager_Initialize(gameSessionData,(MethodInfo *)0x0);
  if (gameSessionData != (GameSessionData *)0x0) {
    AwayMonitor::AwayMonitor_Initialize((gameSessionData->fields).gameMode,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetPosition(Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_SetPosition
               (int32_t x,int32_t y,int32_t resX,int32_t resY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = StringLiteral_KoGaMa;
  if (pcRam_? == (code *)0x0) {
    uStack_2 = 10;
    uStack_3 = 10;
    pcStack_4 = (code *)0x0;
    uStack_5 = 2;
    uStack_6 = 8;
    uStack_7 = 0;
    pcRam_? = (code *)func_?(&puStack_8);
    if (pcRam_? == (code *)0x0) {
      uVar9 = func_?(&UNK_?,0,0);
      func_?(uVar9);
      goto code_?;
    }
  }
  uVar9 = func_?(0);
  uVar10 = func_?(pSVar1);
  uStack_11 = (*pcRam_?)(uVar9,uVar10);
  func_?(uVar9);
  func_?(uVar10);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (pcRam_? == (code *)0x0) {
    pcStack_4 = pcRam_?;
    uStack_7 = 0;
    uStack_2 = 10;
    uStack_3 = 0xc;
    uStack_5 = 2;
    uStack_6 = 0x1c;
    pcRam_? = (code *)func_?(&puStack_8);
    if (pcRam_? == (code *)0x0) {
code_?:
      uVar9 = func_?(&UNK_?,0,0);
      func_?(uVar9);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  (*pcRam_?)(uStack_11,0,x,y,resX,resY,resX * resY == 0);
  return;
}


/* Boolean SetWindowPos(IntPtr, Int32, Int32, Int32, Int32, Int32, Int32) */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_SetWindowPos
               (void *hwnd,int32_t hWndInsertAfter,int32_t x,int32_t Y,int32_t cx,int32_t cy,
               int32_t wFlags,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcStack_1 = pcRam_?;
    uStack_2 = 0;
    uStack_3 = 10;
    uStack_4 = 0xc;
    uStack_5 = 2;
    uStack_6 = 0x1c;
    pcRam_? = (code *)func_?(&puStack_7);
    if (pcRam_? == (code *)0x0) {
      uVar8 = func_?(&UNK_?,0,0);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
  }
  iVar11 = (*pcRam_?)(hwnd,hWndInsertAfter,x,Y,cx,cy,wFlags);
  return iVar11 != 0;
}


/* Void ShutDown() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_ShutDown
               (MVGameControllerBase *this,MethodInfo *method)

{
  MVGameControllerBase_HandleQuitDisconnect(this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).CleanUp.method)(this,(this->klass->vtable).StartGame.methodPtr);
  return;
}


/* Void StartGame() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_StartGame
               (MVGameControllerBase *this,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = 0;
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_MVGameControllerStartGame,1,(MethodInfo *)0x0);
  pEVar2 = (this->fields).embeddedPlayerConfig;
  if (pEVar2 != (EmbeddedPlayerConfig *)0x0) {
    EmbeddedPlayerConfig::EmbeddedPlayerConfig_Initialize(pEVar2,(MethodInfo *)0x0);
    pRVar3 = (this->fields).regionConfigManager;
    if (pRVar3 != (RegionConfigManager *)0x0) {
      pRVar4 = RegionConfigManager::RegionConfigManager_get_RegionConfig(pRVar3,(MethodInfo *)0x0);
      if (pRVar4 != (RegionConfig *)0x0) {
        if ((pRVar4->fields).TestSetup.testAlternatePort != 0) {
          MVGameControllerBase_AlternatePortTest(this,(MethodInfo *)0x0);
        }
        pRVar3 = (this->fields).regionConfigManager;
        if (pRVar3 != (RegionConfigManager *)0x0) {
          pRVar4 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                             (pRVar3,(MethodInfo *)0x0);
          if (pRVar4 != (RegionConfig *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar5 != (MVGameControllerBase *)0x0) &&
               (pEVar2 = (pMVar5->fields).embeddedPlayerConfig,
               pEVar2 != (EmbeddedPlayerConfig *)0x0)) {
              pEVar6 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                                 ((EmbeddedSiteConfigData *)&stack0xffffffec,pEVar2,
                                  (MethodInfo *)0x0);
              pMVar7 = TypeInfo__MVNetworkGame;
              pLVar8 = pEVar6->sites;
              iVar9 = pEVar6->siteEnum;
              uVar10._0_1_ = pEVar6->showTouristPromotion;
              uVar10._1_1_ = pEVar6->allowsOpenInNewTab;
              uVar10._2_1_ = pEVar6->allowsRedirectToWebpage;
              uVar10._3_1_ = pEVar6->allowsModals;
              uVar11._0_1_ = pEVar6->integratedSdk;
              uVar11._1_1_ = pEVar6->allowsFallbackAds;
              uVar11._2_1_ = pEVar6->showPlayButtonAd;
              uVar11._3_1_ = pEVar6->field_0xf;
              pMVar12 = (MVNetworkGame *)func_?();
              this._0_2_ = (undefined2)iVar9;
              this._2_2_ = (undefined2)((uint)iVar9 >> 0x10);
              embeddedSiteConfigData.siteEnum._0_2_ = this._0_2_;
              embeddedSiteConfigData.sites = pLVar8;
              embeddedSiteConfigData.siteEnum._2_2_ = this._2_2_;
              embeddedSiteConfigData.showTouristPromotion = (bool)uVar10;
              embeddedSiteConfigData.allowsOpenInNewTab = SUB41(uVar10,1);
              embeddedSiteConfigData.allowsRedirectToWebpage = SUB41(uVar10,2);
              embeddedSiteConfigData.allowsModals = SUB41(uVar10,3);
              embeddedSiteConfigData.integratedSdk = (bool)uVar11;
              embeddedSiteConfigData.allowsFallbackAds = SUB41(uVar11,1);
              embeddedSiteConfigData.showPlayButtonAd = SUB41(uVar11,2);
              embeddedSiteConfigData._15_1_ = SUB41(uVar11,3);
              MVNetworkGame::MVNetworkGame__ctor
                        (pMVar12,SUB42(pMVar7,0),embeddedSiteConfigData,(MethodInfo *)0x0);
              (pMVar1->fields).game = pMVar12;
              this_00 = (FirstFrameUpdateActorReady *)func_?();
              FirstFrameUpdateActorReady::FirstFrameUpdateActorReady__ctor
                        (this_00,(MethodInfo *)0x0);
              (pMVar1->fields).firstFrameUpdateActorReady = this_00;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar12 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar12 != (MVNetworkGame *)0x0) {
                bVar13 = MVNetworkGame::MVNetworkGame_Join(pMVar12,(MethodInfo *)0x0);
                if (bVar13 == 0) {
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                            ((Object *)StringLiteral_Failed_to_connect,(MethodInfo *)0x0);
                }
                return;
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


/* Void StartGameWithSessionData(Boolean, String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_StartGameWithSessionData
               (MVGameControllerBase *this,bool ok,String *sessionDataJson,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (ok != 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat_2
                        (StringLiteral_WEBPARAMS__,sessionDataJson,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?();
    }
    gameSessionData =
         (GameSessionData *)
         Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                   (sessionDataJson,
                    GameSessionData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<GameSessionData>_System__String_
                   );
    if (gameSessionData == (GameSessionData *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)(gameSessionData->fields).pingURL,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)(gameSessionData->fields).disconnectURL,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField =
         gameSessionData;
    if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
      func_?();
    }
    PlayerPrefsManager::PlayerPrefsManager_Initialize(gameSessionData,(MethodInfo *)0x0);
    AwayMonitor::AwayMonitor_Initialize((gameSessionData->fields).gameMode,(MethodInfo *)0x0);
    (**(code **)(_UNK_? + 0x120))();
  }
  return;
}


/* Boolean TryReauth() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_TryReauth(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    return 0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    piVar3 = &(pMVar2->fields).reAuthTestTries;
    *piVar3 = *piVar3 + -1;
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 != (MVGameControllerBase *)0x0) {
      if ((pMVar2->fields).reAuthTestTries < 0) {
        return 0;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVGameControllerBase_set_DisconnectIsOk(1,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pSVar4 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                             ((AvatarUIHandlerRemote *)pMVar1,(MethodInfo *)0x0),
         pSVar4 != (ShieldBar *)0x0)) {
        (**(code **)&pSVar4->klass[1]._0.byval_arg.attrs)();
        pGVar5 = MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (pGVar5 != (GameSessionData *)0x0) {
          path = (pGVar5->fields).reauthURL;
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                   );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this,(Object *)pMVar2,
                     MethodInfo__MVGameControllerBase__OnReceivedReAuthWebParametersFromHttpRequest_UnityEngine__Networking__UnityWebRequest_
                     ,
                     MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                    );
          this_00 = (GetRequest *)func_?(TypeInfo__GetRequest);
          GetRequest::GetRequest__ctor
                    (this_00,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,
                     WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
            func_?();
          }
          AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void Update() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_Update
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_Update((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKey
                    (KeyCode__Enum_Alpha7,(MethodInfo *)0x0);
  if ((bVar1 == 0) ||
     (bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyUp
                        (KeyCode__Enum_Alpha9,(MethodInfo *)0x0), bVar1 == 0)) {
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  pIStack2 =
       UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger((MethodInfo *)0x0);
  if (pIStack2 != (ILogger *)0x0) {
    pIStack3 = (ILogger__Class *)0x2;
    iVar4 = func_?();
    if (iVar4 == 2) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar5 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger
                         ((MethodInfo *)0x0);
      if (pIVar5 != (ILogger *)0x0) {
        pIStack2 = (ILogger *)0x3;
        pIStack3 = TypeInfo__UnityEngine__ILogger;
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Enabling_logging_,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      pIStack2 =
           UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger
                     ((MethodInfo *)0x0);
      if (pIStack2 != (ILogger *)0x0) {
        pIStack3 = (ILogger__Class *)0x2;
        iVar4 = func_?();
        if (iVar4 != 3) {
          return;
        }
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Disabling_logging_,(MethodInfo *)0x0);
        pIVar5 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_unityLogger
                           ((MethodInfo *)0x0);
        if (pIVar5 != (ILogger *)0x0) {
          pIStack2 = (ILogger *)0x2;
          pIStack3 = TypeInfo__UnityEngine__ILogger;
          func_?();
          return;
        }
      }
    }
  }
  pIStack2 = (ILogger *)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateControllerLateUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_UpdateControllerLateUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotImplementedException *)func_?(TypeInfo__System__NotImplementedException);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_UpdateControllerUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  AsyncWWWManager::AsyncWWWManager_Update((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar4 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar4 != (MVNetworkGame *)0x0) {
    uStack_1 = 0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar4 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) {
      func_?();
      func_?(in_stack_5);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    MVNetworkGame::MVNetworkGame_Update(pMVar4,(MethodInfo *)0x0);
    MVar7 = MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (MVar7 == MVJoinState__Enum_Playing) {
      (*(code *)(this->klass->vtable).UpdateInternal.method)();
      AwayMonitor::AwayMonitor_Update((MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
      func_?();
    }
    AudioEventHandler::AudioEventHandler_Update((MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void UpdateGame() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_UpdateGame
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_Update(this_00,(MethodInfo *)0x0);
    MVar1 = MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (MVar1 == MVJoinState__Enum_Playing) {
      (*(code *)(this->klass->vtable).UpdateInternal.method)();
      AwayMonitor::AwayMonitor_Update((MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
      func_?();
    }
    AudioEventHandler::AudioEventHandler_Update((MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVGameControllerBase() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase__ctor
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (SkinnedMeshOptimizeManager *)func_?(TypeInfo__SkinnedMeshOptimizeManager);
  SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).skinnedMeshOptimizeManager = this_00;
  this_01 = (FlagDebriefingControl *)func_?(TypeInfo__FlagDebriefingControl);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this_01,(MethodInfo *)0x0);
  (this->fields).flagDebriefingControl = this_01;
  this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__GoldRewardManager);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
  (this->fields).goldRewardManager = (GoldRewardManager *)this_02;
  (this->fields).reAuthTestTries = 3;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* IAdManager get_AdManager() */

IAdManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_AdManager(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pIVar2 = (IAdManager *)
             (*(code *)(pMVar1->klass->vtable).__unknown.method)
                       (pMVar1,(pMVar1->klass->vtable).__unknown_1.methodPtr);
    return pIVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar2 = (IAdManager *)(*pcVar3)();
  return pIVar2;
}


/* AudioManager get_AudioManager() */

AudioManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_AudioManager(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).audioManager;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pAVar3 = (AudioManager *)(*pcVar2)();
  return pAVar3;
}


/* BrowserComm get_BrowserComm() */

BrowserComm *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_BrowserComm(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).browserComm;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pBVar3 = (BrowserComm *)(*pcVar2)();
  return pBVar3;
}


/* Boolean get_DisconnectIsOk() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_DisconnectIsOk
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  return TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField;
}


/* IEditModeUI get_EditModeUI() */

IEditModeUI *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_EditModeUI(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  return TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
}


/* EmbeddedPlayerConfig get_EmbeddedPlayerConfig() */

EmbeddedPlayerConfig *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_EmbeddedPlayerConfig
          (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).embeddedPlayerConfig;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pEVar3 = (EmbeddedPlayerConfig *)(*pcVar2)();
  return pEVar3;
}


/* FlagDebriefingControl get_FlagDebriefingControl() */

FlagDebriefingControl *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).flagDebriefingControl;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pFVar3 = (FlagDebriefingControl *)(*pcVar2)();
  return pFVar3;
}


/* MVNetworkGame get_Game() */

MVNetworkGame *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_Game(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).game;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVNetworkGame *)(*pcVar2)();
  return pMVar3;
}


/* GameEventManager get_GameEventManager() */

GameEventManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GameEventManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    return (pMVar1->fields).GameEventManager;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GameEventManager *)(*pcVar2)();
  return pGVar3;
}


/* MVGameMode get_GameMode() */

MVGameMode__Enum
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GameMode(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    return (pGVar1->fields).gameMode;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  MVar3 = (*pcVar2)();
  return MVar3;
}


/* GameSessionData get_GameSessionData() */

GameSessionData *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GameSessionData
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  return TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
}


/* GoldRewardManager get_GoldRewardManager() */

GoldRewardManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).goldRewardManager;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pGVar3 = (GoldRewardManager *)(*pcVar2)();
  return pGVar3;
}


/* Boolean get_IsAlive() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_IsAlive(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  x = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_IsInitialized() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_IsInitialized
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  return TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField;
}


/* Boolean get_IsPlaying() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_IsPlaying
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    bVar2 = (*(code *)(pMVar1->klass->vtable).__unknown_1.method)
                      (pMVar1,(pMVar1->klass->vtable).Awake.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean get_IsTouristSession() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    return (pGVar1->fields).profileID < 1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* MVJoinState get_JoinState() */

MVJoinState__Enum
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_JoinState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields)._joinState;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  MVar3 = (*pcVar2)();
  return MVar3;
}


/* KoGaMaSettingsContainer get_KoGaMaSettings() */

KoGaMaSettingsContainer *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).koGaMaSettings;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pKVar3 = (KoGaMaSettingsContainer *)(*pcVar2)();
  return pKVar3;
}


/* LevelLoader get_LevelLoader() */

LevelLoader *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_LevelLoader(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).levelLoader;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pLVar3 = (LevelLoader *)(*pcVar2)();
  return pLVar3;
}


/* LoadStats get_LoadStats() */

LoadStats *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_LoadStats(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).loadStats;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pLVar3 = (LoadStats *)(*pcVar2)();
  return pLVar3;
}


/* MVLocalPlayer get_LocalPlayer() */

MVLocalPlayer *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_LocalPlayer(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this,(MethodInfo *)0x0);
    return pMVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVLocalPlayer *)(*pcVar2)();
  return pMVar1;
}


/* MainCameraManager get_MainCameraManager() */

MainCameraManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).mainCameraManager;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      return (pMVar1->fields).mainCameraManager;
    }
  }
  func_?(0);
code_?:
  this = (NullReferenceException *)func_?(TypeInfo__System__NullReferenceException);
  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor(this,(MethodInfo *)0x0)
  ;
  func_?(this,0);
  pcVar4 = (code *)swi(3);
  pMVar2 = (MainCameraManager *)(*pcVar4)();
  return pMVar2;
}


/* MaterialLoader get_MaterialLoader() */

MaterialLoader *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).materialLoader;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      return (pMVar1->fields).materialLoader;
    }
  }
  func_?(0);
code_?:
  this = (NullReferenceException *)func_?(TypeInfo__System__NullReferenceException);
  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor(this,(MethodInfo *)0x0)
  ;
  func_?(this,0);
  pcVar4 = (code *)swi(3);
  pMVar2 = (MaterialLoader *)(*pcVar4)();
  return pMVar2;
}


/* Boolean get_OkToReAuth() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_OkToReAuth
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    piVar2 = &(pMVar1->fields).reAuthTestTries;
    *piVar2 = *piVar2 + -1;
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      return (byte)((uint)(pMVar1->fields).reAuthTestTries >> 0x1f) ^ 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Action get_OnFirstFrameUpdateActorReady() */

Action * Assembly-CSharp.dll::MVGameControllerBase::
         MVGameControllerBase_get_OnFirstFrameUpdateActorReady(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
     pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
    return (pFVar2->fields).callbacks;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pAVar4 = (Action *)(*pcVar3)();
  return pAVar4;
}


/* Action`1[MVJoinState] get_OnJoinStateChanged() */

Action_1_MVJoinState_ *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).onJoinStateChanged;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pAVar3 = (Action_1_MVJoinState_ *)(*pcVar2)();
  return pAVar3;
}


/* MVNetworkGame+OperationRequests get_OperationRequests() */

MVNetworkGame_OperationRequests *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_OperationRequests
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = (MVJetPack *)MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVJetPack *)0x0) {
    pMVar1 = MVJetPack::MVJetPack_get_Shield(this,(MethodInfo *)0x0);
    return (MVNetworkGame_OperationRequests *)pMVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVNetworkGame_OperationRequests *)(*pcVar2)();
  return pMVar3;
}


/* IPlayModeUI get_PlayModeUI() */

IPlayModeUI *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_PlayModeUI(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  return TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
}


/* Boolean get_Quitting() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_Quitting
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  return TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField;
}


/* Int32 get_ReAuthTries() */

int32_t Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_ReAuthTries
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).reAuthTestTries;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* RegionConfig get_RegionConfig() */

RegionConfig *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_RegionConfig
          (MVGameControllerBase *this,MethodInfo *method)

{
  this_00 = (this->fields).regionConfigManager;
  if (this_00 == (RegionConfigManager *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    pRVar2 = (RegionConfig *)(*pcVar1)();
    return pRVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar3 = (this_00->fields).regionTag;
  if (pTVar3 != (TextAsset *)0x0) {
    pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                       (pTVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar5 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar4,StringLiteral_local,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      return (this_00->fields).local;
    }
    pTVar3 = (this_00->fields).regionTag;
    if (pTVar3 != (TextAsset *)0x0) {
      pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                         (pTVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar5 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar4,StringLiteral_dev,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        return (this_00->fields).dev;
      }
      pTVar3 = (this_00->fields).regionTag;
      if (pTVar3 != (TextAsset *)0x0) {
        pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                           (pTVar3,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar5 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar4,StringLiteral_test,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return (this_00->fields).test;
        }
        pTVar3 = (this_00->fields).regionTag;
        if (pTVar3 != (TextAsset *)0x0) {
          pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                             (pTVar3,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar5 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar4,StringLiteral_friends,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            return (this_00->fields).friends;
          }
          pSVar4 = RegionConfigManager::RegionConfigManager_get_RegionTag(this_00,(MethodInfo *)0x0)
          ;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar5 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar4,StringLiteral_br,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            return (this_00->fields).br;
          }
          pSVar4 = RegionConfigManager::RegionConfigManager_get_RegionTag(this_00,(MethodInfo *)0x0)
          ;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar5 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar4,StringLiteral_www,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            return (this_00->fields).www;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  pEStack6 = TypeInfo__System__Exception;
  this_01 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_01,StringLiteral_RegionConfig_not_found,(MethodInfo *)0x0);
  pMStack7 = MethodInfo__RegionConfigManager__get_RegionConfig__;
  uStack8 = 0;
  pIStack9 = this_01;
  func_?();
  pcVar1 = (code *)swi(3);
  pRVar2 = (RegionConfig *)(*pcVar1)();
  return pRVar2;
}


/* Boolean get_SeekAdConsent() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SeekAdConsent
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  return TypeInfo__MVGameControllerBase->static_fields->_SeekAdConsent_k__BackingField;
}


/* SkinnedMeshOptimizeManager get_SkinnedMeshOptimizeManager() */

SkinnedMeshOptimizeManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SkinnedMeshOptimizeManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).skinnedMeshOptimizeManager;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar3 = (SkinnedMeshOptimizeManager *)(*pcVar2)();
  return pSVar3;
}


/* SkyboxManager get_SkyboxManager() */

SkyboxManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SkyboxManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).skyboxManager;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar3 = (SkyboxManager *)(*pcVar2)();
  return pSVar3;
}


/* SpawnRoleDataMediator get_SpawnRoleDataMediatorLocal() */

SpawnRoleDataMediator *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVNetworkGame *)0x0) {
    this_00 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this,(MethodInfo *)0x0);
    if (this_00 != (PrefabPool *)0x0) {
      pSVar1 = (SpawnRoleDataMediator *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (SpawnRoleDataMediator *)(*pcVar2)();
  return pSVar1;
}


/* StreamingAssetManager get_StreamingAssetManager() */

StreamingAssetManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).streamingAssetManager;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar3 = (StreamingAssetManager *)(*pcVar2)();
  return pSVar3;
}


/* TextureIntegrityChecker get_TextureIntegrityChecker() */

TextureIntegrityChecker *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_TextureIntegrityChecker
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).textureIntegrityChecker;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pTVar3 = (TextureIntegrityChecker *)(*pcVar2)();
  return pTVar3;
}


/* TimeReward get_TimeReward() */

TimeReward *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_TimeReward(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).timeReward;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pTVar3 = (TimeReward *)(*pcVar2)();
  return pTVar3;
}


/* Boolean get_UsingDevSessionData() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this = (pMVar1->fields).koGaMaSettings, this != (KoGaMaSettingsContainer *)0x0)) {
    bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton::
            CrossPlatformInputManager_VirtualButton_get_matchWithInputManager
                      ((CrossPlatformInputManager_VirtualButton *)this,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 1;
    }
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                      ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)0x0,in_stack_3);
    return bVar2;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* MVWorldObjectClientManager get_WOCM() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_WOCM(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this,(MethodInfo *)0x0);
    return pMVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClientManager *)(*pcVar2)();
  return pMVar1;
}


/* WaterPlaneManager get_WaterPlaneManager() */

WaterPlaneManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).waterPlaneManager;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pWVar3 = (WaterPlaneManager *)(*pcVar2)();
  return pWVar3;
}


/* Void set_DisconnectIsOk(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_DisconnectIsOk
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
    TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = value;
    return;
  }
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = value;
  return;
}


/* Void set_EditModeUI(IEditModeUI) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_EditModeUI
               (IEditModeUI *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField = value;
    return;
  }
  TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField = value;
  return;
}


/* Void set_GameSessionData(GameSessionData) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_GameSessionData
               (GameSessionData *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
    TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField = value;
    return;
  }
  TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField = value;
  return;
}


/* Void set_IsInitialized(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_IsInitialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
    TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = value;
    return;
  }
  TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = value;
  return;
}


/* Void set_JoinState(MVJoinState) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_JoinState
               (MVJoinState__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    (pMVar1->fields)._joinState = value;
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      if ((pMVar1->fields).onJoinStateChanged != (Action_1_MVJoinState_ *)0x0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 == (MVGameControllerBase *)0x0) ||
           (this = (Action_1_UIPushOption_ *)(pMVar1->fields).onJoinStateChanged,
           this == (Action_1_UIPushOption_ *)0x0)) goto code_?;
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this,value,MethodInfo__System__Action<MVJoinState>__Invoke_MVJoinState_);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_OnFirstFrameUpdateActorReady(Action) */

void Assembly-CSharp.dll::MVGameControllerBase::
     MVGameControllerBase_set_OnFirstFrameUpdateActorReady(Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
     pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
    (pFVar2->fields).callbacks = value;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_OnJoinStateChanged(Action`1[MVJoinState]) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged
               (Action_1_MVJoinState_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    (pMVar1->fields).onJoinStateChanged = value;
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      if ((pMVar1->fields).onJoinStateChanged != (Action_1_MVJoinState_ *)0x0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 == (MVGameControllerBase *)0x0) ||
           (this = (Action_1_UIPushOption_ *)(pMVar1->fields).onJoinStateChanged,
           this == (Action_1_UIPushOption_ *)0x0)) goto code_?;
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this,(pMVar1->fields)._joinState,
                   MethodInfo__System__Action<MVJoinState>__Invoke_MVJoinState_);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_PlayModeUI(IPlayModeUI) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_PlayModeUI
               (IPlayModeUI *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
    TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField = value;
    return;
  }
  TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField = value;
  return;
}


/* Void set_Quitting(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_Quitting
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
    TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField = value;
    return;
  }
  TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField = value;
  return;
}


/* Void set_SeekAdConsent(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_SeekAdConsent
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
    TypeInfo__MVGameControllerBase->static_fields->_SeekAdConsent_k__BackingField = value;
    return;
  }
  TypeInfo__MVGameControllerBase->static_fields->_SeekAdConsent_k__BackingField = value;
  return;
}

