
/* Void AddTabMenuButton(Int32, String, ManageItemPage) */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager_AddTabMenuButton
               (PlayerInventoryItemManager *this,int32_t categoryIndex,String *categoryName,
               ManageItemPage *pageItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerInventoryItemManager__ItemManagePageDef);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__Add_PlayerInventoryItemManager__ItemManagePageDef_
                   );
    func_?(&
                    TabMenuButton_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButton>_TabMenuButton__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).tabMenuButtonPrefab;
  parent = (Transform *)(this->fields).tabsRoot;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)original,parent,0,
                      TabMenuButton_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButton>_TabMenuButton__UnityEngine__Transform__bool_
                     );
  if (pOVar1 != (Object__Class *)0x0) {
    pOVar2 = (Object__Class *)(pOVar1->_0).image;
    (*pOVar2[1]._0.gc_desc)(pOVar1,categoryIndex,categoryName,pOVar2[1]._0.name);
    method_00 = TypeInfo__PlayerInventoryItemManager__ItemManagePageDef;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    value[1].monitor = (MonitorData *)pageItem;
    func_?(&value[1].monitor,pageItem);
    this_00 = (this->fields).tabList;
    if (this_00 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,value,
                 MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__Add_PlayerInventoryItemManager__ItemManagePageDef_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(InventoryItem, RawImage) */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager_Initialize
               (PlayerInventoryItemManager *this,InventoryItem *item,RawImage *itemPreview,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__get_Current__
                   );
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
                   );
    func_?(&StringLiteral_Remove);
    func_?(&StringLiteral_Sell);
    func_?(&StringLiteral_Info);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  ppIVar6 = &(this->fields).previewedItem;
  *ppIVar6 = item;
  func_?(ppIVar6,item);
  ppRVar7 = &(this->fields).itemImage;
  *ppRVar7 = itemPreview;
  func_?(ppRVar7,itemPreview);
  PlayerInventoryItemManager_AddTabMenuButton
            (this,1,StringLiteral_Info,(ManageItemPage *)(this->fields).infoTabPrefab,
             (MethodInfo *)0x0);
  if (item == (InventoryItem *)0x0) goto code_?;
  if (((item->fields).resellable != 0) && ((item->fields).isDefaultInvItem == 0)) {
    if ((item->fields).itemCategoryID != 1) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
          (IEditModeUI *)0x0) goto code_?;
      this_00 = (PlayerShopInventoryRepository *)func_?();
      if (this_00 == (PlayerShopInventoryRepository *)0x0) goto code_?;
      iVar8 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_CountInventoryItemsWithOriginalID
                        (this_00,item,(MethodInfo *)0x0);
      if (iVar8 < 2) goto code_?;
    }
    PlayerInventoryItemManager_AddTabMenuButton
              (this,2,StringLiteral_Sell,(ManageItemPage *)(this->fields).itemSellTabPrefab,
               (MethodInfo *)0x0);
    unaff_EDI = this;
    PlayerInventoryItemManager_AddTabMenuButton
              (this,3,StringLiteral_Remove,(ManageItemPage *)(this->fields).ItemRemovalPrefab,
               (MethodInfo *)0x0);
  }
code_?:
  pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).tabList;
  if (pLVar9 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_11,pLVar9,
                        MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__GetEnumerator__
                       );
    RVar12 = pLVar10->_current;
    LStack_11._version = 0;
    uStack_1 = 1;
    LStack_11._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__MoveNext__
                        );
      if (bVar13 == 0) break;
      if ((RVar12 == (RegexCharClass_SingleRange)0x0) ||
         (piVar14 = *(int **)((int)RVar12 + 8), piVar14 == (int *)0x0)) goto code_?;
      (**(code **)(*piVar14 + 0xe8))(piVar14,*(undefined4 *)(*piVar14 + 0xec));
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__Dispose__
               ,(MethodInfo *)unaff_EDI);
    uStack_1 = 0xffffffff;
    pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).tabList;
    if (pLVar9 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar9,(this->fields).currentTab,
                          MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
                         );
      if ((RVar12 != (RegexCharClass_SingleRange)0x0) && (*(int **)((int)RVar12 + 8) != (int *)0x0))
      {
        (**(code **)(**(int **)((int)RVar12 + 8) + 0xf0))();
        PlayerInventoryItemManager_UpdateContent(this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager_TabSelected
               (PlayerInventoryItemManager *this,int32_t tabId,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__GetEnumerator__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
    ;
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((this->fields).currentTab != tabId + -1) {
    (this->fields).currentTab = tabId + -1;
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).tabList;
    if (pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_9,pLVar7,
                          MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__GetEnumerator__
                         );
      LStack_10._list = (List_1_System_Object_ *)pLVar8->_list;
      LStack_10._index = pLVar8->_index;
      LStack_10._version = pLVar8->_version;
      LStack_10._current = *(Object **)&pLVar8->_current;
      LStack_9._version = 0;
      uStack_1 = 1;
      LStack_9._current = (RegexCharClass_SingleRange)&LStack_10;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_10,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__MoveNext__
                          );
        if (bVar11 == 0) break;
        if (((RegexCharClass_SingleRange)LStack_10._current == (RegexCharClass_SingleRange)0x0) ||
           (piVar12 = *(int **)((int)LStack_10._current + 8), piVar12 == (int *)0x0))
        goto code_?;
        (**(code **)(*piVar12 + 0xe8))(piVar12,*(undefined4 *)(*piVar12 + 0xec));
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_10,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      uStack_1 = 0xffffffff;
      pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).tabList;
      if (pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar7,(this->fields).currentTab,
                           MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
                          );
        if ((RVar13 != (RegexCharClass_SingleRange)0x0) &&
           (piVar12 = *(int **)((int)RVar13 + 8), piVar12 != (int *)0x0)) {
          (**(code **)(*piVar12 + 0xf0))(piVar12,*(undefined4 *)(*piVar12 + 0xf4));
          PlayerInventoryItemManager_UpdateContent(this,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
code_?:
    uVar14 = func_?();
    func_?(uVar14);
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager_UpdateContent
               (PlayerInventoryItemManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
                   );
    func_?(&
                    ManageItemPage_MethodInfo__UnityEngine__Object__Instantiate<ManageItemPage>_ManageItemPage__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).currentManageItemPage;
  ppMVar2 = &(this->fields).currentManageItemPage;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (*ppMVar2 == (ManageItemPage *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)*ppMVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).tabList;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields).currentTab,
                       MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
                      );
    if (RVar4 != (RegexCharClass_SingleRange)0x0) {
      original = *(Object **)((int)RVar4 + 0xc);
      parent = (Transform *)(this->fields).pageContentRoot;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar1 = (ManageItemPage *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         (original,parent,0,
                          ManageItemPage_MethodInfo__UnityEngine__Object__Instantiate<ManageItemPage>_ManageItemPage__UnityEngine__Transform__bool_
                         );
      *ppMVar2 = pMVar1;
      func_?();
      pMVar1 = *ppMVar2;
      if (pMVar1 != (ManageItemPage *)0x0) {
        (*(code *)(pMVar1->klass->vtable).__unknown.method)(pMVar1);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PlayerInventoryItemManager() */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager__ctor
               (PlayerInventoryItemManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__List__
            );
  ppLVar1 = &(this->fields).tabList;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

