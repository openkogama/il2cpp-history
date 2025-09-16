
/* Void InitializeGameUI(RectTransform) */

void Assembly-CSharp.dll::OculusKillLimitWinningCondition::
     OculusKillLimitWinningCondition_InitializeGameUI
               (OculusKillLimitWinningCondition *this,RectTransform *lobbyState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    func_?(&StringLiteral_Failed_to_determine_collectibles);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Class *)0xffffffff;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pOVar3 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                       );
    if (pOVar3 == (Object *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Failed_to_determine_collectibles,(MethodInfo *)0x0);
    }
    else {
      pOVar1 = pOVar3[2].klass;
    }
    (this->fields).oculusKillLimit = (int32_t)pOVar1;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_01 = (pMVar2->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
      pLVar4 = MVTeamManager::MVTeamManager_GetTeamList(this_01,(MethodInfo *)0x0);
      if (pLVar4 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
        if ((pLVar4->fields)._size < 2) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          pGVar5 = (pMVar2->fields).gameStatCounterManager;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
          if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
          team = (pMVar6->fields)._._Team_k__BackingField;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
          if ((pMVar6 == (MVLocalPlayer *)0x0) || (pGVar5 == (GameStatCounterManager *)0x0))
          goto code_?;
          iVar7 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                            (pGVar5,GameStatCounterType__Enum_OculusKill,team,
                             (pMVar6->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
        }
        else {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          pGVar5 = (pMVar2->fields).gameStatCounterManager;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
          if ((pMVar6 == (MVLocalPlayer *)0x0) || (pGVar5 == (GameStatCounterManager *)0x0))
          goto code_?;
          iVar7 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                            (pGVar5,GameStatCounterType__Enum_OculusKill,
                             (pMVar6->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
        }
        iVar8 = (this->fields).oculusKillLimit;
        pTVar9 = (this->fields).progress;
        str0 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        str2 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(this->fields).oculusKillLimit,(MethodInfo *)0x0);
        mscorlib.dll::System::String::String_Concat_4(str0,::StringLiteral__,str2,(MethodInfo *)0x0)
        ;
        if (pTVar9 != (Text *)0x0) {
          (*(code *)(pTVar9->klass->vtable).set_text.method)();
          this_02 = (ProgressBarAndroid *)(this->fields).progressBar;
          if (this_02 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress
                      (this_02,(float)iVar7 / (float)iVar8,(MethodInfo *)0x0);
            WinningConditionBase::WinningConditionBase_InitializeGameUI
                      ((WinningConditionBase *)this,(RectTransform *)&UNK_?,(MethodInfo *)0x0
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RoundEndReset() */

void Assembly-CSharp.dll::OculusKillLimitWinningCondition::
     OculusKillLimitWinningCondition_RoundEndReset
               (OculusKillLimitWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  pTVar2 = (this->fields).progress;
  str0 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  str2 = mscorlib.dll::System::Int32::Int32_ToString
                   ((Int32 *)&(this->fields).oculusKillLimit,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_4(str0,::StringLiteral__,str2,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)();
    this_00 = (ProgressBarAndroid *)(this->fields).progressBar;
    if (this_00 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (this_00,0.0 / (float)(this->fields).oculusKillLimit,(MethodInfo *)0x0);
      WinningConditionBase::WinningConditionBase_RoundEndReset
                ((WinningConditionBase *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateValue(Int32) */

void Assembly-CSharp.dll::OculusKillLimitWinningCondition::
     OculusKillLimitWinningCondition_UpdateValue
               (OculusKillLimitWinningCondition *this,int32_t newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    func_?(&StringLiteral_Failed_to_determine_collectibles);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pOVar2 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                       );
    if (pOVar2 == (Object *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Failed_to_determine_collectibles,(MethodInfo *)0x0);
    }
    else if (pOVar2[2].klass != (Object__Class *)(this->fields).oculusKillLimit) {
      (this->fields).oculusKillLimit = (int32_t)pOVar2[2].klass;
    }
    pTVar3 = (this->fields).progress;
    str0 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&newValue,(MethodInfo *)0x0);
    str2 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).oculusKillLimit,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_4(str0,::StringLiteral__,str2,(MethodInfo *)0x0);
    if (pTVar3 != (Text *)0x0) {
      method = (MethodInfo *)&UNK_?;
      (*(code *)(pTVar3->klass->vtable).set_text.method)();
      this_01 = (ProgressBarAndroid *)(this->fields).progressBar;
      if (this_01 != (ProgressBarAndroid *)0x0) {
        method = (MethodInfo *)&UNK_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress
                  (this_01,(float)newValue / (float)(this->fields).oculusKillLimit,(MethodInfo *)0x0
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GameStatCounterType get_StatType() */

GameStatCounterType__Enum
Assembly-CSharp.dll::OculusKillLimitWinningCondition::OculusKillLimitWinningCondition_get_StatType
          (OculusKillLimitWinningCondition *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),6);
}

