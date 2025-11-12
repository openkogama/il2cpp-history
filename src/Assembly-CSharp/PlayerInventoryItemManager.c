
/* Void AddTabMenuButton(Int32, String, ManageItemPage) */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager_AddTabMenuButton
               (PlayerInventoryItemManager *this,int32_t categoryIndex,String *categoryName,
               ManageItemPage *pageItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerInventoryItemManager__ItemManagePageDef);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__Add_PlayerInventoryItemManager__ItemManagePageDef_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TabMenuButton_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButton>_TabMenuButton__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).tabMenuButtonPrefab;
  parent = (Transform *)(this->fields).tabsRoot;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)original,parent,0,
                       TabMenuButton_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButton>_TabMenuButton__UnityEngine__Transform__bool_
                      );
  if (pOVar1 != (Object__Class *)0x0) {
    pOVar2 = (Object__Class *)(pOVar1->_0).image;
    (*(code *)pOVar2[1]._0.image)(pOVar1,categoryIndex,categoryName,pOVar2[1]._0.gc_desc);
    item = (Object *)FUN_?(TypeInfo__PlayerInventoryItemManager__ItemManagePageDef);
    item[1].klass = pOVar1;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)(item + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    iVar8 = iRam_?;
    item[1].monitor = (MonitorData *)pageItem;
    if (iVar8 != 0) {
      uVar3 = (uint)((ulonglong)&item[1].monitor >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pMVar9 = 
    MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__Add_PlayerInventoryItemManager__ItemManagePageDef_
    ;
    this_00 = (this->fields).tabList;
    if (this_00 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) {
      piVar10 = &(this_00->fields)._version;
      *piVar10 = *piVar10 + 1;
      pPVar11 = (this_00->fields)._items;
      if (pPVar11 != (PlayerInventoryItemManager_ItemManagePageDef__Array *)0x0) {
        uVar3 = (this_00->fields)._size;
        if (uVar3 < (uint)pPVar11->max_length) {
          (this_00->fields)._size = uVar3 + 1;
          FUN_?(pPVar11,(longlong)(int)uVar3,item);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_00,item,pMVar9->klass->rgctx_data[0xe].method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize(InventoryItem, RawImage) */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager_Initialize
               (PlayerInventoryItemManager *this,InventoryItem *item,RawImage *itemPreview,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Remove);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sell);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Info);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).previewedItem = item;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).previewedItem >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).itemImage = itemPreview;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).itemImage >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  PlayerInventoryItemManager_AddTabMenuButton
            (this,1,StringLiteral_Info,(ManageItemPage *)(this->fields).infoTabPrefab,
             (MethodInfo *)0x0);
  if (item == (InventoryItem *)0x0) goto code_?;
  if (((item->fields).resellable != 0) && ((item->fields).isDefaultInvItem == 0)) {
    if ((item->fields).itemCategoryID != 1) {
      lVar2 = FUN_?();
      if ((lVar2 == 0) ||
         (this_00 = (PlayerShopInventoryRepository *)FUN_?(),
         this_00 == (PlayerShopInventoryRepository *)0x0)) goto code_?;
      iVar7 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
               PlayerShopInventoryRepository_CountInventoryItemsWithOriginalID
                         (this_00,item,(MethodInfo *)0x0);
      if (iVar7 < 2) goto code_?;
    }
    PlayerInventoryItemManager_AddTabMenuButton
              (this,2,StringLiteral_Sell,(ManageItemPage *)(this->fields).itemSellTabPrefab,
               (MethodInfo *)0x0);
    PlayerInventoryItemManager_AddTabMenuButton
              (this,3,StringLiteral_Remove,(ManageItemPage *)(this->fields).ItemRemovalPrefab,
               (MethodInfo *)0x0);
  }
