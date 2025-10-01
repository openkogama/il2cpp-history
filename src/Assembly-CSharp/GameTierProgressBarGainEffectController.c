
/* Void CreateGamePointGainEffect() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_CreateGamePointGainEffect
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GameTierProgressBarGainEffectController__OnGamePointReached_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                   );
    func_?(&
                    GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  original = (this->fields).gamePointGainEffectPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect_
                      );
  if (this_00 != (Component *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_02,(this->fields).gamePointEffectContainer,0,(MethodInfo *)0x0);
        this_03 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_03,(Object *)this,
                   MethodInfo__GameTierProgressBarGainEffectController__OnGamePointReached_int_,
                   (MethodInfo *)0x0);
        pLVar1 = (this->fields).gamePointGainEffectPool;
        if ((pLVar1 != (List_1_GamePointGainEffect_ *)0x0) &&
           (pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed,
           pLVar2 != (List_1_GamePointGainEffect_ *)0x0)) {
          iVar3 = (pLVar2->fields)._size;
          iVar4 = (pLVar1->fields)._size;
          this_00[4].monitor = (MonitorData *)this_03;
          func_?();
          this_00[4].fields._.m_CachedPtr = (void *)(iVar3 + iVar4);
          pLVar1 = (this->fields).gamePointGainEffectPool;
          if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar1,(Object *)this_00,
                       MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Transform GetTargetTransform() */

Transform *
Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
GameTierProgressBarGainEffectController_GetTargetTransform
          (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).tierProgressBar;
  if (pGVar1 != (GameTierProgressBar *)0x0) {
    fVar2 = (pGVar1->fields).previousProgressValue;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).targetDataList;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      fVar3 = (float10)func_?((double)fVar2);
      iVar4 = (byte)((char)(int)fVar3 + 1) - 1;
      if (iVar4 < 0) {
        index = 0;
      }
      else {
        index = (this_00->fields)._size + -1;
        if (iVar4 <= index) {
          index = iVar4;
        }
      }
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                        );
      if (RVar5 != (RegexCharClass_SingleRange)0x0) {
        return *(Transform **)((int)RVar5 + 8);
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pTVar7 = (Transform *)(*pcVar6)();
  return pTVar7;
}


