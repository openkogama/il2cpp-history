
/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerCurrentGoldAmountTracker::PlayerCurrentGoldAmountTracker_OnDestroy
               (PlayerCurrentGoldAmountTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    pAVar4 = (pMVar3->fields)._.OnGoldAmountChange;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,unaff_EDI,MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__,
               (MethodInfo *)0x0);
    pAStack5 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar4 = (Action *)0x0;
    if (pAStack5 != (Action *)0x0) {
      if (pAStack5->klass == TypeInfo__System__Action) {
        pAVar4 = pAStack5;
      }
      pAStack6 = TypeInfo__System__Action;
      if (pAVar4 == (Action *)0x0) goto code_?;
    }
    (pMVar3->fields)._.OnGoldAmountChange = pAVar4;
    return;
  }
  func_?();
  pAStack5 = extraout_ECX;
  pAStack6 = extraout_EDX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RefreshGoldAmount() */

void Assembly-CSharp.dll::PlayerCurrentGoldAmountTracker::
     PlayerCurrentGoldAmountTracker_RefreshGoldAmount
               (PlayerCurrentGoldAmountTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).goldAmount;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      iVar2 = GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
      if (iVar2 != 0) {
        this_02 = (String *)func_?();
        if (this_02 != (String *)0x0) {
          mscorlib.dll::System::String::String_Replace_1
                    (this_02,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
          if (pTVar1 != (Text *)0x0) {
            (*(code *)(pTVar1->klass->vtable).set_text.method)();
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PlayerCurrentGoldAmountTracker::PlayerCurrentGoldAmountTracker_Start
               (PlayerCurrentGoldAmountTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).goldAmount;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      iVar4 = GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)pMVar3,(MethodInfo *)0x0);
      if (iVar4 != 0) {
        this_00 = (String *)func_?(iVar4 + 0x10);
        if (this_00 != (String *)0x0) {
          mscorlib.dll::System::String::String_Replace_1
                    (this_00,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
          if (pTVar1 != (Text *)0x0) {
            (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar2 != (MVNetworkGame *)0x0) {
              pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
              if (pMVar3 != (MVLocalPlayer *)0x0) {
                pAVar5 = (pMVar3->fields)._.OnGoldAmountChange;
                this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_01,unaff_EDI,
                           MethodInfo__PlayerCurrentGoldAmountTracker__RefreshGoldAmount__,
                           (MethodInfo *)0x0);
                pAStack6 =
                     (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
                pAVar5 = (Action *)0x0;
                if (pAStack6 == (Action *)0x0) {
code_?:
                  (pMVar3->fields)._.OnGoldAmountChange = pAVar5;
                  return;
                }
                if (pAStack6->klass == TypeInfo__System__Action) {
                  pAVar5 = pAStack6;
                }
                pAStack7 = TypeInfo__System__Action;
                if (pAVar5 != (Action *)0x0) goto code_?;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pAStack6 = extraout_ECX;
  pAStack7 = extraout_EDX;
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

