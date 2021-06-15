
/* Void AddGameBoosterGoldRevenue(Int32, String) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport_AddGameBoosterGoldRevenue
               (EarningsReport *this,int32_t goldAmount,String *gameBooster,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gameBoosterEarningsGold;
  if (pDVar1 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__ContainsKey
                      ((Dictionary_2_System_Object_System_Int32_ *)pDVar1,(Object *)gameBooster,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).gameBoosterEarningsGold;
      if (pDVar1 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar1,(Object *)gameBooster,0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
    }
    pDVar1 = (this->fields).gameBoosterEarningsGold;
    if (pDVar1 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]
              ::Dictionary_2_System_Object_System_Int32__get_Item
                        ((Dictionary_2_System_Object_System_Int32_ *)pDVar1,(Object *)gameBooster,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                        );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__set_Item
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar1,(Object *)gameBooster,
                 (int)&gameBooster->klass + iVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__set_Item_System__String__int_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddTierGoldRevenue(Int32, GamePassTier) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport_AddTierGoldRevenue
               (EarningsReport *this,int32_t goldAmount,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gamePassTierEarningsGold;
  if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System
            ::Int32]::Dictionary_2_MV_Common_GamePassTier_System_Int32__ContainsKey
                      (pDVar1,gamePassTier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).gamePassTierEarningsGold;
      if (pDVar1 == (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Int32]::Dictionary_2_MV_Common_GamePassTier_System_Int32__Add
                (pDVar1,gamePassTier,0,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                );
    }
    pDVar1 = (this->fields).gamePassTierEarningsGold;
    if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              GamePassTier,System::Int32]::
              Dictionary_2_MV_Common_GamePassTier_System_Int32__get_Item
                        (pDVar1,gamePassTier,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                        );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Int32]::Dictionary_2_MV_Common_GamePassTier_System_Int32__set_Item
                (pDVar1,gamePassTier,iVar3 + gamePassTier,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 GetTotalEarningsGold() */

int32_t MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
        EarningsReport_GetTotalEarningsGold(EarningsReport *this,MethodInfo *method)

