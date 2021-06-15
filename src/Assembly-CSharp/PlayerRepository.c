
/* Int32 CountItemsWithOriginalID(Int32) */

int32_t Assembly-CSharp.dll::PlayerRepository::PlayerRepository_CountItemsWithOriginalID
                  (PlayerRepository *this,int32_t originalId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerRepository___CountItemsWithOriginalID_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)originalId;
    if (originalId != 0) {
      source = (this->fields).playerInventory;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this_00,
                 MethodInfo__PlayerRepository___CountItemsWithOriginalID_c__AnonStorey1____m__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,
                 MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>__Func_System__Object__void__
                );
      source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                            ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                             (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                              *)this_01,
                             System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                            );
      iVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_7
                        ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source_00,
                         int_MethodInfo__System__Linq__Enumerable__Count<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_
                        );
      return iVar1;
    }
    return 1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Void CreateWorldObjectHierarchies() */

void Assembly-CSharp.dll::PlayerRepository::PlayerRepository_CreateWorldObjectHierarchies
               (PlayerRepository *this,MethodInfo *method)

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
  if ((this->fields).playerInventory != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
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


/* Dictionary`2[System.Int32,MV.WorldObject.MVItem] GetItemsByItemCategory(Int32[]) */

Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *
Assembly-CSharp.dll::PlayerRepository::PlayerRepository_GetItemsByItemCategory
          (PlayerRepository *this,Int32__Array *itemCategories,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerRepository___GetItemsByItemCategory_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = itemCategories;
    pDVar1 = (this->fields).playerInventory;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this_00,
               MethodInfo__PlayerRepository___GetItemsByItemCategory_c__AnonStorey0____m__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>__Func_System__Object__void__
              );
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                       ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pDVar1,
                        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                         *)pUVar2,
                        System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                       );
    if (TypeInfo__PlayerRepository->static_fields->__f__am_cache0 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
         *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__PlayerRepository___GetItemsByItemCategory_m__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,
                 MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__Func_System__Object__void__
                );
      TypeInfo__PlayerRepository->static_fields->__f__am_cache0 =
           (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
            *)pUVar2;
    }
    keySelector = (Func_2_Object_Object_ *)TypeInfo__PlayerRepository->static_fields->__f__am_cache0
    ;
    if (TypeInfo__PlayerRepository->static_fields->__f__am_cache1 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
         *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__PlayerRepository___GetItemsByItemCategory_m__1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,
                 MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>__Func_System__Object__void__
                );
      TypeInfo__PlayerRepository->static_fields->__f__am_cache1 =
           (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
            *)pUVar2;
    }
    pDVar1 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_13
                       ((IEnumerable_1_System_Object_ *)source,keySelector,
                        (Func_2_Object_Boolean_ *)
                        TypeInfo__PlayerRepository->static_fields->__f__am_cache1,
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

void Assembly-CSharp.dll::PlayerRepository::PlayerRepository_RemoveItem
               (PlayerRepository *this,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).playerInventory;
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


/* Int32 <GetItemsByItemCategory>m__0(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

int32_t Assembly-CSharp.dll::PlayerRepository::PlayerRepository__GetItemsByItemCategory_m__0
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


/* MVItem <GetItemsByItemCategory>m__1(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

MVItem * Assembly-CSharp.dll::PlayerRepository::PlayerRepository__GetItemsByItemCategory_m__1
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


/* PlayerRepository() */

void Assembly-CSharp.dll::PlayerRepository::PlayerRepository__ctor
               (PlayerRepository *this,MethodInfo *method)

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
  (this->fields).playerInventory = this_00;
  return;
}

