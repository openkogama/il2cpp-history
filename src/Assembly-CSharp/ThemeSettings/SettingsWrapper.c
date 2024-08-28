
/* Void Add(ThemeAttribute) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_Add
               (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).attributes;
  if (this_00 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)attrib,
               MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DisableAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  uVar1 = (this->fields).activeAttributeGroup & ~groupsFlag;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  pIStack_4 = (IMenu *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&pIStack_4;
  pMVar5 = (MethodInfo *)&stack0xffffffb0;
  method_00 = (MethodInfo *)&stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                   );
    func_?(&TypeInfo__ThemeSettings__IMenu);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>);
    cRam_? = '\x01';
    method_00 = pMVar5;
  }
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                              );
  pLVar6 = this_01;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,2,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).attributes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffcc,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    RVar8 = pLVar7->_current;
    uStack_2 = 1;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_10,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                        );
      if (bVar9 == 0) break;
      if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
      uVar11 = *(uint *)((int)RVar8 + 0xc);
      this_01 = pLVar6;
      if ((uVar11 & uVar1) == uVar11 && ((this->fields).activeAttributeGroup & uVar11) != uVar11) {
        if (pLVar6 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar6,(Object *)RVar8,
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                  );
      }
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&pOStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
               ,(MethodInfo *)in_stack_12.genericMethod);
    uStack_2 = 0xffffffff;
    (this->fields).activeAttributeGroup = uVar1;
    if (this_01 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffcc,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          this_01,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      pOStack_10 = (Object__Class *)pLVar7->_list;
      RVar8 = pLVar7->_current;
      uStack_2 = 4;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_10,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&pOStack_10,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                     ,method_00);
          uStack_2 = 0xffffffff;
          pIVar13 = (this->fields).menu;
          if (pIVar13 != (IMenu *)0x0) {
            pIStack_4 = pIVar13;
            func_?();
          }
          *unaff_FS_OFFSET = (int)pIStack_4;
          return;
        }
        if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
        (**(code **)(*(int *)RVar8 + 0xf0))();
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void EnableAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_EnableAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  uVar1 = groupsFlag | (this->fields).activeAttributeGroup;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  pIStack_4 = (IMenu *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&pIStack_4;
  pMVar5 = (MethodInfo *)&stack0xffffffb0;
  method_00 = (MethodInfo *)&stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                   );
    func_?(&TypeInfo__ThemeSettings__IMenu);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>);
    cRam_? = '\x01';
    method_00 = pMVar5;
  }
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                              );
  pLVar6 = this_01;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,2,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).attributes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffcc,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    RVar8 = pLVar7->_current;
    uStack_2 = 1;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_10,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                        );
      if (bVar9 == 0) break;
      if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
      uVar11 = *(uint *)((int)RVar8 + 0xc);
      this_01 = pLVar6;
      if ((uVar11 & uVar1) == uVar11 && ((this->fields).activeAttributeGroup & uVar11) != uVar11) {
        if (pLVar6 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar6,(Object *)RVar8,
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                  );
      }
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&pOStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
               ,(MethodInfo *)in_stack_12.genericMethod);
    uStack_2 = 0xffffffff;
    (this->fields).activeAttributeGroup = uVar1;
    if (this_01 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffcc,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          this_01,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      pOStack_10 = (Object__Class *)pLVar7->_list;
      RVar8 = pLVar7->_current;
      uStack_2 = 4;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_10,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&pOStack_10,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                     ,method_00);
          uStack_2 = 0xffffffff;
          pIVar13 = (this->fields).menu;
          if (pIVar13 != (IMenu *)0x0) {
            pIStack_4 = pIVar13;
            func_?();
          }
          *unaff_FS_OFFSET = (int)pIStack_4;
          return;
        }
        if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
        (**(code **)(*(int *)RVar8 + 0xf0))();
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean GetValueForAttribute[Boolean](ThemeAttribute) */

bool Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute
               (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).settingsData,
     pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      attrib = (ThemeAttribute *)
               (*(code *)(attrib->klass->vtable).__unknown.method)
                         (attrib,(attrib->klass->vtable).__unknown_1.methodPtr);
      iVar3 = *(int *)(method->field7_0x1c).methodMetadataHandle;
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_?(iVar3);
      }
      if (attrib != (ThemeAttribute *)0x0) {
        if ((attrib->klass->_0).element_class == *(Il2CppClass **)(iVar3 + 0x20)) {
code_?:
          pbVar4 = (bool *)func_?(attrib);
          return *pbVar4;
        }
        goto code_?;
      }
    }
    else {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).settingsData;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        attrib = (ThemeAttribute *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar1,(Object *)(attrib->fields)._Key_k__BackingField,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        iVar3 = *(int *)(method->field7_0x1c).methodMetadataHandle;
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_?();
        }
        if (attrib != (ThemeAttribute *)0x0) {
          if (*(int *)(*(int *)attrib + 0x20) == *(int *)(iVar3 + 0x20)) goto code_?;
          goto code_?;
        }
      }
    }
  }
  iVar3 = func_?();
