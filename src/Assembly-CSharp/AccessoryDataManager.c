
/* List`1[AccessoryDataClient] GetAccessoriesByCategoryId(AccessoryCategory) */

List_1_AccessoryDataClient_ *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoriesByCategoryId
          (AccessoryCategory__Enum category,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar4 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if (((pAVar4 != (AccessoryShopDataClient *)0x0) &&
      (this = (pAVar4->fields).accessoryDatas,
      this != (Dictionary_2_System_Int32_AccessoryDataClient_ *)0x0)) &&
     (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Values__
                          ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffb8,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_AccessoryDataClient>__GetEnumerator__
              );
    uStack_1 = 0;
    while( true ) {
      do {
        cVar5 = func_?();
        if (cVar5 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_AccessoryDataClient_ *)this_00;
        }
        item = func_?();
        unaff_EDI = category;
        if (item == UIPushOption__Enum_None) goto code_?;
      } while (*(AccessoryCategory__Enum *)(item + 0x24) != category);
      if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,item,
                 MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                );
    }
  }
code_?:
  func_?();
  func_?(unaff_EDI);
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_AccessoryDataClient_ *)(*pcVar6)();
  return pLVar7;
}


/* Dictionary`2[MV.Common.AccessoryCategory,List`1[AccessoryDataClient]] GetAccessoriesCategoryMap()
    */

Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap
          (MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  pDVar9 = (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dictionary__
            );
  pDStack_10 = pDVar9;
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar11 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar11 != (AccessoryShopDataClient *)0x0) &&
     (this = (pAVar11->fields).accessoryDatas,
     this != (Dictionary_2_System_Int32_AccessoryDataClient_ *)0x0)) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffa8,(Dictionary_2_WinningConditionType_System_Object_ *)this,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar12->dictionary;
    auStack_6._4_4_ = pDVar12->next;
    auStack_6._8_4_ = pDVar12->stamp;
    auStack_6._12_4_ = (pDVar12->current).key;
    auStack_6._16_4_ = (pDVar12->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar13 = func_?();
      if (cVar13 == '\0') {
        *puStack_8 = 0x8e;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return pDVar9;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__get_Current__
                            );
      item = func_?();
      if ((item == UIPushOption__Enum_None) ||
         (pDVar9 == (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)0x0))
      break;
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              AccessoryCategory,System::Object]::
              Dictionary_2_MV_Common_AccessoryCategory_System_Object__ContainsKey
                        ((Dictionary_2_MV_Common_AccessoryCategory_System_Object_ *)pDVar9,
                         *(AccessoryCategory__Enum *)(item + 0x24),
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__ContainsKey_MV__Common__AccessoryCategory_
                        );
      if (bVar14 == 0) {
        AStack_15 = *(AccessoryCategory__Enum *)(item + 0x24);
        pLStack_16 = (List_1_UnityEngine_Vector4_ *)
                     func_?(
                                    TypeInfo__System__Collections__Generic__List<AccessoryDataClient>
                                    );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
        List_1_UnityEngine_Vector4___ctor
                  (pLStack_16,
                   MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
        AccessoryCategory,System::Object]::
        Dictionary_2_MV_Common_AccessoryCategory_System_Object__Add
                  ((Dictionary_2_MV_Common_AccessoryCategory_System_Object_ *)pDVar9,AStack_15,
                   (Object *)pLStack_16,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Add_MV__Common__AccessoryCategory__System__Collections__Generic__List<AccessoryDataClient>_
                  );
      }
      this_00 = (List_1_UIPushOption_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                AccessoryCategory,System::Object]::
                Dictionary_2_MV_Common_AccessoryCategory_System_Object__get_Item
                          ((Dictionary_2_MV_Common_AccessoryCategory_System_Object_ *)pDVar9,
                           *(AccessoryCategory__Enum *)(item + 0x24),
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Item_MV__Common__AccessoryCategory_
                          );
      if (this_00 == (List_1_UIPushOption_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                (this_00,item,
                 MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                );
    }
  }
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  pDVar9 = (Dictionary_2_MV_Common_AccessoryCategory_List_1_AccessoryDataClient_ *)(*pcVar17)();
  return pDVar9;
}


