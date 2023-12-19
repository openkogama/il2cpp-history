
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
          for (; iVar5 < (int)(this->fields)._.m_CancellationTokenSource; iVar5 = iVar5 + 1) {
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
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
              );
    iVar3 = 0;
    if (pLStack_2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      if (iVar3 < (pLStack_2->fields)._size) {
        index = 0;
        if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        for (; index < (this_01->fields)._size; index = index + 1) {
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
        }
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
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
        iVar6 = 1;
      }
      else {
        iVar6 = GamePassesHighScoreList_GetPlayerPosition
                          (this,(List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)this_01,
                           (MethodInfo *)0x0);
        iVar6 = iVar3 - iVar6;
      }
      uStack_1 = CONCAT44(uStack_1._4_4_,this_01);
      func_?(&uStack_1,this_01);
      this_00 = (this->fields).highScoreListDatas;
      uStack_1 = CONCAT44(iVar6,(List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)uStack_1);
      if (this_00 !=
          (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
           *)0x0) {
        value.topRank = iVar6;
        value.scoreList = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)uStack_1;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
        Int32Enum,GamePassesHighScoreList+HighScoreListData]::
        Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__Add
                  ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                   this_00,(this->fields).currentState,value,
                   MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Add_GamePassesHighScoreList__GamePassesHighScoreListState__GamePassesHighScoreList__HighScoreListData_
                  );
        return;
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
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,StringLiteral_Loading_High_Scores___);
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
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
        uVar6._1_1_ = (pSVar5->SendReliable).Channel;
        uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x110))
                    (piVar3,0x68,this_01,(pSVar5->SendReliable).DeliveryMode,uVar6);
          return;
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
      (*(code *)(pTVar1->klass->vtable).set_text.method)
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
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
        uVar6._1_1_ = (pSVar5->SendReliable).Channel;
        uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x110))
                    (piVar3,0x6c,this_01,(pSVar5->SendReliable).DeliveryMode,uVar6);
          return;
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
  pAVar1 = TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate =
         (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0;
    pAStack4 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas___Class *)0x0;
code_?:
    func_?();
    return;
  }
  pAStack4 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)func_?();
  if (pAVar1 != (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
    TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate = pAVar1;
    pAVar3 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
    pAStack4 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
    pAStack4 =
         (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas___Class *)func_?();
    if (pAStack4 != (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas___Class *)0x0)
    goto code_?;
  }
  pAStack4 = pAVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral_High_Scores,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).highScoreListDatas;
    if (this_00 !=
        (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
         *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32Enum,GamePassesHighScoreList+HighScoreListData]::
              Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__ContainsKey
                        ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *
                         )this_00,3,
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
            (*(code *)(pTVar1->klass->vtable).set_text.method)
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
              this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                        func_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
              uVar8._0_1_ = (pSVar7->SendReliable).Encrypt;
              uVar8._1_1_ = (pSVar7->SendReliable).Channel;
              uVar8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
              if (pPVar6 != (PhotonPeer *)0x0) {
                (*(code *)(pPVar6->klass->vtable).SendOperation.method)
                          (pPVar6,0x68,this_01,(pSVar7->SendReliable).DeliveryMode,uVar8,
                           pPVar6->klass[1]._0.image);
                return;
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
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral_Top_Players,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).highScoreListDatas;
    if (this_00 !=
        (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
         *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32Enum,GamePassesHighScoreList+HighScoreListData]::
              Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__ContainsKey
                        ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *
                         )this_00,4,
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
            (*(code *)(pTVar1->klass->vtable).set_text.method)
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
              this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                        func_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
              uVar8._0_1_ = (pSVar7->SendReliable).Encrypt;
              uVar8._1_1_ = (pSVar7->SendReliable).Channel;
              uVar8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
              if (pPVar6 != (PhotonPeer *)0x0) {
                (*(code *)(pPVar6->klass->vtable).SendOperation.method)
                          (pPVar6,0x6c,this_01,(pSVar7->SendReliable).DeliveryMode,uVar8,
                           pPVar6->klass[1]._0.image);
                return;
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
            );
  index = 0;
  if (listToSort == (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)(*pcVar1)();
    return pLVar2;
  }
