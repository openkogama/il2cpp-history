
/* Void Update() */

void Assembly-CSharp.dll::EnableOnlyInPlayMode::EnableOnlyInPlayMode_Update
               (EnableOnlyInPlayMode *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      this = (EnableOnlyInPlayMode *)0x0;
      bVar2 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                           ((MethodInfo *)0x0);
        if ((pSVar3 == (SpawnRoleDataMediator *)0x0) ||
           (this_01 = (pSVar3->fields).SpawnRoleModeTypeWrapper,
           this_01 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
        this = (EnableOnlyInPlayMode *)&UNK_?;
        bVar2 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (this_01,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
      }
    }
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar4,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  uVar5 = func_?(&stack0xfffffff4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

