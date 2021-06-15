
/* Void AddPlayersToScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_AddPlayersToScoreBoard
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_4 = (undefined4 *)&stack0xffffffc4;
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVAvatar *)0x0) &&
     (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
     this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pIVar5 = MVPlayerContainer::MVPlayerContainer_GetEnumerator
                       ((MVPlayerContainer *)this_01,(MethodInfo *)0x0);
    uStack_1 = 0;
    while (pIVar5 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
      cVar6 = func_?(1,TypeInfo__System__Collections__IEnumerator);
      unaff_ESI = 
      TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
      ;
      if (cVar6 == '\0') {
        *puStack_4 = 0xd9;
        uStack_1 = 0xffffffff;
        if (pIVar5 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pIVar7 = pIVar5->klass;
      uVar8 = 0;
      uVar9._0_1_ = (pIVar7->_1).rank;
      uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
             ) {
            ppMVar10 = &(&pIVar7->vtable)[pIVar7->interfaceOffsets[uVar8].offset].get_Current.
                       method;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      ppMVar10 = (MethodInfo **)
                func_?(pIVar5,
                                TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
                               );
code_?:
      (*(code *)*ppMVar10)(pIVar5);
      iVar11 = func_?(&stack0xffffffd0);
      if (iVar11 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_02 == (MVNetworkGame *)0x0) break;
        unaff_ESI = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)
                    DayNightCycle::DayNightCycle_get_CurrentStarsParam
                              ((DayNightCycle *)this_02,(MethodInfo *)0x0);
        GStack_12 = CONCAT31(GStack_12._1_3_,(this->fields)._.statType);
        this_03 = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
        if (this_03 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) break;
        pMVar13 = (MethodInfo *)&UNK_?;
        team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         (this_03,(MethodInfo *)0x0);
        pNVar14 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?();
        if ((pNVar14 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) ||
           (pSVar15 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                      NamedThemeAttribute_1_UnityEngine_Color__get_Name(pNVar14,pMVar13),
           unaff_ESI == (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)0x0)) break;
        method_01 = (MethodInfo *)&UNK_?;
        newScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                             ((GameStatCounterManager *)unaff_ESI,GStack_12,(MVTeam__Enum)team,
                              (int32_t)pSVar15,(MethodInfo *)0x0);
        oldId = &stack0xffffffd0;
        newId = &UNK_?;
        pMVar13 = MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
        ;
        this_04 = (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)func_?();
        if ((this_04 == (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0) ||
           (in_stack_16 =
                 (MethodInfo *)
                 PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                 PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                           (this_04,in_stack_16), in_stack_16 == (MethodInfo *)0x0))
        break;
        method_00 = (MethodInfo *)&UNK_?;
        MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
        SubscriptionRulesWrapper_HasBenefit
                  ((SubscriptionRulesWrapper *)in_stack_16,SubscriptionBenefit__Enum_XPBoost,
                   method_01);
        unaff_ESI = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)
                    (this->fields)._.scoreBoardPlayerData;
        if (((unaff_ESI == (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)0x0) ||
            (pOVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  unaff_ESI,
                                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                                 ),
            unaff_ESI == (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)0x0)) ||
           (pIVar7 = unaff_ESI,
           pIVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)unaff_ESI,
                                (int32_t)((int)&pOVar17[-1].monitor + 3),
                                MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                               ), pIVar18 == (IEventSystemHandler *)0x0)) break;
        bVar19 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
                          ((ScoreBoardBase *)this,newScore,(int32_t)pIVar18[3].klass,(int32_t)newId,
                           (int32_t)oldId,pMVar13);
        pMVar13 = MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
        ;
        if (bVar19 != 0) {
          puStack_4 = (undefined4 *)&stack0xffffffd0;
          this_05 = (GamePointGainEffect *)func_?();
          if ((this_05 == (GamePointGainEffect *)0x0) ||
             (iVar20 = GamePointGainEffect::GamePointGainEffect_get_ID
                                 (this_05,(MethodInfo *)pIVar7), iVar20 == 0)) break;
          unaff_ESI = *(IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class **)(iVar20 + 0xc)
          ;
          pNVar14 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?(&stack0xffffffd0);
          if (pNVar14 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) break;
          pSVar15 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name(pNVar14,method_00);
          ScoreBoardBase::ScoreBoardBase_SortNewScore
                    ((ScoreBoardBase *)this,(String *)unaff_ESI,(int32_t)pSVar15,newScore,
                     (bool)pMVar13,(MethodInfo *)0x0);
          in_stack_16 = pMVar13;
        }
      }
    }
  }
  func_?();
  func_?(unaff_ESI,0);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void HandleParticipantListChanged() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_HandleParticipantListChanged
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar2 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar2 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while (pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                               MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                              ), index < (int)pOVar3) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar4 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVAvatar *)0x0) ||
         (pMVar5 = MVAvatar::MVAvatar_get_Shield(pMVar4,(MethodInfo *)0x0),
         pMVar5 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
      iVar6 = MVPlayerContainer::MVPlayerContainer_get_Count
                        ((MVPlayerContainer *)pMVar5,(MethodInfo *)0x0);
      if (iVar6 <= index) break;
      pLVar2 = (this->fields)._.scoreBoardPlayerData;
      if (((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
          (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index
                               ,
                               MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                              ), pIVar7 == (IEventSystemHandler *)0x0)) ||
         (((Component_1 *)pIVar7[3].monitor == (Component_1 *)0x0 ||
          (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pIVar7[3].monitor,(MethodInfo *)0x0),
          this_00 == (GameObject *)0x0)))) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pLVar2 = (this->fields)._.scoreBoardPlayerData;
      index = index + 1;
      if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar4 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 != (MVAvatar *)0x0) &&
       (pMVar5 = MVAvatar::MVAvatar_get_Shield(pMVar4,(MethodInfo *)0x0),
       pMVar5 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
      iVar6 = MVPlayerContainer::MVPlayerContainer_get_Count
                        ((MVPlayerContainer *)pMVar5,(MethodInfo *)0x0);
      pLVar2 = (this->fields)._.scoreBoardPlayerData;
      if (pLVar2 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
code_?:
  pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                      MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                     );
  if ((int)pOVar3 <= iVar6) {
    return;
  }
  pLVar2 = (pSVar1->fields)._.scoreBoardPlayerData;
  if ((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
     (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar6,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), pIVar7 == (IEventSystemHandler *)0x0)) goto code_?;
  pIVar9 = pIVar7[1].klass;
  this = (ScoreBoardSingleBase *)CONCAT31(this._1_3_,(pSVar1->fields)._.statType);
  WinningConditionControl::WinningConditionControl_MakeIntoScoreText
            (0,(GameStatCounterType__Enum)this,(MethodInfo *)0x0);
  if (pIVar9 == (IEventSystemHandler__Class *)0x0) goto code_?;
  (*(code *)(pIVar9->_0).image[0x11].nameToClassHashTable)();
  pLVar2 = (pSVar1->fields)._.scoreBoardPlayerData;
  if ((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
     (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar6,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), pIVar7 == (IEventSystemHandler *)0x0)) goto code_?;
  pMVar10 = pIVar7[1].monitor;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  if (pMVar10 == (MonitorData *)0x0) goto code_?;
  func_?(0x49,pMVar10,TypeInfo__System__String->static_fields->Empty);
  pLVar2 = (pSVar1->fields)._.scoreBoardPlayerData;
  if ((((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
       (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar6,
                            MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                           ), pIVar7 == (IEventSystemHandler *)0x0)) ||
      ((Component_1 *)pIVar7[3].monitor == (Component_1 *)0x0)) ||
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pIVar7[3].monitor,(MethodInfo *)0x0),
     this_01 == (Transform *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
            (this_01,(MethodInfo *)0x0);
  pLVar2 = (pSVar1->fields)._.scoreBoardPlayerData;
  iVar6 = iVar6 + 1;
  this = (ScoreBoardSingleBase *)pIVar9;
  if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  goto code_?;
}


/* Void Initialize(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_Initialize
               (ScoreBoardSingleBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  puStack_6 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if (cRam_? == '\0') {
    puStack_6 = (undefined4 *)&stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.statType = (uint8_t)statType;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMStack_7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMStack_7 != (MVNetworkGame *)0x0) {
    pAVar8 = (pMStack_7->fields).OnWinningConditionFulfilled;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_,
               MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
    pAVar9 = (Action_1_IWinningCondition_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar8 = (Action_1_IWinningCondition_ *)0x0;
    if (pAVar9 != (Action_1_IWinningCondition_ *)0x0) {
      if (pAVar9->klass == TypeInfo__System__Action<IWinningCondition>) {
        pAVar8 = pAVar9;
      }
      if (pAVar8 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    }
    (pMStack_7->fields).OnWinningConditionFulfilled = pAVar8;
    pLVar10 = (this->fields)._.scoreBoardPlayerData;
    if (pLVar10 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
      pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                         );
      if (0 < (int)pOVar11) {
        pLVar10 = (this->fields)._.scoreBoardPlayerData;
        if (((pLVar10 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
            (pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar10,0,
                                 MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                                ), pIVar12 == (IEventSystemHandler *)0x0)) ||
           (pMVar13 = pIVar12[3].monitor, pMVar13 == (MonitorData *)0x0)) goto code_?;
        iVar14 = (**(code **)(*(int *)pMVar13 + 0x170))(&DStack_15.host_enumerator.next,pMVar13);
        (this->fields)._.backgroundAlpha = *(float *)(iVar14 + 0xc);
      }
      (*(code *)(this->klass->vtable).HandleParticipantListChanged.method)(this);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((this_01 != (MVAvatar *)0x0) &&
          (this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0),
          this_02 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
         (this_03 = MVPlayerContainer::MVPlayerContainer_get_Values
                              ((MVPlayerContainer *)this_02,unaff_EBX),
         this_03 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                  (&DStack_15,
                   (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                   this_03,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                  );
        uStack_1 = 0;
        while( true ) {
          cVar16 = func_?();
          if (cVar16 == '\0') {
            *puStack_6 = 0x61;
            uStack_1 = 0xffffffff;
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          this_04 = (MVPlayer *)func_?();
          if (this_04 == (MVPlayer *)0x0) break;
          ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
          NamedThemeAttribute_1_UnityEngine_Color__get_Name
                    ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_04,(MethodInfo *)0x0);
          MVPlayer::MVPlayer_GetGameStat(this_04,statType,(MethodInfo *)0x0);
          (*(code *)(this->klass->vtable).OnStatsChange.method)();
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pAVar9 = extraout_ECX;
code_?:
  func_?(pAVar9);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_OnEnable
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  ScoreBoardBase::ScoreBoardBase_ResetScoreBoard((ScoreBoardBase *)this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).HandleParticipantListChanged.method)(this,this->klass[1]._0.image)
  ;
  ScoreBoardSingleBase_AddPlayersToScoreBoard(this,(MethodInfo *)0x0);
  return;
}


/* Void OnPlayerListChanged() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_OnPlayerListChanged
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).HandleParticipantListChanged.method)(this,this->klass[1]._0.image)
  ;
  ScoreBoardSingleBase_AddPlayersToScoreBoard(this,(MethodInfo *)0x0);
  return;
}


/* Void OnStatsChange(Int32, Int32) */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_OnStatsChange
               (ScoreBoardSingleBase *this,int32_t actorNumber,int32_t scoreCount,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 != (MVAvatar *)0x0) &&
     (this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0),
     this_02 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    this_04 = (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0;
    player = (MVPlayer **)&stack0xfffffff8;
    bVar1 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      ((MVPlayerContainer *)this_02,actorNumber,player,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (((this_04 != (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0) &&
        (this_03 = (SubscriptionRulesWrapper *)
                   PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                   PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                             (this_04,(MethodInfo *)0x0), this_03 != (SubscriptionRulesWrapper *)0x0
        )) && (bVar1 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                       SubscriptionRulesWrapper_HasBenefit
                                 (this_03,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0),
              this_00 = pLRam00000011,
              pLRam00000011 != (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0)) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLRam00000011,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                         );
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         (this_00,(int32_t)((int)&pOVar2[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         );
      if (pIVar3 != (IEventSystemHandler *)0x0) {
        bVar4 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                          ((int32_t)this_00,(int32_t)pIVar3[3].klass,
                           CONCAT31((int3)((uint)player >> 8),uRam_?),(MethodInfo *)0x0);
        if (bVar4 != 0) {
          if ((this_04 == (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0) ||
             (iVar5 = GamePointGainEffect::GamePointGainEffect_get_ID
                                ((GamePointGainEffect *)this_04,(MethodInfo *)0x0), iVar5 == 0))
          goto code_?;
          ScoreBoardBase::ScoreBoardBase_SortNewScore
                    ((ScoreBoardBase *)0x1,*(String **)(iVar5 + 0xc),0xADDR,(int32_t)this_00,
                     bVar1,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ReSortScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_ReSortScoreBoard
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  ScoreBoardBase::ScoreBoardBase_ResetScoreBoard((ScoreBoardBase *)this,(MethodInfo *)0x0);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_2 = (undefined4 *)&stack0xffffffcc;
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVAvatar *)0x0) &&
     (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
     this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pIVar3 = MVPlayerContainer::MVPlayerContainer_GetEnumerator
                       ((MVPlayerContainer *)this_01,(MethodInfo *)0x0);
    while (pIVar3 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
      cVar4 = func_?(1,TypeInfo__System__Collections__IEnumerator);
      unaff_ESI = 
      TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
      ;
      if (cVar4 == '\0') {
        *puStack_2 = 0xd9;
        if (pIVar3 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      pIVar5 = pIVar3->klass;
      uVar6 = 0;
      uVar7._0_1_ = (pIVar5->_1).rank;
      uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
             ) {
            ppMVar8 = &(&pIVar5->vtable)[pIVar5->interfaceOffsets[uVar6].offset].get_Current.
                       method;
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      ppMVar8 = (MethodInfo **)
                func_?(pIVar3,
                                TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
                               );
code_?:
      (*(code *)*ppMVar8)(pIVar3);
      iVar9 = func_?(&stack0xffffffd8);
      if (iVar9 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_02 == (MVNetworkGame *)0x0) break;
        unaff_ESI = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)
                    DayNightCycle::DayNightCycle_get_CurrentStarsParam
                              ((DayNightCycle *)this_02,(MethodInfo *)0x0);
        GStack_10 = CONCAT31(GStack_10._1_3_,(in_stack_11->fields).statType);
        this_03 = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
        if (this_03 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) break;
        pMVar12 = (MethodInfo *)&UNK_?;
        team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         (this_03,(MethodInfo *)0x0);
        pNVar13 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?();
        if ((pNVar13 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) ||
           (pSVar14 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                      NamedThemeAttribute_1_UnityEngine_Color__get_Name(pNVar13,pMVar12),
           unaff_ESI == (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)0x0)) break;
        method_01 = (MethodInfo *)&UNK_?;
        newScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                             ((GameStatCounterManager *)unaff_ESI,GStack_10,(MVTeam__Enum)team,
                              (int32_t)pSVar14,(MethodInfo *)0x0);
        oldId = &stack0xffffffd8;
        newId = &UNK_?;
        pMVar12 = MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
        ;
        this_04 = (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)func_?();
        if ((this_04 == (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0) ||
           (in_stack_15 =
                 (MethodInfo *)
                 PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                 PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                           (this_04,in_stack_15), in_stack_15 == (MethodInfo *)0x0))
        break;
        method_00 = (MethodInfo *)&UNK_?;
        MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
        SubscriptionRulesWrapper_HasBenefit
                  ((SubscriptionRulesWrapper *)in_stack_15,SubscriptionBenefit__Enum_XPBoost,
                   method_01);
        unaff_ESI = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)
                    (in_stack_11->fields).scoreBoardPlayerData;
        if (((unaff_ESI == (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)0x0) ||
            (pOVar16 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  unaff_ESI,
                                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                                 ),
            unaff_ESI == (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)0x0)) ||
           (pIVar5 = unaff_ESI,
           pIVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)unaff_ESI,
                                (int32_t)((int)&pOVar16[-1].monitor + 3),
                                MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                               ), pIVar17 == (IEventSystemHandler *)0x0)) break;
        bVar18 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
                          (in_stack_11,newScore,(int32_t)pIVar17[3].klass,(int32_t)newId,
                           (int32_t)oldId,pMVar12);
        pMVar12 = MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
        ;
        if (bVar18 != 0) {
          puStack_2 = (undefined4 *)&stack0xffffffd8;
          this_05 = (GamePointGainEffect *)func_?();
          if ((this_05 == (GamePointGainEffect *)0x0) ||
             (iVar19 = GamePointGainEffect::GamePointGainEffect_get_ID
                                 (this_05,(MethodInfo *)pIVar5), iVar19 == 0)) break;
          unaff_ESI = *(IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class **)(iVar19 + 0xc)
          ;
          pNVar13 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?(&stack0xffffffd8);
          if (pNVar13 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) break;
          pSVar14 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name(pNVar13,method_00);
          ScoreBoardBase::ScoreBoardBase_SortNewScore
                    (in_stack_11,(String *)unaff_ESI,(int32_t)pSVar14,newScore,(bool)pMVar12,
                     (MethodInfo *)0x0);
          in_stack_15 = pMVar12;
        }
      }
    }
  }
  func_?();
  func_?(unaff_ESI,0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

