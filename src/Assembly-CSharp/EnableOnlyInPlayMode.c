
/* Void Update() */

void Assembly-CSharp.dll::EnableOnlyInPlayMode::EnableOnlyInPlayMode_Update
               (EnableOnlyInPlayMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      this = (EnableOnlyInPlayMode *)0x0;
      bVar1 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                           ((MethodInfo *)0x0);
        if ((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
           (this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
           this_00 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
        this = (EnableOnlyInPlayMode *)&UNK_?;
        bVar1 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (this_00,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          return;
        }
      }
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