code_?:
  pLVar8 = (this->fields).tabList;
  if (pLVar8 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) {
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&uStack_9 >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar8->fields)._version << 0x20);
    uStack_11 = 0;
    LStack_12._8_8_ = pLStack_10;
    LStack_12._current = (Object *)0x0;
    uStack_9 = 0;
    pLStack_10 = &LStack_12;
    LStack_12._list = (List_1_System_Object_ *)pLVar8;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_12,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__MoveNext__
                              ), bVar13 != 0) {
      if (LStack_12._current == (Object *)0x0) goto code_?;
      pOVar14 = LStack_12._current[1].klass;
      if (pOVar14 == (Object__Class *)0x0) goto code_?;
      pIVar15 = (pOVar14->_0).image;
      (**(code **)&pIVar15[5].customAttributeCount)(pOVar14,pIVar15[5].metadataHandle);
    }
    pLVar8 = (this->fields).tabList;
    uVar1 = (this->fields).currentTab;
    if (pLVar8 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) {
      if ((uint)(pLVar8->fields)._size <= uVar1) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pPVar17 = (pLVar8->fields)._items;
      if (pPVar17 != (PlayerInventoryItemManager_ItemManagePageDef__Array *)0x0) {
        if ((uint)pPVar17->max_length <= uVar1) {
          FUN_?();
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        if ((pPVar17->vector[(int)uVar1] != (PlayerInventoryItemManager_ItemManagePageDef *)0x0) &&
           (pTVar18 = (pPVar17->vector[(int)uVar1]->fields).Button, pTVar18 != (TabMenuButton *)0x0))
        {
          (*(pTVar18->klass->vtable).SetAsSelected.methodPtr)();
          PlayerInventoryItemManager_UpdateContent(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager_TabSelected
               (PlayerInventoryItemManager *this,int32_t tabId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).currentTab == tabId + -1) {
    return;
  }
  (this->fields).currentTab = tabId + -1;
  pLVar1 = (this->fields).tabList;
  if (pLVar1 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_9,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__MoveNext__
                              ), bVar10 != 0) {
      if (LStack_9._current == (Object *)0x0) goto code_?;
      pOVar11 = LStack_9._current[1].klass;
      if (pOVar11 == (Object__Class *)0x0) goto code_?;
      pIVar12 = (pOVar11->_0).image;
      (**(code **)&pIVar12[5].customAttributeCount)(pOVar11,pIVar12[5].metadataHandle);
    }
    pLVar1 = (this->fields).tabList;
    uVar2 = (this->fields).currentTab;
    if (pLVar1 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) {
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pPVar14 = (pLVar1->fields)._items;
      if (pPVar14 != (PlayerInventoryItemManager_ItemManagePageDef__Array *)0x0) {
        if ((uint)pPVar14->max_length <= uVar2) {
          FUN_?();
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if ((pPVar14->vector[(int)uVar2] != (PlayerInventoryItemManager_ItemManagePageDef *)0x0) &&
           (pTVar15 = (pPVar14->vector[(int)uVar2]->fields).Button, pTVar15 != (TabMenuButton *)0x0))
        {
          (*(pTVar15->klass->vtable).SetAsSelected.methodPtr)();
          PlayerInventoryItemManager_UpdateContent(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager_UpdateContent
               (PlayerInventoryItemManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ManageItemPage_MethodInfo__UnityEngine__Object__Instantiate<ManageItemPage>_ManageItemPage__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).currentManageItemPage;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (ManageItemPage *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).currentManageItemPage;
      if (pMVar1 == (ManageItemPage *)0x0) goto code_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pMVar1,(MethodInfo *)0x0);
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
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
    }
  }
  pLVar2 = (this->fields).tabList;
  if (pLVar2 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) {
    uVar3 = (this->fields).currentTab;
    if ((uint)(pLVar2->fields)._size <= uVar3) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pPVar5 = (pLVar2->fields)._items;
    if (pPVar5 != (PlayerInventoryItemManager_ItemManagePageDef__Array *)0x0) {
      if ((uint)pPVar5->max_length <= uVar3) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pPVar5->vector[(int)uVar3] != (PlayerInventoryItemManager_ItemManagePageDef *)0x0) {
        pMVar1 = (pPVar5->vector[(int)uVar3]->fields).PageItemPrefab;
        parent = (Transform *)(this->fields).pageContentRoot;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar1 = (ManageItemPage *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           ((Object *)pMVar1,parent,0,
                            ManageItemPage_MethodInfo__UnityEngine__Object__Instantiate<ManageItemPage>_ManageItemPage__UnityEngine__Transform__bool_
                           );
        bVar6 = iRam_? != 0;
        (this->fields).currentManageItemPage = pMVar1;
        if (bVar6) {
          uVar3 = (uint)((ulonglong)&(this->fields).currentManageItemPage >> 0xc);
          uVar7 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar8 == *puVar9;
            if (bVar6) {
              *puVar9 = uVar8 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        pMVar1 = (this->fields).currentManageItemPage;
        if (pMVar1 != (ManageItemPage *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pMVar1->klass->vtable).__unknown.methodPtr)
                    (pMVar1,(this->fields).itemImage,(this->fields).previewedItem,
                     (pMVar1->klass->vtable).__unknown.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PlayerInventoryItemManager() */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager__ctor
               (PlayerInventoryItemManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).tabList = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).tabList >> 0xc);
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

