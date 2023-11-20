
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributeSettingTypes::AttributeSettingEnum::
         AttributeSettingEnum_ToString(AttributeSettingEnum *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_AttributeValue__0___AttributePoi);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral___0____1__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = ::StringLiteral__;
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  pSStack_8 = ::StringLiteral__;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).valueAttributeValueMap;
  DStack_7._current.value = 0;
  DStack_7._getEnumeratorRetType = 0;
  if (this_00 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
code_?:
    uVar9 = func_?();
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
  }
  else {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff98,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                       );
    uStack_11 = 0;
    DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)pDVar10->_dictionary;
    DStack_7._version = pDVar10->_version;
    DStack_7._index = pDVar10->_index;
    DStack_7._current.key = (pDVar10->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
    uStack_1 = 1;
    apDStack_12[0] = &DStack_7;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Int32]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Int32__MoveNext
                             (&DStack_7,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                             ), bVar13 != 0) {
      uStack_14 = DStack_7._current.key;
      pDStack_15 = (Dictionary_2_System_Int32_System_Object_ *)DStack_7._current.value;
      pKStack_16 = (KogamaSettingEnum *)func_?();
      pDStack_17 = pDStack_15;
      pOVar18 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral___0____1__,(Object *)pKStack_16,pOVar18,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
      pSStack_8 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
               ,in_stack_19);
    uStack_1 = 0xffffffff;
    args = (Object__Array *)func_?();
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pDStack_15 = (Dictionary_2_System_Int32_System_Object_ *)(this->fields).valueAttributeValueMap;
    pKStack_16 = (this->fields)._.KogamaSettingEnum;
    if (pKStack_16 == (KogamaSettingEnum *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    pOVar18 = (pKStack_16->fields)._.value;
    if (pOVar18 == (Object *)0x0) goto code_?;
    pIVar20 = TypeInfo__System__Int32;
    if ((pOVar18->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar21 = (int32_t *)func_?(pOVar18);
    if (pDStack_15 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
    pSStack_8 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           (pDStack_15,*piVar21,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                           );
    pKStack_16 = (KogamaSettingEnum *)func_?(TypeInfo__System__Int32,&pSStack_8);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pKStack_16 != (KogamaSettingEnum *)0x0) &&
       (iVar22 = func_?(pKStack_16,(args->klass->_0).element_class), iVar22 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pKStack_16;
    func_?(args->vector,pKStack_16);
    if ((pSVar6 != (String *)0x0) &&
       (iVar22 = func_?(pSVar6,(args->klass->_0).element_class), iVar22 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar6;
    func_?(args->vector + 1,pSVar6);
    apDStack_12[0] =
         (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Int32_ *)
         (this->fields)._ExclusivityFlag_k__BackingField;
    pOVar18 = (Object *)
             func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                             ,apDStack_12);
    if ((pOVar18 != (Object *)0x0) &&
       (iVar22 = func_?(pOVar18,(args->klass->_0).element_class), iVar22 == 0))
    goto code_?;
    if (2 < args->max_length) {
      args->vector[2] = pOVar18;
      func_?(args->vector + 2,pOVar18);
      pKVar23 = (this->fields)._.KogamaSettingEnum;
      if ((pKVar23 == (KogamaSettingEnum *)0x0) ||
         (iVar22 = func_?(pKVar23,(args->klass->_0).element_class), iVar22 != 0)) {
        if (3 < args->max_length) {
          args->vector[3] = (Object *)pKVar23;
          func_?(args->vector + 3,pKVar23);
          pSVar6 = mscorlib.dll::System::String::String_Format_3
                             (StringLiteral_AttributeValue__0___AttributePoi,args,(MethodInfo *)0x0)
          ;
          *unaff_FS_OFFSET = uStack_3;
          return pSVar6;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
  pOVar18 = extraout_ECX;
  pIVar20 = extraout_EDX;
code_?:
  func_?(pOVar18,pIVar20);
  pcVar24 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar24)();
  return pSVar6;
}


/* AttributeSettingEnum(String, Int32, Dictionary`2[System.Int32,System.Int32], Int32, Int32,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingTypes::AttributeSettingEnum::AttributeSettingEnum__ctor
               (AttributeSettingEnum *this,String *key,int32_t value,
               Dictionary_2_System_Int32_System_Int32_ *valueAttributeValueMap,int32_t min,
               int32_t max,KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
            ((KogamaSettingEnumBase *)this,key,value,min,max,parent,(MethodInfo *)0x0);
  (this->fields).valueAttributeValueMap = valueAttributeValueMap;
  func_?(&(this->fields).valueAttributeValueMap,valueAttributeValueMap);
  return;
}


/* AttributeSettingEnum(String, Int32, Dictionary`2[System.Int32,System.Int32], Int32, Int32,
   AttributeSettingsExclusivityFlag, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingTypes::AttributeSettingEnum::AttributeSettingEnum__ctor_1
               (AttributeSettingEnum *this,String *key,int32_t value,
               Dictionary_2_System_Int32_System_Int32_ *valueAttributeValueMap,int32_t min,
               int32_t max,AttributeSettingsExclusivityFlag__Enum attributeSettingsExclusivityFlag,
               KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
            ((KogamaSettingEnumBase *)this,key,value,min,max,parent,(MethodInfo *)0x0);
  (this->fields).valueAttributeValueMap = valueAttributeValueMap;
  func_?(&(this->fields).valueAttributeValueMap,valueAttributeValueMap);
  (this->fields)._ExclusivityFlag_k__BackingField = attributeSettingsExclusivityFlag;
  return;
}


/* Int32 get_AttributeValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributeSettingTypes::AttributeSettingEnum::
        AttributeSettingEnum_get_AttributeValue(AttributeSettingEnum *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    cRam_? = '\x01';
  }
  pKVar1 = (this->fields)._.KogamaSettingEnum;
  this_00 = (Dictionary_2_System_Int32_System_Object_ *)(this->fields).valueAttributeValueMap;
  if (pKVar1 != (KogamaSettingEnum *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    pOVar2 = (pKVar1->fields)._.value;
    if (pOVar2 != (Object *)0x0) {
      pIVar3 = TypeInfo__System__Int32;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar4 = (int32_t *)func_?(pOVar2);
      if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           (this_00,*piVar4,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                           );
        return (int32_t)pOVar2;
      }
    }
  }
  func_?();
  pOVar2 = extraout_ECX;
  pIVar3 = extraout_EDX;
code_?:
  func_?(pOVar2,pIVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

