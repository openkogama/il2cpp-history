
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributeSettingTypes::AttributeSettingEnum::
         AttributeSettingEnum_ToString(AttributeSettingEnum *this,MethodInfo *method)

{
  iStack_1 = -1;
  pSStack_2 = (SerializationInfo *)&DAT_?;
  pIStack_3 = (IEqualityComparer_1_WinningConditionType_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
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
  pSVar8 = ::StringLiteral__;
  this_00 = (this->fields).valueAttributeValueMap;
  pSStack_9 = ::StringLiteral__;
  pWStack_10 = (WinningConditionType__Enum__Array *)&stack0xffffff94;
  puStack_4 = &stack0xffffff94;
  if (this_00 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
  pWStack_10 = (WinningConditionType__Enum__Array *)&stack0xffffff94;
  puStack_4 = &stack0xffffff94;
  pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                     (&DStack_12,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                     );
  auStack_6._0_4_ = pDVar11->dictionary;
  auStack_6._4_4_ = pDVar11->next;
  auStack_6._8_4_ = pDVar11->stamp;
  auStack_6._12_4_ = (pDVar11->current).key;
  auStack_6._16_4_ = (pDVar11->current).value;
  iStack_1 = 0;
  while (cVar13 = func_?(), cVar13 != '\0') {
    KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                          ((LevelRewardsManager *)auStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                          );
    DStack_12.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
    DStack_12.next =
         (int32_t)MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__;
    auStack_14._4_4_ = func_?();
    DStack_12.next = (int32_t)(auStack_14 + 4);
    DStack_12.dictionary =
         (Dictionary_2_WinningConditionType_System_Object_ *)TypeInfo__System__Int32;
    pOStack_15 = (Object__Array *)func_?();
    DStack_12.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
    DStack_12.next =
         (int32_t)MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__;
    auStack_14._0_4_ = func_?();
    DStack_12.next = (int32_t)auStack_14;
    DStack_12.dictionary =
         (Dictionary_2_WinningConditionType_System_Object_ *)TypeInfo__System__Int32;
    pOVar16 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    str1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral___0____1__,(Object *)pOStack_15,pOVar16,(MethodInfo *)0x0);
    pSVar8 = mscorlib.dll::System::String::String_Concat_2(pSVar8,str1,(MethodInfo *)0x0);
    pSStack_9 = pSVar8;
  }
  pWStack_10->klass = (WinningConditionType__Enum__Array__Class *)0x5e;
  iStack_1 = -1;
  func_?();
  args = (Object__Array *)func_?();
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_15 = (Object__Array *)(this->fields).valueAttributeValueMap;
  pWStack_10 = (WinningConditionType__Enum__Array *)(this->fields)._.KogamaSettingEnum;
  if (pWStack_10 == (WinningConditionType__Enum__Array *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar16 = (((KogamaSettingEnum__Fields *)&pWStack_10->bounds)->_).value;
  if (pOVar16 == (Object *)0x0) goto code_?;
  if ((pOVar16->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar17 = (int32_t *)func_?(pOVar16);
    if (pOStack_15 == (Object__Array *)0x0) goto code_?;
    pSStack_9 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                           ((Dictionary_2_System_Int32_System_Int32_ *)pOStack_15,*piVar17,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                           );
    pWStack_10 = (WinningConditionType__Enum__Array *)
                 func_?(TypeInfo__System__Int32,&pSStack_9);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pWStack_10 != (WinningConditionType__Enum__Array *)0x0) &&
       (iVar18 = func_?(pWStack_10,(args->klass->_0).element_class), iVar18 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pWStack_10;
    if ((pSVar8 != (String *)0x0) &&
       (iVar18 = func_?(pSVar8,(args->klass->_0).element_class), iVar18 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar8;
    pLStack_19 = (Link__Array *)(this->fields)._ExclusivityFlag_k__BackingField;
    pOVar16 = (Object *)
             func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                             ,&pLStack_19);
    if ((pOVar16 != (Object *)0x0) &&
       (iVar18 = func_?(pOVar16,(args->klass->_0).element_class), iVar18 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar16;
    pKVar20 = (this->fields)._.KogamaSettingEnum;
    if ((pKVar20 != (KogamaSettingEnum *)0x0) &&
       (iVar18 = func_?(pKVar20,(args->klass->_0).element_class), iVar18 == 0))
    goto code_?;
    if (3 < args->max_length) {
      args->vector[3] = (Object *)pKVar20;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar8 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_AttributeValue__0___AttributePoi,args,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pIStack_3;
      return pSVar8;
    }
  }
  else {
    func_?(pOVar16,TypeInfo__System__Int32);
    func_?();
code_?:
    uVar21 = func_?(0,0);
    func_?(uVar21);
code_?:
    uVar21 = func_?(0,0);
    func_?(uVar21);
code_?:
    uVar21 = func_?(0,0);
    func_?(uVar21);
code_?:
    uVar21 = func_?(0,0);
    func_?(uVar21);
code_?:
    uVar21 = func_?(0,0);
    func_?(uVar21);
code_?:
    uVar21 = func_?(0,0);
    func_?(uVar21);
code_?:
    uVar21 = func_?(0,0);
    func_?(uVar21);
  }
  uVar21 = func_?(0,0);
  func_?(uVar21);
code_?:
  func_?(0);
  pcVar22 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar22)();
  return pSVar8;
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
  (this->fields)._ExclusivityFlag_k__BackingField = attributeSettingsExclusivityFlag;
  return;
}


/* Int32 get_AttributeValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributeSettingTypes::AttributeSettingEnum::
        AttributeSettingEnum_get_AttributeValue(AttributeSettingEnum *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pKVar1 = (this->fields)._.KogamaSettingEnum;
  this_00 = (this->fields).valueAttributeValueMap;
  if (pKVar1 != (KogamaSettingEnum *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar2 = (pKVar1->fields)._.value;
    if (pOVar2 != (Object *)0x0) {
      pIVar3 = TypeInfo__System__Int32;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar4 = (int32_t *)func_?(pOVar2);
      if (this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                          (this_00,*piVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                          );
        return iVar5;
      }
    }
  }
  func_?(0);
  pOVar2 = extraout_ECX;
  pIVar3 = extraout_EDX;
code_?:
  func_?(pOVar2,pIVar3);
  pcVar6 = (code *)swi(3);
  iVar5 = (*pcVar6)();
  return iVar5;
}

