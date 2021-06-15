
/* Void Awake() */

void Assembly-CSharp.dll::GameLoader::GameLoader_Awake(GameLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GameLoader->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GameLoader->_1).cctor_started == 0)) {
    func_?(TypeInfo__GameLoader);
  }
  if (TypeInfo__GameLoader->static_fields->applicationStartUp == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_PostDestroyCleanup((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVGameControllerBase::MVGameControllerBase_PostDestroyCleanup((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_PostResetCleanup((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
      func_?();
    }
    TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_PostResetCleanup((MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
      func_?();
    }
    BackButtonManager::BackButtonManager_PostDestroyCleanup((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?();
    }
    GamePointGainEffectManager::GamePointGainEffectManager_PostResetCleanup((MethodInfo *)0x0);
  }
  return;
}


/* Void Cleanup() */

void Assembly-CSharp.dll::GameLoader::GameLoader_Cleanup(GameLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_PostDestroyCleanup((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVGameControllerBase::MVGameControllerBase_PostDestroyCleanup((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_PostResetCleanup((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
    func_?();
  }
  TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_PostResetCleanup((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
    func_?();
  }
  BackButtonManager::BackButtonManager_PostDestroyCleanup((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?();
  }
  GamePointGainEffectManager::GamePointGainEffectManager_PostResetCleanup((MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameLoader::GameLoader_Start(GameLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GameLoader->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GameLoader->_1).cctor_started == 0)) {
    func_?(TypeInfo__GameLoader);
  }
  if (TypeInfo__GameLoader->static_fields->applicationStartUp == 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_UnloadUnusedAssets
              ((MethodInfo *)0x0);
    mscorlib.dll::System::GC::GC_1_Collect((MethodInfo *)0x0);
  }
  return;
}


/* Void UnloadGame() */

void Assembly-CSharp.dll::GameLoader::GameLoader_UnloadGame(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__SceneManagement__SceneManager->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
  }
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::SceneManager_LoadScene_2
            (0,LoadSceneMode__Enum_Single,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GameLoader->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GameLoader->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

