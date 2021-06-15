
/* Void AddTabMenuButton(Int32, String) */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_AddTabMenuButton
               (TabMenuAccessoryShop *this,int32_t categoryIndex,String *categoryName,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).nonLayoutTabButtons;
  if (pLVar1 != (List_1_TabMenuAccessoryShop_TabMenuButtonNonLayoutDef_ *)0x0) {
    while (pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                               MethodInfo__System__Collections__Generic__List<TabMenuAccessoryShop::TabMenuButtonNonLayoutDef>__get_Count__
                              ), index < (int)pOVar2) {
      pLVar1 = (this->fields).nonLayoutTabButtons;
      if ((pLVar1 == (List_1_TabMenuAccessoryShop_TabMenuButtonNonLayoutDef_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<TabMenuAccessoryShop::TabMenuButtonNonLayoutDef>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      pLVar1 = (this->fields).nonLayoutTabButtons;
      if (pIVar3[1].klass == (IEventSystemHandler__Class *)categoryIndex) {
        if ((pLVar1 != (List_1_TabMenuAccessoryShop_TabMenuButtonNonLayoutDef_ *)0x0) &&
           (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index
                                ,
                                MethodInfo__System__Collections__Generic__List<TabMenuAccessoryShop::TabMenuButtonNonLayoutDef>__get_Item_int_
                               ), pIVar3 != (IEventSystemHandler *)0x0)) {
          pXVar4 = (XpBoostParticlePreviewer *)pIVar3[1].monitor;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            categoryName = (String *)TypeInfo__UnityEngine__Object;
            categoryIndex = (int32_t)&UNK_?;
            func_?();
          }
          pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             (pXVar4,
                              TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase_
                             );
          goto code_?;
        }
        goto code_?;
      }
      index = index + 1;
      if (pLVar1 == (List_1_TabMenuAccessoryShop_TabMenuButtonNonLayoutDef_ *)0x0)
      goto code_?;
    }
    pXVar4 = (XpBoostParticlePreviewer *)0x0;
code_?:
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pXVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pXVar4 = (XpBoostParticlePreviewer *)(this->fields).tabMenuButtonPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar4,
                          TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase_
                         );
    }
    if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
      (*pXVar4->klass[1]._0.gc_desc)(pXVar4,categoryIndex,categoryName,pXVar4->klass[1]._0.name);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pXVar4,(MethodInfo *)0x0);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,parent,0,(MethodInfo *)0x0);
        this_00 = (this->fields).buttons;
        if (this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,categoryIndex,
                     (Object *)pXVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Add_int__TabMenuButtonBase_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DestroyTab(AccessoryCategoryClient) */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_DestroyTab
               (TabMenuAccessoryShop *this,AccessoryCategoryClient__Enum category,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttons;
  if (this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).buttons;
    if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar2,category,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                            ), this_01 != (TerrainUtility_TerrainMap *)0x0)) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).buttons;
      if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar2,category,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Remove_int_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* TabMenuButtonBase GetTabMenuButton(AccessoryCategoryClient) */

TabMenuButtonBase *
Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
          (TabMenuAccessoryShop *this,AccessoryCategoryClient__Enum category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttons;
  if (this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return (TabMenuButtonBase *)0x0;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).buttons;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_01,category,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                         );
      return (TabMenuButtonBase *)pTVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pTVar4 = (TabMenuButtonBase *)(*pcVar3)();
  return pTVar4;
}


/* Void SelectTab(Int32, Int32, Int32) */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_SelectTab
               (TabMenuAccessoryShop *this,int32_t tab,int32_t currentPage,int32_t maxPages,
               MethodInfo *method)

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
  pTVar8 = (this->fields).pages;
  puStack_9 = (undefined4 *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  pOStack_10 = (Object *)func_?(TypeInfo__System__Int32,&currentPage);
  iStack_11 = maxPages;
  pOStack_12 = (Object *)func_?(TypeInfo__System__Int32,&iStack_11);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Format_1
            (StringLiteral__0___1_,pOStack_10,pOStack_12,(MethodInfo *)0x0);
  if (pTVar8 != (Text *)0x0) {
    (*(code *)(pTVar8->klass->vtable).set_text.method)();
    pLVar13 = (this->fields).pageButtons;
    currentPage = 0;
    if (pLVar13 != (List_1_UnityEngine_GameObject_ *)0x0) {
      while (index = currentPage,
            pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar13,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                               ), currentPage < (int)pOVar14) {
        pLVar13 = (this->fields).pageButtons;
        if ((pLVar13 == (List_1_UnityEngine_GameObject_ *)0x0) ||
           (this_02 = (GameObject *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar13,
                                 index,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                                ), this_02 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,1 < maxPages,(MethodInfo *)0x0);
        pLVar13 = (this->fields).pageButtons;
        currentPage = index + 1;
        if (pLVar13 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      }
      this_00 = (this->fields).buttons;
      if (this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
        pDVar15 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                             *)&stack0xffffffa8,
                            (Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__GetEnumerator__
                           );
        auStack_6._0_4_ = pDVar15->dictionary;
        auStack_6._4_4_ = pDVar15->next;
        auStack_6._8_4_ = pDVar15->stamp;
        auStack_6._12_4_ = (pDVar15->current).key;
        auStack_6._16_4_ = (pDVar15->current).value;
        uStack_1 = 0;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
code_?:
  cVar17 = func_?();
  if (cVar17 == '\0') goto code_?;
  KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                        ((LevelRewardsManager *)auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__get_Current__
                        );
  piVar18 = (int *)func_?();
  if (piVar18 == (int *)0x0) goto code_?;
  (**(code **)(*piVar18 + 0xe8))();
  goto code_?;
code_?:
  *puStack_9 = 0x96;
  uStack_1 = 0xffffffff;
  func_?();
  this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).buttons;
  if ((this_01 !=
       (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
       0x0) && (pTVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   (this_01,tab,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                                   ), pTVar19 != (TerrainUtility_TerrainMap *)0x0)) {
    (**(code **)&pTVar19->klass[1]._0.byval_arg.attrs)();
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  goto code_?;
}


/* TabMenuAccessoryShop() */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop__ctor
               (TabMenuAccessoryShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_TabMenuButtonBase_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Dictionary__
            );
  (this->fields).buttons = this_00;
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

