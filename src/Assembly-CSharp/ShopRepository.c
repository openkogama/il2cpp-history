
/* Void CreateWorldObjectHierarchies() */

void Assembly-CSharp.dll::ShopRepository::ShopRepository_CreateWorldObjectHierarchies
               (ShopRepository *this,MethodInfo *method)

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
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffbc,(MethodInfo *)0x0);
  fStack_5 = pVVar4->z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffbc,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffb0,*pVVar4,10.0,(MethodInfo *)0x0);
  fVar6 = pVVar4->z;
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__List__);
  if ((this->fields).shopInventory != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
    piVar7 = (int *)func_?();
    uStack_1 = 0;
    while (piVar7 != (int *)0x0) {
      cVar8 = func_?();
      if (cVar8 == '\0') {
        *piVar7 = 0xa6;
        uStack_1 = 0xffffffff;
        if (piVar7 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uVar9 = 0;
      uVar10 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar10 != 0) {
        iVar11 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IEnumerator_1_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem___Class **)
               (iVar11 + (uint)uVar9 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>
             ) {
            puVar12 = (undefined4 *)(*piVar7 + (*(int *)(iVar11 + 4 + (uint)uVar9 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar10);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar12)();
      item = (MVItem *)func_?();
      item_00 = ARepository::ARepository_GetKoGaMaPackageFromItem(item,(MethodInfo *)0x0);
      if (((item_00 == (KoGaMaPackageClient *)0x0) ||
          (pDVar13 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(item_00->fields).worldObjects,
          pDVar13 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0)) ||
         (pTVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar13,(item_00->fields).worldObjectRoot,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                              ), pTVar14 == (TerrainUtility_TerrainMap *)0x0)) break;
      uVar15 = 1;
      (*(code *)pTVar14->klass[3]._1.thread_static_fields_size)();
      pDVar13 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(item_00->fields).worldObjects;
      if ((pDVar13 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) ||
         (pTVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar13,(item_00->fields).worldObjectRoot,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                              ), pTVar16 == (TerrainUtility_TerrainMap *)0x0)) break;
      fVar17 = fStack_5;
      (*(code *)pTVar16->klass[1]._0.namespaze)();
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.y = fVar17;
      a.x = (float)uVar15;
      a.z = fStack_5;
      b.y = (float)pTVar14;
      b.x = (float)pTVar16;
      b.z = fVar6;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffb0,a,b,(MethodInfo *)0x0);
      fStack_5 = pVVar4->z;
      if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)item_00,
                 MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__Add_KoGaMaPackageClient_
                );
    }
  }
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Dictionary`2[System.Int32,MV.WorldObject.MVItem] GetItemsByCategory(Int32) */

Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *
Assembly-CSharp.dll::ShopRepository::ShopRepository_GetItemsByCategory
          (ShopRepository *this,int32_t itemCategory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&UNK_?;
  pvVar1 = (void *)func_?(TypeInfo__System__Int32,1);
  if (pvVar1 != (void *)0x0) {
    if (*(int *)((int)pvVar1 + 0xc) == 0) goto code_?;
    bVar2 = cRam_? == '\0';
    *(int32_t *)((int)pvVar1 + 0x10) = itemCategory;
    if (bVar2) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)
              func_?(TypeInfo__ShopRepository___GetItemsByItemCategories_c__AnonStorey0);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = pvVar1;
      pDVar3 = (this->fields).shopInventory;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this_00,
                 MethodInfo__ShopRepository___GetItemsByItemCategories_c__AnonStorey0____m__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,
                 MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>__Func_System__Object__void__
                );
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                         ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pDVar3,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                           *)pUVar4,
                          System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                         );
      if (TypeInfo__ShopRepository->static_fields->__f__am_cache0 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
           *)0x0) {
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)0x0,
                   MethodInfo__ShopRepository___GetItemsByItemCategories_m__1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,
                   MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__Func_System__Object__void__
                  );
        TypeInfo__ShopRepository->static_fields->__f__am_cache0 =
             (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
              *)pUVar4;
      }
      keySelector = (Func_2_Object_Object_ *)TypeInfo__ShopRepository->static_fields->__f__am_cache0
      ;
      if (TypeInfo__ShopRepository->static_fields->__f__am_cache1 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
           *)0x0) {
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)0x0,
                   MethodInfo__ShopRepository___GetItemsByItemCategories_m__2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,
                   MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>__Func_System__Object__void__
                  );
        TypeInfo__ShopRepository->static_fields->__f__am_cache1 =
             (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
              *)pUVar4;
      }
      pDVar3 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_13
                         ((IEnumerable_1_System_Object_ *)source,keySelector,
                          (Func_2_Object_Boolean_ *)
                          TypeInfo__ShopRepository->static_fields->__f__am_cache1,
                          System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                         );
      return pDVar3;
    }
  }
  func_?(0);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)(*pcVar6)();
  return pDVar3;
}


/* Dictionary`2[System.Int32,MV.WorldObject.MVItem] GetItemsByItemCategories(Int32[]) */

Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *
Assembly-CSharp.dll::ShopRepository::ShopRepository_GetItemsByItemCategories
          (ShopRepository *this,Int32__Array *itemCategories,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ShopRepository___GetItemsByItemCategories_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = itemCategories;
    pDVar1 = (this->fields).shopInventory;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this_00,
               MethodInfo__ShopRepository___GetItemsByItemCategories_c__AnonStorey0____m__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>__Func_System__Object__void__
              );
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                       ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pDVar1,
                        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                         *)pUVar2,
                        System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                       );
    if (TypeInfo__ShopRepository->static_fields->__f__am_cache0 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
         *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__ShopRepository___GetItemsByItemCategories_m__1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,
                 MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__Func_System__Object__void__
                );
      TypeInfo__ShopRepository->static_fields->__f__am_cache0 =
           (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
            *)pUVar2;
    }
    keySelector = (Func_2_Object_Object_ *)TypeInfo__ShopRepository->static_fields->__f__am_cache0;
    if (TypeInfo__ShopRepository->static_fields->__f__am_cache1 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
         *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__ShopRepository___GetItemsByItemCategories_m__2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,
                 MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>__Func_System__Object__void__
                );
      TypeInfo__ShopRepository->static_fields->__f__am_cache1 =
           (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
            *)pUVar2;
    }
    pDVar1 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_13
                       ((IEnumerable_1_System_Object_ *)source,keySelector,
                        (Func_2_Object_Boolean_ *)
                        TypeInfo__ShopRepository->static_fields->__f__am_cache1,
                        System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                       );
    return pDVar1;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)(*pcVar3)();
  return pDVar1;
}


