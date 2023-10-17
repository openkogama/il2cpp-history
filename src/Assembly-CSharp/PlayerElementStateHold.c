
/* Void Initialize(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementStateHold::PlayerElementStateHold_Initialize
               (PlayerElementStateHold *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                   );
    cRam_? = '\x01';
  }
  if (player != (MVPlayer *)0x0) {
    bVar1 = MVPlayer::MVPlayer_get_IsTourist(player,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0)) {
      bVar1 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)pMVar3,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      if ((friend_1 != (Friend *)0x0) && ((friend_1->fields).status == 1)) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           ((pFVar4 = (pMVar2->fields)._Friends_k__BackingField, pFVar4 == (FriendList *)0x0 ||
            (this_00 = (Dictionary_2_System_Object_System_Object_ *)(pFVar4->fields).friends,
            this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0)))) goto code_?;
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__ContainsValue
                          (this_00,(Object *)friend_1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                          );
        if (bVar1 != 0) {
          pIVar5 = (this->fields).pendingFriendship;
          if ((pIVar5 == (Image *)0x0) ||
             (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pIVar5,(MethodInfo *)0x0),
             pGVar6 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
        }
      }
      iVar7 = (player->fields)._ProfileID_k__BackingField;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 != (MVLocalPlayer *)0x0)) {
        if (iVar7 != (pMVar3->fields)._._ProfileID_k__BackingField) {
          return;
        }
        pIVar5 = (this->fields).localPlayerImage;
        if ((pIVar5 != (Image *)0x0) &&
           (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

