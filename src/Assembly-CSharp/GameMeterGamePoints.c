
/* Void AddGamePoints(Int32) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_AddGamePoints
               (GameMeterGamePoints *this,int32_t addedGamePoints,MethodInfo *method)

{
  piVar1 = &(this->fields).gamePointsToInstantiate;
  *piVar1 = *piVar1 + addedGamePoints;
  piVar1 = &(this->fields).currentGamePoints;
  *piVar1 = *piVar1 + addedGamePoints;
  GameMeterGamePoints_GamePointsModified(this,(MethodInfo *)0x0);
  return;
}


/* Void CreateGamePointGainEffect() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_CreateGamePointGainEffect
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GameMeterGamePoints__OnGamePointReached_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                   );
    func_?(&
                    GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gamePointGainEffectPrefab;
  parent = (this->fields).gamePointEffectSpawnPoint;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GamePointGainEffect *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pGVar1,parent,0,
                      GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect__UnityEngine__Transform__bool_
                     );
  if (pGVar1 != (GamePointGainEffect *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pGVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,MethodInfo__GameMeterGamePoints__OnGamePointReached_int_,
                 (MethodInfo *)0x0);
      pLVar2 = (this->fields).gamePointGainEffectPool;
      if ((pLVar2 != (List_1_GamePointGainEffect_ *)0x0) &&
         (pLVar3 = (this->fields).gamePointGainEffectCurrentlyUsed,
         pLVar3 != (List_1_GamePointGainEffect_ *)0x0)) {
        GamePointGainEffect::GamePointGainEffect_Initialize
                  (pGVar1,(UnityAction_1_System_Int32_ *)this_01,
                   (pLVar3->fields)._size + (pLVar2->fields)._size,(MethodInfo *)0x0);
        pLVar2 = (this->fields).gamePointGainEffectPool;
        if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar2,(Object *)pGVar1,
                     MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void GamePointsModified() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_GamePointsModified
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if (10 < (this->fields).gamePointsToInstantiate) {
    (this->fields).gamePointsToInstantiate = 10;
  }
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  if ((pLVar1 != (List_1_GamePointGainEffect_ *)0x0) &&
     (this_00 = (this->fields).countController, this_00 != (GamePointGainEffectCountController *)0x0
     )) {
    GamePointGainEffectCountController::GamePointGainEffectCountController_SetupAmountCatchingUp
              (this_00,(this->fields).currentGamePoints,
               (pLVar1->fields)._size + (this->fields).gamePointsToInstantiate,(MethodInfo *)0x0);
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pfVar3 = &(this->fields).createGamePointTime;
    if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
      GameMeterGamePoints_StartGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_Initialize
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__FakeGamePointGainEffectManager);
    func_?(&MethodInfo__GameMeterGamePoints__OnFakeGainEffect_int_);
    func_?(&MethodInfo__GameMeterGamePoints__OnHaveShownGainEffect_int_);
    func_?(&MethodInfo__GameMeterGamePoints__OnInGameGainEffectShown_int_);
    func_?(&MethodInfo__GameMeterGamePoints__OnPlayerPlanetDataUpdated__);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__GamePointGainEffectManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) {
    func_?();
    goto code_?;
  }
  (this->fields).currentGamePoints = (pPVar1->fields).highScoreGamePoints;
  pAVar2 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GameMeterGamePoints__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar2 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
    func_?();
    pAVar3 = TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
    pUVar4 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar4,(Object *)this,MethodInfo__GameMeterGamePoints__OnFakeGainEffect_int_,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect =
           (Action_1_Int32_ *)0x0;
code_?:
      func_?();
      pAVar3 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
      pUVar4 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar4,(Object *)this,MethodInfo__GameMeterGamePoints__OnHaveShownGainEffect_int_,
                 (MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
             (Action_1_Int32_ *)0x0;
code_?:
        func_?();
        pAVar3 = TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
        pUVar4 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar4,(Object *)this,
                   MethodInfo__GameMeterGamePoints__OnInGameGainEffectShown_int_,(MethodInfo *)0x0);
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
        if (pDVar5 == (Delegate *)0x0) {
          TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown =
               (Action_1_Int32_ *)0x0;
code_?:
          func_?();
          iVar6 = 5;
          do {
            GameMeterGamePoints_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          return;
        }
        pAVar3 = (Action_1_Int32_ *)func_?();
        if (pAVar3 != (Action_1_Int32_ *)0x0) {
          TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown = pAVar3
          ;
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
      pAVar3 = (Action_1_Int32_ *)func_?();
      if (pAVar3 != (Action_1_Int32_ *)0x0) {
        TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect = pAVar3;
        iVar6 = func_?();
        if (iVar6 != 0) goto code_?;
      }
    }
code_?:
    func_?();
  }
  else {
    pAVar7 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar2;
    }
    if (pAVar7 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar2;
    }
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnDestroy
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__FakeGamePointGainEffectManager);
    func_?(&MethodInfo__GameMeterGamePoints__OnFakeGainEffect_int_);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
  this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_00,(Object *)this,MethodInfo__GameMeterGamePoints__OnFakeGainEffect_int_,
             (MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<int>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect =
         (Action_1_Int32_ *)0x0;
    pAStack4 = (Action_1_Int32___Class *)0x0;
code_?:
    func_?();
    return;
  }
  pAStack4 = TypeInfo__System__Action<int>;
  pAVar1 = (Action_1_Int32_ *)func_?();
  if (pAVar1 != (Action_1_Int32_ *)0x0) {
    TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect = pAVar1;
    pAVar3 = TypeInfo__System__Action<int>;
    pAStack4 = TypeInfo__System__Action<int>;
    pAStack4 = (Action_1_Int32___Class *)func_?();
    if (pAStack4 != (Action_1_Int32___Class *)0x0) goto code_?;
  }
  pAStack4 = pAVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnDisable
               (GameMeterGamePoints *this,MethodInfo *method)

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


/* Void OnGainEffectsDone() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnGainEffectsDone
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
  updateToValue = (pPVar1->fields).highScoreGamePoints;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar2->fields).gameMode == 0) {
code_?:
    updateToValue = (this->fields).currentGamePoints;
  }
  else {
    bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
  }
  this_00 = (this->fields).countController;
  if (this_00 != (GamePointGainEffectCountController *)0x0) {
    GamePointGainEffectCountController::
    GamePointGainEffectCountController_UpdateGamePointAmountTextToValue
              (this_00,updateToValue,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGamePointReached(Int32) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnGamePointReached
               (GameMeterGamePoints *this,int32_t id,MethodInfo *method)

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
  index = 0;
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    while (pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).gamePointGainEffectCurrentlyUsed, index < (pLVar1->fields)._size)
    {
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      if (*(int *)((int)RVar3 + 0x38) == id) {
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).gamePointGainEffectCurrentlyUsed;
        if (((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar2,index,
                                MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                               ), RVar3 == (RegexCharClass_SingleRange)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)RVar3,(MethodInfo *)0x0), this_00 == (GameObject *)0x0
           )) goto code_?;
        id = 0;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        pLVar1 = (this->fields).gamePointGainEffectPool;
        if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar1,(Object *)RVar3,
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                  );
        pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
        if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                  );
        pGVar4 = (this->fields).countController;
        if (pGVar4 == (GamePointGainEffectCountController *)0x0) goto code_?;
        GamePointGainEffectCountController::
        GamePointGainEffectCountController_OnGamePointGainEffectReached(pGVar4,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      index = index + 1;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
    }
    if (pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((0 < (pLVar2->fields)._size) || (0 < (this->fields).gamePointsToInstantiate)) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar5 != (PlayerPlanetData *)0x0) {
        updateToValue = (pPVar5->fields).highScoreGamePoints;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar6 != (GameSessionData *)0x0) {
          if (((pGVar6->fields).gameMode == 0) ||
             (bVar7 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                ((MethodInfo *)0x0), bVar7 != 0)) {
            updateToValue = (this->fields).currentGamePoints;
          }
          pGVar4 = (this->fields).countController;
          if (pGVar4 != (GamePointGainEffectCountController *)0x0) {
            GamePointGainEffectCountController::
            GamePointGainEffectCountController_UpdateGamePointAmountTextToValue
                      (pGVar4,updateToValue,(MethodInfo *)0x0);
            return;
          }
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


/* Void OnHaveShownGainEffect(Int32) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnHaveShownGainEffect
               (GameMeterGamePoints *this,int32_t gamePointAmountShown,MethodInfo *method)

{
  pGVar1 = (this->fields).countController;
  (this->fields).currentGamePoints = gamePointAmountShown;
  if (pGVar1 != (GamePointGainEffectCountController *)0x0) {
    GamePointGainEffectCountController::
    GamePointGainEffectCountController_UpdateGamePointAmountTextToValue
              (pGVar1,gamePointAmountShown,(MethodInfo *)0x0);
    GameMeterGamePoints_StopAllGainEffects(this,(MethodInfo *)0x0);
    pGVar1 = (this->fields).countController;
    if (pGVar1 != (GamePointGainEffectCountController *)0x0) {
      GamePointGainEffectCountController::GamePointGainEffectCountController_HideCount
                (pGVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnInGameGainEffectShown(Int32) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnInGameGainEffectShown
               (GameMeterGamePoints *this,int32_t gamePointAmountShown,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pGVar2 = (this->fields).countController;
    (this->fields).currentGamePoints = gamePointAmountShown;
    if (pGVar2 != (GamePointGainEffectCountController *)0x0) {
      GamePointGainEffectCountController::
      GamePointGainEffectCountController_UpdateGamePointAmountTextToValue
                (pGVar2,gamePointAmountShown,(MethodInfo *)0x0);
      GameMeterGamePoints_StopAllGainEffects(this,(MethodInfo *)0x0);
      pGVar2 = (this->fields).countController;
      if (pGVar2 != (GamePointGainEffectCountController *)0x0) {
        GamePointGainEffectCountController::GamePointGainEffectCountController_HideCount
                  (pGVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnPlayerPlanetDataUpdated
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointGainEffectManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar2 = (pPVar1->fields).highScoreGamePoints;
    if ((this->fields).currentGamePoints < iVar2) {
      iVar3 = (this->fields).currentGamePoints;
      (this->fields).currentGamePoints = iVar2;
      (this->fields).gamePointsToInstantiate =
           ((this->fields).gamePointsToInstantiate - iVar3) + iVar2;
      GameMeterGamePoints_GamePointsModified(this,(MethodInfo *)0x0);
    }
    pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
    if (pAVar4 != (Action_1_Int32_ *)0x0) {
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,iVar2,(pAVar4->fields)._._.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean SetGameMeterVisibility() */

