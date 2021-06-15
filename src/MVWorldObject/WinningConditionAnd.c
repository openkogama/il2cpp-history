
/* Boolean AllWinConditionForfilled() */

bool MVWorldObject.dll::WinningConditionAnd::WinningConditionAnd_AllWinConditionForfilled
               (WinningConditionAnd *this,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  WStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (WinningConditionType__Enum)&WStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  pOStack_7 = (Object__Array *)0x0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pLStack_9 = (Link__Array *)0xffffffff;
  this_00 = (this->fields)._.winnerConditions;
  pWStack_10 = (WinningConditionType__Enum__Array *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (this_00 == (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pWStack_10 = (WinningConditionType__Enum__Array *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_12,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar11->dictionary;
    auStack_6._4_4_ = pDVar11->next;
    auStack_6._8_4_ = pDVar11->stamp;
    auStack_6._12_4_ = (pDVar11->current).key;
    auStack_6._16_4_ = (pDVar11->current).value;
    iStack_1 = 0;
    do {
      cVar13 = func_?();
      if (cVar13 == '\0') break;
      KStack_8 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__get_Current__
                            );
      DStack_12.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_8;
      DStack_12.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<int,_IWinningCondition>__get_Value__
      ;
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
      cVar13 = func_?(3,TypeInfo__IWinningCondition,iVar14);
    } while (cVar13 != '\0');
    iStack_1 = -1;
    puVar15 = &UNK_?;
    func_?();
    if (pOStack_7 == (Object__Array *)0x0) {
      if (puVar15 == (undefined *)0x43) {
        *unaff_FS_OFFSET = WStack_3;
        return 0;
      }
      *unaff_FS_OFFSET = WStack_3;
      return 1;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* String ToString() */

String * MVWorldObject.dll::WinningConditionAnd::WinningConditionAnd_ToString
                   (WinningConditionAnd *this,MethodInfo *method)

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
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pSVar8 = ::StringLiteral__;
  this_00 = (this->fields)._.winnerConditions;
  pSStack_9 = ::StringLiteral__;
  if (this_00 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
    puStack_10 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb0,(Dictionary_2_WinningConditionType_System_Object_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar11->dictionary;
    auStack_6._4_4_ = pDVar11->next;
    auStack_6._8_4_ = pDVar11->stamp;
    auStack_6._12_4_ = (pDVar11->current).key;
    auStack_6._16_4_ = (pDVar11->current).value;
    uStack_1 = 0;
    while (cVar12 = func_?(), cVar12 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_IWinningCondition>__get_Current__
                            );
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar13 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar8 = mscorlib.dll::System::String::String_Concat_2
                           (pSVar8,StringLiteral__AND_,(MethodInfo *)0x0);
        pSStack_9 = pSVar8;
      }
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar8 = mscorlib.dll::System::String::String_Concat((Object *)pSVar8,arg1,(MethodInfo *)0x0);
      pSStack_9 = pSVar8;
    }
    *puStack_10 = 0x57;
    uStack_1 = 0xffffffff;
    func_?();
    *unaff_FS_OFFSET = uStack_3;
    return pSVar8;
  }
  puStack_10 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  func_?(0);
  func_?();
  pcVar14 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar14)();
  return pSVar8;
}


/* WinningConditionAnd(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::WinningConditionAnd::WinningConditionAnd__ctor
               (WinningConditionAnd *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_IWinningCondition_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Dictionary__
            );
  (this->fields)._.winnerConditions = this_00;
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,0,
             GameStatCounterType__Enum_None,WinningConditionPresentStyle__Enum_NoWinner,
             (MethodInfo *)0x0);
  return;
}


/* Void winnerCondition_OnWinningConditionChanged(Object, EventArgs) */

void MVWorldObject.dll::WinningConditionAnd::
     WinningConditionAnd_winnerCondition_OnWinningConditionChanged
               (WinningConditionAnd *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = WinningConditionAnd_AllWinConditionForfilled(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_01 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
              func_?(TypeInfo__System__EventArgs);
    Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
              (this->fields)._._.OnWinningConditionChanged;
    (this->fields)._._.forfilled = 1;
    (this->fields)._._.instigatorCounterTypeChangedEvent = (OnCounterTypeChangedArgs *)0x0;
    if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)this_01,
                 MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
                );
    }
  }
  return;
}

