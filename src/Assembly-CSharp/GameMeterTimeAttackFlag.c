
/* Void Hide() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_Hide
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_Initialize
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timeAttackFlagText;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral__00_00_00,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 != (FlagDebriefingControl *)0x0) {
      pAVar3 = (pFVar2->fields).OnFlagDebriefing;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__GameMeterTimeAttackFlag__OnStartFlagCountdown_int_,
                 MethodInfo__System__Action<int>__Action_System__Object__void__);
      pAVar5 = (Action_1_Int32_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pAVar3 = (Action_1_Int32_ *)0x0;
      if (pAVar5 != (Action_1_Int32_ *)0x0) {
        if (pAVar5->klass == TypeInfo__System__Action<int>) {
          pAVar3 = pAVar5;
        }
        pAVar6 = (Action__Class *)TypeInfo__System__Action<int>;
        if (pAVar3 == (Action_1_Int32_ *)0x0) goto code_?;
      }
      (pFVar2->fields).OnFlagDebriefing = pAVar3;
      pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar2 != (FlagDebriefingControl *)0x0) {
        pAVar7 = (pFVar2->fields).OnFlagCountDown;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,MethodInfo__GameMeterTimeAttackFlag__OnStartFlagCountdown__
                   ,(MethodInfo *)0x0);
        pAVar5 = (Action_1_Int32_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar7,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pAVar3 = (Action_1_Int32_ *)0x0;
        if (pAVar5 != (Action_1_Int32_ *)0x0) {
          if ((Action__Class *)pAVar5->klass == TypeInfo__System__Action) {
            pAVar3 = pAVar5;
          }
          pAVar6 = TypeInfo__System__Action;
          if (pAVar3 == (Action_1_Int32_ *)0x0) goto code_?;
        }
        (pFVar2->fields).OnFlagCountDown = (Action *)pAVar3;
        pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar2 != (FlagDebriefingControl *)0x0) {
          pAVar7 = (pFVar2->fields).OnFlagCountDownEnd;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,MethodInfo__GameMeterTimeAttackFlag__OnEndFlagCountdown__
                     ,(MethodInfo *)0x0);
          pAVar5 = (Action_1_Int32_ *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar7,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pAVar3 = (Action_1_Int32_ *)0x0;
          if (pAVar5 == (Action_1_Int32_ *)0x0) {
code_?:
            (pFVar2->fields).OnFlagCountDownEnd = (Action *)pAVar3;
            return;
          }
          if ((Action__Class *)pAVar5->klass == TypeInfo__System__Action) {
            pAVar3 = pAVar5;
          }
          pAVar6 = TypeInfo__System__Action;
          if (pAVar3 != (Action_1_Int32_ *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pAVar5 = extraout_ECX;
  pAVar6 = extraout_EDX;
code_?:
  func_?(pAVar5,pAVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timeAttackFlagText;
  (this->fields).shouldUpdate = 0;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral__00_00_00,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
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
  if ((this_00 == (Image *)0x0) ||
     (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_00,show,(MethodInfo *)0x0),
     (this->fields).timeAttackFlagText == (Text *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0))
  {
    uVar2 = func_?(&UNK_?);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_Show
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    return;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).shouldUpdate == 0) {
    return;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar2 != (FlagDebriefingControl *)0x0) {
    pMVar3 = (Mathf__Class *)(pFVar2->fields).RunStartTime;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      pMVar3 = TypeInfo__UnityEngine__Mathf;
      func_?();
    }
    score = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                      ((fVar1 - (float)pMVar3) * _UNK_?,(MethodInfo *)0x0);
    WinningConditionControl::WinningConditionControl_MakeIntoScoreText
              (score,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
    pTVar4 = (this->fields).timeAttackFlagText;
    if (pTVar4 != (Text *)0x0) {
      pTVar5 = pTVar4->klass;
      pIStack6 = (pTVar5->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      (*(code *)(pTVar5->vtable).set_text.method)();
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* GameMeterTimeAttackFlag() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag__ctor
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  (this->fields)._.gameMeterVisualEffects =
       (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)this_00;
  (this->fields)._.meterActive = 1;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

