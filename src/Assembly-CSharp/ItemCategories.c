
/* String[] GetNames() */

String__Array *
Assembly-CSharp.dll::ItemCategories::ItemCategories_GetNames
          (ItemCategories *this,MethodInfo *method)

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
  this_01 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_00 = (this->fields).itemCategoriesNameID;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                        ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Keys__
                        );
    if (this_02 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffb8,
                 (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                 this_02,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_int>__GetEnumerator__
                );
      uStack_1 = 0;
      while (cVar4 = func_?(), cVar4 != '\0') {
        item = func_?();
        if (this_01 == (List_1_VoxelHit_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_01,item,
                   MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                  );
      }
      uStack_1 = 0xffffffff;
      func_?();
      if (this_01 != (List_1_VoxelHit_ *)0x0) {
        pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                 List_1_VoxelHit__ToArray
                           (this_01,
                            MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                           );
        *unaff_FS_OFFSET = uStack_3;
        return (String__Array *)pVVar5;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar7 = (String__Array *)(*pcVar6)();
  return pSVar7;
}


/* String IDToName(Int32) */

String * Assembly-CSharp.dll::ItemCategories::ItemCategories_IDToName
                   (ItemCategories *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).itemCategoriesIDName;
  if (pDVar1 != (Dictionary_2_System_Int32_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Could_not_find_category_name,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      return TypeInfo__System__String->static_fields->Empty;
    }
    pDVar1 = (this->fields).itemCategoriesIDName;
    if (pDVar1 != (Dictionary_2_System_Int32_System_String_ *)0x0) {
      pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)pDVar1,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                         );
      return (String *)pTVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Int32 NameToID(String) */

int32_t Assembly-CSharp.dll::ItemCategories::ItemCategories_NameToID
                  (ItemCategories *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).itemCategoriesNameID;
  if (pDVar1 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__ContainsKey
                      ((Dictionary_2_System_Object_System_Int32_ *)pDVar1,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Could_not_find_category_id,(MethodInfo *)0x0);
      return -1;
    }
    pDVar1 = (this->fields).itemCategoriesNameID;
    if (pDVar1 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]
              ::Dictionary_2_System_Object_System_Int32__get_Item
                        ((Dictionary_2_System_Object_System_Int32_ *)pDVar1,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                        );
      return iVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* ItemCategories(Dictionary`2[System.String,System.Int32]) */

void Assembly-CSharp.dll::ItemCategories::ItemCategories__ctor
               (ItemCategories *this,Dictionary_2_System_String_System_Int32_ *itemCategories,
               MethodInfo *method)

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
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>;
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  pDVar9 = (Dictionary_2_System_Int32_System_String_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar9,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  (this->fields).itemCategoriesIDName = pDVar9;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).itemCategoriesNameID = itemCategories;
  if (itemCategories != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb4,
                        (Dictionary_2_WinningConditionType_System_Object_ *)itemCategories,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        *puStack_8 = 0x69;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                            );
      pDVar9 = (this->fields).itemCategoriesIDName;
      auStack_6._0_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Value__;
      key = func_?();
      auStack_6._0_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Key__;
      value = (Object *)func_?();
      if (pDVar9 == (Dictionary_2_System_Int32_System_String_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
                );
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

