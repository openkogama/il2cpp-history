
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
  *unaff_FS_OFFSET = &pIStack_4;
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
  pOStack_6 = (Object__Class *)0x0;
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                              );
  pLVar7 = this_01;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,2,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).attributes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffcc,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    RVar9 = pLVar8->_current;
    uStack_2 = 1;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
      uVar11 = *(uint *)((int)RVar9 + 0xc);
      this_01 = pLVar7;
      if ((uVar11 & uVar1) == *(uint *)((int)RVar9 + 0xc) &&
          ((this->fields).activeAttributeGroup & uVar11) != uVar11) {
        if (pLVar7 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar7,(Object *)RVar9,
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                  );
      }
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&pOStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
               ,(MethodInfo *)in_stack_12.genericMethod);
    uStack_2 = 0xffffffff;
    (this->fields).activeAttributeGroup = uVar1;
    if (this_01 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffcc,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          this_01,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      pOStack_6 = (Object__Class *)pLVar8->_list;
      RVar9 = pLVar8->_current;
      uStack_2 = 4;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&pOStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                     ,method_00);
          uStack_2 = 0xffffffff;
          if ((this->fields).menu != (IMenu *)0x0) {
            pIStack_4 = (this->fields).menu;
            func_?();
          }
          *unaff_FS_OFFSET = pIStack_4;
          return;
        }
        if (RVar9 == (RegexCharClass_SingleRange)0x0) break;
        (**(code **)(*(int *)RVar9 + 0xf0))();
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


/* Void EnableAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_EnableAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  uVar1 = groupsFlag | (this->fields).activeAttributeGroup;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  pIStack_4 = (IMenu *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_4;
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
  pOStack_6 = (Object__Class *)0x0;
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                              );
  pLVar7 = this_01;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,2,
             MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            );
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).attributes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffcc,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    RVar9 = pLVar8->_current;
    uStack_2 = 1;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
      uVar11 = *(uint *)((int)RVar9 + 0xc);
      this_01 = pLVar7;
      if ((uVar11 & uVar1) == *(uint *)((int)RVar9 + 0xc) &&
          ((this->fields).activeAttributeGroup & uVar11) != uVar11) {
        if (pLVar7 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar7,(Object *)RVar9,
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                  );
      }
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&pOStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
               ,(MethodInfo *)in_stack_12.genericMethod);
    uStack_2 = 0xffffffff;
    (this->fields).activeAttributeGroup = uVar1;
    if (this_01 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffcc,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          this_01,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      pOStack_6 = (Object__Class *)pLVar8->_list;
      RVar9 = pLVar8->_current;
      uStack_2 = 4;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&pOStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                     ,method_00);
          uStack_2 = 0xffffffff;
          if ((this->fields).menu != (IMenu *)0x0) {
            pIStack_4 = (this->fields).menu;
            func_?();
          }
          *unaff_FS_OFFSET = pIStack_4;
          return;
        }
        if (RVar9 == (RegexCharClass_SingleRange)0x0) break;
        (**(code **)(*(int *)RVar9 + 0xf0))();
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).attributes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      if (*(int *)((int)LStack_6._current + 0xc) == 0) {
        func_?(6,LStack_6._current);
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
  *unaff_FS_OFFSET = &pIStack_3;
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
  pOStack_5 = (Object__Class *)0x0;
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
    uStack_1 = 1;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_5,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                        );
      if (bVar9 == 0) break;
      if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
      uVar10 = *(uint *)((int)RVar8 + 0xc);
      this_01 = pLVar6;
      if ((uVar10 & groupsFlag) == *(uint *)((int)RVar8 + 0xc) &&
          ((this->fields).activeAttributeGroup & uVar10) != uVar10) {
        if (pLVar6 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar6,(Object *)RVar8,
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                  );
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&pOStack_5,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
               ,(MethodInfo *)in_stack_11.genericMethod);
    uStack_1 = 0xffffffff;
    (this->fields).activeAttributeGroup = groupsFlag;
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
      pOStack_5 = (Object__Class *)pLVar7->_list;
      RVar8 = pLVar7->_current;
      uStack_1 = 4;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_5,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&pOStack_5,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
          if ((this->fields).menu != (IMenu *)0x0) {
            pIStack_3 = (this->fields).menu;
            func_?();
          }
          *unaff_FS_OFFSET = pIStack_3;
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  (this->fields).menu = menu;
  func_?(&(this->fields).menu,menu);
  if (menu != (IMenu *)0x0) {
    func_?(0,TypeInfo__ThemeSettings__IMenu,menu);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UnsubscribeToSettingsUI() */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_UnsubscribeToSettingsUI
               (SettingsWrapper *this,MethodInfo *method)

{
  (this->fields).menu = (IMenu *)0x0;
  func_?(&(this->fields).menu);
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
  (this->fields).attributes = (List_1_ThemeAttributes_ThemeAttribute_ *)this_00;
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
    return ((this->fields).activeAttributeGroup & (attrib->fields)._Groups_k__BackingField) ==
           (attrib->fields)._Groups_k__BackingField;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
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
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
             List_1_System_Object__FindAll
                       ((List_1_System_Object_ *)this_00,this_01,
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__FindAll_System__Predicate<ThemeAttributes::ThemeAttribute>_
                       );
    if (pLVar1 != (List_1_System_Object_ *)0x0) {
      this = (SettingsWrapper *)TypeInfo__UnityEngine__RectTransform;
      pRVar2 = (RectTransform__Array *)func_?();
      index = 0;
      iVar3 = 0x10;
      while( true ) {
        if ((int)(this->fields).attributes <= (int)index) {
          return pRVar2;
        }
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)this
                           ,index,
                           MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Item_int_
                          );
        if (RVar4 == (RegexCharClass_SingleRange)0x0) break;
        uVar5 = (**(code **)(*(int *)RVar4 + 0xe8))();
        if (pRVar2 == (RectTransform__Array *)0x0) break;
        if (pRVar2->max_length <= index) goto code_?;
        *(undefined4 *)((int)pRVar2->vector + iVar3 + -0x10) = uVar5;
        this = (SettingsWrapper *)((int)pRVar2->vector + iVar3 + -0x10);
        func_?();
        index = index + 1;
        iVar3 = iVar3 + 4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pRVar2 = (RectTransform__Array *)(*pcVar6)();
  return pRVar2;
}