code_?:
  func_?(attrib,iVar3);
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Int32 GetValueForAttribute[Int32](ThemeAttribute) */

int32_t Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_1
                  (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).settingsData,
     pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      attrib = (ThemeAttribute *)
               (*(code *)(attrib->klass->vtable).__unknown.method)
                         (attrib,(attrib->klass->vtable).__unknown_1.methodPtr);
      iVar3 = *(int *)(method->field7_0x1c).methodMetadataHandle;
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_?(iVar3);
      }
      if (attrib != (ThemeAttribute *)0x0) {
        if ((attrib->klass->_0).element_class == *(Il2CppClass **)(iVar3 + 0x20)) {
code_?:
          piVar4 = (int32_t *)func_?(attrib);
          return *piVar4;
        }
        goto code_?;
      }
    }
    else {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).settingsData;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        attrib = (ThemeAttribute *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar1,(Object *)(attrib->fields)._Key_k__BackingField,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        iVar3 = *(int *)(method->field7_0x1c).methodMetadataHandle;
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_?();
        }
        if (attrib != (ThemeAttribute *)0x0) {
          if (*(int *)(*(int *)attrib + 0x20) == *(int *)(iVar3 + 0x20)) goto code_?;
          goto code_?;
        }
      }
    }
  }
  iVar3 = func_?();
code_?:
  func_?(attrib,iVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Object GetValueForAttribute[Object](ThemeAttribute) */

Object * Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_2
                   (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).settingsData,
     pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      TVar3.m_Index =
           (*(code *)(attrib->klass->vtable).__unknown.method)
                     (attrib,(attrib->klass->vtable).__unknown_1.methodPtr);
    }
    else {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).settingsData;
      if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)(attrib->fields)._Key_k__BackingField,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    }
    if (((uint)((method->field7_0x1c).rgctx_data)->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    if (TVar3.m_Index == 0) {
      pOVar4 = (Object *)0x0;
    }
    else {
      pOVar4 = (Object *)func_?();
      if (pOVar4 == (Object *)0x0) goto code_?;
    }
    return pOVar4;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
}


/* Single GetValueForAttribute[Single](ThemeAttribute) */

float Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_3
                (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).settingsData,
     pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      attrib = (ThemeAttribute *)
               (*(code *)(attrib->klass->vtable).__unknown.method)
                         (attrib,(attrib->klass->vtable).__unknown_1.methodPtr);
      iVar3 = *(int *)(method->field7_0x1c).methodMetadataHandle;
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_?(iVar3);
      }
      if (attrib != (ThemeAttribute *)0x0) {
        if ((attrib->klass->_0).element_class == *(Il2CppClass **)(iVar3 + 0x20)) {
code_?:
          pfVar4 = (float *)func_?(attrib);
          return *pfVar4;
        }
        goto code_?;
      }
    }
    else {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).settingsData;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        attrib = (ThemeAttribute *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar1,(Object *)(attrib->fields)._Key_k__BackingField,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        iVar3 = *(int *)(method->field7_0x1c).methodMetadataHandle;
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_?();
        }
        if (attrib != (ThemeAttribute *)0x0) {
          if (*(int *)(*(int *)attrib + 0x20) == *(int *)(iVar3 + 0x20)) goto code_?;
          goto code_?;
        }
      }
    }
  }
  iVar3 = func_?();
