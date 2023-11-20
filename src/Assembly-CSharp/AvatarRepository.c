
/* Void AddItem(AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarRepository::AvatarRepository_AddItem
               (AvatarRepository *this,AvatarRepositoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Add_int__AvatarRepositoryItem_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__ContainsKey_int_
                   );
    func_?(&StringLiteral_Avatar_with_slotPosition__);
    func_?(&StringLiteral__already_exists_in_AvatarReposit);
    cRam_? = '\x01';
  }
  if (item != (AvatarRepositoryItem *)0x0) {
    pDVar1 = (this->fields).avatars;
    if (pDVar1 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,
                         (item->fields).slotPosition,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__ContainsKey_int_
                        );
      if (bVar2 != 0) {
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&(item->fields).slotPosition,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Avatar_with_slotPosition__,pSVar3,
                            StringLiteral__already_exists_in_AvatarReposit,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        return;
      }
      pDVar1 = (this->fields).avatars;
      if (pDVar1 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(item->fields).slotPosition,
                   (Object *)item,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Add_int__AvatarRepositoryItem_
                  );
        return;
      }
    }
  }
  func_?();
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
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatars;
  if (this_00 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
    pAVar1 = (AvatarRepositoryItem *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,slotPosition,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Item_int_
                       );
    return pAVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pAVar1 = (AvatarRepositoryItem *)(*pcVar3)();
  return pAVar1;
}


/* List`1[AvatarRepositoryItem] GetAvatars() */

List_1_AvatarRepositoryItem_ *
Assembly-CSharp.dll::AvatarRepository::AvatarRepository_GetAvatars
          (AvatarRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Values__
                   );
    func_?(&
                    System__Linq__IOrderedEnumerable<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__OrderBy<AvatarRepositoryItem,_int>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>__System__Func<AvatarRepositoryItem,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
                   );
    func_?(&TypeInfo__System__Func<AvatarRepositoryItem,_int>);
    func_?(&MethodInfo__AvatarRepository____c___GetAvatars_b__5_0_AvatarRepositoryItem_);
    func_?(&TypeInfo__AvatarRepository____c);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).avatars;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Values__
                       );
    if ((TypeInfo__AvatarRepository____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarRepository____c);
    }
    this_01 = TypeInfo__AvatarRepository____c->static_fields->__9__5_0;
    if (this_01 == (Func_2_AvatarRepositoryItem_Int32_ *)0x0) {
      if ((TypeInfo__AvatarRepository____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AvatarRepository____c);
      }
      object = TypeInfo__AvatarRepository____c->static_fields->__9;
      this_01 = (Func_2_AvatarRepositoryItem_Int32_ *)
                func_?(TypeInfo__System__Func<AvatarRepositoryItem,_int>);
      Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
      Metadata::__Il2CppFullySharedGenericType]::
      ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                 (Object *)object,
                 MethodInfo__AvatarRepository____c___GetAvatars_b__5_0_AvatarRepositoryItem_,
                 (MethodInfo *)0x0);
      TypeInfo__AvatarRepository____c->static_fields->__9__5_0 = this_01;
      func_?(&TypeInfo__AvatarRepository____c->static_fields->__9__5_0,this_01);
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                          ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Int32_ *)this_01,
                           System__Linq__IOrderedEnumerable<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__OrderBy<AvatarRepositoryItem,_int>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>__System__Func<AvatarRepositoryItem,_int>_
                          );
    pLVar1 = (List_1_AvatarRepositoryItem_ *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                       ((IEnumerable_1_System_Object_ *)source_00,
                        System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
                       );
    return pLVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_AvatarRepositoryItem_ *)(*pcVar2)();
  return pLVar1;
}


/* AvatarRepository() */

void Assembly-CSharp.dll::AvatarRepository::AvatarRepository__ctor
               (AvatarRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).avatars = (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::AvatarRepository::AvatarRepository_get_Count
                  (AvatarRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).avatars;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Count__
                      );
    return iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}

