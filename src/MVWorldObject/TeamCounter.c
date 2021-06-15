
/* Int32 GetActorCount(Int32) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_GetActorCount
                  (TeamCounter *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).actorCounters;
  if (this_00 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,actorNumber,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).actorCounters;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (this_01,actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                          );
      if (this_02 != (TerrainUtility_TerrainMap *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
        return (int32_t)pIVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 Increment(Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_Increment
                  (TeamCounter *this,int32_t actorNumber,int32_t value,bool includeTeamScore,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).actorCounters;
  if (pDVar1 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNumber,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).actorCounters;
      this_01 = (TextCommand_Command *)func_?(TypeInfo__ActorCounter);
      Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command__ctor
                (this_01,(String__Array *)0x0,(MethodInfo *)0x0);
      if (pDVar1 == (Dictionary_2_System_Int32_ActorCounter_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,actorNumber,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                );
    }
    if (includeTeamScore != 0) {
      piVar3 = &(this->fields).teamCount;
      *piVar3 = *piVar3 + value;
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).actorCounters;
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (this_00,actorNumber,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                          );
      if (this_02 != (TerrainUtility_TerrainMap *)0x0) {
        iVar4 = ActorCounter::ActorCounter_Increment
                          ((ActorCounter *)this_02,value,(MethodInfo *)0x0);
        return iVar4;
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void RemoveStatsFromActor(Int32) */

void MVWorldObject.dll::TeamCounter::TeamCounter_RemoveStatsFromActor
               (TeamCounter *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).actorCounters;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
              (this_00,actorNumber,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Remove_int_)
    ;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::TeamCounter::TeamCounter_ToString(TeamCounter *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  iStack_8 = (this->fields).teamCount;
  puStack_9 = (undefined4 *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar11 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_Team_count___0__u000A,pOVar10,(MethodInfo *)0x0);
  this_00 = (this->fields).actorCounters;
  if (this_00 != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &pDStack_13,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar12->dictionary;
    auStack_6._4_4_ = pDVar12->next;
    auStack_6._8_4_ = pDVar12->stamp;
    auStack_6._12_4_ = (pDVar12->current).key;
    auStack_6._16_4_ = (pDVar12->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar14 = func_?();
      if (cVar14 == '\0') break;
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__get_Current__
                            );
      uStack_15 = func_?();
      pOStack_16 = (Object *)func_?();
      pOVar10 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar17 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_Actor_number___0___Count___1_,pOStack_16,pOVar10,
                          (MethodInfo *)0x0);
      pSVar17 = mscorlib.dll::System::String::String_Format
                         (StringLiteral__0_u000A,(Object *)pSVar17,(MethodInfo *)0x0);
      pSVar11 = mscorlib.dll::System::String::String_Concat_2(pSVar11,pSVar17,(MethodInfo *)0x0);
    }
    *puStack_9 = 0x75;
    uStack_1 = 0xffffffff;
    func_?();
    *unaff_FS_OFFSET = uStack_3;
    return pSVar11;
  }
  func_?();
  pDStack_13 = (Dictionary_2_WinningConditionType_System_Object_ *)this;
  func_?();
  pcVar18 = (code *)swi(3);
  pSVar11 = (String *)(*pcVar18)();
  return pSVar11;
}


/* Int32 Update(Int32, Int32, Boolean) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_Update
                  (TeamCounter *this,int32_t actorNumber,int32_t value,bool includeTeamScore,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (includeTeamScore != 0) {
    (this->fields).teamCount = value;
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).actorCounters;
  pTVar2 = (TerrainUtility_TerrainMap *)func_?(TypeInfo__ActorCounter);
  Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command__ctor
            ((TextCommand_Command *)pTVar2,(String__Array *)value,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
              (pDVar1,actorNumber,pTVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__set_Item_int__ActorCounter_
              );
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).actorCounters;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (pDVar1,actorNumber,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__get_Item_int_
                         );
      if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
        pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pTVar2,(MethodInfo *)0x0);
        return (int32_t)pIVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Int32 UpdateTeam(Int32) */

int32_t MVWorldObject.dll::TeamCounter::TeamCounter_UpdateTeam
                  (TeamCounter *this,int32_t value,MethodInfo *method)

{
  (this->fields).teamCount = value;
  return value;
}


/* TeamCounter() */

void MVWorldObject.dll::TeamCounter::TeamCounter__ctor(TeamCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_ActorCounter_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__);
  (this->fields).actorCounters = this_00;
  return;
}


/* TeamCounter(BytePacker) */

void MVWorldObject.dll::TeamCounter::TeamCounter__ctor_1
               (TeamCounter *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>;
  this_00 = (Dictionary_2_System_Int32_ActorCounter_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Dictionary__);
  (this->fields).actorCounters = this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if (bp != (BytePacker *)0x0) {
    iVar1 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    (this->fields).teamCount = iVar1;
    iVar1 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        this_01 = (ActorCounter *)func_?();
        ActorCounter::ActorCounter__ctor_1(this_01,bp,(MethodInfo *)0x0);
        if (_UNK_? == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
        pMVar3 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  (_UNK_?,iVar1,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__Add_int__ActorCounter_
                  );
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)pMVar3);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* HighScore get_HighScore() */

HighScore *
MVWorldObject.dll::TeamCounter::TeamCounter_get_HighScore(TeamCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  teamScore = (this->fields).teamCount;
  actorCounters = (this->fields).actorCounters;
  this_00 = (HighScore *)func_?(TypeInfo__HighScore);
  HighScore::HighScore__ctor(this_00,teamScore,actorCounters,(MethodInfo *)0x0);
  return this_00;
}

