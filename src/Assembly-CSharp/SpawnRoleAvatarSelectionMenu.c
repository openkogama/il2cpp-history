
/* Void AddSelectionElement(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_AddSelectionElement
               (SpawnRoleAvatarSelectionMenu *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__Add_SpawnRoleAvatarSelectionElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleAvatarSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleAvatarSelectionElement>_SpawnRoleAvatarSelectionElement__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleAvatarSelectionMenu__OnAvatarSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).avatarSelectionDataList;
  if (pLVar1 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)index) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar3 = (pLVar1->fields)._items;
    if (pSVar3 != (SpawnRoleAvatarSelectionData__Array *)0x0) {
      if ((uint)pSVar3->max_length <= (uint)index) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pMVar4 = pSVar3->vector[index].avatar;
      if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
         (this_00 = (pMVar4->fields).gameObject, this_00 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        pSVar5 = (this->fields).avatarSelectionElementPrefab;
        parent = (Transform *)(this->fields).avatarElementContainer;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar5 = (SpawnRoleAvatarSelectionElement *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)pSVar5,parent,0,
                             SpawnRoleAvatarSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleAvatarSelectionElement>_SpawnRoleAvatarSelectionElement__UnityEngine__Transform__bool_
                            );
        pLVar1 = (this->fields).avatarSelectionDataList;
        if (pLVar1 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
          if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
          pSVar3 = (pLVar1->fields)._items;
          if (pSVar3 != (SpawnRoleAvatarSelectionData__Array *)0x0) {
            if ((uint)pSVar3->max_length <= (uint)index) goto code_?;
            uVar6 = *(undefined8 *)&pSVar3->vector[index].avatarId;
            pUVar7 = (UnityAction_1_System_Int32_ *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
            FUN_?(pUVar7,this);
            if (pSVar5 != (SpawnRoleAvatarSelectionElement *)0x0) {
              bVar8 = iRam_? != 0;
              iStack_9 = (int32_t)uVar6;
              (pSVar5->fields).avatarId = iStack_9;
              (pSVar5->fields).elementIndex = index;
              (pSVar5->fields).onSelectedCallback = pUVar7;
              if (bVar8) {
                uVar10 = (uint)((ulonglong)&(pSVar5->fields).onSelectedCallback >> 0xc);
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
              pLVar1 = (this->fields).avatarSelectionDataList;
              if (pLVar1 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
                pSVar3 = (pLVar1->fields)._items;
                if (pSVar3 != (SpawnRoleAvatarSelectionData__Array *)0x0) {
                  if ((uint)pSVar3->max_length <= (uint)index) goto code_?;
                  pMVar4 = pSVar3->vector[index].avatar;
                  if (pMVar4 != (MVWorldObjectClient *)0x0) {
                    SpawnRoleAvatarSelectionElement::
                    SpawnRoleAvatarSelectionElement_SetupPreviewImage
                              (pSVar5,(pMVar4->fields).gameObject,(MethodInfo *)0x0);
                    pMVar14 = 
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__Add_SpawnRoleAvatarSelectionElement_
                    ;
                    this_01 = (this->fields).selectionElements;
                    if (this_01 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
                      piVar15 = &(this_01->fields)._version;
                      *piVar15 = *piVar15 + 1;
                      pSVar16 = (this_01->fields)._items;
                      if (pSVar16 != (SpawnRoleAvatarSelectionElement__Array *)0x0) {
                        uVar10 = (this_01->fields)._size;
                        if (uVar10 < (uint)pSVar16->max_length) {
                          (this_01->fields)._size = uVar10 + 1;
                          FUN_?(pSVar16,(longlong)(int)uVar10,pSVar5);
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__AddWithResize
                                    ((List_1_System_Object_ *)this_01,(Object *)pSVar5,
                                     pMVar14->klass->rgctx_data[0xe].method);
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
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HideElements(Int32, Int32, Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_HideElements
               (SpawnRoleAvatarSelectionMenu *this,int32_t previousStartElement,
               int32_t amountOfElements,int32_t newStartElement,MethodInfo *method)

{
  uVar1 = (ulonglong)previousStartElement;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (previousStartElement < previousStartElement + amountOfElements) {
    lVar2 = uVar1 * 0x18;
    do {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      index = (uint)uVar1;
      if (-1 < (int)index) {
        this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                  (this->fields).selectionElements;
        if (this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0)
        goto DAT_?;
        if (((int)index < (this_00->fields)._size) &&
           (((int)index < newStartElement ||
            ((this->fields).maxSelectionElementsOnScreen + newStartElement < (int)index)))) {
          if ((this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) ||
             (this_02 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                        UIR::EntryPreProcessor+AllocSize]::
                        List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                  (this_00,index,
                                   MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                                  ), this_02 == (EntryPreProcessor_AllocSize)0x0)) {
DAT_?:
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_Deactivate
                    ((SpawnRoleAvatarSelectionElement *)this_02,(MethodInfo *)0x0);
          pLVar4 = (this->fields).avatarSelectionDataList;
          if (pLVar4 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) goto DAT_?;
          if ((uint)(pLVar4->fields)._size <= index) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pSVar5 = (pLVar4->fields)._items;
          if (pSVar5 == (SpawnRoleAvatarSelectionData__Array *)0x0) goto DAT_?;
          if ((uint)pSVar5->max_length <= index) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar6 = *(longlong *)((longlong)&pSVar5->vector[0].avatar + lVar2);
          if ((lVar6 == 0) ||
             (this_01 = *(GameObject **)(lVar6 + 200), this_01 == (GameObject *)0x0))
          goto DAT_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
        }
      }
      uVar1 = (ulonglong)(index + 1);
      lVar2 = lVar2 + 0x18;
    } while ((int)(index + 1) < previousStartElement + amountOfElements);
  }
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_Initialize
               (SpawnRoleAvatarSelectionMenu *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleAvatarSelectionMenu___Initialize_b__9_0_UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).spawnRoleId = spawnRoleId;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__SpawnRoleAvatarSelectionMenu___Initialize_b__9_0_UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_
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
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar9 = (pLVar3->fields)._items;
        if (pTVar9 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar9->max_length <= uVar5) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar9->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsIndexWithinBounds(Int32) */