/* Void HandleNewGamePointAmount(Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_HandleNewGamePointAmount
               (GameTierProgressBarGainEffectController *this,int32_t newGamePointsAmount,
               MethodInfo *method)

{
  iVar1 = ((this->fields).gamePointsToInstantiate - (this->fields).currentGamePoints) +
          newGamePointsAmount;
  (this->fields).gamePointsToInstantiate = iVar1;
  if (10 < iVar1) {
    (this->fields).gamePointsToInstantiate = 10;
  }
  (this->fields).currentGamePoints = newGamePointsAmount;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pfVar3 = &(this->fields).createGamePointTime;
  if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
    GameTierProgressBarGainEffectController_StartGamePointGainEffect(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleScaleEffect() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_HandleScaleEffect
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).targetDataList;
  if (pLVar1 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
    while( true ) {
      if ((pLVar1->fields)._size <= index) {
        return;
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).targetDataList;
      if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar3,index,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                             ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
         (this_00 = (this->fields).onHitScaleEffect, this_00 == (AnimationCurve *)0x0)) break;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_00,fVar2 - *(float *)((int)RVar4 + 0xc),(MethodInfo *)0x0);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).targetDataList;
      if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar3,index,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                             ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
         (*(Transform **)((int)RVar4 + 8) == (Transform *)0x0)) break;
      value.y = fVar2;
      value.x = fVar2;
      value.z = fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (*(Transform **)((int)RVar4 + 8),value,(MethodInfo *)0x0);
      pLVar1 = (this->fields).targetDataList;
      index = index + 1;
      if (pLVar1 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_Initialize
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__GamePointGainEffectManager);
    func_?(&MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_
                   );
    func_?(&
                    MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                   );
    func_?(&
                    MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized != 0) {
    return;
  }
  (this->fields).isInitialized = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
    pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar2 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 == (Action *)0x0) {
        func_?();
        goto code_?;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
      pAVar2 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    func_?();
    pAVar3 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pUVar4 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar4,(Object *)this,
               MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
           (Action_1_Int32_ *)0x0;
code_?:
      func_?();
      pAVar3 = TypeInfo__GamePointGainEffectManager->static_fields->
               OnTierProgressBarGamePointGainEffectShown;
      pUVar4 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                 ,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = (Action_1_Int32_ *)0x0;
code_?:
        func_?();
        iVar6 = 5;
        do {
          GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        return;
      }
      pAVar3 = (Action_1_Int32_ *)func_?();
      if (pAVar3 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = pAVar3;
        iVar6 = func_?();
        if (iVar6 != 0) goto code_?;
      }
    }
    else {
      pAVar3 = (Action_1_Int32_ *)func_?();
      if (pAVar3 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar3;
        iVar6 = func_?();
        if (iVar6 != 0) goto code_?;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar7 != (PlayerPlanetData *)0x0) {
      (this->fields).currentGamePoints = (pPVar7->fields).progressionGamePoints;
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnDestroy
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__GamePointGainEffectManager);
    func_?(&MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_
                   );
    func_?(&
                    MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                   );
    func_?(&
                    MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__
                   );
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
    func_?(&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated);
    return;
  }
  pAVar2 = (Action *)0x0;
  if (pAVar1->klass == TypeInfo__System__Action) {
    pAVar2 = pAVar1;
  }
  if (pAVar2 == (Action *)0x0) {
    func_?();
    func_?();
  }
  else {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGamePointReached(Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnGamePointReached
               (GameTierProgressBarGainEffectController *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index_00 = 0;
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  while (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    if ((pLVar1->fields)._size <= index_00) {
      return;
    }
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).gamePointGainEffectCurrentlyUsed;
    if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar2,index_00,
                           MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                          ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
    if (*(int *)((int)RVar3 + 0x38) == id) {
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).gamePointGainEffectCurrentlyUsed;
      if (((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar2,index_00,
                              MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                             ), RVar3 == (RegexCharClass_SingleRange)0x0)) ||
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)RVar3,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
      break;
      id = 0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).gamePointGainEffectPool;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)RVar3,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                );
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index_00,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_)
      ;
      this_00 = (this->fields).tierProgressBar;
      if (this_00 == (GameTierProgressBar *)0x0) break;
      GVar4 = GameTierProgressBar::GameTierProgressBar_GetCurrentTier(this_00,(MethodInfo *)0x0);
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).targetDataList;
      iVar5 = (GVar4 & 0xff) - GamePassTier__Enum_Tier1;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      if (iVar5 < 0) {
        index = 0;
      }
      else {
        index = (pLVar2->fields)._size + -1;
        if (iVar5 <= index) {
          index = iVar5;
        }
      }
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,index,
                         MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                        );
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
      *(float *)((int)RVar3 + 0xc) = fVar6;
    }
    index_00 = index_00 + 1;
    pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnHaveShownGainEffect(Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnHaveShownGainEffect
               (GameTierProgressBarGainEffectController *this,int32_t gamePointAmountShown,
               MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).currentGamePoints = gamePointAmountShown;
  if (bVar1) {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed;
  (this->fields).gamePointsToInstantiate = 0;
  if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
    index = (pLVar2->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).gamePointGainEffectCurrentlyUsed;
      if (((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (this_00,index,
                                MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                               ), this_01 == (RegexCharClass_SingleRange)0x0)) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_01,(MethodInfo *)0x0), this_02 == (GameObject *)0x0
         )) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      pLVar2 = (this->fields).gamePointGainEffectPool;
      if (pLVar2 == (List_1_GamePointGainEffect_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar2,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                );
      pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (pLVar2 == (List_1_GamePointGainEffect_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar2,index,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_)
      ;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnHaveShownTierProgressBarGainEffect(Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnHaveShownTierProgressBarGainEffect
               (GameTierProgressBarGainEffectController *this,int32_t gamePointAmountShown,
               MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      bVar3 = cRam_? == '\0';
      (this->fields).currentGamePoints = gamePointAmountShown;
      if (bVar3) {
        func_?();
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      pLVar4 = (this->fields).gamePointGainEffectCurrentlyUsed;
      (this->fields).gamePointsToInstantiate = 0;
      if (pLVar4 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      index = (pLVar4->fields)._size;
      while (index = index + -1, -1 < index) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).gamePointGainEffectCurrentlyUsed;
        if (((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            || (this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (this_00,index,
                                     MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                                    ), this_01 == (RegexCharClass_SingleRange)0x0)) ||
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0
           )) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pLVar4 = (this->fields).gamePointGainEffectPool;
        if (pLVar4 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar4,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                  );
        pLVar4 = (this->fields).gamePointGainEffectCurrentlyUsed;
        if (pLVar4 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar4,index,
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                  );
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnPlayerPlanetDataUpdated
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__GamePassesManager->static_fields;
  if (((pGVar1->_GamePassesActive_k__BackingField != 0) &&
      (pGVar1->playerTierStateCalculator != (PlayerTierStateCalculator *)0x0)) &&
     ((pGVar1->playerTierStateCalculator->fields).gamePassRewardsActivated != 0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 == (PlayerPlanetData *)0x0) {
      uVar3 = func_?(&stack0xfffffff0);
      func_?(uVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    newGamePointsAmount = (pPVar2->fields).progressionGamePoints;
    if ((this->fields).currentGamePoints < newGamePointsAmount) {
      GameTierProgressBarGainEffectController_HandleNewGamePointAmount
                (this,newGamePointsAmount,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ReplayGainEffect(Int32, Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_ReplayGainEffect
               (GameTierProgressBarGainEffectController *this,int32_t previousGamePointAmount,
               int32_t newGamePointAmount,MethodInfo *method)

{
  iVar1 = ((this->fields).gamePointsToInstantiate - previousGamePointAmount) + newGamePointAmount;
  (this->fields).gamePointsToInstantiate = iVar1;
  if (10 < iVar1) {
    (this->fields).gamePointsToInstantiate = 10;
  }
  (this->fields).currentGamePoints = newGamePointAmount;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pfVar3 = &(this->fields).createGamePointTime;
  if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
    GameTierProgressBarGainEffectController_StartGamePointGainEffect(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_Start
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__GamePointGainEffectManager);
    func_?(&MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_
                   );
    func_?(&
                    MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                   );
    func_?(&
                    MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized != 0) {
    return;
  }
  (this->fields).isInitialized = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
    pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar2 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 == (Action *)0x0) {
        func_?();
        goto code_?;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
      pAVar2 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    func_?();
    pAVar3 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pUVar4 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar4,(Object *)this,
               MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
           (Action_1_Int32_ *)0x0;
code_?:
      func_?();
      pAVar3 = TypeInfo__GamePointGainEffectManager->static_fields->
               OnTierProgressBarGamePointGainEffectShown;
      pUVar4 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                 ,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = (Action_1_Int32_ *)0x0;
code_?:
        func_?();
        iVar6 = 5;
        do {
          GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        return;
      }
      pAVar3 = (Action_1_Int32_ *)func_?();
      if (pAVar3 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = pAVar3;
        iVar6 = func_?();
        if (iVar6 != 0) goto code_?;
      }
    }
    else {
      pAVar3 = (Action_1_Int32_ *)func_?();
      if (pAVar3 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar3;
        iVar6 = func_?();
        if (iVar6 != 0) goto code_?;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar7 != (PlayerPlanetData *)0x0) {
      (this->fields).currentGamePoints = (pPVar7->fields).progressionGamePoints;
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void StartGamePointGainEffect() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_StartGamePointGainEffect
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePointGainEffectPool;
  if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    pLVar1 = (this->fields).gamePointGainEffectPool;
    if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
      this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields).gamePointGainEffectPool,(pLVar1->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                          );
      pLVar1 = (this->fields).gamePointGainEffectPool;
      if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)(this->fields).gamePointGainEffectPool,
                   (pLVar1->fields)._size + -1,
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                  );
        if (this_01 != (RegexCharClass_SingleRange)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          if (this_02 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (this_02,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              func_?(&
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                             );
              cRam_? = '\x01';
            }
            pGVar2 = (this->fields).tierProgressBar;
            if (pGVar2 != (GameTierProgressBar *)0x0) {
              fVar3 = (pGVar2->fields).previousProgressValue;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__System__Math);
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Math);
              }
              this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (this->fields).targetDataList;
              if (this_00 !=
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                fVar4 = (float10)func_?((double)fVar3);
                iVar5 = (byte)((char)(int)fVar4 + 1) - 1;
                if (iVar5 < 0) {
                  index = 0;
                }
                else {
                  index = (this_00->fields)._size + -1;
                  if (iVar5 <= index) {
                    index = iVar5;
                  }
                }
                RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_00,index,
                                   MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                                  );
                if (RVar6 != (RegexCharClass_SingleRange)0x0) {
                  fVar3 = (this->fields).offsetDirectionXMin;
                  uVar7 = *(undefined4 *)((int)RVar6 + 8);
                  fVar8 = (this->fields).offsetDirectionXMax;
                  minInclusive = (this->fields).offsetDirectionYMin;
                  maxInclusive = (this->fields).offsetDirectionYMax;
                  *(undefined4 *)((int)this_01 + 0x30) = uVar7;
                  func_?((int)this_01 + 0x30,uVar7);
                  *(undefined4 *)((int)this_01 + 0x1c) = 0;
                  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                    (*(float *)((int)this_01 + 0x18),*(float *)((int)this_01 + 0x14)
                                     ,(MethodInfo *)0x0);
                  *(float *)((int)this_01 + 0x20) = fVar9;
                  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                     (fVar3,fVar8,(MethodInfo *)0x0);
                  *(float *)((int)this_01 + 0x24) = fVar3;
                  if (0.0 < fVar3) {
                    fVar3 = fVar3 + _UNK_?;
                  }
                  else {
                    fVar3 = fVar3 - _UNK_?;
                  }
                  *(float *)((int)this_01 + 0x24) = fVar3;
                  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                     (minInclusive,maxInclusive,(MethodInfo *)0x0);
                  *(float *)((int)this_01 + 0x28) = fVar3;
                  this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                  if (this_03 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_03,1,(MethodInfo *)0x0);
                    pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
                    if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)pLVar1,(Object *)this_01,
                                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                                );
                      piVar10 = &(this->fields).gamePointsToInstantiate;
                      *piVar10 = *piVar10 + -1;
                      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                         ((MethodInfo *)0x0);
                      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                         (0.1,0.2,(MethodInfo *)0x0);
                      (this->fields).createGamePointTime = fVar8 + fVar3;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void StopAllGainEffects() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_StopAllGainEffects
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  (this->fields).gamePointsToInstantiate = 0;
  if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    index = (pLVar1->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).gamePointGainEffectCurrentlyUsed;
      if (((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (this_00,index,
                                MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                               ), this_01 == (RegexCharClass_SingleRange)0x0)) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_01,(MethodInfo *)0x0), this_02 == (GameObject *)0x0
         )) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).gamePointGainEffectPool;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                );
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_)
      ;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_Update
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (0 < (this->fields).gamePointsToInstantiate) {
    fVar1 = (this->fields).createGamePointTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar1 < fVar2) {
      GameTierProgressBarGainEffectController_StartGamePointGainEffect(this,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar3 = (this->fields).targetDataList;
  fVar1 = 0.0;
  if (pLVar3 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
    while( true ) {
      if ((pLVar3->fields)._size <= (int)fVar1) {
        return;
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).targetDataList;
      if (((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar4,(int32_t)fVar1,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                             ), RVar5 == (RegexCharClass_SingleRange)0x0)) ||
         (this_00 = (this->fields).onHitScaleEffect, this_00 == (AnimationCurve *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                (this_00,fVar2 - *(float *)((int)RVar5 + 0xc),(MethodInfo *)0x0);
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).targetDataList;
      if (((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar4,(int32_t)fVar1,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                             ), RVar5 == (RegexCharClass_SingleRange)0x0)) ||
         (*(Transform **)((int)RVar5 + 8) == (Transform *)0x0)) break;
      value.y = fVar1;
      value.x = fVar1;
      value.z = fVar1;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (*(Transform **)((int)RVar5 + 8),value,(MethodInfo *)0x0);
      pLVar3 = (this->fields).targetDataList;
      fVar1 = (float)((int)fVar1 + 1);
      if (pLVar3 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) break;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GameTierProgressBarGainEffectController() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController__ctor
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
    func_?(&
                    TypeInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__List__
            );
  (this->fields).targetDataList = this_00;
  func_?(&(this->fields).targetDataList,this_00);
  pLVar1 = (List_1_GamePointGainEffect_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  (this->fields).gamePointGainEffectPool = pLVar1;
  func_?(&(this->fields).gamePointGainEffectPool,pLVar1);
  pLVar1 = (List_1_GamePointGainEffect_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  (this->fields).gamePointGainEffectCurrentlyUsed = pLVar1;
  func_?(&(this->fields).gamePointGainEffectCurrentlyUsed,pLVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

