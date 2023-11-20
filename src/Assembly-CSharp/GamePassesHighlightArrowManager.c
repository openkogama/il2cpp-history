
/* Void CreateHighlightArrow(GamePassTier) */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_CreateHighlightArrow
               (GamePassesHighlightArrowManager *this,GamePassTier__Enum gamePassTierToHighlight,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    pGVar2 = (this->fields).highlightArrowPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar2 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar2,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    (this->fields).highLightArrow = pGVar2;
    func_?(&(this->fields).highLightArrow,pGVar2);
    pGVar2 = (this->fields).highLightArrow;
    if (pGVar2 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0);
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).progressBarTransfromsList;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        parent = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (this_00,(gamePassTierToHighlight & 0xff) - GamePassTier__Enum_Tier1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                           );
        if (this_01 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,(Transform *)parent,0,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).highLightArrow;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar1 = (this->fields).highLightArrow;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    (this->fields).highLightArrow = (GameObject *)0x0;
    func_?(&(this->fields).highLightArrow,0);
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
    func_?(&TypeInfo__GamePassesHighlightArrowManager);
    func_?(&TypeInfo__TierUnlockedPopupController);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
  bVar2 = (pPVar1->fields).gamePassTier;
  if (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown < bVar2) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar3->fields).gameMode != 0) {
      pGVar4 = (this->fields).highlightArrowPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar4 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar4,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      (this->fields).highLightArrow = pGVar4;
      func_?(&(this->fields).highLightArrow,pGVar4);
      pGVar4 = (this->fields).highLightArrow;
      if (pGVar4 == (GameObject *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar4,(MethodInfo *)0x0);
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).progressBarTransfromsList;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      parent = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (this_00,bVar2 - 1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                         );
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(Transform *)parent,0,(MethodInfo *)0x0);
      (this->fields).currentGamePassTierHighlighted = bVar2;
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
    func_?(&TypeInfo__GamePassesHighlightArrowManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesHighlightArrowManager->static_fields->shouldDestroyHighlighArrow != 0) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
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
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      bVar3 = (pPVar2->fields).gamePassTier;
      if (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown < bVar3) {
        GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar1 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar1->fields).gameMode != 0) {
          pGVar4 = (this->fields).highlightArrowPrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pGVar4 = (GameObject *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)pGVar4,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
          (this->fields).highLightArrow = pGVar4;
          func_?();
          pGVar4 = (this->fields).highLightArrow;
          if (pGVar4 == (GameObject *)0x0) goto code_?;
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar4,(MethodInfo *)0x0);
          this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).progressBarTransfromsList;
          if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (parent = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (this_00,bVar3 - 1,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                                    ), this_01 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,(Transform *)parent,0,(MethodInfo *)0x0);
          (this->fields).currentGamePassTierHighlighted = bVar3;
        }
        TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 1;
      }
      return;
    }
  }
code_?:
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnTierBeingShown(GamePassTier) */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_OnTierBeingShown
               (GamePassesHighlightArrowManager *this,GamePassTier__Enum tierBeingShown,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesHighlightArrowManager);
    cRam_? = '\x01';
  }
  if ((undefined1)tierBeingShown == (this->fields).currentGamePassTierHighlighted) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
    if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked != 0) {
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
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__GamePassesHighlightArrowManager__OnPlayerPlanetDataUpdated__);
    func_?(&TypeInfo__GamePassesHighlightArrowManager);
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,
             MethodInfo__GamePassesHighlightArrowManager__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_02,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      func_?();
      goto code_?;
    }
  }
  func_?();
  if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
  bVar5 = (pPVar4->fields).gamePassTier;
  if (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown < bVar5) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(in_stack_6,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar7 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar7->fields).gameMode != 0) {
      pGVar8 = (in_stack_6->fields).highlightArrowPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pGVar8 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar8,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      (in_stack_6->fields).highLightArrow = pGVar8;
      func_?();
      pGVar8 = (in_stack_6->fields).highLightArrow;
      if (pGVar8 == (GameObject *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar8,(MethodInfo *)0x0);
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (in_stack_6->fields).progressBarTransfromsList;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      parent = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (this_00,bVar5 - 1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                         );
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(Transform *)parent,0,(MethodInfo *)0x0);
      (in_stack_6->fields).currentGamePassTierHighlighted = bVar5;
    }
    TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 1;
  }
  return;
}