bool Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_IsIndexWithinBounds
               (SpawnRoleAvatarSelectionMenu *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (index < 0) {
    return 0;
  }
  pLVar1 = (this->fields).selectionElements;
  if (pLVar1 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
    return index < (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnAvatarSelected(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_OnAvatarSelected
               (SpawnRoleAvatarSelectionMenu *this,int32_t avatarId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).operationRequests;
    iVar4 = (this->fields).spawnRoleId;
    if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     );
        LOCK();
        UNLOCK();
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
      this_00 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = iVar4;
      pOVar5 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar6 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x17,pOVar5,(InsertionBehavior__Enum)uVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        aiStackX_20[0] = avatarId;
        pOVar5 = (Object *)FUN_?(uRam_?,aiStackX_20);
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar7 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0xc1,pOVar5,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),method_00);
        pPVar8 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar8 != (PhotonPeer *)0x0) {
          (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                    (pPVar8,CONCAT71((int7)((ulonglong)uVar7 >> 8),0x73),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar8->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_OnDestroy
               (SpawnRoleAvatarSelectionMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).avatarSelectionDataList == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    return;
  }
  pLVar1 = (this->fields).avatarSelectionDataList;
  uVar2 = 0;
  uVar3 = uVar2;
  while( true ) {
    uVar4 = (uint)uVar2;
    if ((pLVar1->fields)._size <= (int)uVar4) {
      return;
    }
    pLVar1 = (this->fields).avatarSelectionDataList;
    if (pLVar1 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) break;
    if ((uint)(pLVar1->fields)._size <= uVar4) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar6 = (pLVar1->fields)._items;
    if (pSVar6 == (SpawnRoleAvatarSelectionData__Array *)0x0) break;
    if ((uint)pSVar6->max_length <= uVar4) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar7 = *(longlong *)((longlong)&pSVar6->vector[0].avatar + uVar3);
    if ((lVar7 == 0) || (obj = *(Object **)(lVar7 + 200), obj == (Object *)0x0)) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar8 = obj[1].klass;
    if (pOVar8 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pOVar8);
    pLVar1 = (this->fields).avatarSelectionDataList;
    uVar2 = (ulonglong)(uVar4 + 1);
    uVar3 = uVar3 + 0x18;
    if (pLVar1 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) break;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnScrollValueChanged() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_OnScrollValueChanged
               (SpawnRoleAvatarSelectionMenu *this,MethodInfo *method)

{
  if ((this->fields).avatarSelectionDataList == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).scrollBar;
  if (pSVar1 != (Scrollbar *)0x0) {
    fVar2 = (pSVar1->fields).m_Value;
    if (1 < (pSVar1->fields).m_NumberOfSteps) {
      fVar2 = (float)FUN_?((float)((pSVar1->fields).m_NumberOfSteps + -1) * fVar2);
      fVar2 = fVar2 / (float)((pSVar1->fields).m_NumberOfSteps + -1);
    }
    pLVar3 = (this->fields).avatarSelectionDataList;
    if (pLVar3 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
      iVar4 = FUN_?((float)(pLVar3->fields)._size * fVar2);
      newStartElement =
           FUN_?((float)iVar4 -
                         (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?);
      pLVar5 = (this->fields).selectionElements;
      if (pLVar5 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
        SpawnRoleAvatarSelectionMenu_HideElements
                  (this,(this->fields).currentSelectionStartIndex,(pLVar5->fields)._size,
                   newStartElement,(MethodInfo *)0x0);
        SpawnRoleAvatarSelectionMenu_ShowElements(this,newStartElement,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSpawnRoleAvatarDataRecieved(List`1[SpawnRoleAvatarSelectionData]) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_OnSpawnRoleAvatarDataRecieved
               (SpawnRoleAvatarSelectionMenu *this,
               List_1_SpawnRoleAvatarSelectionData_ *avatarSelectionDataList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).avatarSelectionDataList = avatarSelectionDataList;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).avatarSelectionDataList >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    index = 0;
    if (avatarSelectionDataList != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
      for (; index < (avatarSelectionDataList->fields)._size; index = index + 1) {
        SpawnRoleAvatarSelectionMenu_AddSelectionElement(this,index,(MethodInfo *)0x0);
      }
      SpawnRoleAvatarSelectionMenu_HideElements
                (this,0,(this->fields).maxSelectionElementsOnScreen,0,(MethodInfo *)0x0);
      uVar3 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (this->fields).currentSelectionStartIndex = 0;
      if (0 < (this->fields).maxSelectionElementsOnScreen) {
        lVar7 = 0;
        do {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (-1 < (int)uVar3) {
            this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                      (this->fields).selectionElements;
            if (this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0)
            goto DAT_?;
            if ((int)uVar3 < (this_00->fields)._size) {
              if ((this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0)
                 || (this_01 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                               UIElements::UIR::EntryPreProcessor+AllocSize]::
                               List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                         (this_00,uVar3,
                                          MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                                         ), this_01 == (EntryPreProcessor_AllocSize)0x0)) {
DAT_?:
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_Activate
                        ((SpawnRoleAvatarSelectionElement *)this_01,(MethodInfo *)0x0);
              pLVar9 = (this->fields).avatarSelectionDataList;
              if (pLVar9 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) goto DAT_?;
              if ((uint)(pLVar9->fields)._size <= uVar3) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pSVar10 = (pLVar9->fields)._items;
              if (pSVar10 == (SpawnRoleAvatarSelectionData__Array *)0x0) goto DAT_?;
              if ((uint)pSVar10->max_length <= uVar3) {
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar11 = *(longlong *)((longlong)&pSVar10->vector[0].avatar + lVar7);
              if ((lVar11 == 0) ||
                 (pGVar1 = *(GameObject **)(lVar11 + 200), pGVar1 == (GameObject *)0x0))
              goto DAT_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,1,(MethodInfo *)0x0);
            }
          }
          uVar3 = uVar3 + 1;
          lVar7 = lVar7 + 0x18;
        } while ((int)uVar3 < (this->fields).maxSelectionElementsOnScreen);
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ShowElements(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_ShowElements
               (SpawnRoleAvatarSelectionMenu *this,int32_t startElementIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).currentSelectionStartIndex = startElementIndex;
  if (startElementIndex < (this->fields).maxSelectionElementsOnScreen + startElementIndex) {
    lVar1 = (longlong)startElementIndex * 0x18;
    index = startElementIndex;
    do {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (-1 < (int)index) {
        this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                  (this->fields).selectionElements;
        if (this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0)
        goto DAT_?;
        if ((int)index < (this_00->fields)._size) {
          if ((this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) ||
             (this_02 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                        UIR::EntryPreProcessor+AllocSize]::
                        List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                  (this_00,index,
                                   MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                                  ), this_02 == (EntryPreProcessor_AllocSize)0x0)) {
DAT_?:
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_Activate
                    ((SpawnRoleAvatarSelectionElement *)this_02,(MethodInfo *)0x0);
          pLVar3 = (this->fields).avatarSelectionDataList;
          if (pLVar3 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) goto DAT_?;
          if ((uint)(pLVar3->fields)._size <= index) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pSVar4 = (pLVar3->fields)._items;
          if (pSVar4 == (SpawnRoleAvatarSelectionData__Array *)0x0) goto DAT_?;
          if ((uint)pSVar4->max_length <= index) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar5 = *(longlong *)((longlong)&pSVar4->vector[0].avatar + lVar1);
          if ((lVar5 == 0) ||
             (this_01 = *(GameObject **)(lVar5 + 200), this_01 == (GameObject *)0x0))
          goto DAT_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,1,(MethodInfo *)0x0);
        }
      }
      index = index + 1;
      lVar1 = lVar1 + 0x18;
    } while ((int)index < (this->fields).maxSelectionElementsOnScreen + startElementIndex);
  }
  return;
}


/* Void UpdateShownElements() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_UpdateShownElements
               (SpawnRoleAvatarSelectionMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).scrollBar;
  if (pSVar1 != (Scrollbar *)0x0) {
    fVar2 = (pSVar1->fields).m_Value;
    if (1 < (pSVar1->fields).m_NumberOfSteps) {
      fVar2 = (float)FUN_?((float)((pSVar1->fields).m_NumberOfSteps + -1) * fVar2);
      fVar2 = fVar2 / (float)((pSVar1->fields).m_NumberOfSteps + -1);
    }
    pLVar3 = (this->fields).avatarSelectionDataList;
    if (pLVar3 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
      iVar4 = FUN_?((float)(pLVar3->fields)._size * fVar2);
      newStartElement =
           FUN_?((float)iVar4 -
                         (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?);
      pLVar5 = (this->fields).selectionElements;
      if (pLVar5 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
        SpawnRoleAvatarSelectionMenu_HideElements
                  (this,(this->fields).currentSelectionStartIndex,(pLVar5->fields)._size,
                   newStartElement,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                        ,newStartElement,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (this->fields).currentSelectionStartIndex = newStartElement;
        if ((int)newStartElement <
            (int)((this->fields).maxSelectionElementsOnScreen + newStartElement)) {
          lVar6 = (longlong)(int)newStartElement * 0x18;
          index = newStartElement;
          do {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (-1 < (int)index) {
              this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                        (this->fields).selectionElements;
              if (this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0)
              goto DAT_?;
              if ((int)index < (this_00->fields)._size) {
                if ((this_00 ==
                     (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) ||
                   (this_02 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                              UIElements::UIR::EntryPreProcessor+AllocSize]::
                              List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                        (this_00,index,
                                         MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                                        ), this_02 == (EntryPreProcessor_AllocSize)0x0)) {
DAT_?:
                  FUN_?();
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_Activate
                          ((SpawnRoleAvatarSelectionElement *)this_02,(MethodInfo *)0x0);
                pLVar3 = (this->fields).avatarSelectionDataList;
                if (pLVar3 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) goto DAT_?;
                if ((uint)(pLVar3->fields)._size <= index) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pSVar8 = (pLVar3->fields)._items;
                if (pSVar8 == (SpawnRoleAvatarSelectionData__Array *)0x0) goto DAT_?;
                if ((uint)pSVar8->max_length <= index) {
                  FUN_?();
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                lVar9 = *(longlong *)((longlong)&pSVar8->vector[0].avatar + lVar6);
                if ((lVar9 == 0) ||
                   (this_01 = *(GameObject **)(lVar9 + 200), this_01 == (GameObject *)0x0))
                goto DAT_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_01,1,(MethodInfo *)0x0);
              }
            }
            index = index + 1;
            lVar6 = lVar6 + 0x18;
          } while ((int)index < (int)((this->fields).maxSelectionElementsOnScreen + newStartElement)
                  );
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <Initialize>b__9_0(IHandleSpawnRoleAvatarSelectionData, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu__Initialize_b__9_0
               (SpawnRoleAvatarSelectionMenu *this,IHandleSpawnRoleAvatarSelectionData *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleAvatarSelectionMenu__OnSpawnRoleAvatarDataRecieved_System__Collections__Generic__List<SpawnRoleAvatarSelectionData>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__SpawnRoleAvatarSelectionMenu__OnSpawnRoleAvatarDataRecieved_System__Collections__Generic__List<SpawnRoleAvatarSelectionData>_
             ,(MethodInfo *)0x0);
  if (handler == (IHandleSpawnRoleAvatarSelectionData *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = handler->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData) {
        pIVar5 = &pIVar2->vtable + pIVar2->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pIVar5 = (IHandleSpawnRoleAvatarSelectionData__VTable *)
           FUN_?(handler,
                         TypeInfo__UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData,0)
  ;
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar5->TryGetSpawnRoleAvatarSelectionData).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (handler,this_00,(pIVar5->TryGetSpawnRoleAvatarSelectionData).method,
             UNRECOVERED_JUMPTABLE);
  return;
}


/* SpawnRoleAvatarSelectionMenu() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu__ctor
               (SpawnRoleAvatarSelectionMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).maxSelectionElementsOnScreen = 10;
  this_00 = (List_1_SpawnRoleAvatarSelectionElement_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).selectionElements = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).selectionElements >> 0xc);
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