/* AccessoryDataClient GetAccessoryDataByMetaDataId(Int32) */

AccessoryDataClient *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
          (int32_t id,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  pAStack_7 = (AccessoryDataClient *)0x0;
  uStack_8 = 0;
  iStack_9 = 0;
  KStack_10.key = 0;
  KStack_10.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  uStack_11 = 0xffffffff;
  puStack_12 = &stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_12 = &stack0xffffff98, puStack_4 = &stack0xffffff98,
     (TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    puStack_12 = &stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    func_?(TypeInfo__AccessoryDataManager);
  }
  pAVar13 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar13 == (AccessoryShopDataClient *)0x0) ||
     (this = (pAVar13->fields).accessoryDatas,
     this == (Dictionary_2_System_Int32_AccessoryDataClient_ *)0x0)) {
code_?:
    iVar14 = func_?(0);
  }
  else {
    pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_16,(Dictionary_2_WinningConditionType_System_Object_ *)this,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar15->dictionary;
    auStack_6._4_4_ = pDVar15->next;
    auStack_6._8_4_ = pDVar15->stamp;
    auStack_6._12_4_ = (pDVar15->current).key;
    auStack_6._16_4_ = (pDVar15->current).value;
    uStack_1 = 0;
    do {
      cVar17 = func_?(auStack_6,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__MoveNext__
                             );
      if (cVar17 == '\0') {
        iVar18 = 0x5b;
        goto code_?;
      }
      KStack_10 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__get_Current__
                            );
      iVar18 = func_?();
      if (iVar18 == 0) goto code_?;
    } while (*(int *)(iVar18 + 8) != id);
    pAStack_7 = (AccessoryDataClient *)
                 func_?(&KStack_10,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<int,_AccessoryDataClient>__get_Value__
                                );
    iVar18 = 0x5d;
code_?:
    uStack_1 = 0xffffffff;
    func_?(auStack_6,
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_AccessoryDataClient>__Dispose__
                   );
    iVar14 = iStack_9;
    if (iStack_9 == 0) {
      if (iVar18 != 0x5d) {
        *unaff_FS_OFFSET = uStack_3;
        return (AccessoryDataClient *)0x0;
      }
      *unaff_FS_OFFSET = uStack_3;
      return pAStack_7;
    }
  }
  func_?(iVar14,0,0);
  pcVar19 = (code *)swi(3);
  pAVar20 = (AccessoryDataClient *)(*pcVar19)();
  return pAVar20;
}


/* AccessoryDataClient GetAccessoryDataByStreamingAssetId(Int32) */

AccessoryDataClient *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByStreamingAssetId
          (int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
     (this = (pAVar1->fields).accessoryDatas,
     this != (Dictionary_2_System_Int32_AccessoryDataClient_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      return (AccessoryDataClient *)0x0;
    }
    if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
      id = (int32_t)TypeInfo__AccessoryDataManager;
      func_?();
    }
    pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
    if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
       (this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(pAVar1->fields).accessoryDatas,
       this_00 !=
       (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
       0x0)) {
      pAVar3 = (AccessoryDataClient *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_00,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Item_int_
                         );
      return pAVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pAVar3 = (AccessoryDataClient *)(*pcVar4)();
  return pAVar3;
}


/* Void Reset() */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
  TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 0;
  TypeInfo__AccessoryDataManager->static_fields->accessoriesReady = 0;
  TypeInfo__AccessoryDataManager->static_fields->accessoryShopData = (AccessoryShopDataClient *)0x0;
  return;
}


