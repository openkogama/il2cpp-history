
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
         GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_ToString
                   (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *this,
                   MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  str0 = (Object__Array *)::StringLiteral__;
  pOStack_8 = (Object__Array *)::StringLiteral__;
  this_00 = (this->fields).xpTierRewardsValidators;
  if (this_00 !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
       *)0x0) {
    pLStack_9 = (Link__Array *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_11,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    iStack_1 = 0;
    while (cVar12 = func_?(), cVar12 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Current__
                            );
      DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_11.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Key__
      ;
      uVar13 = func_?();
      this = (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)
             CONCAT13(uVar13,this._0_3_);
      DStack_11.next = (int)&this + 3;
      DStack_11.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)TypeInfo__MV__Common__GamePassTier;
      pWStack_14 = (WinningConditionType__Enum__Array *)func_?();
      DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_11.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Value__
      ;
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar15 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0____1_u000A,(Object *)pWStack_14,arg1,(MethodInfo *)0x0);
      str0 = (Object__Array *)
             mscorlib.dll::System::String::String_Concat_2((String *)str0,pSVar15,(MethodInfo *)0x0);
      pOStack_8 = str0;
    }
    pLStack_9->klass = (Link__Array__Class *)0x59;
    iStack_1 = -1;
    func_?();
    *unaff_FS_OFFSET = iStack_3;
    return (String *)str0;
  }
  pLStack_9 = (Link__Array *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  func_?(0);
  func_?();
  pcVar16 = (code *)swi(3);
  pSVar15 = (String *)(*pcVar16)();
  return pSVar15;
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
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  KStack_6.key = 0;
  KStack_6.value = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  if (xpTierRewards != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    pOStack_8 = System.Core.dll::System::Linq::
                 Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                 KeyValuePair`2[System::Object,System::Object],System::Object]::
                 Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                             *)xpTierRewards,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Count__
                           );
    pDVar9 = (this->fields).xpTierRewardsValidators;
    if (pDVar9 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
                   *)0x0) {
      pOVar10 = System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)pDVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Count__
                         );
      if (pOStack_8 != pOVar10) goto code_?;
      pDVar9 = (this->fields).xpTierRewardsValidators;
      if (pDVar9 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
        Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                   &stack0xffffffb0,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__GetEnumerator__
                  );
        uStack_1 = 0;
        while( true ) {
          cVar11 = func_?();
          if (cVar11 == '\0') {
            *puStack_7 = 0x78;
            uStack_1 = 0xffffffff;
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          KStack_6 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)&stack0xffffffc4,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Current__
                                );
          GVar12 = func_?();
          iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                  GamePassTier,System::Int32]::
                  Dictionary_2_MV_Common_GamePassTier_System_Int32__get_Item
                            (xpTierRewards,GVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                            );
          iVar14 = func_?();
          if (iVar14 == 0) break;
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          if (iVar13 == 0) {
            if (*(char *)(iVar14 + 8) == '\0') {
              if (fixIfInValid == 0) {
                pIVar15 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
                mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
                IsolatedStorageException__ctor_1
                          (pIVar15,StringLiteral_Reward_removal_is_illegal,(MethodInfo *)0x0);
                func_?();
              }
              else if (*(int *)(iVar14 + 0xc) != 0) {
                iVar13 = *(int32_t *)(*(int *)(iVar14 + 0xc) + 8);
                goto code_?;
              }
              break;
            }
            iVar13 = 0;
          }
          else {
code_?:
            if (*(RangeValidator_1_System_Int32_ **)(iVar14 + 0xc) ==
                (RangeValidator_1_System_Int32_ *)0x0) break;
            iVar13 = AntiCheat::RangeValidator`1[System::Int32]::
                    RangeValidator_1_System_Int32__Validate
                              (*(RangeValidator_1_System_Int32_ **)(iVar14 + 0xc),iVar13,fixIfInValid,
                               MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                              );
          }
          GVar12 = func_?(&KStack_6,
                                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Key__
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
          Int32]::Dictionary_2_MV_Common_GamePassTier_System_Int32__set_Item
                    (xpTierRewards,GVar12,iVar13,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                    );
        }
      }
    }
  }
  func_?(0);
  func_?();
code_?:
  pIVar15 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (pIVar15,StringLiteral_rewards_count_not_matching,(MethodInfo *)0x0);
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
            );
  (this->fields).xpTierRewardsValidators = this_00;
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
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
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
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
  ;
  puStack_8 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  pDVar9 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
            *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
            );
  (this->fields).xpTierRewardsValidators = pDVar9;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if (xpRangeValidators !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_AntiCheat_RangeValidator_1_System_Int32_ *
      )0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffac,
                        (Dictionary_2_WinningConditionType_System_Object_ *)xpRangeValidators,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        *puStack_8 = 0x67;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__get_Current__
                            );
      auStack_6._0_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__get_Key__
      ;
      uVar12 = func_?();
      pMStack_13 = (MethodInfo *)CONCAT31(pMStack_13._1_3_,uVar12);
      key = pMStack_13;
      if (xpRewardRemovalAllowed == (Dictionary_2_MV_Common_GamePassTier_System_Boolean_ *)0x0)
      break;
      method_01 = pMStack_13;
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              GamePassTier,System::Boolean]::
              Dictionary_2_MV_Common_GamePassTier_System_Boolean__get_Item
                        (xpRewardRemovalAllowed,(GamePassTier__Enum)pMStack_13,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_bool>__get_Item_MV__Common__GamePassTier_
                        );
      iStack_15 = func_?();
      this_00 = (ScaleAnimationBase *)func_?();
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_01);
      *(bool *)&(this_00->fields)._._._._.m_CachedPtr = bVar14;
      (this_00->fields).state = iStack_15;
      pDVar9 = (this->fields).xpTierRewardsValidators;
      if (pDVar9 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
                     *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__Add
                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar9,
                 (GamePassTier__Enum)key,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator_
                );
    }
  }
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

