
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::HurryUpNotification::HurryUpNotification_Initialize
               (HurryUpNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0x11,data._0_3_);
  pTVar1 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pPVar2 == (Pool *)0x0) goto code_?;
  if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar3 = (int32_t *)func_?();
    (this->fields).timeStamp = *piVar3;
    pTVar1 = (Type *)func_?(TypeInfo__System__Byte,CONCAT13(4,(int3)&stack0xfffffffb));
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 == (Pool *)0x0) goto code_?;
    if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar3 = (int32_t *)func_?();
    (this->fields).timeLeftFromTimeStamp = *piVar3;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame *)0x0) goto code_?;
    iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
    iVar5 = (int)((float)(((this->fields).timeLeftFromTimeStamp - iVar4) + (this->fields).timeStamp
                          ) / _UNK_?);
    if (iVar5 < 0xb) {
      pNVar6 = (this->fields).countdownFader;
      if (pNVar6 == (NotificationFade *)0x0) goto code_?;
      NotificationFade::NotificationFade_Activate(pNVar6,(MethodInfo *)0x0);
      iVar7 = (*(code *)(this->klass->vtable).get_Lifetime.method)
                        (this,(this->klass->vtable).Initialize.methodPtr);
      (this->fields)._.timeSinceStart = (float)(iVar7 - iVar5) - _UNK_?;
    }
    else {
      pNVar6 = (this->fields).fader;
      if (pNVar6 == (NotificationFade *)0x0) goto code_?;
      NotificationFade::NotificationFade_Activate(pNVar6,(MethodInfo *)0x0);
    }
    data = (Dictionary_2_System_Object_System_Object_ *)(this->fields).fader;
    if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    a = (Action *)(data->fields).hcp;
    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar8,(Object *)this,MethodInfo__HurryUpNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)pUVar8,(MethodInfo *)0x0);
    pDVar10 = (Delegate *)0x0;
    if (pDVar9 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
        pDVar10 = pDVar9;
      }
      pAVar11 = (Action_1_IWinningCondition___Class *)TypeInfo__System__Action;
      if (pDVar10 == (Delegate *)0x0) goto code_?;
    }
    (data->fields).hcp = (IEqualityComparer_1_System_Object_ *)pDVar10;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    data = (Dictionary_2_System_Object_System_Object_ *)
           MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((MVNetworkGame *)data == (MVNetworkGame *)0x0) goto code_?;
    a_00 = (((MVNetworkGame *)data)->fields).OnWinningConditionFulfilled;
    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar8,(Object *)this,MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,
               MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a_00,(Delegate *)pUVar8,(MethodInfo *)0x0);
    pDVar10 = (Delegate *)0x0;
    if (pDVar9 == (Delegate *)0x0) {
code_?:
      data[3].fields.emptySlot = (int32_t)pDVar10;
      return;
    }
    if ((Action_1_IWinningCondition___Class *)pDVar9->klass ==
        TypeInfo__System__Action<IWinningCondition>) {
      pDVar10 = pDVar9;
    }
    pAVar11 = TypeInfo__System__Action<IWinningCondition>;
    if (pDVar10 != (Delegate *)0x0) goto code_?;
  }
  else {
code_?:
    func_?(pPVar2);
    pDVar9 = extraout_ECX;
    pAVar11 = (Action_1_IWinningCondition___Class *)extraout_EDX;
  }
code_?:
  func_?(pDVar9,pAVar11);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::HurryUpNotification::HurryUpNotification_OnDestroy
               (HurryUpNotification *this,MethodInfo *method)

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
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) {
        func_?();
        pAStack3 = extraout_ECX;
        pAStack4 = extraout_EDX;
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pAVar6 = (pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,
                 MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
      pAStack3 =
           (Action_1_IWinningCondition_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar6 = (Action_1_IWinningCondition_ *)0x0;
      if (pAStack3 != (Action_1_IWinningCondition_ *)0x0) {
        if (pAStack3->klass == TypeInfo__System__Action<IWinningCondition>) {
          pAVar6 = pAStack3;
        }
        pAStack4 = TypeInfo__System__Action<IWinningCondition>;
        if (pAVar6 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar6;
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HurryUpNotification::HurryUpNotification_Update
               (HurryUpNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    score = ((this->fields).timeLeftFromTimeStamp + (this->fields).timeStamp) - iVar1;
    WinningConditionControl::WinningConditionControl_MakeIntoScoreText
              (score,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    VStack_2.z = (float)&UNK_?;
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                      ((float)score / _UNK_?,(MethodInfo *)0x0);
    pTVar3 = (this->fields).timeText;
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)();
      if ((((float)score <= _UNK_?) && (iVar1 != (this->fields).previousSecondCount)) &&
         (900 < score + iVar1 * -1000)) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
        audioSource = (this->fields).countDownSound;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if ((this_02 == (Transform *)0x0) ||
           (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_2,this_02,(MethodInfo *)0x0),
           this_01 == (AudioManager *)0x0)) goto code_?;
        AudioManager::AudioManager_Play_2
                  (this_01,StringLiteral_Sound___CountDown,audioSource,*pVVar4,(MethodInfo *)0x0);
      }
      if (-1 < score) {
code_?:
        (this->fields).previousSecondCount = iVar1;
        return;
      }
      pNVar5 = (this->fields).fader;
      if (pNVar5 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_OnDisable(pNVar5,(MethodInfo *)0x0);
        pNVar5 = (this->fields).countdownFader;
        if (pNVar5 != (NotificationFade *)0x0) {
          NotificationFade::NotificationFade_OnDisable(pNVar5,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

