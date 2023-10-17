
/* Void Awake() */

void Assembly-CSharp.dll::GameLoader::GameLoader_Awake(GameLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameLoader);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GameLoader->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GameLoader);
  }
  if (TypeInfo__GameLoader->static_fields->applicationStartUp == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AsyncWWWManager);
      func_?(&TypeInfo__BackButtonManager);
      func_?(&TypeInfo__CullingApiWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_PostDestroyCleanup((MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostDestroyCleanup((MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&StringLiteral_AsyncWWWManager_quitCallback_is_);
      cRam_? = '\x01';
    }
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__AsyncWWWManager->static_fields->quitCallback != (Action *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_AsyncWWWManager_quitCallback_is_,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__AsyncWWWManager->static_fields->quitCallback = (Action *)0x0;
      func_?();
    }
    TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_PostResetCleanup((MethodInfo *)0x0)
    ;
    if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    BackButtonManager::BackButtonManager_PostDestroyCleanup((MethodInfo *)0x0);
    GamePointGainEffectManager::GamePointGainEffectManager_PostResetCleanup((MethodInfo *)0x0);
  }
  return;
}


/* Void Cleanup() */

void Assembly-CSharp.dll::GameLoader::GameLoader_Cleanup(GameLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__BackButtonManager);
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_PostDestroyCleanup((MethodInfo *)0x0);
  MVGameControllerBase::MVGameControllerBase_PostDestroyCleanup((MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&StringLiteral_AsyncWWWManager_quitCallback_is_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__AsyncWWWManager->static_fields->quitCallback != (Action *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_AsyncWWWManager_quitCallback_is_,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__AsyncWWWManager->static_fields->quitCallback = (Action *)0x0;
    func_?();
  }
  TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_PostResetCleanup((MethodInfo *)0x0);
  if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BackButtonManager::BackButtonManager_PostDestroyCleanup((MethodInfo *)0x0);
  GamePointGainEffectManager::GamePointGainEffectManager_PostResetCleanup((MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameLoader::GameLoader_Start(GameLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__GC);
    func_?(&TypeInfo__GameLoader);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GameLoader->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GameLoader);
  }
  if (TypeInfo__GameLoader->static_fields->applicationStartUp == 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_UnloadUnusedAssets
              ((MethodInfo *)0x0);
    if ((TypeInfo__System__GC->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    mscorlib.dll::System::GC::GC_1_Collect((MethodInfo *)0x0);
  }
  return;
}


/* Void UnloadGame() */

void Assembly-CSharp.dll::GameLoader::GameLoader_UnloadGame(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameLoader);
    func_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
  }
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::SceneManager_LoadScene_2
            (0,LoadSceneMode__Enum_Single,(MethodInfo *)0x0);
  if ((TypeInfo__GameLoader->_1).cctor_finished_or_no_cctor == 0) {
    pGStack1 = TypeInfo__GameLoader;
    func_?();
  }
  TypeInfo__GameLoader->static_fields->applicationStartUp = 0;
  return;
}


/* GameLoader() */

void Assembly-CSharp.dll::GameLoader::GameLoader__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameLoader);
    cRam_? = '\x01';
  }
  TypeInfo__GameLoader->static_fields->applicationStartUp = 1;
  return;
}


/* GameLoader() */

void Assembly-CSharp.dll::GameLoader::GameLoader__ctor(GameLoader *this,MethodInfo *method)

{
  (this->fields).gameBaseSceneIndex = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

