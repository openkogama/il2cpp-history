
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
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).avatars;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)(item->fields).slotPosition,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__ContainsKey_int_
                        );
      if (bVar1 != 0) {
        pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&(item->fields).slotPosition,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Avatar_with_slotPosition__,pSVar2,
                            StringLiteral__already_exists_in_AvatarReposit,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar2,(MethodInfo *)0x0);
        return;
      }
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatars;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)(item->fields).slotPosition,(Object *)item,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Add_int__AvatarRepositoryItem_
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
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,slotPosition,
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).avatars;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
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
      if (this_01 == (Func_2_AvatarRepositoryItem_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]
      ::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_01,
                 (Object *)object,
                 MethodInfo__AvatarRepository____c___GetAvatars_b__5_0_AvatarRepositoryItem_,
                 (MethodInfo *)0x0);
      TypeInfo__AvatarRepository____c->static_fields->__9__5_0 = this_01;
      func_?(&TypeInfo__AvatarRepository____c->static_fields->__9__5_0,this_01);
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                          ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Single_ *)this_01,
                           System__Linq__IOrderedEnumerable<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__OrderBy<AvatarRepositoryItem,_int>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>__System__Func<AvatarRepositoryItem,_int>_
                          );
    pLVar1 = (List_1_AvatarRepositoryItem_ *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                       ((IEnumerable_1_System_Object_ *)source_00,
                        System__Collections__Generic__List<AvatarRepositoryItem>_MethodInfo__System__Linq__Enumerable__ToList<AvatarRepositoryItem>_System__Collections__Generic__IEnumerable<AvatarRepositoryItem>_
                       );
    return pLVar1;
  }
code_?:
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
  this_00 = (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>
                           );
  if (this_00 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).avatars = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).avatars;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
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

