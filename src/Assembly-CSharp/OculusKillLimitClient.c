
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::OculusKillLimitClient::OculusKillLimitClient_GetBriefing
               (OculusKillLimitClient *this,IBriefing *winningConditionBriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (this_00,WorldObjectType__Enum_AdvancedGhost,(MethodInfo *)0x0);
    if (this_01 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      if (0 < (int)pOVar1) {
        System.dll::System::Collections::Generic::
        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
        Single,System::Object]::
        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                  (unaff_EDI,(MethodInfo *)0x0);
        if (unaff_ESI == (int *)0x0) goto code_?;
        uVar2 = 0;
        uVar3 = *(ushort *)(*unaff_ESI + 0xb6);
        if (uVar3 != 0) {
          iVar4 = *(int *)(*unaff_ESI + 0x58);
          do {
            if (*(IBriefing__Class **)(iVar4 + (uint)uVar2 * 8) == TypeInfo__IBriefing) {
              puVar5 = (undefined4 *)(*unaff_ESI + 0xc0 + *(int *)(iVar4 + 4 + (uint)uVar2 * 8) * 8)
              ;
              goto code_?;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar3);
        }
        puVar5 = (undefined4 *)func_?();
code_?:
        (*(code *)*puVar5)(unaff_ESI);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::OculusKillLimitClient::OculusKillLimitClient_GetDebriefing
               (OculusKillLimitClient *this,IDebriefing *winningConditionDebriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (*(code *)(this->klass->vtable).get_HighScores.method)
                    (this,(this->klass->vtable).Traverse_1.methodPtr);
  bVar2 = (*(code *)(this->klass->vtable).get_IsTeamMode.method)
                    (this,(this->klass->vtable).get_HighScores.methodPtr);
  this = (OculusKillLimitClient *)(uint)bVar2;
  if (winningConditionDebriefingView == (IDebriefing *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = winningConditionDebriefingView->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType == (Il2CppClass *)TypeInfo__IDebriefing) {
        ppMVar7 = &(&winningConditionDebriefingView->klass->vtable)
                   [pIVar4->interfaceOffsets[uVar5].offset].SetupDebriefing.method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)func_?(winningConditionDebriefingView,TypeInfo__IDebriefing,0);
code_?:
  (*(code *)*ppMVar7)(winningConditionDebriefingView,3,uVar1,this,ppMVar7[1]);
  return;
}


/* OculusKillLimitClient(WinningCondition, Int32, GameStatCounterManager, Int32) */

void Assembly-CSharp.dll::OculusKillLimitClient::OculusKillLimitClient__ctor
               (OculusKillLimitClient *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t killLimit,MethodInfo *method)

{
  MVWorldObject.dll::WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,killLimit,1,
             GameStatCounterType__Enum_OculusKill,WinningConditionPresentStyle__Enum_MultipleWinners
             ,(MethodInfo *)0x0);
  return;
}

