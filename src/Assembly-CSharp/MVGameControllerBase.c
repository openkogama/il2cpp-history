
/* Void AlternatePortTest() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_AlternatePortTest
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Testing_alternate_port_by_settin);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Testing_alternate_port_by_settin,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if ((pGVar1 != (GameSessionData *)0x0) &&
     (pSVar2 = (pGVar1->fields).serverIP, pSVar2 != (String *)0x0)) {
    startIndex = mscorlib.dll::System::String::String_LastIndexOf(pSVar2,0x3a,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if ((pGVar1 != (GameSessionData *)0x0) &&
       (pSVar2 = (pGVar1->fields).serverIP, pSVar2 != (String *)0x0)) {
      pSVar2 = mscorlib.dll::System::String::String_Remove_1(pSVar2,startIndex,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      str2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar2,::StringLiteral__,str2,(MethodInfo *)0x0);
      if (pGVar1 != (GameSessionData *)0x0) {
        (pGVar1->fields).serverIP = pSVar2;
        func_?();
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
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&
                    MethodInfo__MVGameControllerBase____c__DisplayClass183_0___ApplicationQuit_b__0__
                   );
    func_?(&TypeInfo__MVGameControllerBase____c__DisplayClass183_0);
    func_?(&StringLiteral_Application_quit);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVGameControllerBase____c__DisplayClass183_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)applicationQuitObject;
    func_?(value + 1,applicationQuitObject);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Application_quit,(MethodInfo *)0x0);
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      if ((pMVar1->fields).quitHasBeenCalled == 0) {
        (TypeInfo__MVGameControllerBase->static_fields->instance->fields).quitHasBeenCalled = 1;
        this = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this,value,
                   MethodInfo__MVGameControllerBase____c__DisplayClass183_0___ApplicationQuit_b__0__
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        AsyncWWWManager::AsyncWWWManager_ShutDown((Action *)this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_Awake
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__AudioEventHandler);
    func_?(&
                    BrowserComm_MethodInfo__UnityEngine__Component__GetComponentInChildren<BrowserComm>__
                   );
    func_?(&
                    OverrideMaterials_MethodInfo__UnityEngine__Component__GetComponentInChildren<OverrideMaterials>__
                   );
    func_?(&AudioManager_MethodInfo__UnityEngine__Component__GetComponent<AudioManager>__);
    func_?(&LevelLoader_MethodInfo__UnityEngine__Component__GetComponent<LevelLoader>__);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MVUtils_MethodInfo__UnityEngine__GameObject__AddComponent<MVUtils>__);
    func_?(&TypeInfo__LoadStats);
    func_?(&MethodInfo__MVGameControllerBase__OnRTGAppInitialize__);
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    in_stack_1 =
         &PrefabPool_MethodInfo__UnityEngine__Object__Instantiate<PrefabPool>_PrefabPool_;
    func_?();
    func_?(&
                    Styles_MethodInfo__UnityEngine__Object__Instantiate<Styles>_Styles__UnityEngine__Transform__bool_
                   );
    func_?(&
                    WaterPlaneManager_MethodInfo__UnityEngine__Object__Instantiate<WaterPlaneManager>_WaterPlaneManager_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__RTG__RTGAppInitializedHandler);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__TimeReward);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&TypeInfo__UpdateController);
    func_?(&StringLiteral_Release_Name___0_u000A);
    func_?(&StringLiteral_Version_Number___0_u000A);
    func_?(&StringLiteral_Branch___0_u000A);
    func_?(&StringLiteral_Build_time___0_u000A);
    func_?(&StringLiteral_Build_infou000A);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->instance = this;
  func_?(&TypeInfo__MVGameControllerBase->static_fields->instance,this);
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_02 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
              (this_02,MVUtils_MethodInfo__UnityEngine__GameObject__AddComponent<MVUtils>__);
    this_03 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_1
              (this_03,0x100,(MethodInfo *)0x0);
    if (this_03 != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this_03,StringLiteral_Build_infou000A,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pKVar3 = (pMVar2->fields).koGaMaSettings, pKVar3 != (KoGaMaSettingsContainer *)0x0)) {
        pSVar4 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                           (pKVar3,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat
                  (this_03,StringLiteral_Version_Number___0_u000A,(Object *)pSVar4,(MethodInfo *)0x0
                  );
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 != (MVGameControllerBase *)0x0) &&
           (pKVar3 = (pMVar2->fields).koGaMaSettings, pKVar3 != (KoGaMaSettingsContainer *)0x0)) {
          pSVar4 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_ReleaseName
                             (pKVar3,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat
                    (this_03,StringLiteral_Release_Name___0_u000A,(Object *)pSVar4,(MethodInfo *)0x0
                    );
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar2 != (MVGameControllerBase *)0x0) &&
             (pKVar3 = (pMVar2->fields).koGaMaSettings, pKVar3 != (KoGaMaSettingsContainer *)0x0)) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat
                      (this_03,StringLiteral_Branch___0_u000A,(Object *)(pKVar3->fields).branchName,
                       (MethodInfo *)0x0);
            pKVar3 = (this->fields).koGaMaSettings;
            if (pKVar3 != (KoGaMaSettingsContainer *)0x0) {
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat
                        (this_03,StringLiteral_Build_time___0_u000A,
                         (Object *)(pKVar3->fields).buildTime,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)this_03,(MethodInfo *)0x0);
              PlayerPrefsManager::PlayerPrefsManager_EarlyInitialize((MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__PlayerPrefsManager);
                cRam_? = '\x01';
              }
              isFirstTimeSession = TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession;
              pRVar5 = (this->fields).regionConfigManager;
              if (pRVar5 != (RegionConfigManager *)0x0) {
                pRVar6 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                                   (pRVar5,(MethodInfo *)0x0);
                if (pRVar6 != (RegionConfig *)0x0) {
                  statHatConfig = (pRVar6->fields).StathatConfig;
                  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
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
                      uVar7._0_1_ = (pRVar6->fields).DebuggerLoggerConfig.
                                     useSamplingOnAndroidAndWebGL;
                      uVar7._1_1_ = (pRVar6->fields).DebuggerLoggerConfig.useProxyLogHandler;
                      uVar7._2_2_ = *(undefined2 *)&(pRVar6->fields).DebuggerLoggerConfig.field_0x2
                      ;
                      uVar7._4_4_ = (pRVar6->fields).DebuggerLoggerConfig.maxLogContextQueueCount;
                      PVar8.filterLogTypeConsoleWrite =
                           (pRVar6->fields).DebuggerLoggerConfig.proxyLogHandlerConfig.
                           filterLogTypeConsoleWrite;
                      pRVar5 = (this->fields).regionConfigManager;
                      if (pRVar5 != (RegionConfigManager *)0x0) {
                        pRVar6 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                                           (pRVar5,(MethodInfo *)0x0);
                        if ((pRVar6 != (RegionConfig *)0x0) && (this_00 != (DebugLogHandler *)0x0))
                        {
                          debugLogHandlerConfig.proxyLogHandlerConfig.filterLogTypeConsoleWrite =
                               PVar8.filterLogTypeConsoleWrite;
                          debugLogHandlerConfig.useSamplingOnAndroidAndWebGL = (char)uVar7;
                          debugLogHandlerConfig.useProxyLogHandler = (char)((ulonglong)uVar7 >> 8);
                          debugLogHandlerConfig._2_2_ = (short)((ulonglong)uVar7 >> 0x10);
                          debugLogHandlerConfig.maxLogContextQueueCount =
                               (int)((ulonglong)uVar7 >> 0x20);
                          DebugLogHandler::DebugLogHandler_Initialize
                                    (this_00,debugLogHandlerConfig,(pRVar6->fields).sentryConfig,
                                     (MethodInfo *)0x0);
                          pSVar9 = (this->fields).styles;
                          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_transform((Component *)this,(MethodInfo *)0x0);
                          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pSVar9 = (Styles *)
                                   UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_Instantiate_6
                                             ((Object *)pSVar9,parent,1,
                                              Styles_MethodInfo__UnityEngine__Object__Instantiate<Styles>_Styles__UnityEngine__Transform__bool_
                                             );
                          (this->fields).styles = pSVar9;
                          func_?();
                          this_04 = (LoadStats *)func_?();
                          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                          UxmlObjectListAttributeDescription`1[System::Object]::
                          UxmlObjectListAttributeDescription_1_System_Object___ctor
                                    ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_04,
                                     (MethodInfo *)0x0);
                          if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__System__DateTime);
                          }
                          mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
                          DVar10._dateData = 0;
                          mscorlib.dll::System::DateTime::DateTime__ctor_6
                                    ((DateTime *)&stack0xfffffff4,0x7b2,1,1,0,0,0,
                                     DateTimeKind__Enum_Utc,(MethodInfo *)0x0);
                          mscorlib.dll::System::DateTime::DateTime_Subtract
                                    ((DateTime *)&stack0xffffffec,
                                     (DateTime)(DVar10._dateData >> 0x20),
                                     (MethodInfo *)in_stack_1);
                          if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__System__TimeSpan);
                          }
                          dVar11 = mscorlib.dll::System::TimeSpan::TimeSpan_get_TotalMilliseconds
                                             ((TimeSpan *)&stack0xffffffe4,(MethodInfo *)0x0);
                          if (this_04 != (LoadStats *)0x0) {
                            (this_04->fields).GameStartTime = dVar11;
                            (this->fields).loadStats = this_04;
                            func_?(&(this->fields).loadStats,this_04);
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      ((Object *)(this->fields).prefabPool,
                                       PrefabPool_MethodInfo__UnityEngine__Object__Instantiate<PrefabPool>_PrefabPool_
                                      );
                            pLVar12 = (LevelLoader *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_GetComponent_1
                                                ((Component *)this,
                                                 LevelLoader_MethodInfo__UnityEngine__Component__GetComponent<LevelLoader>__
                                                );
                            (this->fields).levelLoader = pLVar12;
                            func_?(&(this->fields).levelLoader,pLVar12);
                            pAVar13 = (AudioManager *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_GetComponent_1
                                                ((Component *)this,
                                                 AudioManager_MethodInfo__UnityEngine__Component__GetComponent<AudioManager>__
                                                );
                            (this->fields).audioManager = pAVar13;
                            func_?(&(this->fields).audioManager,pAVar13);
                            pBVar14 = (BrowserComm *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_GetComponentInChildren_1
                                                ((Component *)this,
                                                 BrowserComm_MethodInfo__UnityEngine__Component__GetComponentInChildren<BrowserComm>__
                                                );
                            (this->fields).browserComm = pBVar14;
                            func_?(&(this->fields).browserComm,pBVar14);
                            pOVar15 = (OverrideMaterials *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_GetComponentInChildren_1
                                                ((Component *)this,
                                                 OverrideMaterials_MethodInfo__UnityEngine__Component__GetComponentInChildren<OverrideMaterials>__
                                                );
                            (this->fields).overrideMaterials = pOVar15;
                            func_?();
                            value = (TimeReward *)func_?();
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            method_01 = TypeInfo__TimeReward__RewardDone;
                            value_00 = (TimeReward_RewardStateBase *)func_?();
                            mscorlib.dll::System::ThrowHelper::
                            ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                      ((Object *)value_00,ExceptionArgument__Enum_obj,
                                       (MethodInfo *)method_01);
                            method_00 = (MethodInfo *)&value->fields;
                            (value->fields).rewardStateBase = value_00;
                            func_?();
                            mscorlib.dll::System::ThrowHelper::
                            ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                      ((Object *)value,ExceptionArgument__Enum_obj,method_00);
                            (this->fields).timeReward = value;
                            func_?();
                            CheatHandling::CheatHandling_Init((MethodInfo *)0x0);
                            pAVar16 = (this->fields).audioBuild;
                            if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            TypeInfo__AudioEventHandler->static_fields->audioBuild = pAVar16;
                            func_?();
                            if ((TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).
                                cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            this_05 = (RTGApp *)
                                      RTG::MonoSingleton`1[System::Object]::
                                      MonoSingleton_1_System_Object__get_Get
                                                (
                                                MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__
                                                );
                            value_01 = (RTGAppInitializedHandler *)func_?();
                            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                            NavMesh_OnNavMeshPreUpdate__ctor
                                      ((NavMesh_OnNavMeshPreUpdate *)value_01,(Object *)this,
                                       MethodInfo__MVGameControllerBase__OnRTGAppInitialize__,
                                       (MethodInfo *)0x0);
                            if (this_05 != (RTGApp *)0x0) {
                              RTG::RTGApp::RTGApp_add_Initialized
                                        (this_05,value_01,(MethodInfo *)0x0);
                              this_01 = (this->fields).themeRepository;
                              if (this_01 != (ThemeRepository *)0x0) {
                                ThemeRepository::ThemeRepository_Initialize
                                          (this_01,(MethodInfo *)0x0);
                                if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0
                                   ) {
                                  func_?(TypeInfo__UpdateController);
                                }
                                UpdateController::UpdateController_AddUpdateObject
                                          ((IUpdatecontrollerSubscriberUpdate *)this,
                                           UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
                                           (MethodInfo *)0x0);
                                MeshDataPool::MeshDataPool_Create((MethodInfo *)0x0);
                                pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                if (pMVar2 != (MVGameControllerBase *)0x0) {
                                  pWVar17 = (WaterPlaneManager *)
                                            UnityEngine.CoreModule.dll::UnityEngine::Object::
                                            Object_1_Instantiate_4
                                                      ((Object *)
                                                       (pMVar2->fields).waterPlaneManagerPrefab,
                                                                                                              
                                                  WaterPlaneManager_MethodInfo__UnityEngine__Object__Instantiate<WaterPlaneManager>_WaterPlaneManager_
                                                  );
                                  (this->fields).waterPlaneManager = pWVar17;
                                  func_?(&(this->fields).waterPlaneManager,pWVar17);
                                  if ((TypeInfo__UnityEngine__Application->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?(TypeInfo__UnityEngine__Application);
                                  }
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
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void CleanUp() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_CleanUp
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameLoader);
    func_?(&TypeInfo__UnityEngine__MonoBehaviour);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  pMVar2 = unaff_ESI;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    MVNetworkGame::MVNetworkGame_Cleanup(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) {
code_?:
      this_01 = MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar2 = unaff_ESI;
      if (this_01 != (MainCameraManager *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            if ((TypeInfo__GameLoader->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            GameLoader::GameLoader_UnloadGame((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      this_02 = (Component *)
                TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      pMVar2 = TypeInfo__UnityEngine__MonoBehaviour;
      if (this_02 != (Component *)0x0) {
        pMVar2 = TypeInfo__UnityEngine__MonoBehaviour;
        if (((this_02->klass->_1).naturalAligment <
             (TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment) ||
           ((this_02->klass->_1).typeHierarchy
            [(TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_02,(MethodInfo *)0x0);
        pMVar2 = unaff_ESI;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
  this_02 = extraout_EDX;
code_?:
  func_?(this_02,pMVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CleanUpPortal() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_CleanUpPortal
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__BackButtonManager);
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__UnityEngine__MonoBehaviour);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_PostDestroyCleanup((MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_PostResetCleanup((MethodInfo *)0x0);
  TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_PostResetCleanup((MethodInfo *)0x0);
  if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BackButtonManager::BackButtonManager_PostDestroyCleanup((MethodInfo *)0x0);
  GamePointGainEffectManager::GamePointGainEffectManager_PostResetCleanup((MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
  SpeedHackDetector_Dispose((MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
  ObscuredCheatingDetector_Dispose((MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::InjectionDetector::
  InjectionDetector_Dispose((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Component *)TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (this_00 == (Component *)0x0) {
code_?:
    this_01 = MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_01,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (((this_00->klass->_1).naturalAligment <
         (TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment) ||
       ((this_00->klass->_1).typeHierarchy
        [(TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) goto code_?;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeleteScreenPlayerPrefs() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_DeleteScreenPlayerPrefs
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Screenmanager_Is_Fullscreen_mode);
    func_?(&StringLiteral_Screenmanager_Resolution_Height);
    func_?(&StringLiteral_Screenmanager_Resolution_Width);
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
  }
  uVar8 = func_?(className);
  uVar9 = func_?(windowName);
  pvVar10 = (void *)(*pcRam_?)(uVar8,uVar9);
  func_?(uVar8);
  func_?(uVar9);
  return pvVar10;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_FixedUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((this->fields)._ShuttingDown_k__BackingField == 0) {
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    UpdateController::UpdateController_FixedUpdate((MethodInfo *)0x0);
  }
  return;
}


/* Void ForceEmbedSite(String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_ForceEmbedSite
               (String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&StringLiteral_Forcing_embed_site_with_URL__);
    cRam_? = '\x01';
  }
  message = mscorlib.dll::System::String::String_Concat_3
                      (StringLiteral_Forcing_embed_site_with_URL__,url,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  if (TypeInfo__MVGameControllerBase->static_fields->instance != (MVGameControllerBase *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (this = (pMVar1->fields).embeddedPlayerConfig, this != (EmbeddedPlayerConfig *)0x0)) {
      EmbeddedPlayerConfig::EmbeddedPlayerConfig_ForceEmbedSite(this,url,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleDebugShortCuts() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_HandleDebugShortCuts
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__ILogger);
    func_?(&StringLiteral_Enabling_logging_);
    func_?(&StringLiteral_Disabling_logging_);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                    (KeyCode__Enum_Alpha7,(MethodInfo *)0x0);
  if ((bVar1 == 0) ||
     (bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                        (KeyCode__Enum_Alpha9,(MethodInfo *)0x0), bVar1 == 0)) {
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__UnityEngine__Debug->static_fields->s_Logger != (ILogger_1 *)0x0) {
    iVar2 = func_?();
    if (iVar2 == 2) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar2 = func_?();
      if (iVar2 != 0) {
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Enabling_logging_,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar2 = func_?();
      if (iVar2 != 0) {
        iVar2 = func_?();
        if (iVar2 != 3) {
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Disabling_logging_,(MethodInfo *)0x0);
        iVar2 = func_?();
        if (iVar2 != 0) {
          func_?();
          return;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleQuitDisconnect() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_HandleQuitDisconnect
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = 1;
  if (cVar1 == '\0') {
    func_?();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
        cVar1 = cRam_?;
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
          (GameSessionData *)0x0) {
        SessionLocatorPing::SessionLocatorPing_LeaveSession((MethodInfo *)0x0);
        cVar1 = cRam_?;
      }
      if (cVar1 == '\0') {
        func_?();
        cVar1 = '\x01';
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) goto code_?;
      if ((pMVar3->fields)._Peer_k__BackingField != (PhotonPeer *)0x0) {
        if (cVar1 == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 == (MVGameControllerBase *)0x0) ||
           (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) goto code_?;
        if ((pMVar3->fields).connState == 4) {
          pMVar3 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 == (MVNetworkGame *)0x0) ||
             (pPVar4 = (pMVar3->fields)._Peer_k__BackingField, pPVar4 == (PhotonPeer *)0x0))
          goto code_?;
          (*(code *)(pPVar4->klass->vtable).Disconnect.method)();
        }
      }
    }
    return;
  }
code_?:
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitStandAlone(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_InitStandAlone
               (MVGameControllerBase *this,bool developmentMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__BrowserComm);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__GetRequest);
    func_?(&
                    MethodInfo__MVGameControllerBase__OnReceivedSessionData_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_combined_);
    func_?(&StringLiteral_kogamaPackage_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  MVGameControllerBase_DeleteScreenPlayerPrefs((MethodInfo *)0x0);
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__BrowserComm->static_fields->enableBrowserRequest = developmentMode ^ 1;
  pSStack_1 = (String__Array *)
              UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&StringLiteral_KoGaMa);
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_KoGaMa;
  if (pcRam_? == (code *)0x0) {
    uStack_4 = 10;
    uStack_5 = 10;
    uStack_6 = 0;
    uStack_7 = 2;
    uStack_8 = 8;
    uStack_9 = 0;
    pcRam_? = (code *)func_?(&puStack_10);
  }
  uVar11 = func_?(0);
  uVar12 = func_?(pSVar3);
  pSStack_13 = (String *)(*pcRam_?)(uVar11,uVar12);
  func_?(uVar11);
  func_?(uVar12);
  pSVar14 = pSStack_1;
  iVar15 = iVar2 * (int)pSStack_1;
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&stack0xffffffb4);
  }
  (*pcRam_?)(pSStack_13,0,0,0,pSVar14,iVar2,iVar15 == 0);
  if (developmentMode != 0) {
    (*(code *)(this->klass->vtable).StartGame.method)
              (this,(this->klass->vtable).InitWebGL.methodPtr);
    return;
  }
  pSStack_1 = mscorlib.dll::System::Environment::Environment_GetCommandLineArgs((MethodInfo *)0x0);
  uVar16 = 0;
  _developmentMode = ::StringLiteral__;
  if (pSStack_1 != (String__Array *)0x0) {
    ppSVar17 = pSStack_1->vector;
    while ((int)uVar16 < (int)pSStack_1->max_length) {
      if (pSStack_1->max_length <= uVar16) {
code_?:
        func_?();
        goto code_?;
      }
      pSStack_13 = *ppSVar17;
      pSVar14 = (String__Array *)func_?(TypeInfo__System__String,1);
      pSVar3 = StringLiteral_kogamaPackage_;
      if (pSVar14 == (String__Array *)0x0) goto code_?;
      if (pSVar14->max_length == 0) goto code_?;
      pSVar14->vector[0] = StringLiteral_kogamaPackage_;
      func_?(pSVar14->vector,pSVar3);
      if (pSStack_13 == (String *)0x0) goto code_?;
      pSVar14 = mscorlib.dll::System::String::String_Split_4
                         (pSStack_13,pSVar14,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
      if (pSVar14 == (String__Array *)0x0) goto code_?;
      if (pSVar14->max_length == 2) {
        _developmentMode =
             mscorlib.dll::System::String::String_Concat_3
                       (_developmentMode,pSVar14->vector[1],(MethodInfo *)0x0);
        uVar16 = uVar16 + 1;
        ppSVar17 = ppSVar17 + 1;
      }
      else {
        uVar16 = uVar16 + 1;
        ppSVar17 = ppSVar17 + 1;
      }
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_combined_,_developmentMode,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    pBVar18 = mscorlib.dll::System::Convert::Convert_FromBase64String
                       (_developmentMode,(MethodInfo *)0x0);
    pEVar19 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar19 != (Encoding *)0x0) {
      pSVar3 = (String *)
               (*(code *)(pEVar19->klass->vtable).GetString.method)
                         (pEVar19,pBVar18,(pEVar19->klass->vtable).GetString_1.methodPtr);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVGameControllerBase__OnReceivedSessionData_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
      AssetBundleRequest::AssetBundleRequest__ctor
                (this_01,pSVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void InitWebGL(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_InitWebGL
               (MVGameControllerBase *this,bool developmentMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_System::String>);
    func_?(&TypeInfo__BrowserComm);
    func_?(&
                    MethodInfo__MVGameControllerBase__ReceivedLoadStatsCallback_bool__System__String_
                   );
    func_?(&
                    MethodInfo__MVGameControllerBase__StartGameWithSessionData_bool__System__String_
                   );
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_sendLoadStats);
    func_?(&StringLiteral_sendPlayerParams);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  TypeInfo__BrowserComm->static_fields->enableExternalCall = developmentMode ^ 1;
  if (developmentMode == 0) {
    if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_GetBrowserVersion((MethodInfo *)0x0);
    pUVar1 = (UnityAction_2_System_Int32_System_Int32_ *)
             func_?(TypeInfo__System__Action<bool,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (pUVar1,(Object *)this,
               MethodInfo__MVGameControllerBase__StartGameWithSessionData_bool__System__String_,
               (MethodInfo *)0x0);
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
              (StringLiteral_sendPlayerParams,(Action_2_Boolean_String_ *)pUVar1,(MethodInfo *)0x0);
    pUVar1 = (UnityAction_2_System_Int32_System_Int32_ *)
             func_?(TypeInfo__System__Action<bool,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (pUVar1,(Object *)this,
               MethodInfo__MVGameControllerBase__ReceivedLoadStatsCallback_bool__System__String_,
               (MethodInfo *)0x0);
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
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = 1;
  return;
}


/* Boolean IsInCorrectInventory(Boolean) */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_IsInCorrectInventory
               (bool insidePlayerInventory,MethodInfo *method)