/* Void SetAccessoryData(String) */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_SetAccessoryData
               (String *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  if (TypeInfo__AccessoryDataManager->static_fields->__f__mg_cache0 == (Action_1_String_ *)0x0) {
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)0x0,
               MethodInfo__AccessoryDataManager__SetAccessoryData_System__String_,
               MethodInfo__System__Action<System::String>__Action_System__Object__void__);
    if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AccessoryDataManager);
    }
    TypeInfo__AccessoryDataManager->static_fields->__f__mg_cache0 = (Action_1_String_ *)this_02;
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  if (this_01 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ReceivedAccessoryData
              (this_01,TypeInfo__AccessoryDataManager->static_fields->__f__mg_cache0,
               (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      accessoryData = (String *)&UNK_?;
      func_?();
    }
    pXVar1 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                       (accessoryData,
                        AccessoryShopDataClient_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AccessoryShopDataClient>_System__String_
                       );
    TypeInfo__AccessoryDataManager->static_fields->accessoryShopData =
         (AccessoryShopDataClient *)pXVar1;
    TypeInfo__AccessoryDataManager->static_fields->accessoriesReady = 1;
    if (TypeInfo__AccessoryDataManager->static_fields->readyCallback == (UnityAction *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AccessoryDataManager);
    }
    pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
    if (pUVar2 != (UnityAction *)0x0) {
      this = (AvatarMotor_OnActiveBounceDelegate *)(pUVar2->fields)._.prev;
      if (this != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
        AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                  (this,(MethodInfo *)0x0);
      }
      pcVar3 = (pUVar2->fields)._._.method_ptr;
      this_00 = (pUVar2->fields)._._.method;
      pOVar4 = (pUVar2->fields)._._.m_target;
      if (this_00->flags == 0xffff) {
        func_?(this_00);
      }
      cVar5 = func_?(this_00);
      if (cVar5 == '\0') {
        if ((char)this_00->iflags == '\0') {
          (*pcVar3)();
          return;
        }
      }
      else if ((this_00->flags != 0xffff) &&
              (((pOVar4 == (Object *)0x0 || (((pOVar4->klass->_1).token & 0x100) == 0)) &&
               ((pUVar2->fields)._._.invoke_impl != (void *)0x0)))) {
        cVar5 = func_?(pOVar4);
        if (cVar5 != '\0') {
          return;
        }
        method_00 = this_00;
        cVar5 = func_?();
        pOVar6 = mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,method_00)
        ;
        cVar7 = func_?(pOVar6);
        if (cVar5 != '\0') {
          if (cVar7 != '\0') {
            func_?();
            return;
          }
          func_?(this_00,pOVar4);
          return;
        }
        if (cVar7 != '\0') {
          pOVar4 = mscorlib.dll::System::Collections::Generic::
                   KeyValuePair`2[WinningConditionType,System::Object]::
                   KeyValuePair_2_WinningConditionType_System_Object__get_Value
                             ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,
                              unaff_retaddr);
          func_?(this_00->flags,pOVar4);
          return;
        }
        func_?(this_00->flags,pOVar4);
        return;
      }
      (*pcVar3)(pOVar4,this_00);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetReady() */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_SetReady(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  if (TypeInfo__AccessoryDataManager->static_fields->accessoriesReady == 0) {
    if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AccessoryDataManager);
    }
    if (TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                (this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 1;
    }
  }
  else {
    if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AccessoryDataManager);
    }
    if (TypeInfo__AccessoryDataManager->static_fields->readyCallback != (UnityAction *)0x0) {
      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AccessoryDataManager);
      }
      this = (AvatarMotor_OnActiveBounceDelegate *)
             TypeInfo__AccessoryDataManager->static_fields->readyCallback;
      if (this != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
        AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                  (this,(MethodInfo *)0x0);
        return;
      }
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}


/* Void SetToOwns(Int32) */

void Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_SetToOwns
               (int32_t streamingAssetId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
     (this = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(pAVar1->fields).accessoryDatas,
     this != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0)) {
    pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this,streamingAssetId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__get_Item_int_
                       );
    if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
      *(undefined1 *)&pTVar2[1].fields.m_errorCode = 1;
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* AccessoryBundleClient get_AccessoryBundleClient() */

AccessoryBundleClient *
Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if (pAVar1 != (AccessoryShopDataClient *)0x0) {
    return (pAVar1->fields).accessoryBundle;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pAVar3 = (AccessoryBundleClient *)(*pcVar2)();
  return pAVar3;
}


/* Int32 get_AccessoryBundleId() */

int32_t Assembly-CSharp.dll::AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleId
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pAVar1 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
  if ((pAVar1 != (AccessoryShopDataClient *)0x0) &&
     (pAVar2 = (pAVar1->fields).accessoryBundle, pAVar2 != (AccessoryBundleClient *)0x0)) {
    return (pAVar2->fields)._.accessoryBundleID;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}

