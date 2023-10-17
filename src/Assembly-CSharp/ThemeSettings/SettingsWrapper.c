
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
  method_00 = (MethodInfo *)((this->fields).activeAttributeGroup & ~groupsFlag);
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  }
  pOStack_4 = (Object__Class *)0x0;
  this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                           );
  if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    pLVar5 = this_01;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
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
                           *)&stack0xffffffc8,this_00,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      RVar7 = pLVar6->_current;
      uStack_1 = 1;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar8 == 0) break;
        if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
        uVar9 = *(uint *)((int)RVar7 + 0xc);
        this_01 = pLVar5;
        if ((uVar9 & (uint)method_00) == *(uint *)((int)RVar7 + 0xc) &&
            ((this->fields).activeAttributeGroup & uVar9) != uVar9) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar5,(Object *)RVar7,
                     MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                    );
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&pOStack_4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                 ,in_stack_10);
      uStack_1 = 0xffffffff;
      (this->fields).activeAttributeGroup = (int32_t)method_00;
      pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffc8,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          this_01,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      pOStack_4 = (Object__Class *)pLVar6->_list;
      RVar7 = pLVar6->_current;
      uStack_1 = 4;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar8 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&pOStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
          if ((this->fields).menu != (IMenu *)0x0) {
            func_?();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (RVar7 == (RegexCharClass_SingleRange)0x0) break;
        (**(code **)(*(int *)RVar7 + 0xec))();
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void EnableAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_EnableAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  method_00 = (MethodInfo *)(groupsFlag | (this->fields).activeAttributeGroup);
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  }
  pOStack_4 = (Object__Class *)0x0;
  this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                           );
  if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    pLVar5 = this_01;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
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
                           *)&stack0xffffffc8,this_00,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      RVar7 = pLVar6->_current;
      uStack_1 = 1;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar8 == 0) break;
        if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
        uVar9 = *(uint *)((int)RVar7 + 0xc);
        this_01 = pLVar5;
        if ((uVar9 & (uint)method_00) == *(uint *)((int)RVar7 + 0xc) &&
            ((this->fields).activeAttributeGroup & uVar9) != uVar9) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar5,(Object *)RVar7,
                     MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                    );
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&pOStack_4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                 ,in_stack_10);
      uStack_1 = 0xffffffff;
      (this->fields).activeAttributeGroup = (int32_t)method_00;
      pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffc8,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          this_01,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      pOStack_4 = (Object__Class *)pLVar6->_list;
      RVar7 = pLVar6->_current;
      uStack_1 = 4;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar8 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&pOStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
          if ((this->fields).menu != (IMenu *)0x0) {
            func_?();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (RVar7 == (RegexCharClass_SingleRange)0x0) break;
        (**(code **)(*(int *)RVar7 + 0xec))();
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean GetValueForAttribute[Boolean](ThemeAttribute) */

bool Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute
               (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    cRam_? = '\x01';
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this->fields).settingsData,
     this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      piVar2 = (int *)(*(attrib->klass->vtable).__unknown.methodPtr)
                                (attrib,(attrib->klass->vtable).__unknown.method);
      pIVar3 = ((method->field7_0x1c).rgctx_data)->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?();
      }
      if (piVar2 != (int *)0x0) {
        if (*(Il2CppClass **)(*piVar2 + 0x20) == pIVar3->element_class) {
code_?:
          pbVar4 = (bool *)func_?();
          return *pbVar4;
        }
        goto code_?;
      }
    }
    else {
      this_01 = (this->fields).settingsData;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)(attrib->fields)._Key_k__BackingField,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pIVar3 = ((method->field7_0x1c).rgctx_data)->klass;
        if (pIVar3->initialized_and_no_error == 0) {
          pIVar3 = (Il2CppClass *)func_?();
        }
        if (pOVar5 != (Object *)0x0) {
          if ((pOVar5->klass->_0).element_class == pIVar3->element_class) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar1 = (*pcVar6)();
  return bVar1;
}


/* Int32 GetValueForAttribute[Int32](ThemeAttribute) */

int32_t Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_1
                  (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    cRam_? = '\x01';
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this->fields).settingsData,
     this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      piVar2 = (int *)(*(attrib->klass->vtable).__unknown.methodPtr)
                                (attrib,(attrib->klass->vtable).__unknown.method);
      pIVar3 = ((method->field7_0x1c).rgctx_data)->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?();
      }
      if (piVar2 != (int *)0x0) {
        if (*(Il2CppClass **)(*piVar2 + 0x20) == pIVar3->element_class) {
code_?:
          piVar4 = (int32_t *)func_?();
          return *piVar4;
        }
        goto code_?;
      }
    }
    else {
      this_01 = (this->fields).settingsData;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)(attrib->fields)._Key_k__BackingField,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pIVar3 = ((method->field7_0x1c).rgctx_data)->klass;
        if (pIVar3->initialized_and_no_error == 0) {
          pIVar3 = (Il2CppClass *)func_?();
        }
        if (pOVar5 != (Object *)0x0) {
          if ((pOVar5->klass->_0).element_class == pIVar3->element_class) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Object GetValueForAttribute[Object](ThemeAttribute) */

Object * Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_2
                   (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    cRam_? = '\x01';
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this->fields).settingsData,
     this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      pOVar2 = (Object *)
               (*(attrib->klass->vtable).__unknown.methodPtr)
                         (attrib,(attrib->klass->vtable).__unknown.method);
    }
    else {
      this_01 = (this->fields).settingsData;
      if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)(attrib->fields)._Key_k__BackingField,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
    }
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    if (pOVar2 == (Object *)0x0) {
      pOVar2 = (Object *)0x0;
    }
    else {
      pOVar2 = (Object *)func_?();
      if (pOVar2 == (Object *)0x0) goto code_?;
    }
    return pOVar2;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Single GetValueForAttribute[Single](ThemeAttribute) */

float Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_3
                (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    cRam_? = '\x01';
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this->fields).settingsData,
     this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      piVar2 = (int *)(*(attrib->klass->vtable).__unknown.methodPtr)
                                (attrib,(attrib->klass->vtable).__unknown.method);
      pIVar3 = ((method->field7_0x1c).rgctx_data)->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        pIVar3 = (Il2CppClass *)func_?();
      }
      if (piVar2 != (int *)0x0) {
        if (*(Il2CppClass **)(*piVar2 + 0x20) == pIVar3->element_class) {
code_?:
          pfVar4 = (float *)func_?();
          return *pfVar4;
        }
        goto code_?;
      }
    }
    else {
      this_01 = (this->fields).settingsData;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)(attrib->fields)._Key_k__BackingField,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pIVar3 = ((method->field7_0x1c).rgctx_data)->klass;
        if (pIVar3->initialized_and_no_error == 0) {
          pIVar3 = (Il2CppClass *)func_?();
        }
        if (pOVar5 != (Object *)0x0) {
          if ((pOVar5->klass->_0).element_class == pIVar3->element_class) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  }
  pOStack_4 = (Object__Class *)0x0;
  this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                           );
  if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    pLVar5 = this_01;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
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
                           *)&stack0xffffffc8,this_00,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      RVar7 = pLVar6->_current;
      uStack_1 = 1;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar8 == 0) break;
        if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
        uVar9 = *(uint *)((int)RVar7 + 0xc);
        this_01 = pLVar5;
        if ((uVar9 & groupsFlag) == *(uint *)((int)RVar7 + 0xc) &&
            ((this->fields).activeAttributeGroup & uVar9) != uVar9) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar5,(Object *)RVar7,
                     MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                    );
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&pOStack_4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                 ,in_stack_10);
      uStack_1 = 0xffffffff;
      (this->fields).activeAttributeGroup = groupsFlag;
      pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffc8,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          this_01,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                         );
      pOStack_4 = (Object__Class *)pLVar6->_list;
      RVar7 = pLVar6->_current;
      uStack_1 = 4;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar8 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&pOStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                     ,(MethodInfo *)groupsFlag);
          uStack_1 = 0xffffffff;
          if ((this->fields).menu != (IMenu *)0x0) {
            func_?();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (RVar7 == (RegexCharClass_SingleRange)0x0) break;
        (**(code **)(*(int *)RVar7 + 0xec))();
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                           );
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
              (this_00,8,
               MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
              );
    method_00 = (MethodInfo *)&(this->fields).attributes;
    (this->fields).attributes = (List_1_ThemeAttributes_ThemeAttribute_ *)this_00;
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
  if (((this_01 != (Predicate_1_Object_ *)0x0) &&
      (mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                 (this_01,(Object *)this,
                  MethodInfo__ThemeSettings__SettingsWrapper___get_SettingsUI_b__9_0_ThemeAttributes__ThemeAttribute_
                  ,(MethodInfo *)0x0), this_00 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0)) &&
     (this_02 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__FindAll
                          ((List_1_System_Object_ *)this_00,this_01,
                           MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__FindAll_System__Predicate<ThemeAttributes::ThemeAttribute>_
                          ), this_02 != (MethodInfo *)0x0)) {
    this = (SettingsWrapper *)func_?();
    index = 0;
    ppIVar1 = (IMenu **)&(this->fields).activeAttributeGroup;
    while( true ) {
      if ((int)this_02->name <= (int)index) {
        return (RectTransform__Array *)this;
      }
      pMVar2 = 
      MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Item_int_
      ;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         this_02,index,
                         MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Item_int_
                        );
      if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
      piVar4 = *(int **)(*(int *)RVar3 + 0xe8);
      this = (SettingsWrapper *)(**(code **)(*(int *)RVar3 + 0xe4))();
      if (piVar4 == (int *)0x0) break;
      this_02 = pMVar2;
      if (this != (SettingsWrapper *)0x0) {
        piVar4 = *(int **)(*piVar4 + 0x20);
        iVar5 = func_?();
        this_02 = pMVar2;
        if (iVar5 == 0) goto code_?;
      }
      if ((uint)piVar4[3] <= index) goto code_?;
      *ppIVar1 = (IMenu *)this;
      func_?();
      index = index + 1;
      ppIVar1 = ppIVar1 + 1;
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pRVar7 = (RectTransform__Array *)(*pcVar6)();
  return pRVar7;
}

