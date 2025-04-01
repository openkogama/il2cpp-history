
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
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__List__
              );
    ppLVar1 = &(this->fields).playerElementList;
    *ppLVar1 = this_02;
    func_?(ppLVar1,this_02);
    pLVar2 = (this->fields).winningConditionIcons;
    index = 0;
    if (pLVar2 != (List_1_PlayerList_ScoreIconDef_ *)0x0) {
      while( true ) {
        if ((pLVar2->fields)._size <= index) {
          return;
        }
        pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionIcons;
        if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<PlayerList::ScoreIconDef>__get_Item_int_
                              ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
        this_01 = *(GameObject **)((int)RVar4 + 0xc);
        pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionIcons;
        if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           ((RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar3,index,
                                MethodInfo__System__Collections__Generic__List<PlayerList::ScoreIconDef>__get_Item_int_
                               ), RVar4 == (RegexCharClass_SingleRange)0x0 ||
            (this_01 == (GameObject *)0x0)))) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,*(uint8_t *)((int)RVar4 + 8) == (uint8_t)typeToDisplay,(MethodInfo *)0x0)
        ;
        pLVar2 = (this->fields).winningConditionIcons;
        index = index + 1;
        if (pLVar2 == (List_1_PlayerList_ScoreIconDef_ *)0x0) break;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  iVar1 = playerElementData.score;
  pPVar2 = this;
  iVar3 = 0;
  uVar4 = 0;
  pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            (this->fields).playerElementList;
  pMVar6 = 
  MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Add_PlayerList__PlayerElementData_
  ;
  while (MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Add_PlayerList__PlayerElementData_
              = pMVar6,
        pLVar5 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
    cVar7 = (char)((uint)uVar4 >> 0x18);
    if ((pLVar5->fields)._size <= iVar3) {
      if (cVar7 == '\0') {
        pLVar8 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)
                 (pPVar2->fields).playerElementList;
        if (pLVar8 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)0x0) break;
        piVar9 = &(pLVar8->fields)._version;
        *piVar9 = *piVar9 + 1;
        pVVar10 = (pLVar8->fields)._items;
        if (pVVar10 == (VisualTreeAsset_UxmlObjectEntry__Array *)0x0) break;
        uVar11 = (pLVar8->fields)._size;
        if (uVar11 < pVVar10->max_length) {
          (pLVar8->fields)._size = uVar11 + 1;
          if (pVVar10->max_length <= uVar11) {
            func_?();
            break;
          }
          pVVar10->vector[uVar11].uxmlObjectAssets =
               (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)playerElementData.playerElement;
          pVVar10->vector[uVar11].parentId = iVar1;
          func_?(&pVVar10->vector[uVar11].uxmlObjectAssets,0);
        }
        else {
          item.uxmlObjectAssets =
               (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)playerElementData.playerElement;
          item.parentId = iVar1;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UxmlObjectEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__AddWithResize
                    (pLVar8,item,pMVar6->klass->rgctx_data[0xe].method);
        }
      }
      pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                (pPVar2->fields).playerElementList;
      iVar3 = 0;
      if (pLVar5 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      goto code_?;
      break;
    }
    if (cVar7 == '\0') {
      if (pLVar5 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      break;
      XVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
               XmlSchemaObjectTable+XmlSchemaObjectEntry]::
               List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                         (pLVar5,iVar3,
                          MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Item_int_
                         );
      this = (PlayerList *)CONCAT31(this._1_3_,(pPVar2->fields).typeToDisplay);
      bVar13 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                         (iVar1,(int32_t)XVar12.qname,(GameStatCounterType__Enum)this,
                          (MethodInfo *)0x0);
      if (bVar13 != 0) {
        pLVar8 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)
                 (pPVar2->fields).playerElementList;
        if (pLVar8 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)0x0) break;
        item_00.uxmlObjectAssets =
             (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)playerElementData.playerElement;
        item_00.parentId = iVar1;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
        VisualTreeAsset+UxmlObjectEntry]::
        List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__Insert
                  (pLVar8,iVar3,item_00,
                   MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Insert_int__PlayerList__PlayerElementData_
                  );
        uVar4 = 0x1000000;
      }
    }
    else {
      if (pLVar5 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      break;
      XVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
               XmlSchemaObjectTable+XmlSchemaObjectEntry]::
               List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                         (pLVar5,iVar3,
                          MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Item_int_
                         );
      if ((XVar12.xso == (XmlSchemaObject *)0x0) ||
         (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)XVar12.xso,(MethodInfo *)0x0),
         pTVar14 == (Transform *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                (pTVar14,(MethodInfo *)0x0);
    }
    iVar3 = iVar3 + 1;
    pMVar6 = 
    MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__Add_PlayerList__PlayerElementData_
    ;
    pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              (pPVar2->fields).playerElementList;
  }
  goto code_?;
  while( true ) {
    XVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
             XmlSchemaObjectTable+XmlSchemaObjectEntry]::
             List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                       (pLVar5,iVar3,
                        MethodInfo__System__Collections__Generic__List<PlayerList::PlayerElementData>__get_Item_int_
                       );
    this_01 = XVar12.xso;
    if (this_01 == (XmlSchemaObject *)0x0) break;
    this = (PlayerList *)0x0;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) break;
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetSiblingIndex
                       (pTVar14,(MethodInfo *)0x0);
    this = (PlayerList *)(iVar1 + 1);
    pSVar15 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
    this_00 = *(GameObject **)&(this_01->fields).isProcessing;
    if (this_00 == (GameObject *)0x0) break;
    this = (PlayerList *)0x0;
    bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (this_00,(MethodInfo *)0x0);
    if (bVar13 == 0) {
      pPVar16 = (PlayerList *)(this_01->fields).namespaces;
      if (pPVar16 == (PlayerList *)0x0) break;
      playerElementData.playerElement =
           (PlayerElement *)pPVar16->klass[3]._0.byval_arg.data.typeHandle;
      this = pPVar16;
      playerElementData.score = (int32_t)pSVar15;
      (*(code *)pPVar16->klass[3]._0.namespaze)();
    }
    piVar17 = ((Object_1__Fields *)&this_01[1].klass)->m_CachedPtr;
    if (piVar17 == (int *)0x0) break;
    (**(code **)(*piVar17 + 0x318))(piVar17,pSVar15,*(undefined4 *)(*piVar17 + 0x31c));
    pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              (pPVar2->fields).playerElementList;
    iVar3 = iVar3 + 1;
    if (pLVar5 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    break;
code_?:
    if ((pLVar5->fields)._size <= iVar3) {
      return;
    }
    if (pLVar5 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    break;
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