{
  return insidePlayerInventory;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_LateUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppUStack_1 = &TypeInfo__UpdateController;
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields)._ShuttingDown_k__BackingField == 0) {
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_LateUpdate((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
           (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
          (pWVar4 = (pMVar3->fields).worldNetwork, pWVar4 == (WorldNetwork *)0x0)) ||
         (this_00 = (pWVar4->fields)._.worldInventory, this_00 == (MVWorldInventory *)0x0)) {
code_?:
        uVar5 = func_?(&ppUStack_1);
        func_?(uVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      MVWorldInventory::MVWorldInventory_LateUpdate(this_00,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_01 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_UpdateCamera(this_01,(MethodInfo *)0x0);
    }
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    FullScreenController::FullScreenController_LateUpdate((MethodInfo *)0x0);
  }
  return;
}


/* Void OnApplicationQuit() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnApplicationQuit
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField = 1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = 1;
  if (cVar1 == '\0') {
    func_?();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
        cVar1 = cRam_?;
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
          (GameSessionData *)0x0) {
        SessionLocatorPing::SessionLocatorPing_LeaveSession((MethodInfo *)0x0);
        cVar1 = cRam_?;
      }
      if (cVar1 == '\0') {
        func_?();
        cVar1 = '\x01';
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) goto code_?;
      if ((pMVar3->fields)._Peer_k__BackingField != (PhotonPeer *)0x0) {
        if (cVar1 == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 == (MVGameControllerBase *)0x0) ||
           (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) goto code_?;
        if ((pMVar3->fields).connState == 4) {
          pMVar3 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 == (MVNetworkGame *)0x0) ||
             (pPVar4 = (pMVar3->fields)._Peer_k__BackingField, pPVar4 == (PhotonPeer *)0x0))
          goto code_?;
          (*(code *)(pPVar4->klass->vtable).Disconnect.method)();
        }
      }
    }
    pMStack_5 = this;
    (*(code *)(this->klass->vtable).CleanUp.method)();
    return;
  }
code_?:
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnDestroy
               (MVGameControllerBase *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__AudioEventHandler);
    func_?(&TypeInfo__BadgeManager);
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__HighlightManager);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__StreamingAsset);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DrawPlane);
    cRam_? = '\x01';
  }
  TypeInfo__DrawPlane->static_fields->drawPlaneController = (DrawPlaneControllerUUI *)0x0;
  func_?(TypeInfo__DrawPlane->static_fields,0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BadgeManager);
  }
  BadgeManager::BadgeManager_Reset((MethodInfo *)0x0);
  MeshDataPool::MeshDataPool_Destroy((MethodInfo *)0x0);
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  LevelingManager::LevelingManager_Destroy((MethodInfo *)0x0);
  StreamedSharedMaterialHandler::StreamedSharedMaterialHandler_Reset((MethodInfo *)0x0);
  LoggerManager::LoggerManager_Destroy((MethodInfo *)0x0);
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  CullingApiWrapper::CullingApiWrapper_Destroy((MethodInfo *)0x0);
  if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
            );
  if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__HighlightManager->static_fields->highlightDatas =
       (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)this_01;
  func_?();
  FirstTimeEventManager::FirstTimeEventManager_Destroy((MethodInfo *)0x0);
  ThemeRepository::ThemeRepository_Destroy((MethodInfo *)0x0);
  if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  AudioEventHandler::AudioEventHandler_Destroy((MethodInfo *)0x0);
  this_00 = (this->fields).debugLogHandler;
  if (this_00 != (DebugLogHandler *)0x0) {
    uVar1 = 0;
    DebugLogHandler::DebugLogHandler_Destroy(this_00,(MethodInfo *)0x0);
    AwayMonitor::AwayMonitor_Destroy((MethodInfo *)0x0);
    TM::TM_Destroy((MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_Reset((MethodInfo *)0x0);
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_Clear((MethodInfo *)0x0);
    if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    StreamingAsset::StreamingAsset_ClearCache((MethodInfo *)0x0);
    AccessoryDataManager::AccessoryDataManager_Reset((MethodInfo *)0x0);
    DataUploadManager::DataUploadManager_Reset((MethodInfo *)0x0);
    TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_Reset((MethodInfo *)0x0);
    UpdateController::UpdateController_RemoveUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
    func_?();
    *unaff_FS_OFFSET = uVar1;
    return;
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDrawGizmos() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnDrawGizmos
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_DebugVisualize((MethodInfo *)0x0);
  return;
}


/* Void OnRTGAppInitialize() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnRTGAppInitialize
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ISceneGizmo);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  this_00 = (RTGizmosEngine *)
            RTG::MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
  }
  pOVar1 = RTG::MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if ((pOVar1 != (Object *)0x0) && (this_00 != (RTGizmosEngine *)0x0)) {
    pIVar2 = RTG::RTGizmosEngine::RTGizmosEngine_GetSceneGizmoByCamera
                       (this_00,(Camera *)pOVar1[4].monitor,(MethodInfo *)0x0);
    if (pIVar2 != (ISceneGizmo *)0x0) {
      pIVar3 = pIVar2->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__RTG__ISceneGizmo) {
            ppMVar6 = &(&(pIVar2->klass->vtable).get_OwnerGizmo)
                       [pIVar2->klass->interfaceOffsets[uVar4].offset].method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar6 = (MethodInfo **)func_?(pIVar2);
code_?:
      this_01 = (Gizmo *)(*(code *)*ppMVar6)();
      if (this_01 != (Gizmo *)0x0) {
        RTG::Gizmo::Gizmo_SetEnabled(this_01,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnReceivedReAuthWebParametersFromHttpRequest(UnityWebRequest) */

void Assembly-CSharp.dll::MVGameControllerBase::
     MVGameControllerBase_OnReceivedReAuthWebParametersFromHttpRequest
               (MVGameControllerBase *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Reauth_webParameters_);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    this_00 = System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                        ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                          *)www,(MethodInfo *)0x0);
    if (this_00 !=
        (WebCompletionSource_1_T_Result_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      str1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
             DownloadHandler_get_text((DownloadHandler *)this_00,(MethodInfo *)0x0);
      message = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Reauth_webParameters_,str1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      MVGameControllerBase_StartGameWithSessionData
                ((MVGameControllerBase *)0x1,1,str1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnReceivedSessionData(UnityWebRequest) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_OnReceivedSessionData
               (MVGameControllerBase *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    this_00 = System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                        ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                          *)www,(MethodInfo *)0x0);
    if (this_00 !=
        (WebCompletionSource_1_T_Result_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      sessionDataJson =
           UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
           DownloadHandler_get_text((DownloadHandler *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)sessionDataJson,(MethodInfo *)0x0);
      MVGameControllerBase_StartGameWithSessionData
                ((MVGameControllerBase *)0x0,1,sessionDataJson,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PopJoystick() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PopJoystick(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this = (pMVar1->fields).joystickControllerStack, this != (JoystickControllerStack *)0x0)) {
    JoystickControllerStack::JoystickControllerStack_Pop(this,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PostDestroyCleanup() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PostDestroyCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&StringLiteral_OnReceivedNotification_still_hav);
    func_?(&StringLiteral_OnReceivedGameMsg_still_have_sub);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification !=
      (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReceivedNotification_still_hav,(MethodInfo *)0x0);
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    func_?(&TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification,0);
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
      (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReceivedGameMsg_still_have_sub,(MethodInfo *)0x0);
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    func_?(&TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg,0);
  }
  return;
}


/* Void PostGameMsg(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PostGameMsg
               (MVGameMsgType__Enum gameMsgType,
               Dictionary_2_System_Object_System_Object_ *gameMsgData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
      (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,gameMsgType,gameMsgData,(pMVar1->fields)._._.method)
    ;
  }
  return;
}


/* Void PostGameMsg(MVGameMsgType, String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
               (MVGameMsgType__Enum gameMsgType,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,key,(Object *)message,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
        (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      (*(TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg->fields)._._.invoke_impl)
                ();
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushJoystick(ControlType) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_PushJoystick
               (ControlType__Enum joystickType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this = (pMVar1->fields).joystickControllerStack, this != (JoystickControllerStack *)0x0)) {
    JoystickControllerStack::JoystickControllerStack_PushJoystick
              (this,joystickType,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReceivedLoadStatsCallback(Boolean, String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_ReceivedLoadStatsCallback
               (MVGameControllerBase *this,bool ok,String *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    LoadStats_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<LoadStats>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_Failed_to_get_load_stats_data);
    cRam_? = '\x01';
  }
  if (ok == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Failed_to_get_load_stats_data,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (data,
                      LoadStats_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<LoadStats>_System__String_
                     );
  if (((pOVar1 != (Object *)0x0) && (pLVar2 = (this->fields).loadStats, pLVar2 != (LoadStats *)0x0))
     && ((pLVar2->fields).DOMReady = (double)pOVar1[1], pLVar2 != (LoadStats *)0x0)) {
    (pLVar2->fields).PluginInit = (double)pOVar1[2];
    return;
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RegisterJoystickControllerStack(JoystickControllerStack) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_RegisterJoystickControllerStack
               (JoystickControllerStack *joystickControllerStack,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppJStack_1 = (JoystickControllerStack **)&TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    (pMVar2->fields).joystickControllerStack = joystickControllerStack;
    ppJStack_1 = &(pMVar2->fields).joystickControllerStack;
    func_?();
    return;
  }
  ppJStack_1 = (JoystickControllerStack **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RegisterOverrideMaterials() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_RegisterOverrideMaterials
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
          IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                    ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)0x0,unaff_retaddr);
  if (bVar1 != 0) {
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 == (MVGameControllerBase *)0x0) ||
       (this = (pMVar2->fields).overrideMaterials, this == (OverrideMaterials *)0x0)) {
      uVar3 = func_?(&stack0xfffffffc);
      func_?(uVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    OverrideMaterials::OverrideMaterials_Register(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void RegisterPlayModeController(ModeControllerBase) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_RegisterPlayModeController
               (ModeControllerBase *playModeController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    (pMVar1->fields).modeController = playModeController;
    func_?(&(pMVar1->fields).modeController,playModeController);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField =
         (IPlayModeUI *)playModeController;
    func_?(&TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField,
                    playModeController);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetGameSessionData(GameSessionData) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_SetGameSessionData
               (GameSessionData *gameSessionData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField = gameSessionData;
  func_?(&TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField,
                  gameSessionData);
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
    func_?(&StringLiteral_KoGaMa);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_KoGaMa;
  if (pcRam_? == (code *)0x0) {
    uStack_2 = 10;
    uStack_3 = 10;
    uStack_4 = 0;
    uStack_5 = 2;
    uStack_6 = 8;
    uStack_7 = 0;
    pcRam_? = (code *)func_?(&puStack_8);
  }
  uVar9 = func_?(0);
  uVar10 = func_?(pSVar1);
  uStack_11 = (*pcRam_?)(uVar9,uVar10);
  func_?(uVar9);
  func_?(uVar10);
  if (pcRam_? == (code *)0x0) {
    pcStack_12 = pcRam_?;
    uStack_13 = 0;
    uStack_14 = 10;
    uStack_15 = 0xc;
    uStack_16 = 2;
    uStack_17 = 0x1c;
    pcRam_? = (code *)func_?(&puStack_18);
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
  }
  iVar8 = (*pcRam_?)(hwnd,hWndInsertAfter,x,Y,cx,cy,wFlags);
  return iVar8 != 0;
}


/* Void ShutDown() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_ShutDown
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = 1;
  if (cVar1 == '\0') {
    func_?();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
        cVar1 = cRam_?;
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
          (GameSessionData *)0x0) {
        SessionLocatorPing::SessionLocatorPing_LeaveSession((MethodInfo *)0x0);
        cVar1 = cRam_?;
      }
      if (cVar1 == '\0') {
        func_?();
        cVar1 = '\x01';
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) goto code_?;
      if ((pMVar3->fields)._Peer_k__BackingField != (PhotonPeer *)0x0) {
        if (cVar1 == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 == (MVGameControllerBase *)0x0) ||
           (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) goto code_?;
        if ((pMVar3->fields).connState == 4) {
          pMVar3 = MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 == (MVNetworkGame *)0x0) ||
             (pPVar4 = (pMVar3->fields)._Peer_k__BackingField, pPVar4 == (PhotonPeer *)0x0))
          goto code_?;
          (*(code *)(pPVar4->klass->vtable).Disconnect.method)();
        }
      }
    }
    pMStack_5 = this;
    (*(code *)(this->klass->vtable).CleanUp.method)();
    return;
  }
code_?:
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_Start
               (MVGameControllerBase *this,MethodInfo *method)

{
  pTVar1 = (this->fields).textureIntegrityChecker;
  if ((pTVar1 != (TextureIntegrityChecker *)0x0) &&
     (this_00 = (pTVar1->fields).materialPlaneRenderer, this_00 != (MaterialPlaneRenderer *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 2;
    iVar11 = 0x10;
    iVar12 = 0x10;
    iVar13 = 1;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_bindMS
              ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_colorFormat
              ((RenderTextureDescriptor *)&stack0xffffff98,RenderTextureFormat__Enum_Default,
               (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_depthBufferBits
              ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_sRGB
              ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_useMipMap
              ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::
    RenderTextureDescriptor_set_autoGenerateMips
              ((RenderTextureDescriptor *)&stack0xffffff98,0,(MethodInfo *)0x0);
    (this_00->fields).renderTextureDesc._width_k__BackingField = iVar11;
    (this_00->fields).renderTextureDesc._height_k__BackingField = iVar12;
    (this_00->fields).renderTextureDesc._msaaSamples_k__BackingField = iVar13;
    (this_00->fields).renderTextureDesc._volumeDepth_k__BackingField = 1;
    (this_00->fields).renderTextureDesc._mipCount_k__BackingField = iVar3;
    (this_00->fields).renderTextureDesc._graphicsFormat = iVar4;
    (this_00->fields).renderTextureDesc._stencilFormat_k__BackingField = iVar5;
    (this_00->fields).renderTextureDesc._depthStencilFormat_k__BackingField = iVar2;
    (this_00->fields).renderTextureDesc._dimension_k__BackingField = iVar10;
    (this_00->fields).renderTextureDesc._shadowSamplingMode_k__BackingField = iVar6;
    (this_00->fields).renderTextureDesc._vrUsage_k__BackingField = iVar7;
    (this_00->fields).renderTextureDesc._flags = iVar8;
    (this_00->fields).renderTextureDesc._memoryless_k__BackingField = iVar9;
    puVar14 = &UNK_?;
    pRVar15 = (RenderTexture *)func_?();
    desc._height_k__BackingField = iVar12;
    desc._width_k__BackingField = iVar11;
    desc._msaaSamples_k__BackingField = iVar13;
    desc._volumeDepth_k__BackingField = 1;
    desc._mipCount_k__BackingField = iVar3;
    desc._graphicsFormat = iVar4;
    desc._stencilFormat_k__BackingField = iVar5;
    desc._depthStencilFormat_k__BackingField = iVar2;
    desc._dimension_k__BackingField = (int32_t)puVar14;
    desc._shadowSamplingMode_k__BackingField = 0;
    desc._vrUsage_k__BackingField = iVar7;
    desc._flags = iVar8;
    desc._memoryless_k__BackingField = iVar9;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_1
              (pRVar15,desc,(MethodInfo *)0x0);
    (this_00->fields).renderTexture = pRVar15;
    func_?();
    pRVar15 = (this_00->fields).renderTexture;
    if (pRVar15 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
                ((Texture *)pRVar15,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
      pRVar15 = (this_00->fields).renderTexture;
      if (pRVar15 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                  ((Texture *)pRVar15,FilterMode__Enum_Point,(MethodInfo *)0x0);
        pRVar15 = (this_00->fields).renderTexture;
        if (pRVar15 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                    ((Texture *)pRVar15,1,(MethodInfo *)0x0);
          AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes
                    (this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  uVar16 = func_?(&stack0xffffff7c);
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void StartGame() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_StartGame
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__FirstFrameUpdateActorReady);
    func_?(&TypeInfo__MVNetworkGame);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_MVGameControllerStartGame);
    func_?(&StringLiteral_Failed_to_connect);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = 0;
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_MVGameControllerStartGame,1,(MethodInfo *)0x0);
  pMVar1 = this;
  pEVar2 = (this->fields).embeddedPlayerConfig;
  if (pEVar2 != (EmbeddedPlayerConfig *)0x0) {
    EmbeddedPlayerConfig::EmbeddedPlayerConfig_Initialize(pEVar2,(MethodInfo *)0x0);
    pRVar3 = (pMVar1->fields).regionConfigManager;
    if (pRVar3 != (RegionConfigManager *)0x0) {
      pRVar4 = RegionConfigManager::RegionConfigManager_get_RegionConfig(pRVar3,(MethodInfo *)0x0);
      if (pRVar4 != (RegionConfig *)0x0) {
        if ((pRVar4->fields).TestSetup.testAlternatePort == 0) {
code_?:
          pRVar3 = (pMVar1->fields).regionConfigManager;
          if (pRVar3 != (RegionConfigManager *)0x0) {
            pRVar4 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                                (pRVar3,(MethodInfo *)0x0);
            if (pRVar4 != (RegionConfig *)0x0) {
              this = (MVGameControllerBase *)
                     CONCAT22(this._2_2_,(pRVar4->fields).PhotonLoggingConfig);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar5 != (MVGameControllerBase *)0x0) &&
                 (pEVar2 = (pMVar5->fields).embeddedPlayerConfig,
                 pEVar2 != (EmbeddedPlayerConfig *)0x0)) {
                pEVar6 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                                    ((EmbeddedSiteConfigData *)&stack0xffffffd4,pEVar2,
                                     (MethodInfo *)0x0);
                pLVar7 = pEVar6->sites;
                iVar8 = pEVar6->siteEnum;
                uVar9 = pEVar6->showTouristPromotion;
                uVar10 = pEVar6->allowsOpenInNewTab;
                uVar11 = pEVar6->allowsRedirectToWebpage;
                uVar12 = pEVar6->allowsModals;
                embeddedSiteConfigData.allowsModals = uVar12;
                embeddedSiteConfigData.allowsRedirectToWebpage = uVar11;
                embeddedSiteConfigData.allowsOpenInNewTab = uVar10;
                embeddedSiteConfigData.showTouristPromotion = uVar9;
                uVar13 = pEVar6->integratedSdk;
                uVar14 = pEVar6->allowsFallbackAds;
                uVar15 = pEVar6->showPlayButtonAd;
                uVar16 = pEVar6->hideGoldShop;
                embeddedSiteConfigData.hideGoldShop = uVar16;
                embeddedSiteConfigData.showPlayButtonAd = uVar15;
                embeddedSiteConfigData.allowsFallbackAds = uVar14;
                embeddedSiteConfigData.integratedSdk = uVar13;
                uVar17 = pEVar6->allowInHouseAds;
                uVar18 = pEVar6->removeFullscreenButton;
                uVar19 = pEVar6->hideSignUp;
                uVar20 = pEVar6->noPlayButtonVideoIcon;
                embeddedSiteConfigData.noPlayButtonVideoIcon = uVar20;
                embeddedSiteConfigData.hideSignUp = uVar19;
                embeddedSiteConfigData.removeFullscreenButton = uVar18;
                embeddedSiteConfigData.allowInHouseAds = uVar17;
                pMVar21 = (MVNetworkGame *)func_?();
                uVar22 = (undefined2)((uint)iVar8 >> 0x10);
                method_00 = (MethodInfo *)&UNK_?;
                embeddedSiteConfigData.siteEnum._0_1_ = (bool)(short)iVar8;
                embeddedSiteConfigData.siteEnum._1_1_ = SUB21((short)iVar8,1);
                embeddedSiteConfigData.sites = pLVar7;
                embeddedSiteConfigData.siteEnum._2_1_ = (bool)uVar22;
                embeddedSiteConfigData.siteEnum._3_1_ = SUB21(uVar22,1);
                MVNetworkGame::MVNetworkGame__ctor
                          (pMVar21,SUB42(this,0),embeddedSiteConfigData,(MethodInfo *)0x0);
                (pMVar1->fields).game = pMVar21;
                func_?();
                value = (Object *)func_?();
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__System__Action);
                  func_?(&MethodInfo__FirstFrameUpdateActorReady__OnLocalPlayerReady__);
                  func_?(&TypeInfo__UpdateController);
                  cRam_? = '\x01';
                }
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          (value,ExceptionArgument__Enum_obj,method_00);
                if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UpdateController);
                }
                UpdateController::UpdateController_AddUpdateObject
                          ((IUpdatecontrollerSubscriberUpdate *)value,
                           UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar5 != (MVGameControllerBase *)0x0) &&
                   (pMVar21 = (pMVar5->fields).game, pMVar21 != (MVNetworkGame *)0x0)) {
                  this = (MVGameControllerBase *)(pMVar21->fields).playerContainer;
                  if (this != (MVGameControllerBase *)0x0) {
                    pMVar23 = (this->fields).mainCameraManager;
                    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_00,value,
                               MethodInfo__FirstFrameUpdateActorReady__OnLocalPlayerReady__,
                               (MethodInfo *)0x0);
                    pMVar23 = (MainCameraManager *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pMVar23,(Delegate *)this_00,(MethodInfo *)0x0);
                    if (pMVar23 == (MainCameraManager *)0x0) {
                      (this->fields).mainCameraManager = (MainCameraManager *)0x0;
                    }
                    else {
                      pMVar24 = (MainCameraManager *)0x0;
                      if ((Action__Class *)pMVar23->klass == TypeInfo__System__Action) {
                        pMVar24 = pMVar23;
                      }
                      if (pMVar24 == (MainCameraManager *)0x0) {
                        func_?();
                        goto code_?;
                      }
                      (this->fields).mainCameraManager = pMVar24;
                      pMVar24 = (MainCameraManager *)0x0;
                      if ((Action__Class *)pMVar23->klass == TypeInfo__System__Action) {
                        pMVar24 = pMVar23;
                      }
                      if (pMVar24 == (MainCameraManager *)0x0) goto code_?;
                    }
                    pMVar25 = &this->fields;
                    func_?();
                    (pMVar1->fields).firstFrameUpdateActorReady =
                         (FirstFrameUpdateActorReady *)&pMVar25->mainCameraManager;
                    func_?();
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
                       (pMVar21 = (pMVar1->fields).game, pMVar21 != (MVNetworkGame *)0x0)) {
                      bVar26 = MVNetworkGame::MVNetworkGame_Join(pMVar21,(MethodInfo *)0x0);
                      if (bVar26 == 0) {
                        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
        else {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Testing_alternate_port_by_settin,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pGVar27 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if ((pGVar27 != (GameSessionData *)0x0) &&
             (pSVar28 = (pGVar27->fields).serverIP, pSVar28 != (String *)0x0)) {
            iVar8 = mscorlib.dll::System::String::String_LastIndexOf
                               (pSVar28,0x3a,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pGVar27 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
            ;
            if ((pGVar27 != (GameSessionData *)0x0) &&
               (pSVar28 = (pGVar27->fields).serverIP, pSVar28 != (String *)0x0)) {
              pSVar28 = mscorlib.dll::System::String::String_Remove_1
                                  (pSVar28,iVar8,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pGVar27 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              this = (MVGameControllerBase *)0x2710;
              str2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
              pSVar28 = mscorlib.dll::System::String::String_Concat_4
                                  (pSVar28,::StringLiteral__,str2,(MethodInfo *)0x0);
              if (pGVar27 != (GameSessionData *)0x0) {
                (pGVar27->fields).serverIP = pSVar28;
                func_?();
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Void StartGameWithSessionData(Boolean, String) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_StartGameWithSessionData
               (MVGameControllerBase *this,bool ok,String *sessionDataJson,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    GameSessionData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<GameSessionData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_WEBPARAMS__);
    cRam_? = '\x01';
  }
  if (ok != 0) {
    message = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_WEBPARAMS__,sessionDataJson,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    gameSessionData =
         (GameSessionData *)
         Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   (sessionDataJson,
                    GameSessionData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<GameSessionData>_System__String_
                   );
    if (gameSessionData == (GameSessionData *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)(gameSessionData->fields).pingURL,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)(gameSessionData->fields).disconnectURL,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      ppMStack2 = &TypeInfo__MVGameControllerBase;
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField =
         gameSessionData;
    ppGStack3 =
         &TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    ppMStack2 = (MVGameControllerBase__Class **)gameSessionData;
    func_?();
    PlayerPrefsManager::PlayerPrefsManager_Initialize(gameSessionData,(MethodInfo *)0x0);
    AwayMonitor::AwayMonitor_Initialize((gameSessionData->fields).gameMode,(MethodInfo *)0x0);
    (**(code **)(_UNK_? + 0x128))();
  }
  return;
}


/* Boolean TryReauth() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_TryReauth(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__GetRequest);
    func_?(&
                    MethodInfo__MVGameControllerBase__OnReceivedReAuthWebParametersFromHttpRequest_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields).game == (MVNetworkGame *)0x0) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      piVar2 = &(pMVar1->fields).reAuthTestTries;
      *piVar2 = *piVar2 + -1;
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar1 != (MVGameControllerBase *)0x0) {
        if ((pMVar1->fields).reAuthTestTries < 0) {
          return 0;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        bVar3 = cRam_? == '\0';
        TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = 1;
        if (bVar3) {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar4 = (pMVar1->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
           (pPVar5 = (pMVar4->fields)._Peer_k__BackingField, pPVar5 != (PhotonPeer *)0x0)) {
          (*(code *)(pPVar5->klass->vtable).Disconnect.method)
                    (pPVar5,(pPVar5->klass->vtable).Service.methodPtr);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar6 != (GameSessionData *)0x0) {
            path = (pGVar6->fields).reauthURL;
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            this = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                   func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
            SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                      (this,(Object *)pMVar1,
                       MethodInfo__MVGameControllerBase__OnReceivedReAuthWebParametersFromHttpRequest_UnityEngine__Networking__UnityWebRequest_
                       ,(MethodInfo *)0x0);
            this_00 = (AssetBundleRequest *)func_?(TypeInfo__GetRequest);
            AssetBundleRequest::AssetBundleRequest__ctor
                      (this_00,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,
                       WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
            if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            AsyncWWWManager::AsyncWWWManager_WWWRequest
                      ((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void Update() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_Update
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((this->fields)._ShuttingDown_k__BackingField == 0) {
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    UpdateController::UpdateController_Update((MethodInfo *)0x0);
    MVGameControllerBase_HandleDebugShortCuts(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateControllerLateUpdate() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_UpdateControllerLateUpdate
               (MVGameControllerBase *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__MVGameControllerBase__UpdateControllerLateUpdate__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&TypeInfo__AsyncWWWManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  AsyncWWWManager::AsyncWWWManager_Update((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar4 != (MVGameControllerBase *)0x0) {
    if ((pMVar4->fields).game == (MVNetworkGame *)0x0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    uStack_1 = 0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar4 != (MVGameControllerBase *)0x0) &&
       (this_00 = (pMVar4->fields).game, this_00 != (MVNetworkGame *)0x0)) {
      MVNetworkGame::MVNetworkGame_Update(this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar4 != (MVGameControllerBase *)0x0) {
        if ((pMVar4->fields)._joinState == 3) {
          (*(code *)(this->klass->vtable).UpdateInternal.method)(this);
          AwayMonitor::AwayMonitor_Update((MethodInfo *)0x0);
        }
        if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        AudioEventHandler::AudioEventHandler_Update((MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateGame() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_UpdateGame
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    MVNetworkGame::MVNetworkGame_Update(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      if ((pMVar1->fields)._joinState == 3) {
        (*(code *)(this->klass->vtable).UpdateInternal.method)();
        AwayMonitor::AwayMonitor_Update((MethodInfo *)0x0);
      }
      if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AudioEventHandler::AudioEventHandler_Update((MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVGameControllerBase() */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase__ctor
               (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FlagDebriefingControl);
    func_?(&TypeInfo__GoldRewardManager);
    func_?(&TypeInfo__SkinnedMeshOptimizeManager);
    cRam_? = '\x01';
  }
  this_00 = (SkinnedMeshOptimizeManager *)func_?(TypeInfo__SkinnedMeshOptimizeManager);
  SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).skinnedMeshOptimizeManager = this_00;
  func_?(&(this->fields).skinnedMeshOptimizeManager,this_00);
  this_01 = (FlagDebriefingControl *)func_?(TypeInfo__FlagDebriefingControl);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_01,(MethodInfo *)0x0);
  (this->fields).flagDebriefingControl = this_01;
  func_?(&(this->fields).flagDebriefingControl,this_01);
  this_02 = (GoldRewardManager *)func_?(TypeInfo__GoldRewardManager);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_02,(MethodInfo *)0x0);
  (this->fields).goldRewardManager = this_02;
  func_?(&(this->fields).goldRewardManager,this_02);
  (this->fields).reAuthTestTries = 3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* IAdManager get_AdManager() */

IAdManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_AdManager(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMStack_2 = pMVar1;
    pIVar3 = (IAdManager *)(*(code *)(pMVar1->klass->vtable).__unknown.method)();
    return pIVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pIVar3 = (IAdManager *)(*pcVar6)();
  return pIVar3;
}


/* AudioManager get_AudioManager() */

AudioManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_AudioManager(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).audioManager;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pAVar5 = (AudioManager *)(*pcVar4)();
  return pAVar5;
}


/* BrowserComm get_BrowserComm() */

BrowserComm *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_BrowserComm(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).browserComm;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pBVar5 = (BrowserComm *)(*pcVar4)();
  return pBVar5;
}


/* Boolean get_DisconnectIsOk() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_DisconnectIsOk
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField;
}


/* IEditModeUI get_EditModeUI() */

IEditModeUI *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_EditModeUI(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
}


/* EmbeddedPlayerConfig get_EmbeddedPlayerConfig() */

EmbeddedPlayerConfig *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_EmbeddedPlayerConfig
          (MVGameControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).embeddedPlayerConfig;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pEVar5 = (EmbeddedPlayerConfig *)(*pcVar4)();
  return pEVar5;
}


/* FlagDebriefingControl get_FlagDebriefingControl() */

FlagDebriefingControl *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).flagDebriefingControl;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pFVar5 = (FlagDebriefingControl *)(*pcVar4)();
  return pFVar5;
}


