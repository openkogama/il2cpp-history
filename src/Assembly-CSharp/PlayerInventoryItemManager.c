
/* Void AddTabMenuButton(Int32, String, ManageItemPage) */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager_AddTabMenuButton
               (PlayerInventoryItemManager *this,int32_t categoryIndex,String *categoryName,
               ManageItemPage *pageItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).tabMenuButtonPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      TabMenuButton_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButton>_TabMenuButton_
                     );
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    (**(code **)((int)(pXVar1->klass + 1) + 4))
              (pXVar1,categoryIndex,categoryName,*(char **)((int)(pXVar1->klass + 1) + 8));
    method_00 = (MethodInfo *)0x0;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(Transform *)(this->fields).tabsRoot,0,(MethodInfo *)0x0);
      this_02 = (ScaleAnimationBase *)
                func_?(TypeInfo__PlayerInventoryItemManager__ItemManagePageDef);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,method_00);
      (this_02->fields)._._._._.m_CachedPtr = pXVar1;
      (this_02->fields).state = (int32_t)pageItem;
      this_00 = (this->fields).tabList;
      if (this_00 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)this_02,
                   MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__Add_PlayerInventoryItemManager__ItemManagePageDef_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  (this->fields).previewedItem = item;
  (this->fields).itemImage = itemPreview;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  PlayerInventoryItemManager_AddTabMenuButton
            (this,1,StringLiteral_Info,(ManageItemPage *)(this->fields).infoTabPrefab,
             (MethodInfo *)0x0);
  if (item == (InventoryItem *)0x0) goto code_?;
  if (((item->fields).resellable != 0) && ((item->fields).isDefaultInvItem == 0)) {
    if ((item->fields).itemCategoryID != 1) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar8 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if ((pIVar8 == (IEditModeUI *)0x0) ||
         (this_02 = (PlayerInventoryRepository *)func_?(),
         this_02 == (PlayerInventoryRepository *)0x0)) goto code_?;
      iVar9 = PlayerInventoryRepository::PlayerInventoryRepository_CountItemsWithOriginalID
                        (this_02,item,(MethodInfo *)0x0);
      if (iVar9 < 2) goto code_?;
    }
    PlayerInventoryItemManager_AddTabMenuButton
              (this,2,StringLiteral_Sell,(ManageItemPage *)(this->fields).itemSellTabPrefab,
               (MethodInfo *)0x0);
    PlayerInventoryItemManager_AddTabMenuButton
              (this,3,StringLiteral_Remove,(ManageItemPage *)(this->fields).ItemRemovalPrefab,
               (MethodInfo *)0x0);
  }
code_?:
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).tabList;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_00,
                        MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__GetEnumerator__
                       );
    CStack_6.monitor = (MonitorData *)pLVar10->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar10->current).rgba;
    uStack_1 = 0;
    while( true ) {
      CStack_6.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__MoveNext__
      ;
      cVar11 = func_?();
      if (cVar11 == '\0') break;
      pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__get_Current__
                         );
      if ((pOVar12 == (Object *)0x0) || (pOVar12[1].klass == (Object__Class *)0x0))
      goto code_?;
      (*(code *)((pOVar12[1].klass)->_0).image[5].typeCount)();
    }
    *puStack_7 = 0xea;
    uStack_1 = 0xffffffff;
    func_?();
    this_01 = (this->fields).tabList;
    if (((this_01 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) &&
        (pIVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                             (this->fields).currentTab,
                             MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
                            ), pIVar13 != (IEventSystemHandler *)0x0)) &&
       (pIVar13[1].klass != (IEventSystemHandler__Class *)0x0)) {
      (*(code *)((pIVar13[1].klass)->_0).image[5].customAttributeCount)();
      PlayerInventoryItemManager_UpdateContent(this,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  if ((this->fields).currentTab == tabId + -1) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  (this->fields).currentTab = tabId + -1;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).tabList;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while (cVar10 = func_?(), cVar10 != '\0') {
      pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__get_Current__
                         );
      if ((pOVar11 == (Object *)0x0) || (pOVar12 = pOVar11[1].klass, pOVar12 == (Object__Class *)0x0))
      goto code_?;
      pIVar13 = (pOVar12->_0).image;
      (*(code *)pIVar13[5].typeCount)(pOVar12,pIVar13[5].exportedTypeCount);
    }
    *puStack_7 = 0x5a;
    uStack_1 = 0xffffffff;
    func_?(&CStack_6,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<PlayerInventoryItemManager::ItemManagePageDef>__Dispose__
                   );
    this_01 = (this->fields).tabList;
    if (((this_01 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) &&
        (pIVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                             (this->fields).currentTab,
                             MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
                            ), pIVar14 != (IEventSystemHandler *)0x0)) &&
       (pIVar15 = pIVar14[1].klass, pIVar15 != (IEventSystemHandler__Class *)0x0)) {
      pIVar13 = (pIVar15->_0).image;
      (*(code *)pIVar13[5].customAttributeCount)(pIVar15,pIVar13[5].metadataHandle);
      PlayerInventoryItemManager_UpdateContent(this,(MethodInfo *)0x0);
      goto code_?;
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::PlayerInventoryItemManager::PlayerInventoryItemManager_UpdateContent
               (PlayerInventoryItemManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).currentManageItemPage;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar1 = (this->fields).currentManageItemPage;
    if (pMVar1 == (ManageItemPage *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pMVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).tabList;
  if (this_00 != (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)0x0) {
    pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                        (this->fields).currentTab,
                        MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__get_Item_int_
                       );
    if (pIVar3 != (IEventSystemHandler *)0x0) {
      pXVar4 = (XpBoostParticlePreviewer *)pIVar3[1].monitor;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar4,
                          ManageItemPage_MethodInfo__UnityEngine__Object__Instantiate<ManageItemPage>_ManageItemPage_
                         );
      (this->fields).currentManageItemPage = (ManageItemPage *)pXVar4;
      if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pXVar4,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,(Transform *)(this->fields).pageContentRoot,0,(MethodInfo *)0x0);
          pMVar1 = (this->fields).currentManageItemPage;
          if (pMVar1 != (ManageItemPage *)0x0) {
            (*(code *)(pMVar1->klass->vtable).__unknown.method)();
            return;
          }
        }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<PlayerInventoryItemManager::ItemManagePageDef>__List__
            );
  (this->fields).tabList = (List_1_PlayerInventoryItemManager_ItemManagePageDef_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