code_?:
  func_?(attrib,iVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* __Il2CppFullySharedGenericType
   GetValueForAttribute[__Il2CppFullySharedGenericType](ThemeAttribute) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_4
          (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (*(int *)(in_stack_1 + 0x1c) == 0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    if (*(int *)(in_stack_1 + 0x1c) == 0) {
      func_?();
    }
  }
  func_?();
  if (attrib != (ThemeAttribute *)0x0) {
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields).settingsData;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (pDVar2,(Object *)(attrib->fields)._Key_k__BackingField,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar3 == 0) {
        (*(code *)(attrib->klass->vtable).__unknown.method)();
      }
      else {
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields).settingsData;
        if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar2,(Object *)(attrib->fields)._Key_k__BackingField,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
      }
      if ((*(byte *)(**(int **)(in_stack_1 + 0x1c) + 0xbd) & 1) == 0) {
        func_?();
      }
      func_?();
      p_Var4 = (_Il2CppFullySharedGenericType *)func_?();
      return p_Var4;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  p_Var4 = (_Il2CppFullySharedGenericType *)(*pcVar4)();
  return p_Var4;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize
               (SettingsWrapper *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).attributes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      if (*(int *)((int)LStack_8._current + 0xc) == 0) {
        func_?(6,LStack_8._current);
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_SetAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pIStack_3 = (IMenu *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&pIStack_3;
  pMVar4 = (MethodInfo *)&stack0xffffffb0;
  method_00 = (MethodInfo *)&stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                   );
    func_?(&TypeInfo__ThemeSettings__IMenu);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>);
    cRam_? = '\x01';
    method_00 = pMVar4;
  }
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                              );
  pLVar5 = this_01;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,2,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).attributes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffcc,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    RVar7 = pLVar6->_current;
    uStack_1 = 1;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                        );
      if (bVar8 == 0) break;
      if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
      uVar10 = *(uint *)((int)RVar7 + 0xc);
      this_01 = pLVar5;
      if ((uVar10 & groupsFlag) == uVar10 && ((this->fields).activeAttributeGroup & uVar10) != uVar10) {
        if (pLVar5 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar5,(Object *)RVar7,
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                  );
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&pOStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
               ,(MethodInfo *)in_stack_11.genericMethod);
    uStack_1 = 0xffffffff;
    (this->fields).activeAttributeGroup = groupsFlag;
    if (this_01 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffcc,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          this_01,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      pOStack_9 = (Object__Class *)pLVar6->_list;
      RVar7 = pLVar6->_current;
      uStack_1 = 4;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_9,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar8 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&pOStack_9,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
          pIVar12 = (this->fields).menu;
          if (pIVar12 != (IMenu *)0x0) {
            pIStack_3 = pIVar12;
            func_?();
          }
          *unaff_FS_OFFSET = (int)pIStack_3;
          return;
        }
        if (RVar7 == (RegexCharClass_SingleRange)0x0) break;
        (**(code **)(*(int *)RVar7 + 0xf0))();
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SubscribeToSettingsUI(IMenu) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_SubscribeToSettingsUI
               (SettingsWrapper *this,IMenu *menu,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeSettings__IMenu);
    cRam_? = '\x01';
  }
  ppIVar1 = &(this->fields).menu;
  *ppIVar1 = menu;
  func_?(ppIVar1,menu);
  if (menu != (IMenu *)0x0) {
    func_?(0,TypeInfo__ThemeSettings__IMenu,menu);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnsubscribeToSettingsUI() */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_UnsubscribeToSettingsUI
               (SettingsWrapper *this,MethodInfo *method)

{
  ppIVar1 = &(this->fields).menu;
  *ppIVar1 = (IMenu *)0x0;
  func_?(ppIVar1);
  return;
}


/* Void UpdateData(String, Object) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_UpdateData
               (SettingsWrapper *this,String *key,Object *val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)key,val,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SettingsWrapper() */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper__ctor
               (SettingsWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                              );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,8,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  method_00 = (MethodInfo *)&(this->fields).attributes;
  *(List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ **)
   method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Boolean <get_SettingsUI>b__9_0(ThemeAttribute) */

bool Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper__get_SettingsUI_b__9_0
               (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (attrib != (ThemeAttribute *)0x0) {
    uVar2 = (attrib->fields)._Groups_k__BackingField;
    return ((this->fields).activeAttributeGroup & uVar2) == uVar2;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* RectTransform[] get_SettingsUI() */

RectTransform__Array *
Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_get_SettingsUI
          (SettingsWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__FindAll_System__Predicate<ThemeAttributes::ThemeAttribute>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Predicate<ThemeAttributes::ThemeAttribute>);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&
                    MethodInfo__ThemeSettings__SettingsWrapper___get_SettingsUI_b__9_0_ThemeAttributes__ThemeAttribute_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).attributes;
  this_01 = (Predicate_1_Object_ *)
            func_?(TypeInfo__System__Predicate<ThemeAttributes::ThemeAttribute>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__ThemeSettings__SettingsWrapper___get_SettingsUI_b__9_0_ThemeAttributes__ThemeAttribute_
             ,(MethodInfo *)0x0);
  if (this_00 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
    this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__FindAll
                        ((List_1_System_Object_ *)this_00,this_01,
                         MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__FindAll_System__Predicate<ThemeAttributes::ThemeAttribute>_
                        );
    if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      this = (SettingsWrapper *)func_?();
      index = 0;
      pSVar1 = (SettingsWrapper *)&(this->fields).activeAttributeGroup;
      while( true ) {
        pSVar2 = pSVar1;
        if ((this_02->fields)._size <= (int)index) {
          return (RectTransform__Array *)this;
        }
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_02,index,
                           MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Item_int_
                          );
        if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
        pSVar4 = (SettingsWrapper__Class *)(**(code **)(*(int *)RVar3 + 0xe8))();
        if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
        if (*(uint *)((int)RVar3 + 0xc) <= index) goto code_?;
        pSVar2->klass = pSVar4;
        func_?();
        index = index + 1;
        pSVar1 = (SettingsWrapper *)&pSVar2->monitor;
        this = pSVar2;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pRVar6 = (RectTransform__Array *)(*pcVar5)();
  return pRVar6;
}