bool Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_SetGameMeterVisibility
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  bVar1 = TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField;
  bVar2 = MVClientSettings::MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
  bVar1 = (bVar2 ^ 1) & bVar1;
  this_00 = (this->fields).gamePointEffectSpawnPoint;
  if (this_00 != (Transform *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,bVar1,(MethodInfo *)0x0);
      pGVar3 = (this->fields).gamePointMeterMainObject;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,bVar1,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void SetGamePoints(Int32) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_SetGamePoints
               (GameMeterGamePoints *this,int32_t newGamePoints,MethodInfo *method)

{
  iVar1 = (this->fields).currentGamePoints;
  (this->fields).currentGamePoints = newGamePoints;
  (this->fields).gamePointsToInstantiate =
       ((this->fields).gamePointsToInstantiate - iVar1) + newGamePoints;
  GameMeterGamePoints_GamePointsModified(this,(MethodInfo *)0x0);
  return;
}


/* Void SetShowGameMeter(Boolean) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_SetShowGameMeter
               (GameMeterGamePoints *this,bool show,MethodInfo *method)

{
  this_00 = (this->fields).gamePointEffectSpawnPoint;
  if (this_00 != (Transform *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,show,(MethodInfo *)0x0);
      if ((this->fields).gamePointMeterMainObject != (GameObject *)0x0) {
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?();
        }
        (*pcRam_?)();
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartGamePointGainEffect() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_StartGamePointGainEffect
               (GameMeterGamePoints *this,MethodInfo *method)

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
      GameMeterGamePoints_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    pLVar1 = (this->fields).gamePointGainEffectPool;
    if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
      this_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
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
        if (this_00 != (RegexCharClass_SingleRange)0x0) {
          if ((this->fields).disableSpawnOffset == 0) {
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0);
            if (this_01 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (this_01,(this->fields).gainEffectSpawnOffset,(MethodInfo *)0x0);
          }
          GamePointGainEffect::GamePointGainEffect_StartEffect
                    ((GamePointGainEffect *)this_00,(this->fields).gamePointEffectTarget,-0.6,0.6,
                     -0.8,0.8,(MethodInfo *)0x0);
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_02 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_02,1,(MethodInfo *)0x0);
            pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
            if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pLVar1,(Object *)this_00,
                         MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                        );
              piVar2 = &(this->fields).gamePointsToInstantiate;
              *piVar2 = *piVar2 + -1;
              fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                (0.1,0.2,(MethodInfo *)0x0);
              (this->fields).createGamePointTime = fVar4 + fVar3;
              if ((this->fields).disableSpawnOffset != 0) {
                return;
              }
              pGVar5 = (this->fields).countController;
              if (pGVar5 != (GamePointGainEffectCountController *)0x0) {
                fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0);
                (pGVar5->fields).startSlideOutTime = fVar3 + (pGVar5->fields).slideOutDelay;
                if (((pGVar5->fields).currentSlideState == 1) ||
                   ((pGVar5->fields).currentSlideState == 3)) {
                  (pGVar5->fields).currentSlideState = 2;
                  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                    ((MethodInfo *)0x0);
                  (pGVar5->fields).slideStartTime = fVar3;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void StopAllGainEffects() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_StopAllGainEffects
               (GameMeterGamePoints *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_Update
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (0 < (this->fields).gamePointsToInstantiate) {
    fVar1 = (this->fields).createGamePointTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar1 < fVar2) {
      GameMeterGamePoints_StartGamePointGainEffect(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* GameMeterGamePoints() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints__ctor
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
    cRam_? = '\x01';
  }
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).gainEffectSpawnOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields).gainEffectSpawnOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).gainEffectSpawnOffset.z = 1.0;
  pLVar2 = (List_1_GamePointGainEffect_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  (this->fields).gamePointGainEffectPool = pLVar2;
  func_?(&(this->fields).gamePointGainEffectPool,pLVar2);
  pLVar2 = (List_1_GamePointGainEffect_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  (this->fields).gamePointGainEffectCurrentlyUsed = pLVar2;
  func_?(&(this->fields).gamePointGainEffectCurrentlyUsed,pLVar2);
  GameMeterBase::GameMeterBase__ctor((GameMeterBase *)this,(MethodInfo *)0x0);
  return;
}

