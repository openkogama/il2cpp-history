
/* Void CreateHighlightArrow(GamePassTier) */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_CreateHighlightArrow
               (GamePassesHighlightArrowManager *this,GamePassTier__Enum gamePassTierToHighlight,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    pXVar2 = (XpBoostParticlePreviewer *)(this->fields).highlightArrowPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar2,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    (this->fields).highLightArrow = (GameObject *)pXVar2;
    if (pXVar2 != (XpBoostParticlePreviewer *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)pXVar2,(MethodInfo *)0x0);
      this_00 = (this->fields).progressBarTransfromsList;
      if (this_00 != (List_1_UnityEngine_Transform_ *)0x0) {
        parent = (Transform *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                            (gamePassTierToHighlight & 0xff) - GamePassTier__Enum_Tier1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                           );
        if (this_01 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,parent,0,(MethodInfo *)0x0);
          (this->fields).currentGamePassTierHighlighted = (undefined1)gamePassTierToHighlight;
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DestroyHighlighArrow() */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_DestroyHighlighArrow
               (GamePassesHighlightArrowManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).highLightArrow;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar1 = (this->fields).highLightArrow;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    (this->fields).highLightArrow = (GameObject *)0x0;
    (this->fields).currentGamePassTierHighlighted = 0;
  }
  return;
}


/* Void HandleUnseenTierUnlockReward() */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_HandleUnseenTierUnlockReward
               (GamePassesHighlightArrowManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
  bVar2 = (pPVar1->fields).gamePassTier;
  if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
    func_?(TypeInfo__TierUnlockedPopupController);
  }
  if (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown < bVar2) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar3 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar3->fields).gameMode != 0) {
      pXVar4 = (XpBoostParticlePreviewer *)(this->fields).highlightArrowPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar4,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      (this->fields).highLightArrow = (GameObject *)pXVar4;
      if (pXVar4 == (XpBoostParticlePreviewer *)0x0) {
code_?:
        func_?(0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)pXVar4,(MethodInfo *)0x0);
      this_00 = (this->fields).progressBarTransfromsList;
      if (this_00 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
      parent = (Transform *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,bVar2 - 1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                         );
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      (this->fields).currentGamePassTierHighlighted = bVar2;
    }
    if ((((uint)(TypeInfo__GamePassesHighlightArrowManager->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__GamePassesHighlightArrowManager->_1).cctor_started == 0)) {
      pGStack6 = TypeInfo__GamePassesHighlightArrowManager;
      func_?();
    }
    TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 1;
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_OnEnable
               (GamePassesHighlightArrowManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesHighlightArrowManager->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__GamePassesHighlightArrowManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesHighlightArrowManager);
  }
  if (TypeInfo__GamePassesHighlightArrowManager->static_fields->shouldDestroyHighlighArrow != 0) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassesHighlightArrowManager->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__GamePassesHighlightArrowManager->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__GamePassesHighlightArrowManager->static_fields->shouldDestroyHighlighArrow = 0;
  }
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_OnPlayerPlanetDataUpdated
               (GamePassesHighlightArrowManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 == (GameSessionData *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields).gameMode == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
  bVar4 = (pPVar3->fields).gamePassTier;
  if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
    func_?(TypeInfo__TierUnlockedPopupController);
  }
  if (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown < bVar4) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow
              ((GamePassesHighlightArrowManager *)0x0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    original = pXRam0000000c;
    if (pGVar1 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar1->fields).gameMode != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXRam00000014 =
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (original,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
      if (pXRam00000014 == (XpBoostParticlePreviewer *)0x0) {
code_?:
        func_?(0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)pXRam00000014,(MethodInfo *)0x0);
      if (pLRam00000010 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0)
      goto code_?;
      parent = (Transform *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         (pLRam00000010,bVar4 - 1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                         );
      if (this_00 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_00,parent,0,(MethodInfo *)0x0);
      bRam_? = bVar4;
    }
    if ((((uint)(TypeInfo__GamePassesHighlightArrowManager->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__GamePassesHighlightArrowManager->_1).cctor_started == 0)) {
      pGStack5 = TypeInfo__GamePassesHighlightArrowManager;
      func_?();
    }
    TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 1;
  }
  return;
}


/* Void OnTierBeingShown(GamePassTier) */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_OnTierBeingShown
               (GamePassesHighlightArrowManager *this,GamePassTier__Enum tierBeingShown,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((undefined1)tierBeingShown == (this->fields).currentGamePassTierHighlighted) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassesHighlightArrowManager->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__GamePassesHighlightArrowManager->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked != 0) {
      if ((((uint)(TypeInfo__GamePassesHighlightArrowManager->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__GamePassesHighlightArrowManager->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 0;
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_Start
               (GamePassesHighlightArrowManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_02,(Object *)this,
             MethodInfo__GamePassesHighlightArrowManager__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_02,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar2 != (Action *)0x0) {
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar2;
    }
    if (pAVar1 == (Action *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  if ((((uint)(TypeInfo__GamePassesHighlightArrowManager->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__GamePassesHighlightArrowManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
  bVar5 = (pPVar4->fields).gamePassTier;
  if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown < bVar5) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(in_stack_6,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar7 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar7->fields).gameMode != 0) {
      pXVar8 = (XpBoostParticlePreviewer *)(in_stack_6->fields).highlightArrowPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object,in_stack_9);
      }
      pXVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar8,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      (in_stack_6->fields).highLightArrow = (GameObject *)pXVar8;
      if (pXVar8 == (XpBoostParticlePreviewer *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)pXVar8,(MethodInfo *)0x0);
      this_00 = (in_stack_6->fields).progressBarTransfromsList;
      if (this_00 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
      parent = (Transform *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,bVar5 - 1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                         );
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      (in_stack_6->fields).currentGamePassTierHighlighted = bVar5;
    }
    if ((((uint)(TypeInfo__GamePassesHighlightArrowManager->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__GamePassesHighlightArrowManager->_1).cctor_started == 0)) {
      pGStack10 = TypeInfo__GamePassesHighlightArrowManager;
      func_?();
    }
    TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 1;
  }
  return;
}

