
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_Initialize
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__GameMeterTimeAttackFlag__OnEndFlagCountdown__);
    func_?(&MethodInfo__GameMeterTimeAttackFlag__OnStartFlagCountdown_int_);
    func_?(&MethodInfo__GameMeterTimeAttackFlag__OnStartFlagCountdown__);
    func_?(&StringLiteral__00_00_00);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timeAttackFlagText;
  if (pTVar1 == (Text *)0x0) {
code_?:
    func_?();
  }
  else {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral__00_00_00,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 == (FlagDebriefingControl *)0x0) goto code_?;
    pAVar3 = (pFVar2->fields).OnFlagDebriefing;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__GameMeterTimeAttackFlag__OnStartFlagCountdown_int_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pFVar2->fields).OnFlagDebriefing = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar3 = (Action_1_Int32_ *)func_?();
      if (pAVar3 == (Action_1_Int32_ *)0x0) goto code_?;
      (pFVar2->fields).OnFlagDebriefing = pAVar3;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 == (FlagDebriefingControl *)0x0) goto code_?;
    pAVar6 = (pFVar2->fields).OnFlagCountDown;
    pNVar7 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar7,(Object *)&UNK_?,
               MethodInfo__GameMeterTimeAttackFlag__OnStartFlagCountdown__,(MethodInfo *)0x0);
    pAVar6 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
    if (pAVar6 == (Action *)0x0) {
      (pFVar2->fields).OnFlagCountDown = (Action *)0x0;
code_?:
      func_?();
      pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar2 == (FlagDebriefingControl *)0x0) goto code_?;
      pAVar6 = (pFVar2->fields).OnFlagCountDownEnd;
      pNVar7 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar7,(Object *)&UNK_?,
                 MethodInfo__GameMeterTimeAttackFlag__OnEndFlagCountdown__,(MethodInfo *)0x0);
      pAVar6 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
      if (pAVar6 == (Action *)0x0) {
        (pFVar2->fields).OnFlagCountDownEnd = (Action *)0x0;
        func_?();
        return;
      }
      pAVar8 = (Action *)0x0;
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar6;
      }
      if (pAVar8 != (Action *)0x0) {
        (pFVar2->fields).OnFlagCountDownEnd = pAVar8;
        pAVar8 = (Action *)0x0;
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar8 = pAVar6;
        }
        if (pAVar8 != (Action *)0x0) {
          func_?();
          return;
        }
      }
    }
    else {
      pAVar8 = (Action *)0x0;
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar6;
      }
      if (pAVar8 != (Action *)0x0) {
        (pFVar2->fields).OnFlagCountDown = pAVar8;
        pAVar8 = (Action *)0x0;
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar8 = pAVar6;
        }
        if (pAVar8 != (Action *)0x0) goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnEndFlagCountdown() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_OnEndFlagCountdown
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  (this->fields).shouldUpdate = 1;
  return;
}


/* Void OnStartFlagCountdown(Int32) */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_OnStartFlagCountdown_1
               (GameMeterTimeAttackFlag *this,int32_t captureTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppSStack_1 = &StringLiteral__00_00_00;
    func_?();
    cRam_? = '\x01';
  }
  pTStack_2 = (this->fields).timeAttackFlagText;
  (this->fields).shouldUpdate = 0;
  if (pTStack_2 != (Text *)0x0) {
    ppSStack_1 = (String **)(pTStack_2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pSStack_3 = StringLiteral__00_00_00;
    (*(code *)(pTStack_2->klass->vtable).set_text.method)();
    return;
  }
  ppSStack_1 = (String **)&stack0xfffffffc;
  uVar4 = func_?(&pTStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetGameMeterVisibility() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_SetGameMeterVisibility
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  WVar1 = WinningConditionType__Enum_Collectible;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
            ((WinningConditionType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (WVar1 == WinningConditionType__Enum_TimeAttackFlag) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetShowGameMeter(Boolean) */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_SetShowGameMeter
               (GameMeterTimeAttackFlag *this,bool show,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagBar;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,show,(MethodInfo *)0x0);
    if ((this->fields).timeAttackFlagText != (Text *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_Update
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  if ((this->fields).shouldUpdate == 0) {
    return;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar2 != (FlagDebriefingControl *)0x0) {
    fVar3 = (pFVar2->fields).RunStartTime;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar1 = (fVar1 - fVar3) * _UNK_?;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar4 = (double)fVar1;
    statType = &UNK_?;
    func_?(dVar4,8);
    method_00 = SUB84(dVar4,0);
    score = func_?();
    WinningConditionControl::WinningConditionControl_MakeIntoScoreText
              (score,(GameStatCounterType__Enum)statType,method_00);
    pTVar5 = (this->fields).timeAttackFlagText;
    if (pTVar5 != (Text *)0x0) {
      (*(code *)(pTVar5->klass->vtable).set_text.method)();
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GameMeterTimeAttackFlag() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag__ctor
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  (this->fields)._.gameMeterVisualEffects = this_00;
  func_?(&(this->fields)._.gameMeterVisualEffects,this_00);
  (this->fields)._.meterActive = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

