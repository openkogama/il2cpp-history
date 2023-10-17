
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
         GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_ToString
                   (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *this,
                   MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Current__
                   );
    func_?(&TypeInfo__MV__Common__GamePassTier);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Value__
                   );
    func_?(&StringLiteral__0____1_u000A);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = ::StringLiteral__;
  auStack_7._0_4_ = (Object__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = 0;
  auStack_8._0_4_ = 0;
  pSStack_9 = ::StringLiteral__;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).xpTierRewardsValidators;
  auStack_8._4_4_ = (Object *)0x0;
  auStack_8._8_4_ = 0;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffa0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__GetEnumerator__
                       );
    uStack_11 = 0;
    auStack_7._0_4_ = pDVar10->_dictionary;
    auStack_7._4_4_ = pDVar10->_version;
    auStack_7._8_4_ = pDVar10->_index;
    auStack_8._0_4_ = (pDVar10->_current).key;
    auStack_8._4_8_ = *(undefined8 *)&(pDVar10->_current).value;
    uStack_1 = 1;
    pOStack_12 = (Object *)auStack_7;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                         auStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__MoveNext__
                        );
      if (bVar13 == 0) break;
      pOStack_14 = (Object *)auStack_8._4_4_;
      arg0 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0____1_u000A,arg0,pOStack_14,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
      pSStack_9 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)auStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dispose__
               ,in_stack_15);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar6;
  }
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar17)();
  return pSVar6;
}


