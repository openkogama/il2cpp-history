
/* Void CreateGamePointGainEffect() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_CreateGamePointGainEffect
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gamePointGainEffectPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GamePointGainEffect *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pGVar1,
                      GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect_
                     );
  if (pGVar1 != (GamePointGainEffect *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pGVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pGVar1,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,(this->fields).gamePointEffectContainer,0,(MethodInfo *)0x0);
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this,
                   MethodInfo__GameTierProgressBarGainEffectController__OnGamePointReached_int_,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                  );
        pLVar2 = (this->fields).gamePointGainEffectPool;
        if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                              MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                             );
          pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed;
          if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
            pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                                MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                               );
            GamePointGainEffect::GamePointGainEffect_Initialize
                      (pGVar1,(UnityAction_1_System_Int32_ *)this_02,
                       (int)&pOVar3->klass + (int)&pOVar4->klass,(MethodInfo *)0x0);
            pLVar2 = (this->fields).gamePointGainEffectPool;
            if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)pLVar2,(UIPushOption__Enum)pGVar1,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).tierProgressBar;
  if (pGVar1 != (GameTierProgressBar *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    f = (pGVar1->fields).previousProgressValue;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(f,(MethodInfo *)0x0);
    pLVar3 = (this->fields).targetDataList;
    if (pLVar3 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                          MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                        ((byte)((char)iVar2 + 1) - 1,0,(int32_t)((int)&pOVar4[-1].monitor + 3),
                         (MethodInfo *)0x0);
      pLVar3 = (this->fields).targetDataList;
      if (pLVar3 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
        pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,iVar2,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                           );
        if (pIVar5 != (IEventSystemHandler *)0x0) {
          return (Transform *)pIVar5[1].klass;
        }
      }
    }
  }
  func_?(0);
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
  piVar1 = &(this->fields).gamePointsToInstantiate;
  *piVar1 = *piVar1 + (newGamePointsAmount - (this->fields).currentGamePoints);
  if (10 < (this->fields).gamePointsToInstantiate) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).targetDataList;
  if (pLVar1 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        return;
      }
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pLVar1 = (this->fields).targetDataList;
      if (((pLVar1 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) ||
          (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                               MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                              ), pIVar4 == (IEventSystemHandler *)0x0)) ||
         (this_00 = (this->fields).onHitScaleEffect, this_00 == (AnimationCurve *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                (this_00,fVar3 - (float)pIVar4[1].monitor,(MethodInfo *)0x0);
      pLVar1 = (this->fields).targetDataList;
      if ((pLVar1 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) ||
         (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                             ), pIVar4 == (IEventSystemHandler *)0x0)) break;
      this_01 = pIVar4[1].klass;
      uVar5 = 0;
      fVar3 = 0.0;
      func_?();
      if (this_01 == (IEventSystemHandler__Class *)0x0) break;
      value.z = fVar3;
      value.x = (float)(int)uVar5;
      value.y = (float)(int)((ulonglong)uVar5 >> 0x20);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                ((Transform *)this_01,value,(MethodInfo *)0x0);
      pLVar1 = (this->fields).targetDataList;
      index = index + 1;
      if (pLVar1 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_Initialize
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized != 0) {
    return;
  }
  (this->fields).isInitialized = 1;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
    (this->fields).currentGamePoints = (pPVar2->fields).progressionGamePoints;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar3 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this,
             MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar5 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
  pAVar3 = (Action *)0x0;
  if (pAVar5 == (Action *)0x0) {
code_?:
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar6 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar7 = (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pAVar6 = (Action_1_Int32_ *)0x0;
    if (pAVar7 != (Action_1_Int32_ *)0x0) {
      if (pAVar7->klass == TypeInfo__System__Action<int>) {
        pAVar6 = pAVar7;
      }
      if (pAVar6 == (Action_1_Int32_ *)0x0) goto code_?;
    }
    TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar6;
    pAVar6 = TypeInfo__GamePointGainEffectManager->static_fields->
             OnTierProgressBarGamePointGainEffectShown;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
               ,MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar7 = (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pAVar6 = (Action_1_Int32_ *)0x0;
    if (pAVar7 == (Action_1_Int32_ *)0x0) {
code_?:
      iVar8 = 5;
      TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
           = pAVar6;
      do {
        GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return;
    }
    if (pAVar7->klass == TypeInfo__System__Action<int>) {
      pAVar6 = pAVar7;
    }
    if (pAVar6 != (Action_1_Int32_ *)0x0) goto code_?;
  }
  else {
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar5;
    }
    if (pAVar3 != (Action *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnDestroy
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

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
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) goto code_?;
  }
  TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_,
             MethodInfo__System__Action<int>__Action_System__Object__void__);
  pAVar5 = (Action_1_Int32_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar4 = (Action_1_Int32_ *)0x0;
  if (pAVar5 != (Action_1_Int32_ *)0x0) {
    if (pAVar5->klass == TypeInfo__System__Action<int>) {
      pAVar4 = pAVar5;
    }
    if (pAVar4 == (Action_1_Int32_ *)0x0) goto code_?;
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar4;
  pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->
           OnTierProgressBarGamePointGainEffectShown;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
             ,MethodInfo__System__Action<int>__Action_System__Object__void__);
  pAVar5 = (Action_1_Int32_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar4 = (Action_1_Int32_ *)0x0;
  if (pAVar5 != (Action_1_Int32_ *)0x0) {
    if (pAVar5->klass == TypeInfo__System__Action<int>) {
      pAVar4 = pAVar5;
    }
    if (pAVar4 == (Action_1_Int32_ *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
       pAVar4;
  return;
}


/* Void OnGamePointReached(Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnGamePointReached
               (GameTierProgressBarGainEffectController *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  while (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
    if ((pLVar1 == (List_1_GamePointGainEffect_ *)0x0) ||
       (this_02 = (GamePointGainEffect *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                            ), this_02 == (GamePointGainEffect *)0x0)) break;
    iVar3 = GamePointGainEffect::GamePointGainEffect_get_ID(this_02,(MethodInfo *)0x0);
    if (iVar3 == id) {
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
      id = (int32_t)
           MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_;
      this_03 = (Component_1 *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                          );
      if ((this_03 == (Component_1 *)0x0) ||
         (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              (this_03,(MethodInfo *)0x0), this_04 == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_04,0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).gamePointGainEffectPool;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)this_03,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                );
      this_00 = (List_1_MVPlayer_ *)(this->fields).gamePointGainEffectCurrentlyUsed;
      if (this_00 == (List_1_MVPlayer_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,index,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_)
      ;
      this_01 = (this->fields).tierProgressBar;
      if (this_01 == (GameTierProgressBar *)0x0) break;
      GVar4 = GameTierProgressBar::GameTierProgressBar_GetCurrentTier(this_01,(MethodInfo *)0x0);
      pLVar5 = (this->fields).targetDataList;
      if (pLVar5 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) break;
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                          MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                        ((GVar4 & 0xff) - GamePassTier__Enum_Tier1,0,
                         (int32_t)((int)&pOVar2[-1].monitor + 3),(MethodInfo *)0x0);
      pLVar5 = (this->fields).targetDataList;
      if (pLVar5 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) break;
      pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar5,iVar3,
                          MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                         );
      pMVar7 = (MonitorData *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (pIVar6 == (IEventSystemHandler *)0x0) break;
      pIVar6[1].monitor = pMVar7;
    }
    index = index + 1;
    pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed;
  (this->fields).gamePointsToInstantiate = 0;
  if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar3[-1].monitor + 3);
    while( true ) {
      if ((int)index < 0) {
        return;
      }
      pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (((pLVar2 == (List_1_GamePointGainEffect_ *)0x0) ||
          (this_01 = (Component_1 *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                (int32_t)index,
                                MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                               ), this_01 == (Component_1 *)0x0)) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              (this_01,(MethodInfo *)0x0), this_02 == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      pLVar2 = (this->fields).gamePointGainEffectPool;
      if (pLVar2 == (List_1_GamePointGainEffect_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar2,(UIPushOption__Enum)this_01,
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnHaveShownTierProgressBarGainEffect(Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnHaveShownTierProgressBarGainEffect
               (GameTierProgressBarGainEffectController *this,int32_t gamePointAmountShown,
               MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      bVar3 = cRam_? == '\0';
      (this->fields).currentGamePoints = gamePointAmountShown;
      if (bVar3) {
        func_?();
        cRam_? = '\x01';
      }
      pLVar4 = (this->fields).gamePointGainEffectCurrentlyUsed;
      (this->fields).gamePointsToInstantiate = 0;
      if (pLVar4 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                          MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                         );
      for (index = (undefined1 *)((int)&pOVar5[-1].monitor + 3); -1 < (int)index; index = index + -1
          ) {
        pLVar4 = (this->fields).gamePointGainEffectCurrentlyUsed;
        if (((pLVar4 == (List_1_GamePointGainEffect_ *)0x0) ||
            (this_01 = (Component_1 *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,
                                  (int32_t)index,
                                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                                 ), this_01 == (Component_1 *)0x0)) ||
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               (this_01,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pLVar4 = (this->fields).gamePointGainEffectPool;
        if (pLVar4 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar4,(UIPushOption__Enum)this_01,
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                  );
        this_00 = (List_1_MVPlayer_ *)(this->fields).gamePointGainEffectCurrentlyUsed;
        if (this_00 == (List_1_MVPlayer_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  (this_00,(int32_t)index,
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                  );
      }
    }
    return;
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnPlayerPlanetDataUpdated
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator !=
        (PlayerTierStateCalculator *)0x0) {
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      if (pPVar2 == (PlayerTierStateCalculator *)0x0) {
code_?:
        func_?(0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pPVar2->fields).gamePassRewardsActivated != 0) {
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__GamePassesManager);
        }
        pPVar4 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
        newGamePointsAmount = (pPVar4->fields).progressionGamePoints;
        if ((this->fields).currentGamePoints < newGamePointsAmount) {
          GameTierProgressBarGainEffectController_HandleNewGamePointAmount
                    (this,newGamePointsAmount,(MethodInfo *)0x0);
        }
      }
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
  piVar1 = &(this->fields).gamePointsToInstantiate;
  *piVar1 = *piVar1 + (newGamePointAmount - previousGamePointAmount);
  if (10 < (this->fields).gamePointsToInstantiate) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized != 0) {
    return;
  }
  (this->fields).isInitialized = 1;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
    (this->fields).currentGamePoints = (pPVar2->fields).progressionGamePoints;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar3 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this,
             MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar5 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
  pAVar3 = (Action *)0x0;
  if (pAVar5 == (Action *)0x0) {
code_?:
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar6 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar7 = (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pAVar6 = (Action_1_Int32_ *)0x0;
    if (pAVar7 != (Action_1_Int32_ *)0x0) {
      if (pAVar7->klass == TypeInfo__System__Action<int>) {
        pAVar6 = pAVar7;
      }
      if (pAVar6 == (Action_1_Int32_ *)0x0) goto code_?;
    }
    TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar6;
    pAVar6 = TypeInfo__GamePointGainEffectManager->static_fields->
             OnTierProgressBarGamePointGainEffectShown;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
               ,MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar7 = (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pAVar6 = (Action_1_Int32_ *)0x0;
    if (pAVar7 == (Action_1_Int32_ *)0x0) {
code_?:
      iVar8 = 5;
      TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
           = pAVar6;
      do {
        GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return;
    }
    if (pAVar7->klass == TypeInfo__System__Action<int>) {
      pAVar6 = pAVar7;
    }
    if (pAVar6 != (Action_1_Int32_ *)0x0) goto code_?;
  }
  else {
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar5;
    }
    if (pAVar3 != (Action *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void StartGamePointGainEffect() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_StartGamePointGainEffect
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

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
      GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    pLVar1 = (this->fields).gamePointGainEffectPool;
    if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                         );
      this_01 = (GamePointGainEffect *)
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
        if (this_01 != (GamePointGainEffect *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                             ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
          if (this_02 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (this_02,*pVVar3,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            pGVar4 = (this->fields).tierProgressBar;
            if (pGVar4 != (GameTierProgressBar *)0x0) {
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              fVar5 = (pGVar4->fields).previousProgressValue;
              if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Mathf);
              }
              iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                                (fVar5,(MethodInfo *)0x0);
              pLVar7 = (this->fields).targetDataList;
              if (pLVar7 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
                pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    pLVar7,
                                    MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                                   );
                if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Mathf);
                }
                iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                                  ((byte)((char)iVar6 + 1) - 1,0,
                                   (int32_t)((int)&pOVar2[-1].monitor + 3),(MethodInfo *)0x0);
                pLVar7 = (this->fields).targetDataList;
                if (pLVar7 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0)
                {
                  pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           EventSystems::IEventSystemHandler]::
                           List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar7
                                      ,iVar6,
                                      MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                                     );
                  if (pIVar8 != (IEventSystemHandler *)0x0) {
                    GamePointGainEffect::GamePointGainEffect_StartEffect
                              (this_01,(Transform *)pIVar8[1].klass,
                               (this->fields).offsetDirectionXMin,(this->fields).offsetDirectionXMax
                               ,(this->fields).offsetDirectionYMin,
                               (this->fields).offsetDirectionYMax,(MethodInfo *)0x0);
                    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0);
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
                        piVar9 = &(this->fields).gamePointsToInstantiate;
                        *piVar9 = *piVar9 + -1;
                        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                           ((MethodInfo *)0x0);
                        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                           (0.1,0.2,(MethodInfo *)0x0);
                        (this->fields).createGamePointTime = fVar10 + fVar5;
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
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar3 = (this->fields).targetDataList;
  index = 0;
  if (pLVar3 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
    while( true ) {
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                          MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                         );
      if ((int)pOVar4 <= index) {
        return;
      }
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pLVar3 = (this->fields).targetDataList;
      if (((pLVar3 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) ||
          (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                              ), pIVar5 == (IEventSystemHandler *)0x0)) ||
         (this_00 = (this->fields).onHitScaleEffect, this_00 == (AnimationCurve *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                (this_00,fVar1 - (float)pIVar5[1].monitor,(MethodInfo *)0x0);
      pLVar3 = (this->fields).targetDataList;
      if ((pLVar3 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) break;
      this_01 = pIVar5[1].klass;
      uVar6 = 0;
      fVar1 = 0.0;
      func_?();
      if (this_01 == (IEventSystemHandler__Class *)0x0) break;
      value.z = fVar1;
      value.x = (float)(int)uVar6;
      value.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                ((Transform *)this_01,value,(MethodInfo *)0x0);
      pLVar3 = (this->fields).targetDataList;
      index = index + 1;
      if (pLVar3 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* GameTierProgressBarGainEffectController() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController__ctor
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>
                          );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,
             MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__List__
            );
  (this->fields).targetDataList =
       (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  (this->fields).gamePointGainEffectPool = (List_1_GamePointGainEffect_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  (this->fields).gamePointGainEffectCurrentlyUsed = (List_1_GamePointGainEffect_ *)pLVar1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