/* Void RemoveItem(Int32) */

void Assembly-CSharp.dll::ShopRepository::ShopRepository_RemoveItem
               (ShopRepository *this,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).shopInventory;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
              (this_00,itemId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Remove_int_
              );
    ARepository::ARepository_RemoveItem((ARepository *)this,itemId,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReorganizeItemsByItemType(Boolean) */

void Assembly-CSharp.dll::ShopRepository::ShopRepository_ReorganizeItemsByItemType
               (ShopRepository *this,bool notifyOfChange,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
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
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).ItemCategoriesInShop;
  puStack_7 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffb4,this_00,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar9 = func_?();
      if (cVar9 == '\0') {
        *puStack_7 = 0x90;
        uStack_1 = 0xffffffff;
        func_?();
        if (notifyOfChange != 0) {
          ARepository::ARepository_NotifyRepositoryChange((ARepository *)this,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                         );
      if (cRam_? == '\0') {
        CStack_6.klass = _UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x1;
      pvVar11 = (void *)func_?();
      if (pvVar11 == (void *)0x0) goto code_?;
      if (*(int *)((int)pvVar11 + 0xc) == 0) break;
      bVar12 = cRam_? == '\0';
      *(Object **)((int)pvVar11 + 0x10) = pOVar10;
      if (bVar12) {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      method_00 = (MethodInfo *)&UNK_?;
      this_02 = (ScaleAnimationBase *)
                func_?(TypeInfo__ShopRepository___GetItemsByItemCategories_c__AnonStorey0);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,method_00);
      if (this_02 == (ScaleAnimationBase *)0x0) goto code_?;
      (this_02->fields)._._._._.m_CachedPtr = pvVar11;
      pDStack_13 = (this->fields).shopInventory;
      pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar14,(Object *)this_02,
                 MethodInfo__ShopRepository___GetItemsByItemCategories_c__AnonStorey0____m__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,
                 MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>__Func_System__Object__void__
                );
      pDStack_13 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
                   System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                             ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                              pDStack_13,
                              (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                               *)pUVar14,
                              System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                             );
      if (TypeInfo__ShopRepository->static_fields->__f__am_cache0 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
           *)0x0) {
        pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar14,(Object *)0x0,
                   MethodInfo__ShopRepository___GetItemsByItemCategories_m__1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,
                   MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__Func_System__Object__void__
                  );
        TypeInfo__ShopRepository->static_fields->__f__am_cache0 =
             (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
              *)pUVar14;
      }
      keySelector = (Func_2_Object_Object_ *)TypeInfo__ShopRepository->static_fields->__f__am_cache0
      ;
      if (TypeInfo__ShopRepository->static_fields->__f__am_cache1 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
           *)0x0) {
        pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar14,(Object *)0x0,
                   MethodInfo__ShopRepository___GetItemsByItemCategories_m__2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,
                   MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>__Func_System__Object__void__
                  );
        TypeInfo__ShopRepository->static_fields->__f__am_cache1 =
             (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
              *)pUVar14;
      }
      this_03 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_13
                          ((IEnumerable_1_System_Object_ *)pDStack_13,keySelector,
                           (Func_2_Object_Boolean_ *)
                           TypeInfo__ShopRepository->static_fields->__f__am_cache1,
                           System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                          );
      if (this_03 == (Dictionary_2_System_Object_System_Boolean_ *)0x0) goto code_?;
      source = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_03,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Keys__
                         );
      this_04 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
                System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                          ((IEnumerable_1_UseInteractor_ *)source,
                           System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
                          );
      pDStack_13 = this_04;
      pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar14,(Object *)this,
                 MethodInfo__ShopRepository___ReorganizeItemsByItemType_m__0_int__int_,
                 MethodInfo__System__Comparison<int>__Comparison_System__Object__void__);
      if (this_04 == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Sort_2
                ((List_1_VoxelHit_ *)this_04,(Comparison_1_VoxelHit_ *)pUVar14,
                 MethodInfo__System__Collections__Generic__List<int>__Sort_System__Comparison<int>_)
      ;
      for (index = 0;
          pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                              MethodInfo__System__Collections__Generic__List<int>__get_Count__),
          index < (int)pOVar10; index = index + 1) {
        this_01 = (this->fields)._.itemIDToInventorySlotIndex;
        iStack_15 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__get_Item
                              ((List_1_System_Int32_ *)pDStack_13,index,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        CStack_6.monitor = (MonitorData *)&iStack_15;
        CStack_6.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
             TypeInfo__System__Int32;
        pSStack_16 = (String *)func_?();
        CStack_6.monitor = (MonitorData *)&iStack_17;
        CStack_6.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
             TypeInfo__System__Int32;
        iStack_17 = index;
        value = (Theme *)func_?();
        if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)this_01,pSStack_16,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        this_04 = pDStack_13;
      }
    }
    uVar18 = func_?();
    func_?(uVar18,0,0);
  }