/* MVNetworkGame get_Game() */

MVNetworkGame *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_Game(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).game;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVNetworkGame *)(*pcVar4)();
  return pMVar5;
}


/* GameEventManager get_GameEventManager() */

GameEventManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GameEventManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    return (pMVar2->fields).GameEventManager;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pGVar6 = (GameEventManager *)(*pcVar5)();
  return pGVar6;
}


/* MVGameMode get_GameMode() */

MVGameMode__Enum
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GameMode(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    return (pGVar1->fields).gameMode;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  MVar5 = (*pcVar4)();
  return MVar5;
}


/* GameSessionData get_GameSessionData() */

GameSessionData *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GameSessionData
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
}


/* GoldRewardManager get_GoldRewardManager() */

GoldRewardManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).goldRewardManager;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pGVar5 = (GoldRewardManager *)(*pcVar4)();
  return pGVar5;
}


/* Boolean get_IsAlive() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_IsAlive(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField;
}


/* Boolean get_IsPlaying() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_IsPlaying
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMStack_2 = pMVar1;
    bVar3 = (*(code *)(pMVar1->klass->vtable).__unknown_1.method)();
    return bVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Boolean get_IsTouristSession() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    return (pGVar1->fields).profileID < 1;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* MVJoinState get_JoinState() */

