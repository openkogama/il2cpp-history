
/* Void Add(MVPlayer) */

void Assembly-CSharp.dll::PlayerList::PlayerList_Add
               (PlayerList *this,MVPlayer *player,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&
                    PlayerElement_MethodInfo__UnityEngine__Object__Instantiate<PlayerElement>_PlayerElement__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).playerElementPrefab;
  parent = (Transform *)(this->fields).contentPanel;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pPVar1 = (PlayerElement *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pPVar1,parent,0,
                      PlayerElement_MethodInfo__UnityEngine__Object__Instantiate<PlayerElement>_PlayerElement__UnityEngine__Transform__bool_
                     );
  if (pPVar1 != (PlayerElement *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar1,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      if (player != (MVPlayer *)0x0) {
        this = (PlayerList *)CONCAT31(this._1_3_,(this->fields).typeToDisplay);
        scoreValue = MVPlayer::MVPlayer_GetGameStat
                               (player,(GameStatCounterType__Enum)this,(MethodInfo *)0x0);
        PlayerElement::PlayerElement_Initialize
                  (pPVar1,(MVPlayer *)0x0,(uint)(this_00->fields).typeToDisplay,scoreValue,
                   (MethodInfo *)0x0);
        piVar2 = &(this_00->fields).playerCount;
        *piVar2 = *piVar2 + 1;
        func_?();
        playerElementData.playerElement = pPVar1;
        playerElementData.score = scoreValue;
        PlayerList_SortAfterScore(this_00,playerElementData,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* PlayerList+PlayerElementData CreatePlayerElementHoldData(Int32, PlayerElement) */

PlayerList_PlayerElementData
Assembly-CSharp.dll::PlayerList::PlayerList_CreatePlayerElementHoldData
          (PlayerList *this,int32_t score,PlayerElement *playerElement,MethodInfo *method)

{
  pPStack_1 = playerElement;
  func_?(&pPStack_1,playerElement);
  PVar2.playerElement = pPStack_1;
  PVar2.score = score;
  return PVar2;
}


/* Void Initialize(MVTeam, Int32, GameStatCounterType) */

void Assembly-CSharp.dll::PlayerList::PlayerList_Initialize
               (PlayerList *this,MVTeam__Enum team,int32_t score,
               GameStatCounterType__Enum typeToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerList::ScoreIconDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerList::ScoreIconDef>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teamTab;
  (this->fields).score = score;
  (this->fields).team = team;
  (this->fields).typeToDisplay = (uint8_t)typeToDisplay;
  if (this_00 != (TeamTab *)0x0) {
    TeamTab::TeamTab_Initialize(this_00,team,typeToDisplay,(MethodInfo *)0x0);
    this_02 = (List_1_PlayerList_PlayerElementData_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>
                             );
    if (this_02 != (List_1_PlayerList_PlayerElementData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__List__
                );
      (this->fields).playerElementList = this_02;
      func_?(&(this->fields).playerElementList,this_02);
      pLVar1 = (this->fields).winningConditionIcons;
      index = 0;
      if (pLVar1 != (List_1_PlayerList_ScoreIconDef_ *)0x0) {
        while( true ) {
          if ((pLVar1->fields)._size <= index) {
            return;
          }
          pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).winningConditionIcons;
          if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar2,index,
                                    MethodInfo__System__Collections__Generic__List<PlayerList::ScoreIconDef>__get_Item_int_
                                   ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
          this_01 = *(GameObject **)((int)RVar3 + 0xc);
          pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).winningConditionIcons;
          if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || ((RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar2,index,
                                     MethodInfo__System__Collections__Generic__List<PlayerList::ScoreIconDef>__get_Item_int_
                                    ), RVar3 == (RegexCharClass_SingleRange)0x0 ||
                 (this_01 == (GameObject *)0x0)))) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,*(uint8_t *)((int)RVar3 + 8) == (uint8_t)typeToDisplay,
                     (MethodInfo *)0x0);
          pLVar1 = (this->fields).winningConditionIcons;
          index = index + 1;
          if (pLVar1 == (List_1_PlayerList_ScoreIconDef_ *)0x0) break;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SortAfterScore(PlayerList+PlayerElementData) */

void Assembly-CSharp.dll::PlayerList::PlayerList_SortAfterScore
               (PlayerList *this,PlayerList_PlayerElementData playerElementData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Add_PlayerList__PlayerElementData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Insert_int__PlayerList__PlayerElementData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pPVar1 = this;
  bVar2 = false;
  iVar3 = 0;
  pLVar4 = (this->fields).playerElementList;
  pMVar5 = 
  MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Add_PlayerList__PlayerElementData_
  ;
  while (MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Add_PlayerList__PlayerElementData_
              = pMVar5, pLVar4 != (List_1_PlayerList_PlayerElementData_ *)0x0) {
    if ((pLVar4->fields)._size <= iVar3) {
      if (!bVar2) {
        pLVar4 = (pPVar1->fields).playerElementList;
        if (pLVar4 == (List_1_PlayerList_PlayerElementData_ *)0x0) break;
        piVar6 = &(pLVar4->fields)._version;
        *piVar6 = *piVar6 + 1;
        pPVar7 = (pLVar4->fields)._items;
        if (pPVar7 == (PlayerList_PlayerElementData__Array *)0x0) break;
        uVar8 = (pLVar4->fields)._size;
        if (uVar8 < pPVar7->max_length) {
          (pLVar4->fields)._size = uVar8 + 1;
          if (pPVar7->max_length <= uVar8) {
            func_?();
            break;
          }
          pPVar7->vector[uVar8].score = playerElementData.score;
          pPVar7->vector[uVar8].playerElement = playerElementData.playerElement;
          func_?(&pPVar7->vector[uVar8].playerElement,0);
        }
        else {
          (*(pMVar5->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                    (pLVar4,playerElementData.score,playerElementData.playerElement,
                     pMVar5->klass->rgctx_data[0xb].rgctxDataDummy);
        }
      }
      pLVar4 = (pPVar1->fields).playerElementList;
      iVar3 = 0;
      if (pLVar4 != (List_1_PlayerList_PlayerElementData_ *)0x0) goto code_?;
      break;
    }
    pLVar4 = (pPVar1->fields).playerElementList;
    if (bVar2) {
      if (pLVar4 == (List_1_PlayerList_PlayerElementData_ *)0x0) break;
      TVar9 = mscorlib.dll::System::Collections::Generic::
               List`1[TabMenuButtonAccessory+AccessoryTabDef]::
               List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                         ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar4,iVar3,
                          MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Item_int_
                         );
      if ((TVar9.streamedImagePrefab == (Graphic *)0x0) ||
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)TVar9.streamedImagePrefab,(MethodInfo *)0x0),
         pTVar10 == (Transform *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                (pTVar10,(MethodInfo *)0x0);
    }
    else {
      if (pLVar4 == (List_1_PlayerList_PlayerElementData_ *)0x0) break;
      TVar9 = mscorlib.dll::System::Collections::Generic::
               List`1[TabMenuButtonAccessory+AccessoryTabDef]::
               List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                         ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar4,iVar3,
                          MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Item_int_
                         );
      this = (PlayerList *)CONCAT31(this._1_3_,(pPVar1->fields).typeToDisplay);
      bVar11 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                        (playerElementData.score,TVar9.tabID,(GameStatCounterType__Enum)this,
                         (MethodInfo *)0x0);
      if (bVar11 != 0) {
        pLVar4 = (pPVar1->fields).playerElementList;
        if (pLVar4 == (List_1_PlayerList_PlayerElementData_ *)0x0) break;
        TVar9.streamedImagePrefab = (Graphic *)playerElementData.playerElement;
        TVar9.tabID = playerElementData.score;
        mscorlib.dll::System::Collections::Generic::List`1[TabMenuButtonAccessory+AccessoryTabDef]::
        List_1_TabMenuButtonAccessory_AccessoryTabDef__Insert
                  ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar4,iVar3,TVar9,
                   MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Insert_int__PlayerList__PlayerElementData_
                  );
        bVar2 = true;
      }
    }
    iVar3 = iVar3 + 1;
    pMVar5 = 
    MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Add_PlayerList__PlayerElementData_
    ;
    pLVar4 = (pPVar1->fields).playerElementList;
  }
  goto code_?;
  while( true ) {
    TVar9 = mscorlib.dll::System::Collections::Generic::
             List`1[TabMenuButtonAccessory+AccessoryTabDef]::
             List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                       ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)pLVar4,iVar3,
                        MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Item_int_
                       );
    this_01 = TVar9.streamedImagePrefab;
    if (this_01 == (Graphic *)0x0) break;
    this = (PlayerList *)0x0;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (pTVar10 == (Transform *)0x0) break;
    iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetSiblingIndex
                       (pTVar10,(MethodInfo *)0x0);
    this = (PlayerList *)(iVar12 + 1);
    pPVar13 = (PlayerElement *)
              mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
    this_00 = (PlayerList *)(this_01->fields).m_Color.b;
    if (this_00 == (PlayerList *)0x0) break;
    playerElementData.score = 0;
    this = this_00;
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      ((GameObject *)this_00,(MethodInfo *)0x0);
    if (bVar11 == 0) {
      piVar14 = (int *)(this_01->fields).m_Color.r;
      if (piVar14 == (int *)0x0) break;
      this = (PlayerList *)&UNK_?;
      playerElementData.score = (int32_t)piVar14;
      playerElementData.playerElement = pPVar13;
      (**(code **)(*piVar14 + 0x314))();
    }
    piVar14 = (int *)(this_01->fields).m_Color.a;
    if (piVar14 == (int *)0x0) break;
    (**(code **)(*piVar14 + 0x314))(piVar14,pPVar13,*(undefined4 *)(*piVar14 + 0x318));
    pLVar4 = (pPVar1->fields).playerElementList;
    iVar3 = iVar3 + 1;
    if (pLVar4 == (List_1_PlayerList_PlayerElementData_ *)0x0) break;
code_?:
    if ((pLVar4->fields)._size <= iVar3) {
      return;
    }
    pLVar4 = (pPVar1->fields).playerElementList;
    if (pLVar4 == (List_1_PlayerList_PlayerElementData_ *)0x0) break;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