{
  pSStack_1 = (SerializationInfo *)0xffffffff;
  pIStack_2 = (IEqualityComparer_1_WinningConditionType_ *)&DAT_?;
  pSStack_3 = (SerializationInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pSStack_3;
  pIStack_4 = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffff7c;
  pIVar5 = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  pOStack_6 = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  pOStack_8 = (Object__Array *)0x0;
  KStack_9.key = 0;
  KStack_9.value = 0;
  auStack_10._20_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_11 = 0;
  iStack_12 = 0;
  iStack_13 = 0;
  auStack_10._16_4_ = (Object *)0x0;
  auStack_10._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_10._4_4_ = (MonitorData *)0x0;
  auStack_10._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_10._12_4_ = 0;
  func_?();
  iVar14 = 0;
  pWStack_15 = (WinningConditionType__Enum__Array *)0xffffffff;
  this_00 = (this->fields).gamePassTierEarningsGold;
  iStack_16 = 0;
  piStack_17 = (int *)&stack0xffffff7c;
  pIStack_4 = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffff7c;
  if (this_00 == (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
code_?:
    pOVar18 = (Object__Array *)func_?(0);
  }
  else {
    piStack_17 = (int *)&stack0xffffff7c;
    pIStack_4 = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffff7c;
    pDVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_20,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                       );
    auStack_10._20_4_ = pDVar19->dictionary;
    iStack_11 = pDVar19->next;
    iStack_12 = pDVar19->stamp;
    iStack_13 = (pDVar19->current).key;
    pOStack_6 = (pDVar19->current).value;
    pSStack_1 = (SerializationInfo *)0x0;
    while (cVar21 = func_?(), cVar21 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)(auStack_10 + 0x14),
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                            );
      DStack_20.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_20.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
      ;
      iVar22 = func_?();
      iVar14 = iVar14 + iVar22;
      iStack_16 = iVar14;
    }
    iVar22 = 0;
    *piStack_17 = 0x3b;
    pSStack_1 = (SerializationInfo *)0xffffffff;
    func_?();
    pOVar18 = pOStack_8;
    if (pOStack_8 == (Object__Array *)0x0) {
      if (*piStack_17 == 0x3b) {
        iVar22 = -1;
      }
      this_01 = (this->fields).gameBoosterEarningsGold;
      if (this_01 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
        pDVar19 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           (&DStack_20,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                           );
        auStack_10._0_4_ = pDVar19->dictionary;
        auStack_10._4_4_ = pDVar19->next;
        auStack_10._8_4_ = pDVar19->stamp;
        auStack_10._12_4_ = (pDVar19->current).key;
        auStack_10._16_4_ = (pDVar19->current).value;
        pSStack_1 = (SerializationInfo *)0x2;
        while (cVar21 = func_?(), pOVar18 = pOStack_8, cVar21 != '\0') {
          KStack_9 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_10,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                                );
          DStack_20.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_9;
          DStack_20.next =
               (int32_t)
               MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Value__
          ;
          iVar23 = func_?();
          iVar14 = iVar14 + iVar23;
          iStack_16 = iVar14;
        }
        piStack_17[iVar22 + 1] = 0x75;
        pSStack_1 = (SerializationInfo *)0xffffffff;
        func_?();
        if (pOVar18 == (Object__Array *)0x0) {
          *unaff_FS_OFFSET = pSStack_3;
          return iVar14;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(pOVar18,0,0);
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  iVar25 = (*pcVar24)();
  return iVar25;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
         EarningsReport_ToString(EarningsReport *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppClass *)&stack0xffffff98;
  pIVar5 = (Il2CppClass *)&stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pEVar8 = this;
  pcStack_9 = &stack0xffffff98;
  pIStack_4 = (Il2CppClass *)&stack0xffffff98;
  _Stack_1c.__klassIndex = EarningsReport_GetTotalEarningsGold(this,(MethodInfo *)0x0);
  pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_1c);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar11 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_total_earnings_gold__0__u000A,pOVar10,(MethodInfo *)0x0);
  this_00 = (pEVar8->fields).gamePassTierEarningsGold;
  pSStack_12 = pSVar11;
  if (this_00 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffa4,(Dictionary_2_WinningConditionType_System_Object_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar13->dictionary;
    auStack_6._4_4_ = pDVar13->next;
    auStack_6._8_4_ = pDVar13->stamp;
    auStack_6._12_4_ = (pDVar13->current).key;
    auStack_6._16_4_ = (pDVar13->current).value;
    pIStack_1 = (Il2CppClass *)0x0;
    while (cVar14 = func_?(), cVar14 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                            );
      auStack_6._0_4_ = &KStack_7;
      auStack_6._4_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Key__
      ;
      uVar15 = func_?();
      this = (EarningsReport *)CONCAT13(uVar15,this._0_3_);
      auStack_6._4_4_ = (int)&this + 3;
      auStack_6._0_4_ = TypeInfo__MV__Common__GamePassTier;
      _Stack_24.dummy = (void *)func_?();
      auStack_6._0_4_ = &KStack_7;
      auStack_6._4_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
      ;
      aMStack_16 = (MonitorData  [4])func_?();
      auStack_6._4_4_ = aMStack_16;
      auStack_6._0_4_ = TypeInfo__System__Int32;
      pOVar10 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0____1__,(Object *)_Stack_24.typeHandle,pOVar10,
                        (MethodInfo *)0x0);
      pSVar11 = mscorlib.dll::System::String::String_Concat_2(pSVar11,str1,(MethodInfo *)0x0);
      pSStack_12 = pSVar11;
    }
    pcVar17 = pcStack_9;
    pcVar17[0] = 'n';
    pcVar17[1] = '\0';
    pcVar17[2] = '\0';
    pcVar17[3] = '\0';
    pIStack_1 = (Il2CppClass *)0xffffffff;
    func_?();
    *unaff_FS_OFFSET = pIStack_3;
    return pSVar11;
  }
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pSVar11 = (String *)(*pcVar18)();
  return pSVar11;
}