MVJoinState__Enum
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_JoinState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields)._joinState;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  MVar5 = (*pcVar4)();
  return MVar5;
}


/* KoGaMaSettingsContainer get_KoGaMaSettings() */

KoGaMaSettingsContainer *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).koGaMaSettings;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pKVar5 = (KoGaMaSettingsContainer *)(*pcVar4)();
  return pKVar5;
}


/* Boolean get_LeavingEditPlayMode() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_LeavingEditPlayMode
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField;
}


/* LevelLoader get_LevelLoader() */

LevelLoader *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_LevelLoader(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).levelLoader;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pLVar5 = (LevelLoader *)(*pcVar4)();
  return pLVar5;
}


/* LoadStats get_LoadStats() */

LoadStats *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_LoadStats(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).loadStats;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pLVar5 = (LoadStats *)(*pcVar4)();
  return pLVar5;
}


/* MVLocalPlayer get_LocalPlayer() */

MVLocalPlayer *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_LocalPlayer(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this = (pMVar1->fields).game, this != (MVNetworkGame *)0x0)) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this,(MethodInfo *)0x0);
    return pMVar2;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pMVar2 = (MVLocalPlayer *)(*pcVar5)();
  return pMVar2;
}


/* MainCameraManager get_MainCameraManager() */

MainCameraManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).mainCameraManager;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      return (pMVar1->fields).mainCameraManager;
    }
  }
  func_?();
code_?:
  uVar4 = func_?(&TypeInfo__System__NullReferenceException);
  this = (NullReferenceException *)func_?(uVar4);
  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor(this,(MethodInfo *)0x0)
  ;
  func_?(&MethodInfo__MVGameControllerBase__get_MainCameraManager__);
  func_?(this);
  pcVar5 = (code *)swi(3);
  pMVar2 = (MainCameraManager *)(*pcVar5)();
  return pMVar2;
}


/* MaterialLoader get_MaterialLoader() */

MaterialLoader *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).materialLoader;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      return (pMVar1->fields).materialLoader;
    }
  }
  func_?();
code_?:
  uVar4 = func_?(&TypeInfo__System__NullReferenceException);
  this = (NullReferenceException *)func_?(uVar4);
  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor(this,(MethodInfo *)0x0)
  ;
  func_?(&MethodInfo__MVGameControllerBase__get_MaterialLoader__);
  func_?(this);
  pcVar5 = (code *)swi(3);
  pMVar2 = (MaterialLoader *)(*pcVar5)();
  return pMVar2;
}


/* Boolean get_OkToReAuth() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_OkToReAuth
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
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
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Action get_OnFirstFrameUpdateActorReady() */