code_?:
  func_?(0);
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Int32 <GetItemsByItemCategories>m__1(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

int32_t Assembly-CSharp.dll::ShopRepository::ShopRepository__GetItemsByItemCategories_m__1
                  (KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ pair,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&pair,
                          MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Key__
                         );
  return iVar1;
}


/* MVItem <GetItemsByItemCategories>m__2(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

MVItem * Assembly-CSharp.dll::ShopRepository::ShopRepository__GetItemsByItemCategories_m__2
                   (KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ pair,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVItem *)
           func_?(&pair,
                           MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Value__
                          );
  return pMVar1;
}


/* Int32 <ReorganizeItemsByItemType>m__0(Int32, Int32) */

int32_t Assembly-CSharp.dll::ShopRepository::ShopRepository__ReorganizeItemsByItemType_m__0
                  (ShopRepository *this,int32_t a,int32_t b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  this = (ShopRepository *)a;
  pDVar2 = (pSVar1->fields)._.itemIDToInventorySlotIndex;
  pTVar3 = (Type *)func_?(TypeInfo__System__Int32,&this);
  pPVar4 = (Pool *)0x0;
  if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
    pIVar5 = extraout_EDX;
  }
  else {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar2,pTVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pDVar2 = (pSVar1->fields)._.itemIDToInventorySlotIndex;
    a = b;
    pTVar3 = (Type *)func_?(TypeInfo__System__Int32,&a);
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar2,pTVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar7 = CONCAT44(TypeInfo__System__Int32,pPVar6);
    if (pPVar6 == (Pool *)0x0) goto code_?;
    if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar8 = (int *)func_?(pPVar6);
    if (pPVar4 == (Pool *)0x0) goto code_?;
    pIVar5 = TypeInfo__System__Int32;
    if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar9 = (int *)func_?(pPVar4);
      return *piVar9 - *piVar8;
    }
  }
  uVar7 = func_?(pPVar4,pIVar5);
code_?:
  func_?(uVar7);
  pcVar10 = (code *)swi(3);
  iVar11 = (*pcVar10)();
  return iVar11;
}


/* ShopRepository() */

void Assembly-CSharp.dll::ShopRepository::ShopRepository__ctor
               (ShopRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ARepository::ARepository__ctor((ARepository *)this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
            );
  (this->fields).shopInventory = this_00;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).ItemCategoriesInShop = (List_1_System_Int32_ *)this_01;
  return;
}

