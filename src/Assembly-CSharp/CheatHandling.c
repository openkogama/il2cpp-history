
/* Void CheatSoftwareRunningDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_CheatSoftwareRunningDetected
               (MethodInfo *method)

{
  CheatHandling_ExecuteBan(CheatType__Enum_CheatSoftwareRunning,(MethodInfo *)0x0);
  return;
}


/* Void ExecuteBan(CheatType) */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_ExecuteBan
               (CheatType__Enum cheatType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
              (this,cheatType,(MethodInfo *)0x0);
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignout((MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Init() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_Init(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__CheatHandling->static_fields->__f__mg_cache0 == (UnityAction *)0x0) {
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)0x0,MethodInfo__CheatHandling__SpeedHackDetected__,(MethodInfo *)0x0
              );
    TypeInfo__CheatHandling->static_fields->__f__mg_cache0 = (UnityAction *)pUVar1;
  }
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
  SpeedHackDetector_StartDetection_3
            (TypeInfo__CheatHandling->static_fields->__f__mg_cache0,1.0,3,(MethodInfo *)0x0);
  if (TypeInfo__CheatHandling->static_fields->__f__mg_cache1 == (UnityAction *)0x0) {
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)0x0,MethodInfo__CheatHandling__ObscuredCheatingDetected__,
               (MethodInfo *)0x0);
    TypeInfo__CheatHandling->static_fields->__f__mg_cache1 = (UnityAction *)pUVar1;
  }
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
  ObscuredCheatingDetector_StartDetection_1
            (TypeInfo__CheatHandling->static_fields->__f__mg_cache1,(MethodInfo *)0x0);
  return;
}


/* Void MachineBanDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_MachineBanDetected(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVGameControllerBase::MVGameControllerBase_ApplicationQuit
            ((QuitBaseCallback *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void ObscuredCheatingDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_ObscuredCheatingDetected(MethodInfo *method)

{
  CheatHandling_ExecuteBan(CheatType__Enum_MemTampering,(MethodInfo *)0x0);
  return;
}


/* Void SpeedHackDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_SpeedHackDetected(MethodInfo *method)

{
  CheatHandling_ExecuteBan(CheatType__Enum_SpeedHack,(MethodInfo *)0x0);
  return;
}


/* Void TextureHackDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_TextureHackDetected(MethodInfo *method)

{
  CheatHandling_ExecuteBan(CheatType__Enum_TextureTampering,(MethodInfo *)0x0);
  return;
}