/* Void Validate(Dictionary`2[MV.Common.GamePassTier,System.Int32], Boolean) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
     GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_Validate
               (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *this,
               Dictionary_2_MV_Common_GamePassTier_System_Int32_ *xpTierRewards,bool fixIfInValid,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6._0_4_ = (Object *)0x0;
  uStack_6._4_4_ = 0;
  auStack_7._0_4_ = (Object__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = 0;
  pOStack_8 = (Object *)0x0;
  if (xpTierRewards != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                      ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)xpTierRewards,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Count__
                      );
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).xpTierRewardsValidators;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Count__
                        );
      if (iVar9 == iVar10) {
        this_01 = (Dictionary_2_System_Object_System_Object_ *)
                  (this->fields).xpTierRewardsValidators;
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                              &stack0xffffffa8,this_01,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__GetEnumerator__
                             );
          uStack_12 = 0;
          auStack_7._0_4_ = pDVar11->_dictionary;
          auStack_7._4_4_ = pDVar11->_version;
          auStack_7._8_4_ = pDVar11->_index;
          pOStack_8 = (pDVar11->_current).key;
          uStack_6 = *(undefined8 *)&(pDVar11->_current).value;
          uStack_1 = 1;
          pOStack_13 = (Object *)auStack_7;
          while( true ) {
            bVar14 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *
                               )auStack_7,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__MoveNext__
                              );
            if (bVar14 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)auStack_7,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dispose__
                         ,in_stack_15);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pOVar16 = (Object *)uStack_6;
            pOStack_17 = pOStack_8;
            pOStack_18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)xpTierRewards,
                                    (ByteEnum__Enum)pOStack_8,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                                   );
            if (pOVar16 == (Object *)0x0) break;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pOStack_18 == (Object *)0x0) {
              if (*(char *)&pOVar16[1].klass == '\0') {
                if (fixIfInValid != 0) {
                  this_02 = (RangeValidator_1_System_Int32_ *)pOVar16[1].monitor;
                  if (this_02 != (RangeValidator_1_System_Int32_ *)0x0) {
                    pOVar16 = (Object *)(this_02->fields).min;
                    goto code_?;
                  }
                  break;
                }
                goto code_?;
              }
              pOVar16 = (Object *)0x0;
            }
            else {
              this_02 = (RangeValidator_1_System_Int32_ *)pOVar16[1].monitor;
              pOVar16 = pOStack_18;
              if (this_02 == (RangeValidator_1_System_Int32_ *)0x0) break;
code_?:
              pOVar16 = (Object *)
                       AntiCheat::RangeValidator`1[System::Int32]::
                       RangeValidator_1_System_Int32__Validate
                                 (this_02,(int32_t)pOVar16,fixIfInValid,
                                  MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                                 );
            }
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)xpTierRewards,pOStack_17,pOVar16,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                      );
          }
        }
      }
      else {
        func_?();
        pEVar19 = (Exception *)func_?();
        func_?();
        method_00 = (MethodInfo *)0x0;
        pSVar20 = (String *)func_?();
        mscorlib.dll::System::Exception::Exception__ctor_1(pEVar19,pSVar20,method_00);
        func_?();
        func_?();
code_?:
        uVar21 = func_?(&TypeInfo__System__Exception);
        pEVar19 = (Exception *)func_?(uVar21);
        func_?(pEVar19);
        pSVar20 = (String *)func_?(&StringLiteral_Reward_removal_is_illegal);
        mscorlib.dll::System::Exception::Exception__ctor_1(pEVar19,pSVar20,(MethodInfo *)0x0);
        func_?();
        func_?();
      }
    }
  }
  uVar21 = func_?();
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
     GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor
               (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                              );
  if (this_00 !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
       *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).xpTierRewardsValidators = this_00;
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


/* GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator(Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.GamePassProgressionDataObject.GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator+XPTierRewardValidator])
    */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
     GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor_1
               (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *this,
               Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
               *xpTierRewardsValidators,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                              );
  if (this_00 !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
       *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).xpTierRewardsValidators = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).xpTierRewardsValidators = xpTierRewardsValidators;
    func_?(&this->fields,xpTierRewardsValidators);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator(Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.AntiCheat.RangeValidator`1[System.Int32]],
   Dictionary`2[MV.Common.GamePassTier,System.Boolean]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
     GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor_2
               (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *this,
               Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_AntiCheat_RangeValidator_1_System_Int32_
               *xpRangeValidators,
               Dictionary_2_MV_Common_GamePassTier_System_Boolean_ *xpRewardRemovalAllowed,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_bool>__get_Item_MV__Common__GamePassTier_
                   );
    in_stack_6 =
         &
         TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__get_Value__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_7._0_4_ = (Object__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = 0;
  pOStack_8 = (Object *)0x0;
  uStack_9._0_4_ = (Object *)0x0;
  uStack_9._4_4_ = 0;
  this_01 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                              );
  if (this_01 !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
       *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
              );
    (this->fields).xpTierRewardsValidators = this_01;
    func_?(&this->fields,this_01);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_6);
    if (xpRangeValidators !=
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_AntiCheat_RangeValidator_1_System_Int32_
         *)0x0) {
      method_00 = 
      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__GetEnumerator__
      ;
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffff9c,
                          (Dictionary_2_System_Object_System_Object_ *)xpRangeValidators,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__GetEnumerator__
                         );
      uStack_11 = 0;
      auStack_7._0_4_ = pDVar10->_dictionary;
      auStack_7._4_4_ = pDVar10->_version;
      auStack_7._8_4_ = pDVar10->_index;
      pOStack_8 = (pDVar10->_current).key;
      uStack_9 = *(undefined8 *)&(pDVar10->_current).value;
      uStack_1 = 1;
      pOStack_12 = (Object *)auStack_7;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                           auStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__MoveNext__
                          );
        if (bVar13 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)auStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__Dispose__
                     ,in_stack_14);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pOStack_15 = (Object *)uStack_9;
        pOStack_16 = (Object *)CONCAT31(pOStack_16._1_3_,(char)pOStack_8);
        if (xpRewardRemovalAllowed == (Dictionary_2_MV_Common_GamePassTier_System_Boolean_ *)0x0)
        break;
        bStack_17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Boolean]::Dictionary_2_System_ByteEnum_System_Boolean__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Boolean_ *)
                               xpRewardRemovalAllowed,(ByteEnum__Enum)pOStack_8,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_bool>__get_Item_MV__Common__GamePassTier_
                              );
        value = (Object *)func_?();
        if (value == (Object *)0x0) break;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,method_00);
        *(bool *)&value[1].klass = bStack_17;
        value[1].monitor = (MonitorData *)pOStack_15;
        method_00 = (MethodInfo *)&value[1].monitor;
        func_?();
        this_00 = (Dictionary_2_System_Object_System_Object_ *)
                  (this->fields).xpTierRewardsValidators;
        if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_00,pOStack_16,value,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator_
                  );
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