Action * Assembly-CSharp.dll::MVGameControllerBase::
         MVGameControllerBase_get_OnFirstFrameUpdateActorReady(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
     pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
    return (pFVar2->fields).callbacks;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pAVar6 = (Action *)(*pcVar5)();
  return pAVar6;
}


/* Action`1[MVJoinState] get_OnJoinStateChanged() */

Action_1_MVJoinState_ *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).onJoinStateChanged;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pAVar5 = (Action_1_MVJoinState_ *)(*pcVar4)();
  return pAVar5;
}


/* MVNetworkGame+OperationRequests get_OperationRequests() */

MVNetworkGame_OperationRequests *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_OperationRequests
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    return (pMVar2->fields).operationRequests;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pMVar6 = (MVNetworkGame_OperationRequests *)(*pcVar5)();
  return pMVar6;
}


/* IPlayModeUI get_PlayModeUI() */

IPlayModeUI *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_PlayModeUI(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
}


/* Boolean get_PortalUI() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_PortalUI
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_PortalUI_k__BackingField;
}


/* Boolean get_Quitting() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_Quitting
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField;
}


/* Int32 get_ReAuthTries() */

int32_t Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_ReAuthTries
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).reAuthTestTries;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* RegionConfig get_RegionConfig() */

RegionConfig *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_RegionConfig
          (MVGameControllerBase *this,MethodInfo *method)

{
  this_00 = (this->fields).regionConfigManager;
  if (this_00 != (RegionConfigManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      ppSStack_1 = &StringLiteral_www;
      func_?();
      func_?(&StringLiteral_test);
      func_?(&StringLiteral_dev);
      func_?(&StringLiteral_ut);
      func_?(&StringLiteral_local);
      cRam_? = '\x01';
    }
    pTVar2 = (this_00->fields).regionTag;
    if (pTVar2 != (TextAsset *)0x0) {
      pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                         (pTVar2,(MethodInfo *)0x0);
      bVar4 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar3,StringLiteral_local,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return (this_00->fields).local;
      }
      pTVar2 = (this_00->fields).regionTag;
      if (pTVar2 != (TextAsset *)0x0) {
        pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                           (pTVar2,(MethodInfo *)0x0);
        bVar4 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar3,StringLiteral_dev,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return (this_00->fields).dev;
        }
        pTVar2 = (this_00->fields).regionTag;
        if (pTVar2 != (TextAsset *)0x0) {
          pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                             (pTVar2,(MethodInfo *)0x0);
          bVar4 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar3,StringLiteral_test,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            return (this_00->fields).test;
          }
          pTVar2 = (this_00->fields).regionTag;
          if (pTVar2 != (TextAsset *)0x0) {
            pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                               (pTVar2,(MethodInfo *)0x0);
            bVar4 = mscorlib.dll::System::String::String_op_Equality
                              (pSVar3,StringLiteral_friends,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              return (this_00->fields).friends;
            }
            pTVar2 = (this_00->fields).regionTag;
            if (pTVar2 != (TextAsset *)0x0) {
              pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::TextAsset::TextAsset_ToString
                                 (pTVar2,(MethodInfo *)0x0);
              bVar4 = mscorlib.dll::System::String::String_op_Equality
                                (pSVar3,StringLiteral_br,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                return (this_00->fields).br;
              }
              pSVar3 = RegionConfigManager::RegionConfigManager_get_RegionTag
                                 (this_00,(MethodInfo *)0x0);
              bVar4 = mscorlib.dll::System::String::String_op_Equality
                                (pSVar3,StringLiteral_www,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                return (this_00->fields).www;
              }
              pSVar3 = RegionConfigManager::RegionConfigManager_get_RegionTag
                                 (this_00,(MethodInfo *)0x0);
              bVar4 = mscorlib.dll::System::String::String_op_Equality
                                (pSVar3,StringLiteral_ut,(MethodInfo *)0x0);
              if (bVar4 == 0) {
                func_?();
                this_01 = (Exception *)func_?();
                method_00 = (MethodInfo *)0x0;
                pSVar3 = (String *)func_?();
                mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar3,method_00);
                uStack5 = func_?();
                pEStack6 = this_01;
                func_?();
                pcVar7 = (code *)swi(3);
                pRVar8 = (RegionConfig *)(*pcVar7)();
                return pRVar8;
              }
              return (this_00->fields).ut;
            }
          }
        }
      }
    }
  }
  uVar9 = func_?(&ppSStack_1);
  func_?(uVar9);
  pcVar7 = (code *)swi(3);
  pRVar8 = (RegionConfig *)(*pcVar7)();
  return pRVar8;
}