code_?:
  do {
    if ((listToSort->fields)._size <= index) {
      return (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)this_00;
    }
    index_00 = 0;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    for (; index_00 < (this_00->fields)._size; index_00 = index_00 + 1) {
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         listToSort,index,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                        );
      if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
      iVar4 = *(int *)((int)RVar3 + 0x10);
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index_00,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                        );
      if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (*(int *)((int)RVar3 + 0x10) < iVar4) {
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           listToSort,index,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                          );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Insert
                  ((List_1_System_Object_ *)this_00,index_00,(Object *)RVar3,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
                  );
        index = index + 1;
        goto code_?;
      }
    }
    RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       listToSort,index,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                      );
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)RVar3,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
              );
    index = index + 1;
  } while( true );
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
                    GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesHighScoreList____c__DisplayClass15_0___Start_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesHighScoreList____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(Object *)this,
             MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
  if (pDVar2 != (Delegate *)0x0) {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)
             func_?(pDVar2,
                             TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                            );
    if (pAVar1 != (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
      TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate = pAVar1;
      pAVar3 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                             );
      if (iVar4 != 0) goto code_?;
    }
    func_?(pDVar2,pAVar3);
    goto code_?;
  }
  TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate =
       (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0;
  iVar4 = 0;
code_?:
  func_?(TypeInfo__GamePassesHighScoreUpdateManager->static_fields,iVar4);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar5 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar5->fields).gameMode == 0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                     );
      func_?(&StringLiteral_Top_Players);
      cRam_? = '\x01';
    }
    pTVar6 = (this->fields).headerText;
    if (pTVar6 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar6->klass->vtable).set_text.method)
              (pTVar6,StringLiteral_Top_Players,
               (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pDVar7 = (this->fields).highScoreListDatas;
    if (pDVar7 == (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x4;
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Int32Enum,GamePassesHighScoreList+HighScoreListData]::
            Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__ContainsKey
                      ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                       pDVar7,4,
                       MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                      );
    if (bVar8 != 0) {
      (this->fields).currentState = 4;
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(&StringLiteral_Loading_Top_Players_Scores___);
      cRam_? = '\x01';
    }
    pGVar9 = (this->fields).waitForHighScore;
    if (pGVar9 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar9,1,(MethodInfo *)0x0);
    pTVar6 = (this->fields).loadingText;
    if (pTVar6 == (Text *)0x0) goto code_?;
    pLStack_10 = (List_1_System_String_ *)StringLiteral_Loading_Top_Players_Scores___;
    (*(code *)(pTVar6->klass->vtable).set_text.method)(pTVar6);
    method_00 = (MethodInfo *)0x0;
    (this->fields).currentState = 2;
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar11 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetTopHighScoreList
              (pMVar11,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                     );
      func_?(&StringLiteral_High_Scores);
      cRam_? = '\x01';
    }
    pTVar6 = (this->fields).headerText;
    if (pTVar6 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar6->klass->vtable).set_text.method)
              (pTVar6,StringLiteral_High_Scores,
               (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pDVar7 = (this->fields).highScoreListDatas;
    if (pDVar7 == (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x3;
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Int32Enum,GamePassesHighScoreList+HighScoreListData]::
            Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__ContainsKey
                      ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                       pDVar7,3,
                       MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                      );
    if (bVar8 == 0) {
      if (cRam_? == '\0') {
        func_?(&StringLiteral_Loading_High_Scores___);
        cRam_? = '\x01';
      }
      pGVar9 = (this->fields).waitForHighScore;
      if (pGVar9 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,1,(MethodInfo *)0x0);
      pTVar6 = (this->fields).loadingText;
      if (pTVar6 == (Text *)0x0) goto code_?;
      pLStack_10 = (List_1_System_String_ *)StringLiteral_Loading_High_Scores___;
      (*(code *)(pTVar6->klass->vtable).set_text.method)(pTVar6);
      (this->fields).currentState = 1;
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar11 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      method_00 = (MethodInfo *)&UNK_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetHighScoreList
                (pMVar11,(MethodInfo *)0x0);
    }
    else {
      (this->fields).currentState = 3;
code_?:
      pGVar9 = (this->fields).waitForHighScore;
      if (pGVar9 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,0,(MethodInfo *)0x0);
      GamePassesHighScoreList_CreateHighScoreList(this,(MethodInfo *)0x0);
    }
  }
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 != (EmbeddedPlayerConfig *)0x0) {
    pEVar12 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                        ((EmbeddedSiteConfigData *)&pLStack_10,this_00,(MethodInfo *)0x0);
    uVar13 = pEVar12->hideSignUp;
    uVar14._0_1_ = pEVar12->showTouristPromotion;
    uVar14._1_1_ = pEVar12->allowsOpenInNewTab;
    uVar14._2_1_ = pEVar12->allowsRedirectToWebpage;
    uVar14._3_1_ = pEVar12->allowsModals;
    uVar15._0_1_ = pEVar12->integratedSdk;
    uVar15._1_1_ = pEVar12->allowsFallbackAds;
    uVar15._2_1_ = pEVar12->showPlayButtonAd;
    uVar15._3_1_ = pEVar12->hideGoldShop;
    if (uVar13 == '\0') {
      if ((pEVar12->allowsModals == 0) && (pEVar12->allowsOpenInNewTab == 0)) {
        uVar16._0_1_ = pEVar12->showTouristPromotion;
        uVar16._1_1_ = pEVar12->allowsOpenInNewTab;
        uVar16._2_1_ = pEVar12->allowsRedirectToWebpage;
        uVar16._3_1_ = pEVar12->allowsModals;
        uVar16 = uVar16 >> 0x10 & 0xff;
      }
      else {
        uVar16 = 1;
      }
      bVar8 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if ((bVar8 & -(uVar16 != 0)) != 0) {
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (value,ExceptionArgument__Enum_obj,method_00);
        original = (this->fields).touristInformationPopup;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object,uVar14,uVar15);
        }
        pOVar17 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                            );
        if (value != (Object *)0x0) {
          value[1].klass = pOVar17;
          func_?(value + 1,pOVar17);
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__GamePassesHighScoreList____c__DisplayClass15_0___Start_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar9,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
        goto code_?;
      }
    }
    else {
      MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Dictionary__
            );
  (this->fields).highScoreListDatas = this_00;
  func_?(&(this->fields).highScoreListDatas,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

