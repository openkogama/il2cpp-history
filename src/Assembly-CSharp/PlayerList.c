
/* Void Add(MVPlayer) */

void Assembly-CSharp.dll::PlayerList::PlayerList_Add
               (PlayerList *this,MVPlayer *player,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).playerElementPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pPVar1 = (PlayerElement *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pPVar1,
                      PlayerElement_MethodInfo__UnityEngine__Object__Instantiate<PlayerElement>_PlayerElement_
                     );
  if ((pPVar1 != (PlayerElement *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pPVar1,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_01,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pPVar1,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,1,(MethodInfo *)0x0);
      this = (PlayerList *)CONCAT31(this._1_3_,(this->fields).typeToDisplay);
      scoreValue = MVPlayer::MVPlayer_GetGameStat
                             ((MVPlayer *)&UNK_?,(GameStatCounterType__Enum)this,
                              (MethodInfo *)0x0);
      PlayerElement::PlayerElement_Initialize
                (pPVar1,(MVPlayer *)&UNK_?,(uint)(this_00->fields).typeToDisplay,scoreValue,
                 (MethodInfo *)0x0);
      piVar2 = &(this_00->fields).playerCount;
      *piVar2 = *piVar2 + 1;
      playerElementData.playerElement = pPVar1;
      playerElementData.score = scoreValue;
      PlayerList_SortAfterScore(this_00,playerElementData,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(MVTeam, Int32, GameStatCounterType) */

void Assembly-CSharp.dll::PlayerList::PlayerList_Initialize
               (PlayerList *this,MVTeam__Enum team,int32_t score,
               GameStatCounterType__Enum typeToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teamTab;
  (this->fields).score = score;
  (this->fields).team = team;
  (this->fields).typeToDisplay = (uint8_t)typeToDisplay;
  if (this_00 != (TeamTab *)0x0) {
    TeamTab::TeamTab_Initialize(this_00,team,typeToDisplay,(MethodInfo *)0x0);
    this_02 = (List_1_UnityEngine_Vector4_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>
                             );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__List__
              );
    pLVar1 = (this->fields).winningConditionIcons;
    (this->fields).playerElementList = (List_1_PlayerList_PlayerElementData_ *)this_02;
    index = 0;
    if (pLVar1 != (List_1_PlayerList_ScoreIconDef_ *)0x0) {
      while( true ) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                            MethodInfo__System__Collections__Generic__List<PlayerList::ScoreIconDef>__get_Count__
                           );
        if ((int)pOVar2 <= index) {
          return;
        }
        pLVar1 = (this->fields).winningConditionIcons;
        if ((pLVar1 == (List_1_PlayerList_ScoreIconDef_ *)0x0) ||
           (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index
                                ,
                                MethodInfo__System__Collections__Generic__List<PlayerList::ScoreIconDef>__get_Item_int_
                               ), pIVar3 == (IEventSystemHandler *)0x0)) break;
        this_01 = (GameObject *)pIVar3[1].monitor;
        pLVar1 = (this->fields).winningConditionIcons;
        if ((pLVar1 == (List_1_PlayerList_ScoreIconDef_ *)0x0) ||
           ((pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                 index,
                                 MethodInfo__System__Collections__Generic__List<PlayerList::ScoreIconDef>__get_Item_int_
                                ), pIVar3 == (IEventSystemHandler *)0x0 ||
            (this_01 == (GameObject *)0x0)))) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,*(uint8_t *)&pIVar3[1].klass == (uint8_t)typeToDisplay,(MethodInfo *)0x0)
        ;
        pLVar1 = (this->fields).winningConditionIcons;
        index = index + 1;
        if (pLVar1 == (List_1_PlayerList_ScoreIconDef_ *)0x0) break;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SortAfterScore(PlayerList+PlayerElementData) */

void Assembly-CSharp.dll::PlayerList::PlayerList_SortAfterScore
               (PlayerList *this,PlayerList_PlayerElementData playerElementData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  iVar2 = 0;
  pTVar3 = (Transform *)0x0;
  pLVar4 = (this->fields).playerElementList;
  while (pLVar4 != (List_1_PlayerList_PlayerElementData_ *)0x0) {
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                        MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Count__
                       );
    cVar6 = (char)((uint)pTVar3 >> 0x18);
    if ((int)pOVar5 <= iVar2) {
      if (cVar6 == '\0') {
        pLVar7 = (List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)
                 (pPVar1->fields).playerElementList;
        if (pLVar7 == (List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)0x0) break;
        item.callback = (UnityAction *)playerElementData.playerElement;
        item.order = playerElementData.score;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        BeforeRenderHelper+OrderBlock]::List_1_UnityEngine_BeforeRenderHelper_OrderBlock__Add
                  (pLVar7,item,
                   MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Add_PlayerList__PlayerElementData_
                  );
      }
      pLVar4 = (pPVar1->fields).playerElementList;
      iVar2 = 0;
      if (pLVar4 != (List_1_PlayerList_PlayerElementData_ *)0x0) goto code_?;
      break;
    }
    pLVar4 = (pPVar1->fields).playerElementList;
    if (cVar6 == '\0') {
      if (pLVar4 == (List_1_PlayerList_PlayerElementData_ *)0x0) break;
      PVar8 = mscorlib.dll::System::Collections::Generic::List`1[PlayerList+PlayerElementData]::
               List_1_PlayerList_PlayerElementData__get_Item
                         (pLVar4,iVar2,
                          MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Item_int_
                         );
      iVar9 = playerElementData.score;
      this = (PlayerList *)CONCAT31(this._1_3_,(pPVar1->fields).typeToDisplay);
      bVar10 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                        (playerElementData.score,PVar8.score,(GameStatCounterType__Enum)this,
                         (MethodInfo *)0x0);
      if (bVar10 != 0) {
        pLVar7 = (List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)
                 (pPVar1->fields).playerElementList;
        if (pLVar7 == (List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)0x0) break;
        this = (PlayerList *)
               MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Insert_int__PlayerList__PlayerElementData_
        ;
        item_00.callback = (UnityAction *)playerElementData.playerElement;
        item_00.order = iVar9;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        BeforeRenderHelper+OrderBlock]::List_1_UnityEngine_BeforeRenderHelper_OrderBlock__Insert
                  (pLVar7,iVar2,item_00,
                   MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Insert_int__PlayerList__PlayerElementData_
                  );
        pTVar3 = (Transform *)0x1000000;
      }
    }
    else {
      if (pLVar4 == (List_1_PlayerList_PlayerElementData_ *)0x0) break;
      PVar8 = mscorlib.dll::System::Collections::Generic::List`1[PlayerList+PlayerElementData]::
               List_1_PlayerList_PlayerElementData__get_Item
                         (pLVar4,iVar2,
                          MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Item_int_
                         );
      if ((PVar8.playerElement == (PlayerElement *)0x0) ||
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)PVar8.playerElement,(MethodInfo *)0x0),
         pTVar3 == (Transform *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                (pTVar3,(MethodInfo *)0x0);
    }
    iVar2 = iVar2 + 1;
    pLVar4 = (pPVar1->fields).playerElementList;
  }
  goto code_?;
  while( true ) {
    PVar8 = mscorlib.dll::System::Collections::Generic::List`1[PlayerList+PlayerElementData]::
             List_1_PlayerList_PlayerElementData__get_Item
                       (pLVar4,iVar2,
                        MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Item_int_
                       );
    this_01 = PVar8.playerElement;
    if (this_01 == (PlayerElement *)0x0) break;
    this = (PlayerList *)0x0;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this_01,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) break;
    iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetSiblingIndex
                      (pTVar3,(MethodInfo *)0x0);
    this = (PlayerList *)(iVar9 + 1);
    uVar11 = func_?(&this,0);
    this_00 = (this_01->fields).memberUI;
    if (this_00 == (GameObject *)0x0) break;
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (this_00,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      pTVar12 = (this_01->fields).rank;
      if (pTVar12 == (Text *)0x0) break;
      (*(code *)(pTVar12->klass->vtable).set_text.method)
                (pTVar12,uVar11,(pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    }
    pTVar12 = (this_01->fields).memberRank;
    if (pTVar12 == (Text *)0x0) break;
    (*(code *)(pTVar12->klass->vtable).set_text.method)
              (pTVar12,uVar11,(pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pLVar4 = (pPVar1->fields).playerElementList;
    iVar2 = iVar2 + 1;
    if (pLVar4 == (List_1_PlayerList_PlayerElementData_ *)0x0) break;
code_?:
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                        MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Count__
                       );
    if ((int)pOVar5 <= iVar2) {
      return;
    }
    pLVar4 = (pPVar1->fields).playerElementList;
    if (pLVar4 == (List_1_PlayerList_PlayerElementData_ *)0x0) break;
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

