
/* Void Initialize(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementStateHold::PlayerElementStateHold_Initialize
               (PlayerElementStateHold *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (player != (MVPlayer *)0x0) {
    if ((player->fields)._ProfileID_k__BackingField == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
        (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
       (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
       pMVar4 != (MVLocalPlayer *)0x0)) {
      if ((pMVar4->fields)._._ProfileID_k__BackingField == 0) {
        return;
      }
      if ((friend_1 != (Friend *)0x0) && ((friend_1->fields).status == 1)) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           ((pFVar5 = (pMVar2->fields)._Friends_k__BackingField, pFVar5 == (FriendList *)0x0 ||
            (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)(pFVar5->fields).friends,
            this_00 ==
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0)))) goto code_?;
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__ContainsValue
                          (this_00,(Object *)friend_1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                          );
        if (bVar6 != 0) {
          pIVar7 = (this->fields).pendingFriendship;
          if ((pIVar7 == (Image *)0x0) ||
             (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pIVar7,(MethodInfo *)0x0),
             pGVar8 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,1,(MethodInfo *)0x0);
        }
      }
      iVar9 = (player->fields)._ProfileID_k__BackingField;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar2 != (MVNetworkGame *)0x0) &&
          (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
         (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
         pMVar4 != (MVLocalPlayer *)0x0)) {
        if (iVar9 != (pMVar4->fields)._._ProfileID_k__BackingField) {
          return;
        }
        pIVar7 = (this->fields).localPlayerImage;
        if ((pIVar7 != (Image *)0x0) &&
           (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIVar7,(MethodInfo *)0x0),
           pGVar8 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

