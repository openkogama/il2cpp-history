
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).contentList;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    iVar5 = (*pcRam_?)(pvVar2);
    while( true ) {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return;
      }
      pTVar1 = (this->fields).contentList;
      if (pTVar1 == (Transform *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      pvVar2 = (void *)(*pcRam_?)(pvVar2,iVar5);
      context = (Object_1 *)
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar2,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      if (context == (Object_1 *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__RectTransform);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar6 = (Object_1 *)0x0;
      if ((RectTransform__Class *)context->klass == TypeInfo__UnityEngine__RectTransform) {
        pOVar6 = context;
      }
      if (pOVar6 != (Object_1 *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                  ((Object *)StringLiteral_Parent_of_RectTransform_is_being,context,
                   (MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (context->fields).m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)context,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar2);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                (context,0.0,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateHighScoreElements(List`1[MV.WorldObject.GamePassSystem.HighScoreEntry], Int32) */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_CreateHighScoreElements
               (GamePassesHighScoreList *this,
               List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *listOfScores,int32_t topRank,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePassesHighScoreElement_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreElement>_GamePassesHighScoreElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (listOfScores != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    lVar2 = 0x20;
    do {
      if ((listOfScores->fields)._size <= (int)uVar1) {
        return;
      }
      if ((uint)(listOfScores->fields)._size <= uVar1) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pHVar4 = (listOfScores->fields)._items;
      if (pHVar4 == (HighScoreEntry__Array *)0x0) break;
      if ((uint)pHVar4->max_length <= uVar1) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar5 = *(longlong *)((longlong)pHVar4->vector + lVar2 + -0x20);
      if (lVar5 == 0) break;
      amountOfGamePoints = *(int32_t *)(lVar5 + 0x20);
      lVar5 = *(longlong *)((longlong)pHVar4->vector + lVar2 + -0x20);
      userName = *(String **)(lVar5 + 0x18);
      profileID = *(int32_t *)(lVar5 + 0x10);
      pGVar6 = (this->fields).highScoreElementPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar6 = (GamePassesHighScoreElement *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar6,
                          GamePassesHighScoreElement_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreElement>_GamePassesHighScoreElement_
                         );
      if ((uint)(listOfScores->fields)._size <= uVar1) goto code_?;
      pHVar4 = (listOfScores->fields)._items;
      if (pHVar4 == (HighScoreEntry__Array *)0x0) break;
      if ((uint)pHVar4->max_length <= uVar1) goto code_?;
      lVar5 = *(longlong *)((longlong)pHVar4->vector + lVar2 + -0x20);
      if ((lVar5 == 0) || (pGVar6 == (GamePassesHighScoreElement *)0x0)) break;
      GamePassesHighScoreElement::GamePassesHighScoreElement_Initialize
                (pGVar6,uVar1 + topRank,userName,amountOfGamePoints,profileID,
                 *(bool *)(lVar5 + 0x24),(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pGVar6->fields)._._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar6,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      pvVar7 = (void *)(*pcRam_?)(pvVar7);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
            Unmarshal_UnmarshalUnityObject
                      (pvVar7,
                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                      );
      if (obj == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)();
      if (uVar1 == 0) {
        this_00 = (pGVar6->fields).topBorderGameObject;
        if (this_00 == (GameObject *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
      }
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 8;
    } while( true );
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateHighScoreList() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_CreateHighScoreList
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).highScoreListDatas;
  if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                 *)0x0) {
    lVar2 = FUN_?(&uStack_3,pDVar1,(this->fields).currentState);
    pDVar1 = (this->fields).highScoreListDatas;
    iVar4 = *(int32_t *)(lVar2 + 8);
    if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) {
      puVar5 = (undefined8 *)FUN_?(&uStack_3,pDVar1,(this->fields).currentState);
      listOfScores = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)*puVar5;
      GamePassesHighScoreList_ClearHighScoreElements(this,(MethodInfo *)0x0);
      GamePassesHighScoreList_CreateHighScoreElements(this,listOfScores,iVar4,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this->fields).currentState == 4) {
        return;
      }
      if ((this->fields).highScoreListDatas !=
          (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
           *)0x0) {
        puVar5 = (undefined8 *)FUN_?(&uStack_3);
        iVar4 = GamePassesHighScoreList_GetPlayerPosition
                          (this,(List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)*puVar5,
                           (MethodInfo *)0x0);
        if (iVar4 <= (this->fields).scoreElementShowCapacity) {
          return;
        }
        pDVar1 = (this->fields).highScoreListDatas;
        iVar6 = (iVar4 - (this->fields).middlePosition) + 1;
        if (pDVar1 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                       *)0x0) {
          plVar7 = (longlong *)FUN_?(&uStack_3,pDVar1,(this->fields).currentState);
          if (*plVar7 != 0) {
            iVar8 = ((this->fields).middlePosition - *(int *)(*plVar7 + 0x18)) + iVar4;
            iVar9 = iVar6;
            if (-1 < iVar8) {
              iVar9 = iVar8;
            }
            if (iVar6 < iVar9) {
              iVar9 = iVar6;
            }
            pTVar10 = (this->fields).contentList;
            if ((pTVar10 != (Transform *)0x0) &&
               (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pTVar10,(MethodInfo *)0x0),
               pTVar10 != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_11 = 0;
              uStack_12 = 0;
              pvVar13 = (pTVar10->fields)._._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
              (*pcRam_?)(pvVar13);
              uVar16 = uStack_12;
              pTVar10 = (this->fields).contentList;
              uStack_3 = CONCAT44((float)iVar9 * (this->fields).moveAmountPerElement +
                                   (this->fields).topPadding +
                                   (float)(this->fields).middlePosition *
                                   (this->fields).moveAmountPerElement,(int)uStack_11);
              if ((pTVar10 != (Transform *)0x0) &&
                 (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pTVar10,(MethodInfo *)0x0),
                 pTVar10 != (Transform *)0x0)) {
                uStack_11 = uStack_3;
                uStack_12 = uVar16;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar13 = (pTVar10->fields)._._.m_CachedPtr;
                if (pvVar13 != (void *)0x0) {
                  pcVar14 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                    uVar15 = func_?(&UNK_?);
                    FUN_?(uVar15,0);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pcRam_? = pcVar14;
                  (*pcRam_?)(pvVar13,&uStack_11);
                  return;
                }
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void CreateHighScoreListData(HighScoreDatas) */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_CreateHighScoreListData
               (GamePassesHighScoreList *this,HighScoreDatas *newHighScoreData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Add_GamePassesHighScoreList__GamePassesHighScoreListState__GamePassesHighScoreList__HighScoreListData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStack_1 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0;
  uStack_2._0_4_ = 0;
  uStack_2._4_4_ = 0;
  if (newHighScoreData != (HighScoreDatas *)0x0) {
    pLVar3 = (newHighScoreData->fields).highScores;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    highScoresEntries =
         (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                      );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               highScoresEntries,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
              );
    iVar4 = 0;
    if (pLVar3 != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
code_?:
      if (iVar4 < (pLVar3->fields)._size) {
        index = 0;
        if (highScoresEntries == (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0)
        goto code_?;
        for (; index < (highScoresEntries->fields)._size; index = index + 1) {
          lVar5 = FUN_?(pLVar3,iVar4);
          if (lVar5 == 0) goto code_?;
          iVar6 = *(int *)(lVar5 + 0x20);
          lVar5 = FUN_?(highScoresEntries,index);
          if (lVar5 == 0) goto code_?;
          if (*(int *)(lVar5 + 0x20) < iVar6) {
            pOVar7 = (Object *)FUN_?(pLVar3,iVar4);
            in_R9 = 
            MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
            ;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Insert
                      ((List_1_System_Object_ *)highScoresEntries,index,pOVar7,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
                      );
            iVar4 = iVar4 + 1;
            goto code_?;
          }
        }
        pOVar7 = (Object *)FUN_?(pLVar3,iVar4);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)highScoresEntries,pOVar7,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
                  );
        iVar4 = iVar4 + 1;
        goto code_?;
      }
      iVar4 = (newHighScoreData->fields).topRank;
      if (iVar4 == 1) {
        GStack_8.topRank = 1;
      }
      else {
        iVar9 = GamePassesHighScoreList_GetPlayerPosition(this,highScoresEntries,(MethodInfo *)0x0);
        GStack_8.topRank = iVar4 - iVar9;
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&pLStack_1 >> 0xc);
        puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar12 = *puVar11;
          LOCK();
          uVar13 = *puVar11;
          if (uVar12 == uVar13) {
            *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (uVar12 != uVar13);
      }
      this_00 = (this->fields).highScoreListDatas;
      uStack_2._0_4_ = GStack_8.topRank;
      pLStack_1 = highScoresEntries;
      if (this_00 !=
          (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
           *)0x0) {
        GStack_8._12_4_ = uStack_2._4_4_;
        GStack_8.scoreList = highScoresEntries;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
        Int32Enum,GamePassesHighScoreList+HighScoreListData]::
        Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__TryInsert
                  ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                   this_00,(this->fields).currentState,&GStack_8,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Add_GamePassesHighScoreList__GamePassesHighScoreListState__GamePassesHighScoreList__HighScoreListData_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_Exit
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesHighScoreList____c___Exit_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesHighScoreList____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GamePassesHighScoreList____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePassesHighScoreList____c);
  }
  this_01 = TypeInfo__GamePassesHighScoreList____c->static_fields->__9__31_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__GamePassesHighScoreList____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesHighScoreList____c);
    }
    object = TypeInfo__GamePassesHighScoreList____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__GamePassesHighScoreList____c___Exit_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesHighScoreList____c->static_fields->__9__31_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__GamePassesHighScoreList____c->static_fields->__9__31_0
                     >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Int32 GetPlayerPosition(List`1[MV.WorldObject.GamePassSystem.HighScoreEntry]) */

int32_t Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_GetPlayerPosition
                  (GamePassesHighScoreList *this,
                  List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *highScoresEntries,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (highScoresEntries != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    lVar2 = 0x20;
    while( true ) {
      if ((highScoresEntries->fields)._size <= (int)uVar1) {
        return 0;
      }
      if ((uint)(highScoresEntries->fields)._size <= uVar1) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      pHVar5 = (highScoresEntries->fields)._items;
      if (pHVar5 == (HighScoreEntry__Array *)0x0) break;
      if ((uint)pHVar5->max_length <= uVar1) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      lVar6 = *(longlong *)((longlong)pHVar5->vector + lVar2 + -0x20);
      if (lVar6 == 0) break;
      iVar7 = *(int *)(lVar6 + 0x10);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar8 == (MVGameControllerBase *)0x0) ||
           (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
          (this_00 = (pMVar9->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
         (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar10 == (MVLocalPlayer *)0x0)) break;
      if (iVar7 == (pMVar10->fields)._._ProfileID_k__BackingField) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 8;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Void HandlePlayerNotCentered() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_HandlePlayerNotCentered
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).currentState == 4) {
    return;
  }
  if ((this->fields).highScoreListDatas !=
      (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
       *)0x0) {
    puVar1 = (undefined8 *)FUN_?(&uStack_2);
    iVar3 = GamePassesHighScoreList_GetPlayerPosition
                      (this,(List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)*puVar1,
                       (MethodInfo *)0x0);
    if (iVar3 <= (this->fields).scoreElementShowCapacity) {
      return;
    }
    pDVar4 = (this->fields).highScoreListDatas;
    iVar5 = (iVar3 - (this->fields).middlePosition) + 1;
    if (pDVar4 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) {
      plVar6 = (longlong *)FUN_?(&uStack_2,pDVar4,(this->fields).currentState);
      if (*plVar6 != 0) {
        iVar7 = ((this->fields).middlePosition - *(int *)(*plVar6 + 0x18)) + iVar3;
        iVar8 = iVar5;
        if (-1 < iVar7) {
          iVar8 = iVar7;
        }
        if (iVar5 < iVar8) {
          iVar8 = iVar5;
        }
        pTVar9 = (this->fields).contentList;
        if ((pTVar9 != (Transform *)0x0) &&
           (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pTVar9,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0))
        {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_10 = 0;
          uStack_11 = 0;
          pvVar12 = (pTVar9->fields)._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcRam_? = pcVar13;
          (*pcRam_?)(pvVar12);
          uVar15 = uStack_11;
          pTVar9 = (this->fields).contentList;
          uStack_2 = CONCAT44((float)iVar8 * (this->fields).moveAmountPerElement +
                               (this->fields).topPadding +
                               (float)(this->fields).middlePosition *
                               (this->fields).moveAmountPerElement,(int)uStack_10);
          if ((pTVar9 != (Transform *)0x0) &&
             (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pTVar9,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0
             )) {
            uStack_10 = uStack_2;
            uStack_11 = uVar15;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar12 = (pTVar9->fields)._._.m_CachedPtr;
            if (pvVar12 != (void *)0x0) {
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcRam_? = pcVar13;
              (*pcRam_?)(pvVar12,&uStack_10);
              return;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FUN_?();
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void LoadLocalPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_LoadLocalPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Loading_High_Scores___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForHighScore;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).loadingText;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,StringLiteral_Loading_High_Scores___,(pTVar1->klass->vtable).set_text.method
                );
      bVar2 = cRam_? == '\0';
      (this->fields).currentState = 1;
      if (bVar2) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 != (MVGameControllerBase *)0x0) &&
          (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
         (pMVar5 = (pMVar4->fields).operationRequests,
         pMVar5 != (MVNetworkGame_OperationRequests *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar6 = (pMVar5->fields).peer;
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        pMVar7 = 
        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar6 != (PhotonPeer *)0x0) {
          (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                    (pPVar6,CONCAT71((int7)((ulonglong)pMVar7 >> 8),0x68),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar6->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void LoadTopPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_LoadTopPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Loading_Top_Players_Scores___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).waitForHighScore;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).loadingText;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,StringLiteral_Loading_Top_Players_Scores___,
                 (pTVar1->klass->vtable).set_text.method);
      bVar2 = cRam_? == '\0';
      (this->fields).currentState = 2;
      if (bVar2) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 != (MVGameControllerBase *)0x0) &&
          (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
         (pMVar5 = (pMVar4->fields).operationRequests,
         pMVar5 != (MVNetworkGame_OperationRequests *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar6 = (pMVar5->fields).peer;
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        pMVar7 = 
        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar6 != (PhotonPeer *)0x0) {
          (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                    (pPVar6,CONCAT71((int7)((ulonglong)pMVar7 >> 8),0x6c),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar6->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_OnDestroy
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesHighScoreUpdateManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate =
         (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)
             FUN_?(pDVar2,
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                          );
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate = pAVar1;
    pAVar3 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
    lVar5 = FUN_?(pDVar2,
                          TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>)
    ;
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__GamePassesHighScoreUpdateManager->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void OnHighScoreUpdate(HighScoreDatas) */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_OnHighScoreUpdate
               (GamePassesHighScoreList *this,HighScoreDatas *newHighScoreData,MethodInfo *method)

{
  this_00 = (this->fields).waitForHighScore;
  if (this_00 == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,0,(MethodInfo *)0x0);
  if ((this->fields).currentState == 1) {
    (this->fields).currentState = 3;
  }
  if ((this->fields).currentState == 2) {
    (this->fields).currentState = 4;
  }
  GamePassesHighScoreList_CreateHighScoreListData(this,newHighScoreData,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                  ,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields).highScoreListDatas;
  if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                 *)0x0) {
    lVar3 = FUN_?(&uStack_4,pDVar2,(this->fields).currentState);
    pDVar2 = (this->fields).highScoreListDatas;
    iVar5 = *(int32_t *)(lVar3 + 8);
    if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) {
      puVar6 = (undefined8 *)FUN_?(&uStack_4,pDVar2,(this->fields).currentState);
      listOfScores = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)*puVar6;
      GamePassesHighScoreList_ClearHighScoreElements(this,(MethodInfo *)0x0);
      GamePassesHighScoreList_CreateHighScoreElements(this,listOfScores,iVar5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this->fields).currentState == 4) {
        return;
      }
      if ((this->fields).highScoreListDatas !=
          (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
           *)0x0) {
        puVar6 = (undefined8 *)FUN_?(&uStack_4);
        iVar5 = GamePassesHighScoreList_GetPlayerPosition
                          (this,(List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)*puVar6,
                           (MethodInfo *)0x0);
        if (iVar5 <= (this->fields).scoreElementShowCapacity) {
          return;
        }
        pDVar2 = (this->fields).highScoreListDatas;
        iVar7 = (iVar5 - (this->fields).middlePosition) + 1;
        if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                       *)0x0) {
          plVar8 = (longlong *)FUN_?(&uStack_4,pDVar2,(this->fields).currentState);
          if (*plVar8 != 0) {
            iVar9 = ((this->fields).middlePosition - *(int *)(*plVar8 + 0x18)) + iVar5;
            iVar10 = iVar7;
            if (-1 < iVar9) {
              iVar10 = iVar9;
            }
            if (iVar7 < iVar10) {
              iVar10 = iVar7;
            }
            pTVar11 = (this->fields).contentList;
            if ((pTVar11 != (Transform *)0x0) &&
               (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pTVar11,(MethodInfo *)0x0),
               pTVar11 != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_12 = 0;
              uStack_13 = 0;
              pvVar14 = (pTVar11->fields)._._.m_CachedPtr;
              if (pvVar14 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
              (*pcRam_?)(pvVar14);
              uVar16 = uStack_13;
              pTVar11 = (this->fields).contentList;
              uStack_4 = CONCAT44((float)iVar10 * (this->fields).moveAmountPerElement +
                                   (this->fields).topPadding +
                                   (float)(this->fields).middlePosition *
                                   (this->fields).moveAmountPerElement,(int)uStack_12);
              if ((pTVar11 != (Transform *)0x0) &&
                 (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pTVar11,(MethodInfo *)0x0),
                 pTVar11 != (Transform *)0x0)) {
                uStack_12 = uStack_4;
                uStack_13 = uVar16;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar14 = (pTVar11->fields)._._.m_CachedPtr;
                if (pvVar14 != (void *)0x0) {
                  pcVar1 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                    uVar15 = func_?(&UNK_?);
                    FUN_?(uVar15,0);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  pcRam_? = pcVar1;
                  (*pcRam_?)(pvVar14,&uStack_12);
                  return;
                }
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetToLocalPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_SetToLocalPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_High_Scores);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).headerText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,StringLiteral_High_Scores,(pTVar1->klass->vtable).set_text.method);
    pDVar2 = (this->fields).highScoreListDatas;
    if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Int32Enum,GamePassesHighScoreList+HighScoreListData]::
               Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__FindEntry
                         ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                           *)pDVar2,3,
                          MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                          ->klass->rgctx_data[0x21].method);
      if (iVar3 < 0) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_Loading_High_Scores___);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar4 = (this->fields).waitForHighScore;
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,1,(MethodInfo *)0x0);
          pTVar1 = (this->fields).loadingText;
          if (pTVar1 != (Text *)0x0) {
            (*(pTVar1->klass->vtable).set_text.methodPtr)
                      (pTVar1,StringLiteral_Loading_High_Scores___,
                       (pTVar1->klass->vtable).set_text.method);
            bVar5 = cRam_? == '\0';
            (this->fields).currentState = 1;
            if (bVar5) {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar6 != (MVGameControllerBase *)0x0) &&
                (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
               (pMVar8 = (pMVar7->fields).operationRequests,
               pMVar8 != (MVNetworkGame_OperationRequests *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pPVar9 = (pMVar8->fields).peer;
              this_00 = (Dictionary_2_System_Byte_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                     );
              pMVar10 = 
              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar9 != (PhotonPeer *)0x0) {
                uStack_11 = (pPVar9->klass->vtable).SendOperation.method;
                (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                          (pPVar9,CONCAT71((int7)((ulonglong)pMVar10 >> 8),0x68),this_00,
                           TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                           SendReliable);
                return;
              }
            }
          }
        }
      }
      else {
        pGVar4 = (this->fields).waitForHighScore;
        (this->fields).currentState = 3;
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                          ,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar2 = (this->fields).highScoreListDatas;
          if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                         *)0x0) {
            lVar12 = FUN_?(&uStack_11,pDVar2,(this->fields).currentState);
            pDVar2 = (this->fields).highScoreListDatas;
            iVar3 = *(int32_t *)(lVar12 + 8);
            if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                           *)0x0) {
              puVar13 = (undefined8 *)FUN_?(&uStack_11,pDVar2,(this->fields).currentState);
              listOfScores = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)*puVar13;
              GamePassesHighScoreList_ClearHighScoreElements(this,(MethodInfo *)0x0);
              GamePassesHighScoreList_CreateHighScoreElements
                        (this,listOfScores,iVar3,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                              ,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((this->fields).currentState == 4) {
                return;
              }
              if ((this->fields).highScoreListDatas !=
                  (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) {
                puVar13 = (undefined8 *)FUN_?(&uStack_11);
                iVar3 = GamePassesHighScoreList_GetPlayerPosition
                                   (this,(List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)
                                         *puVar13,(MethodInfo *)0x0);
                if (iVar3 <= (this->fields).scoreElementShowCapacity) {
                  return;
                }
                pDVar2 = (this->fields).highScoreListDatas;
                iVar14 = (iVar3 - (this->fields).middlePosition) + 1;
                if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                               *)0x0) {
                  plVar15 = (longlong *)FUN_?(&uStack_11,pDVar2,(this->fields).currentState)
                  ;
                  if (*plVar15 != 0) {
                    iVar16 = ((this->fields).middlePosition - *(int *)(*plVar15 + 0x18)) + iVar3;
                    iVar17 = iVar14;
                    if (-1 < iVar16) {
                      iVar17 = iVar16;
                    }
                    if (iVar14 < iVar17) {
                      iVar17 = iVar14;
                    }
                    pTVar18 = (this->fields).contentList;
                    if ((pTVar18 != (Transform *)0x0) &&
                       (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pTVar18,(MethodInfo *)0x0),
                       pTVar18 != (Transform *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_19 = 0;
                      uStack_20 = 0;
                      pvVar21 = (pTVar18->fields)._._.m_CachedPtr;
                      if (pvVar21 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar18,(MethodInfo *)0x0);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                      pcVar22 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0))
                      {
                        uVar23 = func_?(&UNK_?);
                        FUN_?(uVar23,0);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                      pcRam_? = pcVar22;
                      (*pcRam_?)(pvVar21);
                      uVar24 = uStack_20;
                      pTVar18 = (this->fields).contentList;
                      uStack_11 = (MethodInfo *)
                                  CONCAT44((float)iVar17 * (this->fields).moveAmountPerElement +
                                           (this->fields).topPadding +
                                           (float)(this->fields).middlePosition *
                                           (this->fields).moveAmountPerElement,(int)uStack_19);
                      if ((pTVar18 != (Transform *)0x0) &&
                         (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pTVar18,(MethodInfo *)0x0),
                         pTVar18 != (Transform *)0x0)) {
                        uStack_19 = uStack_11;
                        uStack_20 = uVar24;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar21 = (pTVar18->fields)._._.m_CachedPtr;
                        if (pvVar21 != (void *)0x0) {
                          pcVar22 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar22 = (code *)FUN_?(&UNK_?),
                             pcVar22 == (code *)0x0)) {
                            uVar23 = func_?(&UNK_?);
                            FUN_?(uVar23,0);
                            pcVar22 = (code *)swi(3);
                            (*pcVar22)();
                            return;
                          }
                          pcRam_? = pcVar22;
                          (*pcRam_?)(pvVar21,&uStack_19);
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar18,(MethodInfo *)0x0);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                      FUN_?();
                      pcVar22 = (code *)swi(3);
                      (*pcVar22)();
                      return;
                    }
                  }
                }
              }
              FUN_?();
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
          }
          FUN_?();
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void SetToTopPlayerHighScore() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_SetToTopPlayerHighScore
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Top_Players);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).headerText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,StringLiteral_Top_Players,(pTVar1->klass->vtable).set_text.method);
    pDVar2 = (this->fields).highScoreListDatas;
    if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Int32Enum,GamePassesHighScoreList+HighScoreListData]::
               Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__FindEntry
                         ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                           *)pDVar2,4,
                          MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__ContainsKey_GamePassesHighScoreList__GamePassesHighScoreListState_
                          ->klass->rgctx_data[0x21].method);
      if (iVar3 < 0) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_Loading_Top_Players_Scores___);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar4 = (this->fields).waitForHighScore;
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,1,(MethodInfo *)0x0);
          pTVar1 = (this->fields).loadingText;
          if (pTVar1 != (Text *)0x0) {
            (*(pTVar1->klass->vtable).set_text.methodPtr)
                      (pTVar1,StringLiteral_Loading_Top_Players_Scores___,
                       (pTVar1->klass->vtable).set_text.method);
            bVar5 = cRam_? == '\0';
            (this->fields).currentState = 2;
            if (bVar5) {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar6 != (MVGameControllerBase *)0x0) &&
                (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
               (pMVar8 = (pMVar7->fields).operationRequests,
               pMVar8 != (MVNetworkGame_OperationRequests *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pPVar9 = (pMVar8->fields).peer;
              this_00 = (Dictionary_2_System_Byte_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                     );
              pMVar10 = 
              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar9 != (PhotonPeer *)0x0) {
                uStack_11 = (pPVar9->klass->vtable).SendOperation.method;
                (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                          (pPVar9,CONCAT71((int7)((ulonglong)pMVar10 >> 8),0x6c),this_00,
                           TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                           SendReliable);
                return;
              }
            }
          }
        }
      }
      else {
        pGVar4 = (this->fields).waitForHighScore;
        (this->fields).currentState = 4;
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                          ,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar2 = (this->fields).highScoreListDatas;
          if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                         *)0x0) {
            lVar12 = FUN_?(&uStack_11,pDVar2,(this->fields).currentState);
            pDVar2 = (this->fields).highScoreListDatas;
            iVar3 = *(int32_t *)(lVar12 + 8);
            if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                           *)0x0) {
              puVar13 = (undefined8 *)FUN_?(&uStack_11,pDVar2,(this->fields).currentState);
              listOfScores = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)*puVar13;
              GamePassesHighScoreList_ClearHighScoreElements(this,(MethodInfo *)0x0);
              GamePassesHighScoreList_CreateHighScoreElements
                        (this,listOfScores,iVar3,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__get_Item_GamePassesHighScoreList__GamePassesHighScoreListState_
                              ,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((this->fields).currentState == 4) {
                return;
              }
              if ((this->fields).highScoreListDatas !=
                  (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                   *)0x0) {
                puVar13 = (undefined8 *)FUN_?(&uStack_11);
                iVar3 = GamePassesHighScoreList_GetPlayerPosition
                                   (this,(List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)
                                         *puVar13,(MethodInfo *)0x0);
                if (iVar3 <= (this->fields).scoreElementShowCapacity) {
                  return;
                }
                pDVar2 = (this->fields).highScoreListDatas;
                iVar14 = (iVar3 - (this->fields).middlePosition) + 1;
                if (pDVar2 != (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
                               *)0x0) {
                  plVar15 = (longlong *)FUN_?(&uStack_11,pDVar2,(this->fields).currentState)
                  ;
                  if (*plVar15 != 0) {
                    iVar16 = ((this->fields).middlePosition - *(int *)(*plVar15 + 0x18)) + iVar3;
                    iVar17 = iVar14;
                    if (-1 < iVar16) {
                      iVar17 = iVar16;
                    }
                    if (iVar14 < iVar17) {
                      iVar17 = iVar14;
                    }
                    pTVar18 = (this->fields).contentList;
                    if ((pTVar18 != (Transform *)0x0) &&
                       (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pTVar18,(MethodInfo *)0x0),
                       pTVar18 != (Transform *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_19 = 0;
                      uStack_20 = 0;
                      pvVar21 = (pTVar18->fields)._._.m_CachedPtr;
                      if (pvVar21 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar18,(MethodInfo *)0x0);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                      pcVar22 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0))
                      {
                        uVar23 = func_?(&UNK_?);
                        FUN_?(uVar23,0);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                      pcRam_? = pcVar22;
                      (*pcRam_?)(pvVar21);
                      uVar24 = uStack_20;
                      pTVar18 = (this->fields).contentList;
                      uStack_11 = (MethodInfo *)
                                  CONCAT44((float)iVar17 * (this->fields).moveAmountPerElement +
                                           (this->fields).topPadding +
                                           (float)(this->fields).middlePosition *
                                           (this->fields).moveAmountPerElement,(int)uStack_19);
                      if ((pTVar18 != (Transform *)0x0) &&
                         (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pTVar18,(MethodInfo *)0x0),
                         pTVar18 != (Transform *)0x0)) {
                        uStack_19 = uStack_11;
                        uStack_20 = uVar24;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar21 = (pTVar18->fields)._._.m_CachedPtr;
                        if (pvVar21 != (void *)0x0) {
                          pcVar22 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar22 = (code *)FUN_?(&UNK_?),
                             pcVar22 == (code *)0x0)) {
                            uVar23 = func_?(&UNK_?);
                            FUN_?(uVar23,0);
                            pcVar22 = (code *)swi(3);
                            (*pcVar22)();
                            return;
                          }
                          pcRam_? = pcVar22;
                          (*pcRam_?)(pvVar21,&uStack_19);
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar18,(MethodInfo *)0x0);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                      FUN_?();
                      pcVar22 = (code *)swi(3);
                      (*pcVar22)();
                      return;
                    }
                  }
                }
              }
              FUN_?();
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
          }
          FUN_?();
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                        );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
            );
  iVar2 = 0;
  if (listToSort == (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pLVar1 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)(*pcVar3)();
    return pLVar1;
  }
