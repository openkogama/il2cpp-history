
/* Int32 CalculateRealTopRank(Int32, List`1[MV.WorldObject.GamePassSystem.HighScoreEntry]) */

int32_t Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_CalculateRealTopRank
                  (GamePassesHighScoreList *this,int32_t playerRank,
                  List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *highScoresEntries,
                  MethodInfo *method)

{
  if (playerRank != 1) {
    iVar1 = GamePassesHighScoreList_GetPlayerPosition(this,highScoresEntries,(MethodInfo *)0x0);
    return playerRank - iVar1;
  }
  return 1;
}


/* Void ClearHighScoreElements() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_ClearHighScoreElements
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).contentList;
  if (pTVar1 != (Transform *)0x0) {
    index = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                      (pTVar1,(MethodInfo *)0x0);
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      pTVar1 = (this->fields).contentList;
      if ((pTVar1 == (Transform *)0x0) ||
         (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetChild
                             (pTVar1,index,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar1,(Transform *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pTVar1,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateHighScoreElements(List`1[MV.WorldObject.GamePassSystem.HighScoreEntry], Int32) */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_CreateHighScoreElements
               (GamePassesHighScoreList *this,
               List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *listOfScores,int32_t topRank,
               MethodInfo *method)

{
  this_00 = listOfScores;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                   );
    func_?(&
                    GamePassesHighScoreElement_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreElement>_GamePassesHighScoreElement_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  index = 0;
  if (listOfScores != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    while( true ) {
      if ((this_00->fields)._size <= index) {
        return;
      }
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         this_00,index,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                        );
      if (RVar1 == (RegexCharClass_SingleRange)0x0) break;
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         this_00,index,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                        );
      if (RVar1 == (RegexCharClass_SingleRange)0x0) break;
      this_02 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                 ((int)RVar1 + 0xc);
      amountOfGamePoints = index;
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_02,index,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                        );
      if (RVar1 == (RegexCharClass_SingleRange)0x0) break;
      listOfScores = *(List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ **)((int)RVar1 + 8);
      pGVar2 = (this->fields).highScoreElementPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        listOfScores = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)
                       TypeInfo__UnityEngine__Object;
        this = (GamePassesHighScoreList *)&UNK_?;
        func_?();
      }
      pGVar2 = (GamePassesHighScoreElement *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar2,
                          GamePassesHighScoreElement_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreElement>_GamePassesHighScoreElement_
                         );
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         this_00,index,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                        );
      if ((RVar1 == (RegexCharClass_SingleRange)0x0) ||
         (pGVar2 == (GamePassesHighScoreElement *)0x0)) break;
      GamePassesHighScoreElement::GamePassesHighScoreElement_Initialize
                (pGVar2,topRank + index,(String *)this_02,amountOfGamePoints,(int32_t)listOfScores,
                 *(bool *)((int)RVar1 + 0x14),(MethodInfo *)0x0);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pGVar2,(MethodInfo *)0x0);
      if (this_01 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(this->fields).contentList,0,(MethodInfo *)0x0);
      if (index == 0) {
        GamePassesHighScoreElement::GamePassesHighScoreElement_DeactivateTopBorder
                  (pGVar2,(MethodInfo *)0x0);
      }
      index = index + 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateHighScoreList() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_CreateHighScoreList
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).highScoreListDatas;
  if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                 *)0x0) {
    GVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Int32Enum,GamePassesHighScoreList+HighScoreListData]::
             Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                       ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                        pDVar1,(this->fields).currentState,
                        MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                       );
    pDVar1 = (this->fields).highScoreListDatas;
    pOVar3 = (Object_1__Class *)GVar2.topRank;
    if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) {
      GVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Int32Enum,GamePassesHighScoreList+HighScoreListData]::
               Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                         ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                           *)pDVar1,(this->fields).currentState,
                          MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                         );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pTVar4 = (this->fields).contentList;
      if (pTVar4 != (Transform *)0x0) {
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                          (pTVar4,(MethodInfo *)0x0);
        while (iVar5 = iVar5 + -1, -1 < iVar5) {
          pTVar4 = (this->fields).contentList;
          if ((pTVar4 == (Transform *)0x0) ||
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetChild
                                 (pTVar4,iVar5,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar4,(Transform *)0x0,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pTVar4,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                         );
          func_?(&
                          GamePassesHighScoreElement_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreElement>_GamePassesHighScoreElement_
                         );
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        this = (GamePassesHighScoreList *)GVar2.scoreList;
        iVar5 = 0;
        if (this != (GamePassesHighScoreList *)0x0) {
          for (; iVar5 < (int)(this->fields).highScoreElementPrefab; iVar5 = iVar5 + 1) {
            RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this,iVar5,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                              );
            if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
            iVar7 = *(int32_t *)((int)RVar6 + 0x10);
            RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this,iVar5,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                              );
            if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
            userName = *(String **)((int)RVar6 + 0xc);
            RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this,iVar5,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                              );
            if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
            profileID = *(int32_t *)((int)RVar6 + 8);
            pGVar8 = (this_00->fields).highScoreElementPrefab;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              pOVar3 = TypeInfo__UnityEngine__Object;
              func_?();
            }
            pGVar8 = (GamePassesHighScoreElement *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)pGVar8,
                                GamePassesHighScoreElement_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreElement>_GamePassesHighScoreElement_
                               );
            RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this,iVar5,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                              );
            if ((RVar6 == (RegexCharClass_SingleRange)0x0) ||
               (pGVar8 == (GamePassesHighScoreElement *)0x0)) goto code_?;
            GamePassesHighScoreElement::GamePassesHighScoreElement_Initialize
                      (pGVar8,(int)&(pOVar3->_0).image + iVar5,userName,iVar7,profileID,
                       *(bool *)((int)RVar6 + 0x14),(MethodInfo *)0x0);
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pGVar8,(MethodInfo *)0x0);
            if (pTVar4 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar4,(this_00->fields).contentList,0,(MethodInfo *)0x0);
            if (iVar5 == 0) {
              GamePassesHighScoreElement::GamePassesHighScoreElement_DeactivateTopBorder
                        (pGVar8,(MethodInfo *)0x0);
            }
          }
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                           );
            cRam_? = '\x01';
          }
          if ((this_00->fields).currentState == 4) {
            return;
          }
          pDVar1 = (this_00->fields).highScoreListDatas;
          if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                         *)0x0) {
            GVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,GamePassesHighScoreList+HighScoreListData]::
                     Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                               ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                 *)pDVar1,(this_00->fields).currentState,
                                MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                               );
            iVar7 = GamePassesHighScoreList_GetPlayerPosition
                              (this_00,GVar2.scoreList,(MethodInfo *)0x0);
            if (iVar7 <= (this_00->fields).scoreElementShowCapacity) {
              return;
            }
            pDVar1 = (this_00->fields).highScoreListDatas;
            iVar5 = (iVar7 - (this_00->fields).middlePosition) + 1;
            if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                           *)0x0) {
              GVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,GamePassesHighScoreList+HighScoreListData]::
                       Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                                 ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                   *)pDVar1,(this_00->fields).currentState,
                                  MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                                 );
              if (GVar2.scoreList != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
                iVar9 = ((this_00->fields).middlePosition - ((GVar2.scoreList)->fields)._size) +
                        iVar7;
                iVar10 = iVar5;
                if (-1 < iVar9) {
                  iVar10 = iVar9;
                }
                if (iVar5 < iVar10) {
                  iVar10 = iVar5;
                }
                pTVar4 = (this_00->fields).contentList;
                if ((pTVar4 != (Transform *)0x0) &&
                   (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pTVar4,(MethodInfo *)0x0),
                   pTVar4 != (Transform *)0x0)) {
                  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_localPosition
                                      ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
                  this = (GamePassesHighScoreList *)pVVar11->z;
                  uVar12 = pVVar11->x;
                  pTVar4 = (this_00->fields).contentList;
                  fVar13 = (float)iVar10 * (this_00->fields).moveAmountPerElement +
                           (this_00->fields).topPadding +
                           (float)(this_00->fields).middlePosition *
                           (this_00->fields).moveAmountPerElement;
                  if ((pTVar4 != (Transform *)0x0) &&
                     (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform((Component *)pTVar4,(MethodInfo *)0x0),
                     pTVar4 != (Transform *)0x0)) {
                    fVar14 = fVar13;
                    value.x = (float)uVar12;
                    value = (Vector3)CONCAT84(uVar15,value.x);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar4,value,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void CreateHighScoreListData(HighScoreDatas) */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_CreateHighScoreListData
               (GamePassesHighScoreList *this,HighScoreDatas *newHighScoreData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Add_GamePassesHighScoreList__GamePassesHighScoreListState__GamePassesHighScoreList__HighScoreListData_
                   );
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if (newHighScoreData != (HighScoreDatas *)0x0) {
    pLStack_2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (newHighScoreData->fields).highScores;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                     );
      cRam_? = '\x01';
    }
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                             );
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
                );
      iVar3 = 0;
      if (pLStack_2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
        if (iVar3 < (pLStack_2->fields)._size) {
          index = 0;
          while( true ) {
            if ((this_01->fields)._size <= index) break;
            RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLStack_2,iVar3,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                              );
            if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
            iStack_5 = *(int *)((int)RVar4 + 0x10);
            RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_01,index,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                              );
            if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
            if (*(int *)((int)RVar4 + 0x10) < iStack_5) {
              RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (pLStack_2,iVar3,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                                );
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Insert
                        ((List_1_System_Object_ *)this_01,index,(Object *)RVar4,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
                        );
              iVar3 = iVar3 + 1;
              goto code_?;
            }
            index = index + 1;
          }
          RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLStack_2,iVar3,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                            );
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_01,(Object *)RVar4,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
                    );
          iVar3 = iVar3 + 1;
          goto code_?;
        }
        iVar3 = (newHighScoreData->fields).topRank;
        if (iVar3 == 1) {
          value = (Object *)0x1;
        }
        else {
          iVar6 = GamePassesHighScoreList_GetPlayerPosition
                            (this,(List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)this_01,
                             (MethodInfo *)0x0);
          value = (Object *)(iVar3 - iVar6);
        }
        uStack_1 = CONCAT44(uStack_1._4_4_,this_01);
        func_?(&uStack_1,this_01);
        this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                   *)(this->fields).highScoreListDatas;
        uStack_1 = CONCAT44(value,(String *)uStack_1);
        if (this_00 !=
            (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
             *)0x0) {
          key.TypeName = (String *)uStack_1;
          key.AssemblyName = (String *)(this->fields).currentState;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
          DefaultSerializationBinder+TypeNameKey,System::Object]::
          Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
                    (this_00,key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Add_GamePassesHighScoreList__GamePassesHighScoreListState__GamePassesHighScoreList__HighScoreListData_
                    );
          return;
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


