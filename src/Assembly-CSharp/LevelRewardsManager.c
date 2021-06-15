
/* Void AddClaimedLevelRewards(Dictionary`2[System.Int32,System.Int32]) */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
               (LevelRewardsManager *this,Dictionary_2_System_Int32_System_Int32_ *levelRewards,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
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
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (levelRewards != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb4,
                        (Dictionary_2_WinningConditionType_System_Object_ *)levelRewards,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    uStack_1 = 0;
    while( true ) {
      do {
        cVar10 = func_?();
        if (cVar10 == '\0') {
          *puStack_8 = 99;
          uStack_1 = 0xffffffff;
          func_?();
          this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnRewardsReturned;
          if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
            JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                      (this_00,(MethodInfo *)0x0);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        KStack_7 = LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                              );
        pDVar11 = (this->fields).unseenLevelRewards;
        iVar12 = func_?();
        if (pDVar11 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
        bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__ContainsKey
                          (pDVar11,iVar12,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                          );
      } while (bVar13 != 0);
      pDVar11 = (this->fields).unseenLevelRewards;
      iVar12 = func_?();
      value = func_?();
      if (pDVar11 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__Add
                (pDVar11,iVar12,value,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    }
  }
code_?:
  func_?(0);
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ClearRewards() */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_ClearRewards
               (LevelRewardsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).unseenLevelRewards;
  if (this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetNextLevelReward(Int32, Int32) */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
               (LevelRewardsManager *this,int32_t level,int32_t gold,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar1 = 0;
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,uVar1);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if ((StringLiteral_Next_level_reward__Level_ != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_Next_level_reward__Level_,
                                (args->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    uVar1 = 0;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Next_level_reward__Level_;
    pOVar4 = (Object *)func_?(&level);
    if ((pOVar4 != (Object *)0x0) &&
       (iVar3 = func_?(pOVar4,(args->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar4;
    if ((StringLiteral___Gold_ != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral___Gold_,(args->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    iVar5 = gold;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral___Gold_;
    iStack_6 = gold;
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if ((pOVar4 == (Object *)0x0) ||
       (iVar3 = func_?(pOVar4,(args->klass->_0).element_class), iVar3 != 0)) {
      if (3 < args->max_length) {
        args->vector[3] = pOVar4;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        uStack_7 = 0;
        func_?(&uStack_7,level,iVar5,
                        MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__KeyValuePair_int__int_
                       );
        (this->fields)._NextReward_k__BackingField.key = (int32_t)uStack_7;
        (this->fields)._NextReward_k__BackingField.value = uStack_7._4_4_;
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* LevelRewardsManager() */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager__ctor
               (LevelRewardsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this->fields).unseenLevelRewards = this_00;
  return;
}


/* KeyValuePair`2[System.Int32,System.Int32] get_NextReward() */

KeyValuePair_2_System_Int32_System_Int32_
Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
          (LevelRewardsManager *this,MethodInfo *method)

{
  return (this->fields)._NextReward_k__BackingField;
}

