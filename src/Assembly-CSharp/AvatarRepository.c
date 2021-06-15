
/* Void AddItem(AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarRepository::AvatarRepository_AddItem
               (AvatarRepository *this,AvatarRepositoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = item;
  if (item != (AvatarRepositoryItem *)0x0) {
    pDVar2 = (this->fields).avatars;
    if (pDVar2 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,
                         (item->fields).slotPosition,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__ContainsKey_int_
                        );
      if (bVar3 != 0) {
        item = (AvatarRepositoryItem *)(pAVar1->fields).slotPosition;
        arg1 = (Object *)func_?(TypeInfo__System__Int32,&item);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pAVar1 = (AvatarRepositoryItem *)
                 mscorlib.dll::System::String::String_Concat_1
                           ((Object *)StringLiteral_Avatar_with_slotPosition__,arg1,
                            (Object *)StringLiteral__already_exists_in_AvatarReposit,
                            (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          method = (MethodInfo *)TypeInfo__UnityEngine__Debug;
          item = (AvatarRepositoryItem *)&UNK_?;
          func_?();
        }
        method = (MethodInfo *)0x0;
        item = pAVar1;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pAVar1,(MethodInfo *)0x0);
        return;
      }
      pDVar2 = (this->fields).avatars;
      if (pDVar2 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,(pAVar1->fields).slotPosition,
                   (Object *)pAVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Add_int__AvatarRepositoryItem_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* AvatarRepositoryItem GetAvatar(Int32) */

AvatarRepositoryItem *
Assembly-CSharp.dll::AvatarRepository::AvatarRepository_GetAvatar
          (AvatarRepository *this,int32_t slotPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).avatars;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pAVar1 = (AvatarRepositoryItem *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this_00,slotPosition,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Item_int_
                       );
    return pAVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pAVar1 = (AvatarRepositoryItem *)(*pcVar2)();
  return pAVar1;
}


/* List`1[AvatarRepositoryItem] GetAvatars() */

List_1_AvatarRepositoryItem_ *
Assembly-CSharp.dll::AvatarRepository::AvatarRepository_GetAvatars
          (AvatarRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatars;
  if (this_00 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                       ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Values__
                       );
    if (TypeInfo__AvatarRepository->static_fields->__f__am_cache0 ==
        (Func_2_AvatarRepositoryItem_Int32_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Func<AvatarRepositoryItem,_int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__AvatarRepository___GetAvatars_m__0_AvatarRepositoryItem_,
                 MethodInfo__System__Func<AvatarRepositoryItem,_int>__Func_System__Object__void__);
      TypeInfo__AvatarRepository->static_fields->__f__am_cache0 =
           (Func_2_AvatarRepositoryItem_Int32_ *)this_01;
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                          ((IOrderedEnumerable_1_System_Object_ *)source,
                           (Func_2_Object_Int64_ *)
                           TypeInfo__AvatarRepository->static_fields->__f__am_cache0,
                           System__Linq__IOrderedEnumerable<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__OrderBy<AvatarRepositoryItem,_int>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>__System__Func<AvatarRepositoryItem,_int>_
                          );
    pLVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                       ((IEnumerable_1_UseInteractor_ *)source_00,
                        System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
                       );
    return (List_1_AvatarRepositoryItem_ *)pLVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pLVar3 = (List_1_AvatarRepositoryItem_ *)(*pcVar2)();
  return pLVar3;
}


/* Int32 <GetAvatars>m__0(AvatarRepositoryItem) */

int32_t Assembly-CSharp.dll::AvatarRepository::AvatarRepository__GetAvatars_m__0
                  (AvatarRepositoryItem *x,MethodInfo *method)

{
  if (x != (AvatarRepositoryItem *)0x0) {
    return (x->fields).slotPosition;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* AvatarRepository() */

void Assembly-CSharp.dll::AvatarRepository::AvatarRepository__ctor
               (AvatarRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Dictionary__
            );
  (this->fields).avatars = this_00;
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::AvatarRepository::AvatarRepository_get_Count
                  (AvatarRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatars;
  if (this_00 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Count__
                       );
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