/* Void Exit() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_Exit
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesHighScoreList____c___Exit_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesHighScoreList____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__GamePassesHighScoreList____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePassesHighScoreList____c);
  }
  callbackFunction = TypeInfo__GamePassesHighScoreList____c->static_fields->__9__31_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__GamePassesHighScoreList____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesHighScoreList____c);
    }
    object = TypeInfo__GamePassesHighScoreList____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GamePassesHighScoreList____c___Exit_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesHighScoreList____c->static_fields->__9__31_0 = callbackFunction;
    func_?(&TypeInfo__GamePassesHighScoreList____c->static_fields->__9__31_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Int32 GetPlayerPosition(List`1[MV.WorldObject.GamePassSystem.HighScoreEntry]) */

int32_t Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_GetPlayerPosition
                  (GamePassesHighScoreList *this,
                  List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *highScoresEntries,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  if (highScoresEntries != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    while( true ) {
      if ((highScoresEntries->fields)._size <= index) {
        return 0;
      }
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         highScoresEntries,index,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                        );
      if (RVar1 == (RegexCharClass_SingleRange)0x0) break;
      iVar2 = *(int *)((int)RVar1 + 8);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame *)0x0) break;
      pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (pMVar3 == (MVLocalPlayer *)0x0) break;
      if (iVar2 == (pMVar3->fields)._._ProfileID_k__BackingField) {
        return index;
      }
      index = index + 1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void HandlePlayerNotCentered() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_HandlePlayerNotCentered
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).currentState == 4) {
    return;
  }
  pDVar1 = (this->fields).highScoreListDatas;
  if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                 *)0x0) {
    GVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Int32Enum,GamePassesHighScoreList+HighScoreListData]::
             Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                       ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                        pDVar1,(this->fields).currentState,
                        MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                       );
    iVar3 = GamePassesHighScoreList_GetPlayerPosition(this,GVar2.scoreList,(MethodInfo *)0x0);
    if (iVar3 <= (this->fields).scoreElementShowCapacity) {
      return;
    }
    pDVar1 = (this->fields).highScoreListDatas;
    iVar4 = (iVar3 - (this->fields).middlePosition) + 1;
    if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) {
      GVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Int32Enum,GamePassesHighScoreList+HighScoreListData]::
               Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                         ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                           *)pDVar1,(this->fields).currentState,
                          MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                         );
      if (GVar2.scoreList != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
        iVar5 = ((this->fields).middlePosition - ((GVar2.scoreList)->fields)._size) + iVar3;
        iVar6 = iVar4;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        if (iVar4 < iVar6) {
          iVar6 = iVar4;
        }
        pTVar7 = (this->fields).contentList;
        if ((pTVar7 != (Transform *)0x0) &&
           (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pTVar7,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0))
        {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                              ((Vector3 *)&stack0xffffffe4,pTVar7,(MethodInfo *)0x0);
          fStack9 = pVVar8->z;
          uVar10 = pVVar8->x;
          fVar11 = (this->fields).moveAmountPerElement;
          pTVar7 = (this->fields).contentList;
          iVar4 = (this->fields).middlePosition;
          fVar12 = (this->fields).topPadding;
          fVar13 = (this->fields).moveAmountPerElement;
          if ((pTVar7 != (Transform *)0x0) &&
             (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pTVar7,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0
             )) {
            value.y = (float)iVar6 * fVar11 + fVar12 + (float)iVar4 * fVar13;
            value.x = (float)uVar10;
            value.z = fStack9;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar7,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void LoadDone() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_LoadDone
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  this_00 = (this->fields).waitForHighScore;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    if ((this->fields).currentState == 1) {
      (this->fields).currentState = 3;
    }
    if ((this->fields).currentState == 2) {
      (this->fields).currentState = 4;
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void LoadLocalPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_LoadLocalPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Loading_High_Scores___);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForHighScore;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).loadingText;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,StringLiteral_Loading_High_Scores___);
      (this->fields).currentState = 1;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
          func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          cRam_? = '\x01';
        }
        piVar3 = *(int **)(in_stack_4 + 0x10);
        this_01 = (ParameterOverride_1_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
        if (this_01 != (ParameterOverride_1_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
          uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
          uVar6._1_1_ = (pSVar5->SendReliable).Channel;
          uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0x134))
                      (piVar3,0x68,this_01,(pSVar5->SendReliable).DeliveryMode,uVar6);
            return;
          }
        }
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void LoadTopPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_LoadTopPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Loading_Top_Players_Scores___);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForHighScore;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).loadingText;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,StringLiteral_Loading_Top_Players_Scores___);
      (this->fields).currentState = 2;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
          func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          cRam_? = '\x01';
        }
        piVar3 = *(int **)(in_stack_4 + 0x10);
        this_01 = (ParameterOverride_1_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
        if (this_01 != (ParameterOverride_1_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
          uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
          uVar6._1_1_ = (pSVar5->SendReliable).Channel;
          uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0x134))
                      (piVar3,0x6c,this_01,(pSVar5->SendReliable).DeliveryMode,uVar6);
            return;
          }
        }
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_OnDestroy
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>);
    func_?(&
                    MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
                   );
    func_?(&TypeInfo__GamePassesHighScoreUpdateManager);
    cRam_? = '\x01';
  }
  source = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas___Class *)
           TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
  this_00 = (Action_1_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                           );
  if (this_00 == (Action_1_Object_ *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
               ,(MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
    source = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
    if (pDVar1 == (Delegate *)0x0) {
      TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate =
           (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0;
      pAStack2 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas___Class *)0x0;
code_?:
      func_?();
      return;
    }
    pAStack2 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
    pAVar3 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)func_?();
    if (pAVar3 != (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
      TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate = pAVar3;
      source = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
      pAStack2 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
      pAStack2 =
           (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas___Class *)func_?();
      if (pAStack2 != (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas___Class *)0x0)
      goto code_?;
    }
  }
  pAStack2 = source;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnHighScoreUpdate(HighScoreDatas) */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_OnHighScoreUpdate
               (GamePassesHighScoreList *this,HighScoreDatas *newHighScoreData,MethodInfo *method)

{
  this_00 = (this->fields).waitForHighScore;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    if ((this->fields).currentState == 1) {
      (this->fields).currentState = 3;
    }
    if ((this->fields).currentState == 2) {
      (this->fields).currentState = 4;
    }
    GamePassesHighScoreList_CreateHighScoreListData(this,newHighScoreData,(MethodInfo *)0x0);
    GamePassesHighScoreList_CreateHighScoreList(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetToLocalPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_SetToLocalPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                   );
    func_?(&StringLiteral_High_Scores);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).headerText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,StringLiteral_High_Scores,(pTVar1->klass->vtable).set_text.method);
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this->fields).highScoreListDatas;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)0x3,
                         MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                        );
      if (bVar2 == 0) {
        if (cRam_? == '\0') {
          func_?(&StringLiteral_Loading_High_Scores___);
          cRam_? = '\x01';
        }
        pGVar3 = (this->fields).waitForHighScore;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,1,(MethodInfo *)0x0);
          pTVar1 = (this->fields).loadingText;
          if (pTVar1 != (Text *)0x0) {
            pSVar4 = StringLiteral_Loading_High_Scores___;
            (*(pTVar1->klass->vtable).set_text.methodPtr)
                      (pTVar1,StringLiteral_Loading_High_Scores___);
            (this->fields).currentState = 1;
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                ,pSVar4);
                func_?(&
                                TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
                func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                cRam_? = '\x01';
              }
              pPVar6 = (pMVar5->fields).peer;
              this_01 = (ParameterOverride_1_System_Object_ *)
                        func_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
              if (this_01 != (ParameterOverride_1_System_Object_ *)0x0) {
                Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                }
                pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                uVar8._0_1_ = (pSVar7->SendReliable).Encrypt;
                uVar8._1_1_ = (pSVar7->SendReliable).Channel;
                uVar8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
                if (pPVar6 != (PhotonPeer *)0x0) {
                  (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                            (pPVar6,0x68,this_01,(pSVar7->SendReliable).DeliveryMode,uVar8,
                             (pPVar6->klass->vtable).SendOperation.method);
                  return;
                }
              }
              func_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
      }
      else {
        pGVar3 = (this->fields).waitForHighScore;
        (this->fields).currentState = 3;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          GamePassesHighScoreList_CreateHighScoreList(this,(MethodInfo *)0x0);
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


/* Void SetToTopPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_SetToTopPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                   );
    func_?(&StringLiteral_Top_Players);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).headerText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,StringLiteral_Top_Players,(pTVar1->klass->vtable).set_text.method);
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this->fields).highScoreListDatas;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)0x4,
                         MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                        );
      if (bVar2 == 0) {
        if (cRam_? == '\0') {
          func_?(&StringLiteral_Loading_Top_Players_Scores___);
          cRam_? = '\x01';
        }
        pGVar3 = (this->fields).waitForHighScore;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,1,(MethodInfo *)0x0);
          pTVar1 = (this->fields).loadingText;
          if (pTVar1 != (Text *)0x0) {
            pSVar4 = StringLiteral_Loading_Top_Players_Scores___;
            (*(pTVar1->klass->vtable).set_text.methodPtr)
                      (pTVar1,StringLiteral_Loading_Top_Players_Scores___);
            (this->fields).currentState = 2;
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                ,pSVar4);
                func_?(&
                                TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
                func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                cRam_? = '\x01';
              }
              pPVar6 = (pMVar5->fields).peer;
              this_01 = (ParameterOverride_1_System_Object_ *)
                        func_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
              if (this_01 != (ParameterOverride_1_System_Object_ *)0x0) {
                Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                }
                pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                uVar8._0_1_ = (pSVar7->SendReliable).Encrypt;
                uVar8._1_1_ = (pSVar7->SendReliable).Channel;
                uVar8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
                if (pPVar6 != (PhotonPeer *)0x0) {
                  (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                            (pPVar6,0x6c,this_01,(pSVar7->SendReliable).DeliveryMode,uVar8,
                             (pPVar6->klass->vtable).SendOperation.method);
                  return;
                }
              }
              func_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
      }
      else {
        pGVar3 = (this->fields).waitForHighScore;
        (this->fields).currentState = 4;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          GamePassesHighScoreList_CreateHighScoreList(this,(MethodInfo *)0x0);
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


/* List`1[MV.WorldObject.GamePassSystem.HighScoreEntry]
   SortHighScoreEntry(List`1[MV.WorldObject.GamePassSystem.HighScoreEntry]) */

List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *
Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_SortHighScoreEntry
          (GamePassesHighScoreList *this,
          List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *listToSort,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                           );
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
              );
    index = 0;
    if (listToSort != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
code_?:
      do {
        if ((listToSort->fields)._size <= index) {
          return (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)this_00;
        }
        index_00 = 0;
        while( true ) {
          if ((this_00->fields)._size <= index_00) break;
          RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             listToSort,index,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                            );
          if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
          iVar2 = *(int *)((int)RVar1 + 0x10);
          RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index_00,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                            );
          if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
          if (*(int *)((int)RVar1 + 0x10) < iVar2) {
            RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               listToSort,index,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                              );
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Insert
                      ((List_1_System_Object_ *)this_00,index_00,(Object *)RVar1,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
                      );
            index = index + 1;
            goto code_?;
          }
          index_00 = index_00 + 1;
        }
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           listToSort,index,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                          );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)RVar1,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
                  );
        index = index + 1;
      } while( true );
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)(*pcVar3)();
  return pLVar4;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_Start
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
                   );
    func_?(&TypeInfo__GamePassesHighScoreUpdateManager);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesHighScoreList____c__DisplayClass15_0___Start_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesHighScoreList____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  a = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas___Class *)
      TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
  this_01 = (Action_1_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                           );
  value = (Delegate *)0x0;
  if (this_01 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
               ,(MethodInfo *)0x0);
    value = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    a = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
    if (value == (Delegate *)0x0) {
      TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate =
           (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0;
      iVar1 = 0;
    }
    else {
      pAVar2 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)
               func_?(value,
                               TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                              );
      if (pAVar2 == (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0)
      goto code_?;
      TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate = pAVar2;
      a = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
      iVar1 = func_?(value,
                              TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                             );
      if (iVar1 == 0) goto code_?;
    }
    func_?(TypeInfo__GamePassesHighScoreUpdateManager->static_fields,iVar1);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 != (GameSessionData *)0x0) {
      if ((pGVar3->fields).gameMode == 0) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                         );
          func_?(&StringLiteral_Top_Players);
          cRam_? = '\x01';
        }
        pTVar4 = (this->fields).headerText;
        if (pTVar4 != (Text *)0x0) {
          (*(pTVar4->klass->vtable).set_text.methodPtr)
                    (pTVar4,StringLiteral_Top_Players,(pTVar4->klass->vtable).set_text.method);
          pDVar5 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                   (this->fields).highScoreListDatas;
          if (pDVar5 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
            bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (pDVar5,(Object *)0x4,
                               MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                              );
            if (bVar6 != 0) {
              (this->fields).currentState = 4;
              goto code_?;
            }
            if (cRam_? == '\0') {
              func_?(&StringLiteral_Loading_Top_Players_Scores___);
              cRam_? = '\x01';
            }
            pGVar7 = (this->fields).waitForHighScore;
            if (pGVar7 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar7,1,(MethodInfo *)0x0);
              unaff_EDI = (this->fields).loadingText;
              if (unaff_EDI != (Text *)0x0) {
                (*(unaff_EDI->klass->vtable).set_text.methodPtr)
                          (unaff_EDI,StringLiteral_Loading_Top_Players_Scores___,
                           (unaff_EDI->klass->vtable).set_text.method);
                (this->fields).currentState = 2;
                pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                   ((MethodInfo *)0x0);
                if (pMVar8 != (MVNetworkGame_OperationRequests *)0x0) {
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_GetTopHighScoreList(pMVar8,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                         );
          func_?(&StringLiteral_High_Scores);
          cRam_? = '\x01';
        }
        pTVar4 = (this->fields).headerText;
        if (pTVar4 != (Text *)0x0) {
          (*(pTVar4->klass->vtable).set_text.methodPtr)
                    (pTVar4,StringLiteral_High_Scores,(pTVar4->klass->vtable).set_text.method);
          pDVar5 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                   (this->fields).highScoreListDatas;
          if (pDVar5 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
            bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (pDVar5,(Object *)0x3,
                               MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                              );
            if (bVar6 == 0) {
              if (cRam_? == '\0') {
                func_?(&StringLiteral_Loading_High_Scores___);
                cRam_? = '\x01';
              }
              pGVar7 = (this->fields).waitForHighScore;
              if (pGVar7 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar7,1,(MethodInfo *)0x0);
                unaff_EDI = (this->fields).loadingText;
                if (unaff_EDI != (Text *)0x0) {
                  (*(unaff_EDI->klass->vtable).set_text.methodPtr)
                            (unaff_EDI,StringLiteral_Loading_High_Scores___,
                             (unaff_EDI->klass->vtable).set_text.method);
                  (this->fields).currentState = 1;
                  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar8 != (MVNetworkGame_OperationRequests *)0x0) {
                    MVNetworkGame+OperationRequests::
                    MVNetworkGame_OperationRequests_GetHighScoreList(pMVar8,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
            else {
              (this->fields).currentState = 3;
code_?:
              pGVar7 = (this->fields).waitForHighScore;
              if (pGVar7 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar7,0,(MethodInfo *)0x0);
                GamePassesHighScoreList_CreateHighScoreList(this,(MethodInfo *)0x0);
code_?:
                this_00 = (this->fields).embeddedPlayerConfig;
                if (this_00 != (EmbeddedPlayerConfig *)0x0) {
                  pEVar9 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                                      (&EStack_10,this_00,(MethodInfo *)0x0);
                  if ((pEVar9->allowsModals == 0) && (pEVar9->allowsOpenInNewTab == 0)) {
                    uVar11._0_1_ = pEVar9->showTouristPromotion;
                    uVar11._1_1_ = pEVar9->allowsOpenInNewTab;
                    uVar11._2_1_ = pEVar9->allowsRedirectToWebpage;
                    uVar11._3_1_ = pEVar9->allowsModals;
                    uVar11 = uVar11 >> 0x10 & 0xff;
                  }
                  else {
                    uVar11 = 1;
                  }
                  bVar6 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                    ((MethodInfo *)0x0);
                  if ((uVar11 != 0 & bVar6) == 0) {
                    return;
                  }
                  value = (Delegate *)
                          func_?(TypeInfo__GamePassesHighScoreList____c__DisplayClass15_0);
                  if (value != (Delegate *)0x0) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)unaff_EDI);
                    pGVar7 = (this->fields).touristInformationPopup;
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__Object);
                    }
                    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_4
                                        ((Object *)pGVar7,
                                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                        );
                    (value->fields).method_ptr = pOVar12;
                    func_?(&value->fields,pOVar12);
                    a = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas___Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
                    callbackFunction =
                         (ExecuteEvents_EventFunction_1_System_Object_ *)
                         func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                        );
                    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                                 (Object *)value,
                                 MethodInfo__GamePassesHighScoreList____c__DisplayClass15_0___Start_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                      }
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_ExecuteHierarchy
                                ((GameObject *)a,(BaseEventData *)0x0,callbackFunction,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                );
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
code_?:
  func_?(value,a);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* GamePassesHighScoreList() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList__ctor
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>
                   );
    cRam_? = '\x01';
  }
  (this->fields).scoreElementShowCapacity = 0xd;
  (this->fields).middlePosition = 7;
  (this->fields).moveAmountPerElement = 101.0;
  (this->fields).topPadding = 40.0;
  this_00 = (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>
                              );
  if (this_00 !=
      (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
       *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Dictionary__
              );
    (this->fields).highScoreListDatas = this_00;
    func_?(&(this->fields).highScoreListDatas,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

