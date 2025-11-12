
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Shared::Scripts::BaseDecider::BaseDecider_Awake
               (BaseDecider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Base);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Starting_directly_DesktopBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DesktopBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_starting_directly__showing_c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Starting_directly_Base);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).canvas;
  if ((this_00 == (Canvas *)0x0) ||
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_01,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    BaseDecider_Log(StringLiteral_Starting_directly_DesktopBase,(MethodInfo *)0x0);
    sceneName = StringLiteral_DesktopBase;
    if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
      FUN_?();
      sceneName = StringLiteral_DesktopBase;
    }
  }
  else {
    BaseDecider_Log(StringLiteral_Starting_directly_Base,(MethodInfo *)0x0);
    sceneName = StringLiteral_Base;
    if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
      FUN_?();
      sceneName = StringLiteral_Base;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
  SceneManager_LoadSceneAsyncNameIndexInternal
            (sceneName,-1,(LoadSceneParameters)0x0,1,(MethodInfo *)0x0);
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
  iVar3 = (*pcRam_?)();
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::SceneManager_GetSceneAt
            (iVar3 + -1,(MethodInfo *)0x0);
  return;
}


/* Void Log(String) */

void Assembly-CSharp.dll::UGUI::Shared::Scripts::BaseDecider::BaseDecider_Log
               (String *msg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BaseDecider___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_BaseDecider___,msg,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartButtonPressed(Boolean) */

void Assembly-CSharp.dll::UGUI::Shared::Scripts::BaseDecider::BaseDecider_StartButtonPressed
               (BaseDecider *this,bool mobile,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Starting_by_button_Base);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Base);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DesktopBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Starting_by_button_DesktopBase);
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
  TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouchInitialized_k__BackingField = 1;
  if (mobile == 0) {
    BaseDecider_Log(StringLiteral_Starting_by_button_DesktopBase,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField = 0;
    sceneName = StringLiteral_DesktopBase;
    if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
      FUN_?();
      sceneName = StringLiteral_DesktopBase;
    }
  }
  else {
    BaseDecider_Log(StringLiteral_Starting_by_button_Base,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField = 1;
    sceneName = StringLiteral_Base;
    if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
      FUN_?();
      sceneName = StringLiteral_Base;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
  SceneManager_LoadSceneAsyncNameIndexInternal
            (sceneName,-1,(LoadSceneParameters)0x0,1,(MethodInfo *)0x0);
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
  iVar3 = (*pcRam_?)();
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::SceneManager_GetSceneAt
            (iVar3 + -1,(MethodInfo *)0x0);
  return;
}