/* EarningsReport() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport__ctor(EarningsReport *this,MethodInfo *method)

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
  (this->fields).gamePassTierEarningsGold = this_00;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>;
  this_01 = (Dictionary_2_System_String_System_Int32_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  (this->fields).gameBoosterEarningsGold = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* EarningsReport(Dictionary`2[MV.Common.GamePassTier,System.Int32],
   Dictionary`2[System.String,System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport__ctor_1
               (EarningsReport *this,
               Dictionary_2_MV_Common_GamePassTier_System_Int32_ *gamePassTierEarningsGold,
               Dictionary_2_System_String_System_Int32_ *gameBoosterEarningsGold,MethodInfo *method)

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
  (this->fields).gamePassTierEarningsGold = this_00;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>;
  this_01 = (Dictionary_2_System_String_System_Int32_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  (this->fields).gameBoosterEarningsGold = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).gamePassTierEarningsGold = gamePassTierEarningsGold;
  (this->fields).gameBoosterEarningsGold = gameBoosterEarningsGold;
  return;
}


/* Int32 get_TotalEarningsGold() */

int32_t MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
        EarningsReport_get_TotalEarningsGold(EarningsReport *this,MethodInfo *method)

{
  pSStack_1 = (SerializationInfo *)0xffffffff;
  pIStack_2 = (IEqualityComparer_1_WinningConditionType_ *)&DAT_?;
  pSStack_3 = (SerializationInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pSStack_3;
  pIStack_4 = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffff7c;
  pIVar5 = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  pOStack_6 = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  pOStack_8 = (Object__Array *)0x0;
  KStack_9.key = 0;
  KStack_9.value = 0;
  auStack_10._20_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_11 = 0;
  iStack_12 = 0;
  iStack_13 = 0;
  auStack_10._16_4_ = (Object *)0x0;
  auStack_10._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_10._4_4_ = (MonitorData *)0x0;
  auStack_10._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_10._12_4_ = 0;
  func_?();
  iVar14 = 0;
  pWStack_15 = (WinningConditionType__Enum__Array *)0xffffffff;
  this_00 = (this->fields).gamePassTierEarningsGold;
  iStack_16 = 0;
  piStack_17 = (int *)&stack0xffffff7c;
  pIStack_4 = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffff7c;
  if (this_00 == (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
code_?:
    pOVar18 = (Object__Array *)func_?(0);
  }
  else {
    piStack_17 = (int *)&stack0xffffff7c;
    pIStack_4 = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffff7c;
    pDVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_20,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                       );
    auStack_10._20_4_ = pDVar19->dictionary;
    iStack_11 = pDVar19->next;
    iStack_12 = pDVar19->stamp;
    iStack_13 = (pDVar19->current).key;
    pOStack_6 = (pDVar19->current).value;
    pSStack_1 = (SerializationInfo *)0x0;
    while (cVar21 = func_?(), cVar21 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)(auStack_10 + 0x14),
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                            );
      DStack_20.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_20.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
      ;
      iVar22 = func_?();
      iVar14 = iVar14 + iVar22;
      iStack_16 = iVar14;
    }
    iVar22 = 0;
    *piStack_17 = 0x3b;
    pSStack_1 = (SerializationInfo *)0xffffffff;
    func_?();
    pOVar18 = pOStack_8;
    if (pOStack_8 == (Object__Array *)0x0) {
      if (*piStack_17 == 0x3b) {
        iVar22 = -1;
      }
      this_01 = (this->fields).gameBoosterEarningsGold;
      if (this_01 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
        pDVar19 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           (&DStack_20,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                           );
        auStack_10._0_4_ = pDVar19->dictionary;
        auStack_10._4_4_ = pDVar19->next;
        auStack_10._8_4_ = pDVar19->stamp;
        auStack_10._12_4_ = (pDVar19->current).key;
        auStack_10._16_4_ = (pDVar19->current).value;
        pSStack_1 = (SerializationInfo *)0x2;
        while (cVar21 = func_?(), pOVar18 = pOStack_8, cVar21 != '\0') {
          KStack_9 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_10,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                                );
          DStack_20.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_9;
          DStack_20.next =
               (int32_t)
               MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Value__
          ;
          iVar23 = func_?();
          iVar14 = iVar14 + iVar23;
          iStack_16 = iVar14;
        }
        piStack_17[iVar22 + 1] = 0x75;
        pSStack_1 = (SerializationInfo *)0xffffffff;
        func_?();
        if (pOVar18 == (Object__Array *)0x0) {
          *unaff_FS_OFFSET = pSStack_3;
          return iVar14;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(pOVar18,0,0);
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  iVar25 = (*pcVar24)();
  return iVar25;
}

