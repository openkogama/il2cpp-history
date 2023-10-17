
/* Void CheatSoftwareRunningDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_CheatSoftwareRunningDetected
               (MethodInfo *method)

{
  this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
              (this,CheatType__Enum_CheatSoftwareRunning,(MethodInfo *)0x0);
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignout((MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ExecuteBan(CheatType) */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_ExecuteBan
               (CheatType__Enum cheatType,MethodInfo *method)

{
  this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
              (this,cheatType,(MethodInfo *)0x0);
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignout((MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Init() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_Init(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__CheatHandling__ObscuredCheatingDetected__);
    func_?(&MethodInfo__CheatHandling__SpeedHackDetected__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pNVar1 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__UnityEngine__Events__UnityAction)
  ;
  if (pNVar1 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar1,(Object *)0x0,MethodInfo__CheatHandling__SpeedHackDetected__,(MethodInfo *)0x0
              );
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
    SpeedHackDetector_StartDetection_3((UnityAction *)pNVar1,1.0,3,(MethodInfo *)0x0);
    pNVar1 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar1 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar1,(Object *)0x0,MethodInfo__CheatHandling__ObscuredCheatingDetected__,
                 (MethodInfo *)0x0);
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
      ObscuredCheatingDetector_StartDetection_1((UnityAction *)pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ObscuredCheatingDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_ObscuredCheatingDetected(MethodInfo *method)

{
  this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
              (this,CheatType__Enum_MemTampering,(MethodInfo *)0x0);
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignout((MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SpeedHackDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_SpeedHackDetected(MethodInfo *method)

{
  this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
              (this,CheatType__Enum_SpeedHack,(MethodInfo *)0x0);
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignout((MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TextureHackDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_TextureHackDetected(MethodInfo *method)

{
  this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
              (this,CheatType__Enum_TextureTampering,(MethodInfo *)0x0);
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignout((MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

