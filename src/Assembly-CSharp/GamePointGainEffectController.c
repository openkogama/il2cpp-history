
/* Void CreateGamePointGainEffect() */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_CreateGamePointGainEffect
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GamePointGainEffectController__OnGamePointReached_int_);
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
  original = (this->fields).gamePointGainEffectPrefab;
  parent = (this->fields).gamePointEffectContainer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)original,parent,0,
                       GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect__UnityEngine__Transform__bool_
                      );
  if (this_00 != (Component *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      this_02 = (Component__Class *)func_?();
      if (this_02 != (Component__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  ((UnityAction_1_System_Int32Enum_ *)this_02,(Object *)this,
                   MethodInfo__GamePointGainEffectController__OnGamePointReached_int_,
                   (MethodInfo *)0x0);
        if ((this->fields).gamePointGainEffectPool != (List_1_GamePointGainEffect_ *)0x0) {
          pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
          if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
            iVar2 = (pLVar1->fields)._size;
            this_00[4].klass = this_02;
            puVar3 = &UNK_?;
            func_?(this_00 + 4);
            this_00[4].monitor = (MonitorData *)(puVar3 + iVar2);
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
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleAddedGamePoints(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_HandleAddedGamePoints
               (GamePointGainEffectController *this,int32_t newAddedGamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                   );
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).gamePointsToInstantiate + newAddedGamePoints;
  if (10 < iVar1) {
    iVar1 = 10;
  }
  (this->fields).gamePointsToInstantiate = iVar1;
  iVar2 = (this->fields).currentGamePoints + newAddedGamePoints;
  pLVar3 = (this->fields).gamePointGainEffectCurrentlyUsed;
  (this->fields).currentGamePoints = iVar2;
  if (pLVar3 != (List_1_GamePointGainEffect_ *)0x0) {
    pGVar4 = (this->fields).countController;
    iVar5 = (pLVar3->fields)._size;
    if (pGVar4 != (GamePointGainEffectCountController *)0x0) {
      (pGVar4->fields).endValue = iVar2;
      (pGVar4->fields).gainEffectTotalAmount = iVar5 + iVar1;
      (pGVar4->fields).startValue = (pGVar4->fields).currentGamePointAmountDisplayed;
      (pGVar4->fields).gainEffectAmountReached = 0;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pfVar7 = &(this->fields).createGamePointTime;
      if (*pfVar7 <= fVar6 && fVar6 != *pfVar7) {
        GamePointGainEffectController_StartGamePointGainEffect(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleNewGamePointAmount(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_HandleNewGamePointAmount
               (GamePointGainEffectController *this,int32_t newGamePointsAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                   );
    cRam_? = '\x01';
  }
  iVar1 = ((this->fields).gamePointsToInstantiate - (this->fields).currentGamePoints) +
          newGamePointsAmount;
  if (10 < iVar1) {
    iVar1 = 10;
  }
  (this->fields).gamePointsToInstantiate = iVar1;
  (this->fields).currentGamePoints = newGamePointsAmount;
  pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed;
  if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
    pGVar3 = (this->fields).countController;
    iVar4 = (pLVar2->fields)._size;
    if (pGVar3 != (GamePointGainEffectCountController *)0x0) {
      (pGVar3->fields).endValue = newGamePointsAmount;
      (pGVar3->fields).gainEffectTotalAmount = iVar4 + iVar1;
      (pGVar3->fields).startValue = (pGVar3->fields).currentGamePointAmountDisplayed;
      (pGVar3->fields).gainEffectAmountReached = 0;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pfVar6 = &(this->fields).createGamePointTime;
      if (*pfVar6 <= fVar5 && fVar5 != *pfVar6) {
        GamePointGainEffectController_StartGamePointGainEffect(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePointGainEffectController::GamePointGainEffectController_OnDestroy
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__FakeGamePointGainEffectManager);
    func_?(&MethodInfo__GamePointGainEffectController__OnFakeGainEffect_int_);
    cRam_? = '\x01';
  }
  source = (Action_1_Int32___Class *)
           TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
  this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
  if (this_00 == (UnityAction_1_System_Int32Enum_ *)0x0) {
    func_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__GamePointGainEffectController__OnFakeGainEffect_int_,(MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
    source = TypeInfo__System__Action<int>;
    if (pDVar1 == (Delegate *)0x0) {
      TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect =
           (Action_1_Int32_ *)0x0;
      pAStack2 = (Action_1_Int32___Class *)0x0;
code_?:
      func_?();
      return;
    }
    pAStack2 = TypeInfo__System__Action<int>;
    pAVar3 = (Action_1_Int32_ *)func_?();
    if (pAVar3 != (Action_1_Int32_ *)0x0) {
      TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect = pAVar3;
      source = TypeInfo__System__Action<int>;
      pAStack2 = TypeInfo__System__Action<int>;
      pAStack2 = (Action_1_Int32___Class *)func_?();
      if (pAStack2 != (Action_1_Int32___Class *)0x0) goto code_?;
    }
  }
  pAStack2 = source;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GamePointGainEffectController::GamePointGainEffectController_OnDisable
               (GamePointGainEffectController *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_OnGainEffectsDone
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
  iVar2 = (pPVar1->fields).highScoreGamePoints;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar3 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar3->fields).gameMode == 0) {
code_?:
    iVar2 = (this->fields).currentGamePoints;
  }
  else {
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar4 != 0) goto code_?;
  }
  pGVar5 = (this->fields).countController;
  if (pGVar5 != (GamePointGainEffectCountController *)0x0) {
    pTVar6 = (pGVar5->fields).gamePointAmount;
    (pGVar5->fields).currentGamePointAmountDisplayed = iVar2;
    pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(pGVar5->fields).currentGamePointAmountDisplayed,(MethodInfo *)0x0
                       );
    if (pTVar6 != (Text *)0x0) {
      (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6,pSVar7);
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnGamePointReached(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_OnGamePointReached
               (GamePointGainEffectController *this,int32_t id,MethodInfo *method)

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
      if (*(int *)((int)RVar3 + 0x34) == id) {
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
        iVar6 = (pPVar5->fields).highScoreGamePoints;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar7 != (GameSessionData *)0x0) {
          if (((pGVar7->fields).gameMode == 0) ||
             (bVar8 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                ((MethodInfo *)0x0), bVar8 != 0)) {
            iVar6 = (this->fields).currentGamePoints;
          }
          pGVar4 = (this->fields).countController;
          if (pGVar4 != (GamePointGainEffectCountController *)0x0) {
            pTVar9 = (pGVar4->fields).gamePointAmount;
            (pGVar4->fields).currentGamePointAmountDisplayed = iVar6;
            pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&(pGVar4->fields).currentGamePointAmountDisplayed,
                                 (MethodInfo *)0x0);
            if (pTVar9 != (Text *)0x0) {
              (*(pTVar9->klass->vtable).set_text.methodPtr)
                        (pTVar9,pSVar10,(pTVar9->klass->vtable).set_text.method);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnHaveShownGainEffect(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_OnHaveShownGainEffect
               (GamePointGainEffectController *this,int32_t gamePointAmountShown,MethodInfo *method)

{
  pGVar1 = (this->fields).countController;
  (this->fields).currentGamePoints = gamePointAmountShown;
  if (pGVar1 != (GamePointGainEffectCountController *)0x0) {
    pTVar2 = (pGVar1->fields).gamePointAmount;
    (pGVar1->fields).currentGamePointAmountDisplayed = gamePointAmountShown;
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(pGVar1->fields).currentGamePointAmountDisplayed,(MethodInfo *)0x0
                       );
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pSVar3,(pTVar2->klass->vtable).set_text.method);
      GamePointGainEffectController_StopAllGainEffects(this,(MethodInfo *)0x0);
      pGVar1 = (this->fields).countController;
      if ((pGVar1 != (GamePointGainEffectCountController *)0x0) &&
         (pTVar4 = (pGVar1->fields).transformToSlide, pTVar4 != (Transform *)0x0)) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           (&VStack_6,pTVar4,(MethodInfo *)0x0);
        pTVar4 = (pGVar1->fields).transformToSlide;
        uVar7 = pVVar5->y;
        fVar8 = (pGVar1->fields).originalXPosition + (pGVar1->fields).slideMoveAmount;
        _fStack_10 = CONCAT44(uVar7,fVar8);
        if (pTVar4 != (Transform *)0x0) {
          value.y = (float)uVar7;
          value.x = fVar8;
          value.z = pVVar5->z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar4,value,(MethodInfo *)0x0);
          (pGVar1->fields).currentSlideState = 1;
          (pGVar1->fields).slideStartTime = 0.0;
          (pGVar1->fields).startSlideOutTime = 0.0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnInGameGainEffectShown(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_OnInGameGainEffectShown
               (GamePointGainEffectController *this,int32_t gamePointAmountShown,MethodInfo *method)

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
      pTVar3 = (pGVar2->fields).gamePointAmount;
      (pGVar2->fields).currentGamePointAmountDisplayed = gamePointAmountShown;
      mscorlib.dll::System::Int32::Int32_ToString
                ((Int32 *)&(pGVar2->fields).currentGamePointAmountDisplayed,(MethodInfo *)0x0);
      if (pTVar3 != (Text *)0x0) {
        (*(pTVar3->klass->vtable).set_text.methodPtr)();
        GamePointGainEffectController_StopAllGainEffects(this,(MethodInfo *)0x0);
        pGVar2 = (this->fields).countController;
        if ((pGVar2 != (GamePointGainEffectCountController *)0x0) &&
           (pTVar4 = (pGVar2->fields).transformToSlide, pTVar4 != (Transform *)0x0)) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffe4,pTVar4,(MethodInfo *)0x0);
          pTVar4 = (pGVar2->fields).transformToSlide;
          uVar6 = pVVar5->y;
          if (pTVar4 != (Transform *)0x0) {
            value.y = (float)uVar6;
            value.x = (pGVar2->fields).originalXPosition + (pGVar2->fields).slideMoveAmount;
            value.z = pVVar5->z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar4,value,(MethodInfo *)0x0);
            (pGVar2->fields).currentSlideState = 1;
            (pGVar2->fields).slideStartTime = 0.0;
            (pGVar2->fields).startSlideOutTime = 0.0;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_OnPlayerPlanetDataUpdated
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointGainEffectManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    iVar2 = (pPVar1->fields).highScoreGamePoints;
    if ((this->fields).currentGamePoints < iVar2) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                       );
        cRam_? = '\x01';
      }
      iVar3 = ((this->fields).gamePointsToInstantiate - (this->fields).currentGamePoints) + iVar2;
      if (10 < iVar3) {
        iVar3 = 10;
      }
      (this->fields).gamePointsToInstantiate = iVar3;
      (this->fields).currentGamePoints = iVar2;
      pLVar4 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (pLVar4 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      pGVar5 = (this->fields).countController;
      iVar6 = (pLVar4->fields)._size;
      if (pGVar5 == (GamePointGainEffectCountController *)0x0) goto code_?;
      (pGVar5->fields).endValue = iVar2;
      (pGVar5->fields).gainEffectTotalAmount = iVar6 + iVar3;
      (pGVar5->fields).startValue = (pGVar5->fields).currentGamePointAmountDisplayed;
      (pGVar5->fields).gainEffectAmountReached = 0;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pfVar8 = &(this->fields).createGamePointTime;
      if (*pfVar8 <= fVar7 && fVar7 != *pfVar8) {
        GamePointGainEffectController_StartGamePointGainEffect(this,(MethodInfo *)0x0);
      }
    }
    pAVar9 = TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
    if (pAVar9 == (Action_1_Int32_ *)0x0) {
code_?:
      func_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (*(pAVar9->fields)._._.invoke_impl)
              ((pAVar9->fields)._._.method_code,iVar2,(pAVar9->fields)._._.method);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePointGainEffectController::GamePointGainEffectController_Start
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__FakeGamePointGainEffectManager);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePointGainEffectController__OnFakeGainEffect_int_);
    func_?(&MethodInfo__GamePointGainEffectController__OnHaveShownGainEffect_int_);
    func_?(&MethodInfo__GamePointGainEffectController__OnInGameGainEffectShown_int_);
    func_?(&MethodInfo__GamePointGainEffectController__OnPlayerPlanetDataUpdated__);
    func_?(&TypeInfo__GamePointGainEffectManager);
    cRam_? = '\x01';
  }
  bVar1 = MVClientSettings::MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
      (this->fields).currentGamePoints = (pPVar2->fields).highScoreGamePoints;
    }
    pAVar3 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__GamePointGainEffectController__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar3 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pAVar4 = TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
      pUVar5 = (UnityAction_1_System_Int32Enum_ *)func_?();
      if (pUVar5 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__GamePointGainEffectController__OnFakeGainEffect_int_,(MethodInfo *)0x0)
      ;
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      if (pDVar6 != (Delegate *)0x0) {
        pAVar4 = (Action_1_Int32_ *)func_?();
        if (pAVar4 != (Action_1_Int32_ *)0x0) {
          TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect =
               pAVar4;
          iVar7 = func_?();
          if (iVar7 != 0) goto code_?;
        }
        goto code_?;
      }
      TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect =
           (Action_1_Int32_ *)0x0;
code_?:
      func_?();
      pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
      pUVar5 = (UnityAction_1_System_Int32Enum_ *)func_?();
      if (pUVar5 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__GamePointGainEffectController__OnHaveShownGainEffect_int_,
                 (MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
             (Action_1_Int32_ *)0x0;
code_?:
        func_?();
        pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
        pUVar5 = (UnityAction_1_System_Int32Enum_ *)func_?();
        if (pUVar5 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar5,(Object *)this,
                   MethodInfo__GamePointGainEffectController__OnInGameGainEffectShown_int_,
                   (MethodInfo *)0x0);
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
        if (pDVar6 == (Delegate *)0x0) {
          TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown =
               (Action_1_Int32_ *)0x0;
code_?:
          func_?();
          iVar7 = 5;
          do {
            GamePointGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return;
        }
        pAVar4 = (Action_1_Int32_ *)func_?();
        if (pAVar4 != (Action_1_Int32_ *)0x0) {
          TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown = pAVar4
          ;
          iVar7 = func_?();
          if (iVar7 != 0) goto code_?;
        }
      }
      else {
        pAVar4 = (Action_1_Int32_ *)func_?();
        if (pAVar4 != (Action_1_Int32_ *)0x0) {
          TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar4;
          iVar7 = func_?();
          if (iVar7 != 0) goto code_?;
        }
      }
      goto code_?;
    }
    pAVar8 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar3;
    }
    if (pAVar8 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar8;
    pAVar8 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar3;
    }
    if (pAVar8 != (Action *)0x0) goto code_?;
  }
  else {
    pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar9 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,0,(MethodInfo *)0x0);
      this_00 = (this->fields).gamePointEffectContainer;
      if (this_00 != (Transform *)0x0) {
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pGVar9 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar9,0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
code_?:
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void StartGamePointGainEffect() */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_StartGamePointGainEffect
               (GamePointGainEffectController *this,MethodInfo *method)

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
      GamePointGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
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
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_00,(MethodInfo *)0x0);
            if (pTVar2 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar2,(this->fields).gainEffectSpawnOffset,(MethodInfo *)0x0);
          }
          pTVar2 = (this->fields).gamePointEffectTargetTransform;
          *(Transform **)((int)this_00 + 0x2c) = pTVar2;
          func_?((int)this_00 + 0x2c,pTVar2);
          *(undefined4 *)((int)this_00 + 0x18) = 0;
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                            (*(float *)((int)this_00 + 0x14),*(float *)((int)this_00 + 0x10),
                             (MethodInfo *)0x0);
          *(float *)((int)this_00 + 0x1c) = fVar3;
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                            (-0.6,0.6,(MethodInfo *)0x0);
          *(float *)((int)this_00 + 0x20) = fVar3;
          if (0.0 < fVar3) {
            fVar3 = fVar3 + _UNK_?;
          }
          else {
            fVar3 = fVar3 - _UNK_?;
          }
          *(float *)((int)this_00 + 0x20) = fVar3;
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                            (-0.8,0.8,(MethodInfo *)0x0);
          *(float *)((int)this_00 + 0x24) = fVar3;
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_01 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
            pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
            if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pLVar1,(Object *)this_00,
                         MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                        );
              piVar4 = &(this->fields).gamePointsToInstantiate;
              *piVar4 = *piVar4 + -1;
              fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                (0.1,0.2,(MethodInfo *)0x0);
              (this->fields).createGamePointTime = fVar5 + fVar3;
              if ((this->fields).disableSpawnOffset == 0) {
                pGVar6 = (this->fields).countController;
                if (pGVar6 == (GamePointGainEffectCountController *)0x0) goto code_?;
                fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0);
                (pGVar6->fields).startSlideOutTime = fVar3 + (pGVar6->fields).slideOutDelay;
                if (((pGVar6->fields).currentSlideState == 1) ||
                   ((pGVar6->fields).currentSlideState == 3)) {
                  (pGVar6->fields).currentSlideState = 2;
                  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                    ((MethodInfo *)0x0);
                  (pGVar6->fields).slideStartTime = fVar3;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StopAllGainEffects() */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_StopAllGainEffects
               (GamePointGainEffectController *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GamePointGainEffectController::GamePointGainEffectController_Update
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (0 < (this->fields).gamePointsToInstantiate) {
    fVar1 = (this->fields).createGamePointTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar1 < fVar2) {
      GamePointGainEffectController_StartGamePointGainEffect(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* GamePointGainEffectController() */

void Assembly-CSharp.dll::GamePointGainEffectController::GamePointGainEffectController__ctor
               (GamePointGainEffectController *this,MethodInfo *method)

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
  if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
    (this->fields).gamePointGainEffectPool = pLVar2;
    func_?(&(this->fields).gamePointGainEffectPool,pLVar2);
    pLVar2 = (List_1_GamePointGainEffect_ *)
             func_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
    if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar2,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
      (this->fields).gamePointGainEffectCurrentlyUsed = pLVar2;
      func_?(&(this->fields).gamePointGainEffectCurrentlyUsed,pLVar2);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

