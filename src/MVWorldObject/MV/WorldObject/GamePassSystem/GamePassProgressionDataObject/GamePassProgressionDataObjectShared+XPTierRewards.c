
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectShared+XPTierRewards::
         GamePassProgressionDataObjectShared_XPTierRewards_ToString
                   (GamePassProgressionDataObjectShared_XPTierRewards *this,MethodInfo *method)

{
  pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
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
  pSVar8 = StringLiteral_Tier_XP_rewardsu000A;
  pSStack_9 = StringLiteral_Tier_XP_rewardsu000A;
  this_00 = (this->fields).xpTierRewards;
  if (this_00 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    pLStack_10 = (Link__Array *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_12,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar11->dictionary;
    auStack_6._4_4_ = pDVar11->next;
    auStack_6._8_4_ = pDVar11->stamp;
    auStack_6._12_4_ = (pDVar11->current).key;
    auStack_6._16_4_ = (pDVar11->current).value;
    pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0x0;
    while (cVar13 = func_?(), cVar13 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                            );
      DStack_12.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_12.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Key__
      ;
      uVar14 = func_?();
      this = (GamePassProgressionDataObjectShared_XPTierRewards *)CONCAT13(uVar14,this._0_3_);
      DStack_12.next = (int)&this + 3;
      DStack_12.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)TypeInfo__MV__Common__GamePassTier;
      pWStack_15 = (WinningConditionType__Enum__Array *)func_?();
      DStack_12.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_12.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
      ;
      pOStack_16 = (Object__Array *)func_?();
      DStack_12.next = (int32_t)&pOStack_16;
      DStack_12.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)TypeInfo__System__Int32;
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_____0____1__u000A,(Object *)pWStack_15,arg1,(MethodInfo *)0x0)
      ;
      pSVar8 = mscorlib.dll::System::String::String_Concat_2(pSVar8,str1,(MethodInfo *)0x0);
      pSStack_9 = pSVar8;
    }
    pLStack_10->klass = (Link__Array__Class *)0x5e;
    pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
    func_?();
    *unaff_FS_OFFSET = iStack_3;
    return pSVar8;
  }
  pLStack_10 = (Link__Array *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  func_?(0);
  func_?();
  pcVar17 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar17)();
  return pSVar8;
}


/* GamePassProgressionDataObjectShared+XPTierRewards() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectShared+XPTierRewards::
     GamePassProgressionDataObjectShared_XPTierRewards__ctor
               (GamePassProgressionDataObjectShared_XPTierRewards *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
            );
  if (this_00 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::Int32]
    ::Dictionary_2_MV_Common_GamePassTier_System_Int32__Add
              (this_00,GamePassTier__Enum_Tier1,0x32,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::Int32]
    ::Dictionary_2_MV_Common_GamePassTier_System_Int32__Add
              (this_00,GamePassTier__Enum_Tier2,100,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::Int32]
    ::Dictionary_2_MV_Common_GamePassTier_System_Int32__Add
              (this_00,GamePassTier__Enum_Tier3,200,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
              );
    (this->fields).xpTierRewards = this_00;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

