
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Shared::Scripts::BaseDecider::BaseDecider_Awake
               (BaseDecider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    ppSStack_1 = &StringLiteral_Starting_directly_DesktopBase;
    func_?();
    func_?(&StringLiteral_DesktopBase);
    func_?(&StringLiteral_Not_starting_directly__showing_c);
    func_?(&StringLiteral_Starting_directly_Base);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).canvas;
  if (this_00 != (Canvas *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
        BaseDecider_Log(StringLiteral_Starting_directly_DesktopBase,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
        SceneManager_LoadScene(StringLiteral_DesktopBase,(MethodInfo *)0x0);
        return;
      }
      BaseDecider_Log(StringLiteral_Starting_directly_Base,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor == 0
         ) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::SceneManager_LoadScene
                (StringLiteral_Base,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&ppSStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Log(String) */

void Assembly-CSharp.dll::UGUI::Shared::Scripts::BaseDecider::BaseDecider_Log
               (String *msg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_BaseDecider___);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::String::String_Concat_3(StringLiteral_BaseDecider___,msg,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
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
    func_?(6,TypeInfo__UnityEngine__ILogger);
    return;
  }
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartButtonPressed(Boolean) */

void Assembly-CSharp.dll::UGUI::Shared::Scripts::BaseDecider::BaseDecider_StartButtonPressed
               (BaseDecider *this,bool mobile,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    func_?(&StringLiteral_Starting_by_button_Base);
    func_?(&StringLiteral_Base);
    func_?(&StringLiteral_DesktopBase);
    func_?(&StringLiteral_Starting_by_button_DesktopBase);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouchInitialized_k__BackingField = 1;
  str1 = StringLiteral_Starting_by_button_DesktopBase;
  pSVar1 = StringLiteral_Starting_by_button_Base;
  if (mobile == 0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_BaseDecider___);
      cRam_? = '\x01';
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_BaseDecider___,str1,(MethodInfo *)0x0);
    Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
              (pSVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField = 0;
    if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor == 0)
    {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::SceneManager_LoadScene
              (StringLiteral_DesktopBase,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(&StringLiteral_BaseDecider___);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_BaseDecider___,pSVar1,(MethodInfo *)0x0);
  Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1(pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField = 1;
  if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::SceneManager_LoadScene
            (StringLiteral_Base,(MethodInfo *)0x0);
  return;
}

