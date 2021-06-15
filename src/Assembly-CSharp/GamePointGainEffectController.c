
/* Void CreateGamePointGainEffect() */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_CreateGamePointGainEffect
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  original = (this->fields).gamePointGainEffectPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)original,
                       GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect_
                      );
  if (this_00 != (XpBoostParticlePreviewer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_02,(this->fields).gamePointEffectContainer,0,(MethodInfo *)0x0);
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this,
                   MethodInfo__GamePointGainEffectController__OnGamePointReached_int_,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                  );
        pLVar1 = (this->fields).gamePointGainEffectPool;
        if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
          Serialization::JsonProperty]::
          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                     MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                    );
          pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
          if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                                MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                               );
            this_00[1].fields.layersToRender = (int32_t)this_03;
            this_00[1].fields.previewCam = (Camera *)((int)&pLVar1->klass + (int)&pOVar2->klass);
            pLVar1 = (this->fields).gamePointGainEffectPool;
            if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)this_00,
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleAddedGamePoints(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_HandleAddedGamePoints
               (GamePointGainEffectController *this,int32_t newAddedGamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = &(this->fields).gamePointsToInstantiate;
  *piVar1 = *piVar1 + newAddedGamePoints;
  iVar2 = (this->fields).gamePointsToInstantiate;
  if (10 < iVar2) {
    (this->fields).gamePointsToInstantiate = 10;
    iVar2 = 10;
  }
  iVar3 = (this->fields).currentGamePoints + newAddedGamePoints;
  (this->fields).currentGamePoints = iVar3;
  this_00 = (this->fields).gamePointGainEffectCurrentlyUsed;
  pGVar4 = (this->fields).countController;
  if (this_00 != (List_1_GamePointGainEffect_ *)0x0) {
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                       );
    if (pGVar4 != (GamePointGainEffectCountController *)0x0) {
      (pGVar4->fields).gainEffectTotalAmount = (int)&pOVar5->klass + iVar2;
      (pGVar4->fields).endValue = iVar3;
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = &(this->fields).gamePointsToInstantiate;
  *piVar1 = *piVar1 + (newGamePointsAmount - (this->fields).currentGamePoints);
  iVar2 = (this->fields).gamePointsToInstantiate;
  if (10 < iVar2) {
    (this->fields).gamePointsToInstantiate = 10;
    iVar2 = 10;
  }
  this_00 = (this->fields).gamePointGainEffectCurrentlyUsed;
  pGVar3 = (this->fields).countController;
  (this->fields).currentGamePoints = newGamePointsAmount;
  if (this_00 != (List_1_GamePointGainEffect_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                       );
    if (pGVar3 != (GamePointGainEffectCountController *)0x0) {
      (pGVar3->fields).gainEffectTotalAmount = (int)&pOVar4->klass + iVar2;
      (pGVar3->fields).endValue = newGamePointsAmount;
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePointGainEffectController::GamePointGainEffectController_OnDestroy
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FakeGamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FakeGamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FakeGamePointGainEffectManager);
  }
  pAVar1 = TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<int>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__GamePointGainEffectController__OnFakeGainEffect_int_
             ,MethodInfo__System__Action<int>__Action_System__Object__void__);
  pAStack2 =
       (Action_1_Int32_ *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_1_Int32_ *)0x0;
  if (pAStack2 != (Action_1_Int32_ *)0x0) {
    if (pAStack2->klass == TypeInfo__System__Action<int>) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action_1_Int32_ *)0x0) {
      pAStack3 = TypeInfo__System__Action<int>;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect = pAVar1;
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GamePointGainEffectController::GamePointGainEffectController_OnDisable
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  (this->fields).gamePointsToInstantiate = 0;
  if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    while( true ) {
      if ((int)index < 0) {
        return;
      }
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (((pLVar1 == (List_1_GamePointGainEffect_ *)0x0) ||
          (this_01 = (Component_1 *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                (int32_t)index,
                                MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                               ), this_01 == (Component_1 *)0x0)) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              (this_01,(MethodInfo *)0x0), this_02 == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).gamePointGainEffectPool;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)this_01,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                );
      this_00 = (List_1_MVPlayer_ *)(this->fields).gamePointGainEffectCurrentlyUsed;
      if (this_00 == (List_1_MVPlayer_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_)
      ;
      index = index + -1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGainEffectsDone() */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_OnGainEffectsDone
               (GamePointGainEffectController *this,MethodInfo *method)

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
  iVar2 = (pPVar1->fields).highScoreGamePoints;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar3 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar3->fields).gameMode == 0) {
code_?:
    iVar2 = (this->fields).currentGamePoints;
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar4 != 0) goto code_?;
  }
  pGVar5 = (this->fields).countController;
  if (pGVar5 != (GamePointGainEffectCountController *)0x0) {
    pTVar6 = (pGVar5->fields).gamePointAmount;
    piVar7 = &(pGVar5->fields).currentGamePointAmountDisplayed;
    *piVar7 = iVar2;
    uVar8 = func_?(piVar7,0);
    if (pTVar6 != (Text *)0x0) {
      (*(code *)(pTVar6->klass->vtable).set_text.method)
                (pTVar6,uVar8,(pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnGamePointReached(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_OnGamePointReached
               (GamePointGainEffectController *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                         );
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if ((int)pOVar2 <= index) break;
      if ((pLVar1 == (List_1_GamePointGainEffect_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      if (pIVar3[6].monitor == (MonitorData *)id) {
        pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
        if (((pLVar1 == (List_1_GamePointGainEffect_ *)0x0) ||
            (this_01 = (Component_1 *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                                 ), this_01 == (Component_1 *)0x0)) ||
           (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                (this_01,(MethodInfo *)0x0), this_02 == (GameObject *)0x0))
        goto code_?;
        id = (int32_t)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,0,(MethodInfo *)0x0);
        pLVar1 = (this->fields).gamePointGainEffectPool;
        if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)this_01,
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                  );
        this_00 = (List_1_MVPlayer_ *)(this->fields).gamePointGainEffectCurrentlyUsed;
        if (this_00 == (List_1_MVPlayer_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  (this_00,index,
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
    if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                         );
      if (0 < (int)pOVar2) {
        return;
      }
      if (0 < (this->fields).gamePointsToInstantiate) {
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
      pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar5 != (PlayerPlanetData *)0x0) {
        iVar6 = (pPVar5->fields).highScoreGamePoints;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (pGVar7 != (GameSessionData *)0x0) {
          if ((pGVar7->fields).gameMode == 0) {
code_?:
            iVar6 = (this->fields).currentGamePoints;
          }
          else {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            bVar8 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                              ((MethodInfo *)0x0);
            if (bVar8 != 0) goto code_?;
          }
          pGVar4 = (this->fields).countController;
          if (pGVar4 != (GamePointGainEffectCountController *)0x0) {
            pTVar9 = (pGVar4->fields).gamePointAmount;
            piVar10 = &(pGVar4->fields).currentGamePointAmountDisplayed;
            *piVar10 = iVar6;
            uVar11 = func_?(piVar10,0);
            if (pTVar9 != (Text *)0x0) {
              (*(code *)(pTVar9->klass->vtable).set_text.method)
                        (pTVar9,uVar11,
                         (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    piVar3 = &(pGVar1->fields).currentGamePointAmountDisplayed;
    *piVar3 = gamePointAmountShown;
    uVar4 = func_?(piVar3,0);
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,uVar4,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      GamePointGainEffectController_StopAllGainEffects(this,(MethodInfo *)0x0);
      pGVar1 = (this->fields).countController;
      if (pGVar1 != (GamePointGainEffectCountController *)0x0) {
        fVar5 = (pGVar1->fields).originalXPosition;
        this_00 = (pGVar1->fields).transformToSlide;
        fVar6 = (pGVar1->fields).slideMoveAmount;
        if (this_00 != (Transform *)0x0) {
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             (&VStack_8,this_00,(MethodInfo *)0x0);
          uStack_9._0_4_ = pVVar7->x;
          uStack_9._4_4_ = pVVar7->y;
          this_01 = (pGVar1->fields).transformToSlide;
          if (this_01 != (Transform *)0x0) {
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               (&VStack_10,this_01,(MethodInfo *)0x0);
            VStack_8.x = pVVar7->x;
            VStack_8.y = pVVar7->y;
            VStack_8.z = pVVar7->z;
            VStack_10.x = 0.0;
            uStack_11 = 0;
            fStack_12 = 0.0;
            func_?(&uStack_11,fVar6 + fVar5,uStack_9._4_4_,VStack_8.z);
            if (this_00 != (Transform *)0x0) {
              value.z = fStack_12;
              value.x = (float)(undefined4)uStack_11;
              value.y = (float)uStack_11._4_4_;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (this_00,value,(MethodInfo *)0x0);
              (pGVar1->fields).currentSlideState = 1;
              (pGVar1->fields).slideStartTime = 0.0;
              (pGVar1->fields).startSlideOutTime = 0.0;
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnIngameGainEffectShown(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_OnIngameGainEffectShown
               (GamePointGainEffectController *this,int32_t gamePointAmountShown,MethodInfo *method)

{
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_02 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pGVar2 = (this->fields).countController;
    (this->fields).currentGamePoints = gamePointAmountShown;
    if (pGVar2 != (GamePointGainEffectCountController *)0x0) {
      pTVar3 = (pGVar2->fields).gamePointAmount;
      (pGVar2->fields).currentGamePointAmountDisplayed = gamePointAmountShown;
      func_?();
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3);
        GamePointGainEffectController_StopAllGainEffects(this,(MethodInfo *)0x0);
        pGVar2 = (this->fields).countController;
        if (pGVar2 != (GamePointGainEffectCountController *)0x0) {
          fStack_4 = (pGVar2->fields).originalXPosition;
          this_00 = (pGVar2->fields).transformToSlide;
          fStack_5 = (pGVar2->fields).slideMoveAmount;
          if (this_00 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                      (&VStack_6,this_00,(MethodInfo *)0x0);
            this_01 = (pGVar2->fields).transformToSlide;
            if (this_01 != (Transform *)0x0) {
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition
                                 ((Vector3 *)&stack0xffffffc4,this_01,(MethodInfo *)0x0);
              VStack_6.x = pVVar7->x;
              VStack_6.y = pVVar7->y;
              VStack_6.z = pVVar7->z;
              uStack_8 = 0;
              fStack_9 = 0.0;
              func_?();
              if (this_00 != (Transform *)0x0) {
                value.z = fStack_9;
                value.x = (float)(undefined4)uStack_8;
                value.y = (float)uStack_8._4_4_;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (this_00,value,(MethodInfo *)0x0);
                (pGVar2->fields).currentSlideState = 1;
                (pGVar2->fields).slideStartTime = 0.0;
                (pGVar2->fields).startSlideOutTime = 0.0;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_OnPlayerPlanetDataUpdated
               (GamePointGainEffectController *this,MethodInfo *method)

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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
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
    obj = (pPVar1->fields).highScoreGamePoints;
    iVar2 = (this->fields).currentGamePoints;
    if (iVar2 < (int)obj) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        iVar2 = (this->fields).currentGamePoints;
        cRam_? = '\x01';
      }
      piVar3 = &(this->fields).gamePointsToInstantiate;
      *piVar3 = *piVar3 + (obj - iVar2);
      iVar2 = (this->fields).gamePointsToInstantiate;
      if (10 < iVar2) {
        (this->fields).gamePointsToInstantiate = 10;
        iVar2 = 10;
      }
      this_00 = (this->fields).gamePointGainEffectCurrentlyUsed;
      (this->fields).currentGamePoints = obj;
      pGVar4 = (this->fields).countController;
      if (this_00 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                         );
      if (pGVar4 == (GamePointGainEffectCountController *)0x0) goto code_?;
      (pGVar4->fields).endValue = obj;
      (pGVar4->fields).gainEffectTotalAmount = (int)&pOVar5->klass + iVar2;
      (pGVar4->fields).startValue = (pGVar4->fields).currentGamePointAmountDisplayed;
      (pGVar4->fields).gainEffectAmountReached = 0;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pfVar7 = &(this->fields).createGamePointTime;
      if (*pfVar7 <= fVar6 && fVar6 != *pfVar7) {
        GamePointGainEffectController_StartGamePointGainEffect(this,(MethodInfo *)0x0);
      }
    }
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePointGainEffectManager);
    }
    this_01 = (Action_1_UIPushOption_ *)
              TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
    if (this_01 == (Action_1_UIPushOption_ *)0x0) {
code_?:
      func_?(0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_01,obj,MethodInfo__System__Action<int>__Invoke_int_);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePointGainEffectController::GamePointGainEffectController_Start
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings::MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    this_00 = (this->fields).gamePointEffectContainer;
    if (this_00 == (Transform *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
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
    (this->fields).currentGamePoints = (pPVar3->fields).highScoreGamePoints;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar5,(Object *)this,
             MethodInfo__GamePointGainEffectController__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar6 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
  pAVar4 = (Action *)0x0;
  if (pAVar6 == (Action *)0x0) {
code_?:
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
    if ((((uint)(TypeInfo__FakeGamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__FakeGamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar7 = TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__GamePointGainEffectController__OnFakeGainEffect_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar8 = (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar7,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pAVar7 = (Action_1_Int32_ *)0x0;
    if (pAVar8 != (Action_1_Int32_ *)0x0) {
      if (pAVar8->klass == TypeInfo__System__Action<int>) {
        pAVar7 = pAVar8;
      }
      if (pAVar7 == (Action_1_Int32_ *)0x0) goto code_?;
    }
    TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect = pAVar7;
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar7 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__GamePointGainEffectController__OnHaveShownGainEffect_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar8 = (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar7,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pAVar7 = (Action_1_Int32_ *)0x0;
    if (pAVar8 != (Action_1_Int32_ *)0x0) {
      if (pAVar8->klass == TypeInfo__System__Action<int>) {
        pAVar7 = pAVar8;
      }
      if (pAVar7 == (Action_1_Int32_ *)0x0) goto code_?;
    }
    TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar7;
    pAVar7 = TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__GamePointGainEffectController__OnIngameGainEffectShown_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar8 = (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar7,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pAVar7 = (Action_1_Int32_ *)0x0;
    if (pAVar8 == (Action_1_Int32_ *)0x0) {
code_?:
      iVar9 = 5;
      TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown = pAVar7;
      do {
        GamePointGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      return;
    }
    if (pAVar8->klass == TypeInfo__System__Action<int>) {
      pAVar7 = pAVar8;
    }
    if (pAVar7 != (Action_1_Int32_ *)0x0) goto code_?;
  }
  else {
    if (pAVar6->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar6;
    }
    if (pAVar4 != (Action *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePointGainEffectPool;
  if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                       );
    if (pOVar2 == (Object *)0x0) {
      GamePointGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    pLVar1 = (this->fields).gamePointGainEffectPool;
    if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                         );
      this_01 = (Component_1 *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                           (int32_t)((int)&pOVar2[-1].monitor + 3),
                           MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                          );
      this_00 = (List_1_MVPlayer_ *)(this->fields).gamePointGainEffectPool;
      if (this_00 != (List_1_MVPlayer_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                           );
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  (this_00,(int32_t)((int)&pOVar2[-1].monitor + 3),
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                  );
        if (this_01 != (Component_1 *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              (this_01,(MethodInfo *)0x0);
          if (this_02 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (this_02,(this->fields).gainEffectSpawnOffset,(MethodInfo *)0x0);
            pMVar3 = this_01[1].monitor;
            pvVar4 = this_01[1].fields._.m_CachedPtr;
            this_01[3].fields._.m_CachedPtr = (this->fields).gamePointEffectTargetTransform;
            this_01[2].klass = (Component_1__Class *)0x0;
            pMVar3 = (MonitorData *)
                     UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                               ((float)pvVar4,(float)pMVar3,(MethodInfo *)0x0);
            this_01[2].monitor = pMVar3;
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                              (-0.6,0.6,(MethodInfo *)0x0);
            if (0.0 < fVar5) {
              pvVar4 = (void *)(fVar5 + _UNK_?);
            }
            else {
              pvVar4 = (void *)(fVar5 - _UNK_?);
            }
            this_01[2].fields._.m_CachedPtr = pvVar4;
            pCVar6 = (Component_1__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                (-0.8,0.8,(MethodInfo *)0x0);
            this_01[3].klass = pCVar6;
            this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                (this_01,(MethodInfo *)0x0);
            if (this_03 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_03,1,(MethodInfo *)0x0);
              pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
              if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)this_01,
                           MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                          );
                piVar7 = &(this->fields).gamePointsToInstantiate;
                *piVar7 = *piVar7 + -1;
                fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0);
                fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                   (0.1,0.2,(MethodInfo *)0x0);
                (this->fields).createGamePointTime = fVar8 + fVar5;
                pGVar9 = (this->fields).countController;
                if (pGVar9 != (GamePointGainEffectCountController *)0x0) {
                  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                    ((MethodInfo *)0x0);
                  iVar10 = (pGVar9->fields).currentSlideState;
                  (pGVar9->fields).startSlideOutTime = (pGVar9->fields).slideOutDelay + fVar5;
                  if ((iVar10 == 1) || (iVar10 == 3)) {
                    (pGVar9->fields).currentSlideState = 2;
                    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                      ((MethodInfo *)0x0);
                    (pGVar9->fields).slideStartTime = fVar5;
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void StopAllGainEffects() */

void Assembly-CSharp.dll::GamePointGainEffectController::
     GamePointGainEffectController_StopAllGainEffects
               (GamePointGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  (this->fields).gamePointsToInstantiate = 0;
  if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    while( true ) {
      if ((int)index < 0) {
        return;
      }
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (((pLVar1 == (List_1_GamePointGainEffect_ *)0x0) ||
          (this_01 = (Component_1 *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                (int32_t)index,
                                MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                               ), this_01 == (Component_1 *)0x0)) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              (this_01,(MethodInfo *)0x0), this_02 == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).gamePointGainEffectPool;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)this_01,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                );
      this_00 = (List_1_MVPlayer_ *)(this->fields).gamePointGainEffectCurrentlyUsed;
      if (this_00 == (List_1_MVPlayer_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_)
      ;
      index = index + -1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0xc37a0000,0x3f800000,0);
  (this->fields).gainEffectSpawnOffset.x = (float)(undefined4)uStack_2;
  (this->fields).gainEffectSpawnOffset.y = (float)uStack_2._4_4_;
  (this->fields).gainEffectSpawnOffset.z = fStack_1;
  pLVar3 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar3,MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  (this->fields).gamePointGainEffectPool = (List_1_GamePointGainEffect_ *)pLVar3;
  pLVar3 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar3,MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  (this->fields).gamePointGainEffectCurrentlyUsed = (List_1_GamePointGainEffect_ *)pLVar3;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

