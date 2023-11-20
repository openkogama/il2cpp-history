
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
  DStack_7._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current._1_3_ = 0;
  pSStack_8 = ::StringLiteral__;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).xpTierRewardsValidators;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current._0_4_ = (pDVar9->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__MoveNext__
                        );
      if (bVar12 == 0) break;
      pOStack_13 = DStack_7._current.value;
      arg0 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0____1_u000A,arg0,pOStack_13,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
      pSStack_8 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dispose__
               ,in_stack_14);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar6;
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar16)();
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
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current._0_4_ = 0;
  if (xpTierRewards != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)xpTierRewards,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Count__
                      );
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).xpTierRewardsValidators;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Count__
                        );
      if (iVar7 == iVar8) {
        this_01 = (Dictionary_2_System_UInt32_System_Object_ *)
                  (this->fields).xpTierRewardsValidators;
        if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffffa8,this_01,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__GetEnumerator__
                             );
          uStack_10 = 0;
          DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar9->_dictionary
          ;
          DStack_6._version = pDVar9->_version;
          DStack_6._index = pDVar9->_index;
          DStack_6._current._0_4_ = (pDVar9->_current).key;
          DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
          uStack_1 = 1;
          pDStack_11 = &DStack_6;
          while( true ) {
            bVar12 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                              (&DStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__MoveNext__
                              );
            if (bVar12 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&DStack_6,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dispose__
                         ,in_stack_13);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pOVar14 = DStack_6._current.value;
            BStack_15 = DStack_6._current._0_4_;
            pOStack_16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)xpTierRewards,
                                    DStack_6._current._0_4_,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                                   );
            if (pOVar14 == (Object *)0x0) break;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pOStack_16 == (Object *)0x0) {
              if (*(char *)&pOVar14[1].klass == '\0') {
                if (fixIfInValid != 0) {
                  this_02 = (RangeValidator_1_System_Int32_ *)pOVar14[1].monitor;
                  if (this_02 != (RangeValidator_1_System_Int32_ *)0x0) {
                    pOVar14 = (Object *)(this_02->fields).min;
                    goto code_?;
                  }
                  break;
                }
                goto code_?;
              }
              iVar7 = 0;
            }
            else {
              this_02 = (RangeValidator_1_System_Int32_ *)pOVar14[1].monitor;
              pOVar14 = pOStack_16;
              if (this_02 == (RangeValidator_1_System_Int32_ *)0x0) break;
code_?:
              iVar7 = AntiCheat::RangeValidator`1[System::Int32]::
                      RangeValidator_1_System_Int32__Validate
                                (this_02,(int32_t)pOVar14,fixIfInValid,
                                 MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                                );
            }
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]
            ::Dictionary_2_System_ByteEnum_System_Int32__set_Item
                      ((Dictionary_2_System_ByteEnum_System_Int32_ *)xpTierRewards,BStack_15,iVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                      );
          }
        }
      }
      else {
        func_?();
        pEVar17 = (Exception *)func_?();
        method_00 = (MethodInfo *)0x0;
        pSVar18 = (String *)func_?();
        mscorlib.dll::System::Exception::Exception__ctor_1(pEVar17,pSVar18,method_00);
        func_?();
        func_?();
code_?:
        uVar19 = func_?(&TypeInfo__System__Exception);
        pEVar17 = (Exception *)func_?(uVar19);
        pSVar18 = (String *)func_?(&StringLiteral_Reward_removal_is_illegal);
        mscorlib.dll::System::Exception::Exception__ctor_1(pEVar17,pSVar18,(MethodInfo *)0x0);
        func_?();
        func_?();
      }
    }
  }
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).xpTierRewardsValidators =
       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
        *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator(Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.AntiCheat.RangeValidator`1[System.Int32]],
   Dictionary`2[MV.Common.GamePassTier,System.Boolean]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
     GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor_1
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
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                   );
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
  }
  this_01 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
            );
  pMVar4 = (MethodInfo *)&this->fields;
  (this->fields).xpTierRewardsValidators =
       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
        *)this_01;
  func_?(pMVar4,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar4);
  if (xpRangeValidators !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_AntiCheat_RangeValidator_1_System_Int32_ *
      )0x0) {
    pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,
                        (Dictionary_2_System_UInt32_System_Object_ *)xpRangeValidators,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__GetEnumerator__
                       );
    method_00 = (Object__Class *)pDVar5->_dictionary;
    pMVar4 = (MethodInfo *)(pDVar5->_current).key;
    uVar6 = *(undefined8 *)&(pDVar5->_current).value;
    uStack_1 = 1;
    while( true ) {
      bVar7 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                         &stack0xffffffb8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__MoveNext__
                        );
      if (bVar7 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffb8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOStack_8 = (Object *)uVar6;
      BStack_9 = CONCAT31(BStack_9._1_3_,(char)pMVar4);
      if (xpRewardRemovalAllowed == (Dictionary_2_MV_Common_GamePassTier_System_Boolean_ *)0x0)
      break;
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Boolean]::Dictionary_2_System_ByteEnum_System_Boolean__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Boolean_ *)xpRewardRemovalAllowed,
                         (ByteEnum__Enum)pMVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_bool>__get_Item_MV__Common__GamePassTier_
                        );
      value = (Object *)func_?();
      method_00 = (Object__Class *)&UNK_?;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,pMVar4);
      *(bool *)&value[1].klass = bVar7;
      value[1].monitor = (MonitorData *)pOStack_8;
      pMVar4 = (MethodInfo *)&value[1].monitor;
      func_?();
      this_00 = (this->fields).xpTierRewardsValidators;
      if (this_00 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
           *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Add
                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,BStack_9,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator_
                );
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