code_?:
  do {
    if ((listToSort->fields)._size <= iVar2) {
      return pLVar1;
    }
    index = 0;
    if (pLVar1 == (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0)
    goto code_?;
    for (; index < (pLVar1->fields)._size; index = index + 1) {
      lVar4 = FUN_?(listToSort,iVar2);
      if (lVar4 == 0) goto code_?;
      iVar5 = *(int *)(lVar4 + 0x20);
      lVar4 = FUN_?(pLVar1,index);
      if (lVar4 == 0) goto code_?;
      if (*(int *)(lVar4 + 0x20) < iVar5) {
        pOVar6 = (Object *)FUN_?(listToSort,iVar2);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Insert
                  ((List_1_System_Object_ *)pLVar1,index,pOVar6,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Insert_int__MV__WorldObject__GamePassSystem__HighScoreEntry_
                  );
        iVar2 = iVar2 + 1;
        goto code_?;
      }
    }
    pOVar6 = (Object *)FUN_?(listToSort,iVar2);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,pOVar6,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__Add_MV__WorldObject__GamePassSystem__HighScoreEntry_
              );
    iVar2 = iVar2 + 1;
  } while( true );
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList_Start
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesHighScoreUpdateManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesHighScoreList____c__DisplayClass15_0___Start_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesHighScoreList____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GamePassesHighScoreList__OnHighScoreUpdate_MV__WorldObject__GamePassSystem__HighScoreDatas_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate =
         (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)
              FUN_?(pDVar2,
                            TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>
                           );
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate = pAVar1;
    pAVar3 = TypeInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>;
    lVar5 = FUN_?(pDVar2);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__GamePassesHighScoreUpdateManager->static_fields >> 0xc);
    lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar8 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar10 != (GameSessionData *)0x0) {
    if ((pGVar10->fields).gameMode == 0) {
      GamePassesHighScoreList_SetToTopPlayerHighScore(this,(MethodInfo *)0x0);
    }
    else {
      GamePassesHighScoreList_SetToLocalPlayerHighScore(this,(MethodInfo *)0x0);
    }
    pEVar11 = (this->fields).embeddedPlayerConfig;
    if (pEVar11 != (EmbeddedPlayerConfig *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pEVar11->fields).initialized == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
        bVar12 = (pEVar11->fields).kogamaDefaultData.allowsOpenInNewTab;
        bVar13 = (pEVar11->fields).kogamaDefaultData.allowsRedirectToWebpage;
        bVar14 = (pEVar11->fields).kogamaDefaultData.allowsModals;
        uVar15 = (pEVar11->fields).kogamaDefaultData.hideSignUp;
        cVar16 = uVar15;
      }
      else {
        bVar12 = (pEVar11->fields).currentSite.allowsOpenInNewTab;
        bVar13 = (pEVar11->fields).currentSite.allowsRedirectToWebpage;
        bVar14 = (pEVar11->fields).currentSite.allowsModals;
        cVar16 = (pEVar11->fields).currentSite.hideSignUp;
      }
      bVar17 = 0;
      if ((cVar16 == '\0') && ((bVar14 != 0 || (bVar17 = bVar13, bVar12 != 0)))) {
        bVar17 = 1;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar10 != (GameSessionData *)0x0) {
        if (bVar17 != 0 && (pGVar10->fields).profileID < 1) {
          object = (Object *)FUN_?(TypeInfo__GamePassesHighScoreList____c__DisplayClass15_0)
          ;
          original = (this->fields).touristInformationPopup;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar18 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original,
                               GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                              );
          if (object == (Object *)0x0) goto code_?;
          bVar9 = iRam_? != 0;
          object[1].klass = pOVar18;
          if (bVar9) {
            uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
            lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar8 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_01,object,
                     MethodInfo__GamePassesHighScoreList____c__DisplayClass15_0___Start_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,this_01,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GamePassesHighScoreList() */

void Assembly-CSharp.dll::GamePassesHighScoreList::GamePassesHighScoreList__ctor
               (GamePassesHighScoreList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).scoreElementShowCapacity = 0xd;
  (this->fields).middlePosition = 7;
  (this->fields).moveAmountPerElement = 101.0;
  (this->fields).topPadding = 40.0;
  pDVar1 = (Dictionary_2_GamePassesHighScoreList_GamePassesHighScoreListState_GamePassesHighScoreList_HighScoreListData_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>
                           );
  pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
           EqualityComparer_1_System_Int32Enum__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<GamePassesHighScoreList::GamePassesHighScoreListState,_GamePassesHighScoreList::HighScoreListData>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar2 != (EqualityComparer_1_System_Int32Enum_ *)0x0) &&
     (bVar3 = iRam_? != 0,
     (pDVar1->fields)._comparer =
          (IEqualityComparer_1_GamePassesHighScoreList_GamePassesHighScoreListState_ *)0x0, bVar3))
  {
    uVar4 = (uint)((ulonglong)&(pDVar1->fields)._comparer >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  bVar3 = iRam_? != 0;
  (this->fields).highScoreListDatas = pDVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).highScoreListDatas >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