/* Boolean get_SeekAdConsent() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SeekAdConsent
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_SeekAdConsent_k__BackingField;
}


/* SkinnedMeshOptimizeManager get_SkinnedMeshOptimizeManager() */

SkinnedMeshOptimizeManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SkinnedMeshOptimizeManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).skinnedMeshOptimizeManager;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pSVar5 = (SkinnedMeshOptimizeManager *)(*pcVar4)();
  return pSVar5;
}


/* SkyboxManager get_SkyboxManager() */

SkyboxManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SkyboxManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).skyboxManager;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pSVar5 = (SkyboxManager *)(*pcVar4)();
  return pSVar5;
}


/* SpawnRoleDataMediator get_SpawnRoleDataMediatorLocal() */

SpawnRoleDataMediator *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this = (pMVar1->fields).game, this != (MVNetworkGame *)0x0)) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      return (pMVar2->fields).spawnRoleDataMediator;
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pSVar6 = (SpawnRoleDataMediator *)(*pcVar5)();
  return pSVar6;
}


/* StaticAssetsConfig get_StaticAssetsConfig() */

StaticAssetsConfig
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_StaticAssetsConfig
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this = (pMVar1->fields).regionConfigManager, this != (RegionConfigManager *)0x0)) {
    pRVar2 = RegionConfigManager::RegionConfigManager_get_RegionConfig(this,(MethodInfo *)0x0);
    if (pRVar2 != (RegionConfig *)0x0) {
      return (StaticAssetsConfig)(pRVar2->fields).StaticAssetsConfig.url;
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  SVar6.url = (String *)(*pcVar5)();
  return (StaticAssetsConfig)SVar6.url;
}


/* StreamingAssetManager get_StreamingAssetManager() */

StreamingAssetManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).streamingAssetManager;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pSVar5 = (StreamingAssetManager *)(*pcVar4)();
  return pSVar5;
}


/* SubscriberCooldownsManager get_SubscriberCooldownsManager() */

SubscriberCooldownsManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_SubscriberCooldownsManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).subscriberCooldownsManager;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pSVar5 = (SubscriberCooldownsManager *)(*pcVar4)();
  return pSVar5;
}


/* TextureIntegrityChecker get_TextureIntegrityChecker() */

TextureIntegrityChecker *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_TextureIntegrityChecker
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).textureIntegrityChecker;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pTVar5 = (TextureIntegrityChecker *)(*pcVar4)();
  return pTVar5;
}


/* TimeReward get_TimeReward() */

TimeReward *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_TimeReward(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).timeReward;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pTVar5 = (TimeReward *)(*pcVar4)();
  return pTVar5;
}


/* Boolean get_UsingDevSessionData() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppMStack_1 = &TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pKVar3 = (pMVar2->fields).koGaMaSettings, pKVar3 != (KoGaMaSettingsContainer *)0x0)) {
    if ((pKVar3->fields).showDebugLogin != 0) {
      return 1;
    }
    if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
            IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                      ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                        *)0x0,unaff_retaddr);
    return bVar4;
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* MVWorldObjectClientManager get_WOCM() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_WOCM(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this = (pMVar1->fields).game, this != (MVNetworkGame *)0x0)) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this,(MethodInfo *)0x0);
    return pMVar2;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pMVar2 = (MVWorldObjectClientManager *)(*pcVar5)();
  return pMVar2;
}


/* WaterPlaneManager get_WaterPlaneManager() */

WaterPlaneManager *
Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    return (pMVar1->fields).waterPlaneManager;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pWVar5 = (WaterPlaneManager *)(*pcVar4)();
  return pWVar5;
}


/* Boolean get_WebPlayAsTouch() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_WebPlayAsTouch
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField;
}


/* Boolean get_WebPlayAsTouchInitialized() */

bool Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_get_WebPlayAsTouchInitialized
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouchInitialized_k__BackingField;
}


/* Void set_DisconnectIsOk(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_DisconnectIsOk
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField = value;
  return;
}


/* Void set_EditModeUI(IEditModeUI) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_EditModeUI
               (IEditModeUI *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField = value;
  func_?(&TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField,
                  unaff_EBP);
  return;
}


/* Void set_GameSessionData(GameSessionData) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_GameSessionData
               (GameSessionData *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField = value;
  func_?(&TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField,
                  unaff_EBP);
  return;
}


/* Void set_IsInitialized(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_IsInitialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = value;
  return;
}


/* Void set_JoinState(MVJoinState) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_JoinState
               (MVJoinState__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    (pMVar2->fields)._joinState = value;
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 != (MVGameControllerBase *)0x0) {
      if ((pMVar2->fields).onJoinStateChanged != (Action_1_MVJoinState_ *)0x0) {
        pAVar3 = (TypeInfo__MVGameControllerBase->static_fields->instance->fields).
                 onJoinStateChanged;
        ppMStack_1 = (pAVar3->fields)._._.method;
        puStack_4 = (undefined *)value;
        pvStack_5 = (pAVar3->fields)._._.method_code;
        (*(pAVar3->fields)._._.invoke_impl)();
      }
      return;
    }
  }
  ppMStack_1 = (MVGameControllerBase__Class **)&stack0xfffffffc;
  uVar6 = func_?(&pvStack_5);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_LeavingEditPlayMode(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_LeavingEditPlayMode
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField = value;
  return;
}


/* Void set_OnFirstFrameUpdateActorReady(Action) */

void Assembly-CSharp.dll::MVGameControllerBase::
     MVGameControllerBase_set_OnFirstFrameUpdateActorReady(Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppAStack_1 = (Action **)&TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pFVar3 = (pMVar2->fields).firstFrameUpdateActorReady,
     pFVar3 != (FirstFrameUpdateActorReady *)0x0)) {
    (pFVar3->fields).callbacks = value;
    ppAStack_1 = &(pFVar3->fields).callbacks;
    func_?();
    return;
  }
  ppAStack_1 = (Action **)&stack0xfffffffc;
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_OnJoinStateChanged(Action`1[MVJoinState]) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged
               (Action_1_MVJoinState_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (Action_1_MVJoinState_ *)&TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    pAStack_1 = value;
    (pMVar2->fields).onJoinStateChanged = value;
    ppAStack_3 = &(pMVar2->fields).onJoinStateChanged;
    func_?();
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 != (MVGameControllerBase *)0x0) {
      if ((pMVar2->fields).onJoinStateChanged != (Action_1_MVJoinState_ *)0x0) {
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        pAVar4 = (pMVar2->fields).onJoinStateChanged;
        pAStack_1 = (pAVar4->fields)._._.method;
        ppAStack_3 = (Action_1_MVJoinState_ **)(pMVar2->fields)._joinState;
        puStack_5 = (pAVar4->fields)._._.method_code;
        (*(pAVar4->fields)._._.invoke_impl)();
      }
      return;
    }
  }
  pAStack_1 = (Action_1_MVJoinState_ *)&stack0xfffffffc;
  uVar6 = func_?(&puStack_5);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_PlayModeUI(IPlayModeUI) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_PlayModeUI
               (IPlayModeUI *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField = value;
  func_?(&TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField,
                  unaff_EBP);
  return;
}


/* Void set_PortalUI(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_PortalUI
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_PortalUI_k__BackingField = value;
  return;
}


/* Void set_Quitting(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_Quitting
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField = value;
  return;
}


/* Void set_SeekAdConsent(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_SeekAdConsent
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_SeekAdConsent_k__BackingField = value;
  return;
}


/* Void set_WebPlayAsTouch(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_WebPlayAsTouch
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField = value;
  return;
}


/* Void set_WebPlayAsTouchInitialized(Boolean) */

void Assembly-CSharp.dll::MVGameControllerBase::MVGameControllerBase_set_WebPlayAsTouchInitialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouchInitialized_k__BackingField = value;
  return;
}

