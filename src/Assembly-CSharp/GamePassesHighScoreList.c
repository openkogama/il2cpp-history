
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
    func_?(_UNK_?);
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
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pTVar1,(MethodInfo *)0x0);
    }
  }
  func_?(0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  if (listOfScores != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    while( true ) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)listOfScores,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                         );
      if ((int)pOVar1 <= index) {
        return;
      }
      pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)listOfScores,index
                          ,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                         );
      if ((pIVar2 == (IEventSystemHandler *)0x0) ||
         (pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)listOfScores,
                              index,(MethodInfo *)pIVar2[2].klass),
         pMVar3 = 
         MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
         , pIVar2 == (IEventSystemHandler *)0x0)) break;
      userName = (String *)pIVar2[1].monitor;
      amountOfGamePoints = &UNK_?;
      pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)listOfScores,index
                          ,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                         );
      if (pIVar2 == (IEventSystemHandler *)0x0) break;
      profileID = pIVar2[1].klass;
      original = (XpBoostParticlePreviewer *)pMVar3->name;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        topRank = (int32_t)&UNK_?;
        func_?();
      }
      this_00 = (GamePassesHighScoreElement *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          (original,
                           GamePassesHighScoreElement_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreElement>_GamePassesHighScoreElement_
                          );
      pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)listOfScores,index
                          ,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                         );
      if ((pIVar2 == (IEventSystemHandler *)0x0) || (this_00 == (GamePassesHighScoreElement *)0x0))
      break;
      GamePassesHighScoreElement::GamePassesHighScoreElement_Initialize
                (this_00,topRank + index,userName,(int32_t)amountOfGamePoints,(int32_t)profileID,
                 *(bool *)&pIVar2[2].monitor,(MethodInfo *)0x0);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_01 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(Transform *)pMVar3->return_type,0,(MethodInfo *)0x0);
      if (index == 0) {
        GamePassesHighScoreElement::GamePassesHighScoreElement_DeactivateTopBorder
                  (this_00,(MethodInfo *)0x0);
      }
      index = index + 1;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateHighScoreList() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_CreateHighScoreList
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).highScoreListDatas;
  if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                 *)0x0) {
    GVar2 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[GamePassesHighScoreList+GamePassesHighScoreListState,GamePassesHighScoreList+HighScoreListData]
            ::
            Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData__get_Item
                      (pDVar1,(this->fields).currentState,
                       MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                      );
    puVar3 = (undefined *)GVar2.topRank;
    pDVar1 = (this->fields).highScoreListDatas;
    if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) {
      GVar2 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[GamePassesHighScoreList+GamePassesHighScoreListState,GamePassesHighScoreList+HighScoreListData]
              ::
              Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData__get_Item
                        (pDVar1,(this->fields).currentState,
                         MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                        );
      this_00 = GVar2.scoreList;
      if (cRam_? == '\0') {
        puVar3 = &UNK_?;
        func_?(_UNK_?,GVar2.topRank);
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
          puVar3 = (undefined *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar4,(Transform *)0x0,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pTVar4,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        iVar5 = 0;
        if (this_00 != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
          while( true ) {
            pMVar6 = 
            MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
            ;
            pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                               );
            if ((int)pOVar7 <= (int)pMVar6) {
              GamePassesHighScoreList_HandlePlayerNotCentered(this,(MethodInfo *)0x0);
              return;
            }
            pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                                iVar5,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                               );
            if (pIVar8 == (IEventSystemHandler *)0x0) break;
            amountOfGamePoints = pIVar8[2].klass;
            pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                                iVar5,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                               );
            if (pIVar8 == (IEventSystemHandler *)0x0) break;
            userName = (String *)pIVar8[1].monitor;
            pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                                iVar5,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                               );
            if (pIVar8 == (IEventSystemHandler *)0x0) break;
            profileID = pIVar8[1].klass;
            pGVar9 = (this->fields).highScoreElementPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            pGVar9 = (GamePassesHighScoreElement *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)pGVar9,
                                GamePassesHighScoreElement_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreElement>_GamePassesHighScoreElement_
                               );
            pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                                iVar5,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                               );
            if ((pIVar8 == (IEventSystemHandler *)0x0) ||
               (pGVar9 == (GamePassesHighScoreElement *)0x0)) break;
            GamePassesHighScoreElement::GamePassesHighScoreElement_Initialize
                      (pGVar9,(int32_t)(puVar3 + iVar5),userName,(int32_t)amountOfGamePoints,
                       (int32_t)profileID,*(bool *)&pIVar8[2].monitor,(MethodInfo *)0x0);
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pGVar9,(MethodInfo *)0x0);
            if (pTVar4 == (Transform *)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar4,(this->fields).contentList,0,(MethodInfo *)0x0);
            if (iVar5 == 0) {
              puVar3 = &UNK_?;
              GamePassesHighScoreElement::GamePassesHighScoreElement_DeactivateTopBorder
                        (pGVar9,(MethodInfo *)0x0);
            }
            iVar5 = iVar5 + 1;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void CreateHighScoreListData(HighScoreDatas) */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_CreateHighScoreListData
               (GamePassesHighScoreList *this,HighScoreDatas *newHighScoreData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newHighScoreData != (HighScoreDatas *)0x0) {
    this_02 = (MethodInfo *)(newHighScoreData->fields).highScores;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (GamePassesHighScoreList *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                             );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_01,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
              );
    iVar1 = 0;
    if (this_02 != (MethodInfo *)0x0) {
code_?:
      iVar2 = iVar1;
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                         );
      if (iVar2 < (int)pOVar3) {
        index = (HighScoreDatas *)0x0;
        while( true ) {
          if (this_01 == (GamePassesHighScoreList *)0x0) goto code_?;
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                             );
          this_02 = 
          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
          ;
          if ((int)pOVar3 <= (int)index) {
            pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                                ,iVar1,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                               );
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pIVar4,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
                      );
            iVar1 = iVar1 + 1;
            goto code_?;
          }
          pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                              ,iVar1,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                             );
          if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
          this = (GamePassesHighScoreList *)
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
          ;
          pIVar5 = pIVar4[2].klass;
          this_02 = (MethodInfo *)&UNK_?;
          pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                             );
          if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
          if ((int)pIVar4[2].klass < (int)pIVar5) break;
          index = (HighScoreDatas *)((int)&index->klass + 1);
        }
        pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,iVar1,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                           );
        item._4_4_ = 
        MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
        ;
        item.rgba = (int32_t)pIVar4;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
        List_1_UnityEngine_Color32__Insert
                  ((List_1_UnityEngine_Color32_ *)this_01,(int32_t)index,item,in_stack_6);
        iVar1 = iVar1 + 1;
        this = this_01;
        newHighScoreData = index;
        goto code_?;
      }
      iVar1 = (newHighScoreData->fields).topRank;
      if (iVar1 == 1) {
        iVar7 = 1;
      }
      else {
        iVar7 = GamePassesHighScoreList_GetPlayerPosition
                          (this,(List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)this_01,
                           (MethodInfo *)0x0);
        iVar7 = iVar1 - iVar7;
      }
      this_00 = (this->fields).highScoreListDatas;
      if (this_00 !=
          (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
           *)0x0) {
        value.topRank = iVar7;
        value.scoreList = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)this_01;
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[GamePassesHighScoreList+GamePassesHighScoreListState,GamePassesHighScoreList+HighScoreListData]
        ::
        Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData__Add
                  (this_00,(this->fields).currentState,value,
                   MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Add_GamePassesHighScoreList__GamePassesHighScoreListState__GamePassesHighScoreList__HighScoreListData_
                  );
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_Exit
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__GamePassesHighScoreList->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__GamePassesHighScoreList___Exit_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__GamePassesHighScoreList->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__GamePassesHighScoreList->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  if (highScoresEntries != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    while( true ) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          highScoresEntries,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                         );
      if ((int)pOVar1 <= index) {
        return 0;
      }
      pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)highScoresEntries,
                          index,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                         );
      if (pIVar2 == (IEventSystemHandler *)0x0) break;
      pIVar3 = pIVar2[1].klass;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame *)0x0) break;
      this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (this_01 == (MVLocalPlayer *)0x0) break;
      pIVar4 = (IEventSystemHandler__Class *)
               UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_01,(MethodInfo *)0x0
                         );
      if (pIVar3 == pIVar4) {
        return index;
      }
      index = index + 1;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void HandlePlayerNotCentered() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_HandlePlayerNotCentered
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (this->fields).currentState;
  if (key == 
      GamePassesHighScoreList_GamePassesHighScoreListState__Enum_ShowingTopPlayersHighScoreList) {
    return;
  }
  pDVar1 = (this->fields).highScoreListDatas;
  if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                 *)0x0) {
    GVar2 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[GamePassesHighScoreList+GamePassesHighScoreListState,GamePassesHighScoreList+HighScoreListData]
             ::
             Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData__get_Item
                       (pDVar1,key,
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
      GVar2 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[GamePassesHighScoreList+GamePassesHighScoreListState,GamePassesHighScoreList+HighScoreListData]
               ::
               Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData__get_Item
                         (pDVar1,(this->fields).currentState,
                          MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                         );
      if (GVar2.scoreList != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                             GVar2.scoreList,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                            );
        iVar6 = ((this->fields).middlePosition - (int)pOVar5) + iVar3;
        b = iVar4;
        if (-1 < iVar6) {
          b = iVar6;
        }
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min_1
                          (iVar4,b,(MethodInfo *)0x0);
        pTVar7 = (this->fields).contentList;
        if ((pTVar7 != (Transform *)0x0) &&
           (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pTVar7,(MethodInfo *)0x0),
           pTVar7 != (Transform *)0x0)) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                              ((Vector3 *)&stack0xffffffe4,pTVar7,(MethodInfo *)0x0);
          fVar9 = pVVar8->z;
          uVar10 = pVVar8->x;
          fVar11 = (this->fields).moveAmountPerElement;
          pTVar7 = (this->fields).contentList;
          iVar4 = (this->fields).middlePosition;
          fVar12 = (this->fields).topPadding;
          fVar13 = (this->fields).moveAmountPerElement;
          if ((pTVar7 != (Transform *)0x0) &&
             (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pTVar7,(MethodInfo *)0x0),
             pTVar7 != (Transform *)0x0)) {
            value.y = (float)iVar3 * fVar11 + fVar12 + (float)iVar4 * fVar13;
            value.x = (float)uVar10;
            value.z = fVar9;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar7,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void LoadDone() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_LoadDone
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  this_00 = (this->fields).waitForHighScore;
  if (this_00 == (GameObject *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,0,(MethodInfo *)0x0);
  iVar2 = (this->fields).currentState;
  if (iVar2 == 1) {
    (this->fields).currentState = 3;
  }
  else if (iVar2 == 2) {
    (this->fields).currentState = 4;
    return;
  }
  return;
}


/* Void LoadLocalPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_LoadLocalPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        piVar3 = *(int **)(in_stack_4 + 0x10);
        this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        if (piVar3 != (int *)0x0) {
          uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
          uVar6._1_1_ = (pSVar5->SendReliable).Channel;
          uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
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
    func_?(_UNK_?);
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
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        piVar3 = *(int **)(in_stack_4 + 0x10);
        this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        if (piVar3 != (int *)0x0) {
          uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
          uVar6._1_1_ = (pSVar5->SendReliable).Channel;
          uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesHighScoreUpdateManager->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__GamePassesHighScoreUpdateManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesHighScoreUpdateManager);
  }
  pAVar1 = TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
             ,
             MethodInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>__Action_System__Object__void__
            );
  pAStack2 =
       (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0;
  if (pAStack2 != (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
    if (pAStack2->klass ==
        TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
      pAStack3 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate = pAVar1;
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
    iVar1 = (this->fields).currentState;
    if (iVar1 == 1) {
      (this->fields).currentState = 3;
    }
    else if (iVar1 == 2) {
      (this->fields).currentState = 4;
    }
    GamePassesHighScoreList_CreateHighScoreListData(this,newHighScoreData,(MethodInfo *)0x0);
    GamePassesHighScoreList_CreateHighScoreList(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetToLocalPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_SetToLocalPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      bVar2 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[GamePassesHighScoreList+GamePassesHighScoreListState,GamePassesHighScoreList+HighScoreListData]
              ::
              Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData__ContainsKey
                        (this_00,
                         GamePassesHighScoreList_GamePassesHighScoreListState__Enum_ShowingLocalPlayerHighScoreList
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                        );
      if (bVar2 == 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
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
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
              if (cRam_? == '\0') {
                func_?(_UNK_?,pSVar4);
                cRam_? = '\x01';
              }
              pPVar6 = (pMVar5->fields).peer;
              this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                        func_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
              System.Core.dll::System::Collections::Generic::
              HashSet`1[AvatarModifierPackage+AvatarModifier]::
              HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                        (this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
                func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
              if (pPVar6 != (PhotonPeer *)0x0) {
                uVar8._0_1_ = (pSVar7->SendReliable).Encrypt;
                uVar8._1_1_ = (pSVar7->SendReliable).Channel;
                uVar8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
                (*(code *)(pPVar6->klass->vtable).SendOperation.method)
                          (pPVar6,0x68,this_01,(pSVar7->SendReliable).DeliveryMode,uVar8,
                           pPVar6->klass[1]._0.image);
                return;
              }
              func_?(0);
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
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetToTopPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_SetToTopPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      bVar2 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[GamePassesHighScoreList+GamePassesHighScoreListState,GamePassesHighScoreList+HighScoreListData]
              ::
              Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData__ContainsKey
                        (this_00,
                         GamePassesHighScoreList_GamePassesHighScoreListState__Enum_ShowingTopPlayersHighScoreList
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                        );
      if (bVar2 == 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
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
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
              if (cRam_? == '\0') {
                func_?(_UNK_?,pSVar4);
                cRam_? = '\x01';
              }
              pPVar6 = (pMVar5->fields).peer;
              this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                        func_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
              System.Core.dll::System::Collections::Generic::
              HashSet`1[AvatarModifierPackage+AvatarModifier]::
              HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                        (this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
                func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
              if (pPVar6 != (PhotonPeer *)0x0) {
                uVar8._0_1_ = (pSVar7->SendReliable).Encrypt;
                uVar8._1_1_ = (pSVar7->SendReliable).Channel;
                uVar8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
                (*(code *)(pPVar6->klass->vtable).SendOperation.method)
                          (pPVar6,0x6c,this_01,(pSVar7->SendReliable).DeliveryMode,uVar8,
                           pPVar6->klass[1]._0.image);
                return;
              }
              func_?(0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
            );
  index = 0;
  if (listToSort != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
code_?:
    do {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)listToSort,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                         );
      if ((int)pOVar1 <= index) {
        return (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)this_00;
      }
      pLVar2 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0;
      while( true ) {
        if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                           );
        if ((int)pOVar1 <= (int)pLVar2) {
          pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)listToSort,
                              index,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                             );
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pIVar3,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
                    );
          index = index + 1;
          goto code_?;
        }
        pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)listToSort,index
                            ,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                           );
        if (pIVar3 == (IEventSystemHandler *)0x0) goto code_?;
        puVar4 = &UNK_?;
        pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                            (int32_t)pLVar2,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                           );
        if (pIVar3 == (IEventSystemHandler *)0x0) goto code_?;
        if ((int)pIVar3[2].klass < (int)puVar4) break;
        pLVar2 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)((int)&pLVar2->klass + 1);
      }
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)listToSort,index,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                         );
      item._4_4_ = 
      MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
      ;
      item.rgba = (int32_t)pIVar3;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Insert
                ((List_1_UnityEngine_Color32_ *)this_00,(int32_t)pLVar2,item,in_stack_5);
      index = index + 1;
      listToSort = pLVar2;
    } while( true );
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  pLVar2 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)(*pcVar6)();
  return pLVar2;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_Start
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesHighScoreUpdateManager->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__GamePassesHighScoreUpdateManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesHighScoreUpdateManager);
  }
  pAVar1 = TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
             ,
             MethodInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>__Action_System__Object__void__
            );
  pAVar3 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0;
  if (pAVar3 != (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>)
    {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate = pAVar1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar4 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar4->fields).gameMode == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pTVar5 = (this->fields).headerText;
    if (pTVar5 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar5->klass->vtable).set_text.method)();
    pDVar6 = (this->fields).highScoreListDatas;
    if (pDVar6 == (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x4;
    bVar7 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[GamePassesHighScoreList+GamePassesHighScoreListState,GamePassesHighScoreList+HighScoreListData]
            ::
            Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData__ContainsKey
                      (pDVar6,
                       GamePassesHighScoreList_GamePassesHighScoreListState__Enum_ShowingTopPlayersHighScoreList
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                      );
    if (bVar7 != 0) {
      (this->fields).currentState = 4;
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar8 = (this->fields).waitForHighScore;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,1,(MethodInfo *)0x0);
    pTVar5 = (this->fields).loadingText;
    if (pTVar5 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar5->klass->vtable).set_text.method)();
    (this->fields).currentState = 2;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar9 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetTopHighScoreList
              (pMVar9,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pTVar5 = (this->fields).headerText;
    if (pTVar5 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar5->klass->vtable).set_text.method)();
    pDVar6 = (this->fields).highScoreListDatas;
    if (pDVar6 == (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x3;
    bVar7 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[GamePassesHighScoreList+GamePassesHighScoreListState,GamePassesHighScoreList+HighScoreListData]
            ::
            Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData__ContainsKey
                      (pDVar6,
                       GamePassesHighScoreList_GamePassesHighScoreListState__Enum_ShowingLocalPlayerHighScoreList
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                      );
    if (bVar7 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar8 = (this->fields).waitForHighScore;
      if (pGVar8 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,1,(MethodInfo *)0x0);
      pTVar5 = (this->fields).loadingText;
      if (pTVar5 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar5->klass->vtable).set_text.method)();
      (this->fields).currentState = 1;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar9 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      method_00 = (MethodInfo *)&UNK_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetHighScoreList
                (pMVar9,(MethodInfo *)0x0);
    }
    else {
      (this->fields).currentState = 3;
code_?:
      pGVar8 = (this->fields).waitForHighScore;
      if (pGVar8 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,0,(MethodInfo *)0x0);
      GamePassesHighScoreList_CreateHighScoreList(this,(MethodInfo *)0x0);
    }
  }
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 != (EmbeddedPlayerConfig *)0x0) {
    pEVar10 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                        ((EmbeddedSiteConfigData *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
    EVar11 = *pEVar10;
    if ((EVar11.allowsModals == 0) && (EVar11.allowsOpenInNewTab == 0)) {
      uVar12 = EVar11._8_4_ >> 0x10 & 0xff;
    }
    else {
      uVar12 = 1;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    bVar7 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if ((bVar7 != 0) && (uVar12 != 0)) {
      this_01 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
      pXVar13 = (XpBoostParticlePreviewer *)(this->fields).touristInformationPopup;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          (pXVar13,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      if (this_01 == (ScaleAnimationBase *)0x0) goto code_?;
      (this_01->fields)._._._._.m_CachedPtr = pXVar13;
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this_01,
                 MethodInfo__GamePassesHighScoreList___Start_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar8,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void <Exit>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList__Exit_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GamePassesHighScoreList() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList__ctor
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Dictionary__
            );
  (this->fields).highScoreListDatas = this_00;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

