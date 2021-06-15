
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WaitCountdownNotification::WaitCountdownNotification_Initialize
               (WaitCountdownNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pNVar1 = (this->fields).countDownFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (this->fields).countDownFader;
    if (pNVar1 != (NotificationFade *)0x0) {
      pAVar2 = (pNVar1->fields).OnFinished;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,MethodInfo__WaitCountdownNotification__DestroyNotification__
                 ,(MethodInfo *)0x0);
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar2 = (Action *)0x0;
      if (pAVar3 != (Action *)0x0) {
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar2 = pAVar3;
        }
        if (pAVar2 == (Action *)0x0) goto code_?;
      }
      (pNVar1->fields).OnFinished = pAVar2;
      pNVar1 = (this->fields).countDownFader;
      if (pNVar1 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_PauseAt(pNVar1,2.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pAVar3 = extraout_ECX;
code_?:
  func_?(pAVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WaitCountdownNotification::WaitCountdownNotification_Update
               (WaitCountdownNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = (KogamaSettingNumericBase_1_System_Single_ *)
              InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                        ((InventoryItemPreviewer *)this_01,(MethodInfo *)0x0);
    if (this_02 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
      pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         (this_02,(MethodInfo *)0x0);
      pTVar2 = (this->fields).countdownText;
      fVar3 = (float)(int)pIVar1;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                (fVar3 / _UNK_?,(MethodInfo *)0x0);
      func_?();
      if (pTVar2 != (Text *)0x0) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)();
        if (0.0 < (float)pTVar2) {
code_?:
          Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
          (this->fields)._.timeSinceStart = 0.0;
          return;
        }
        pTVar2 = (this->fields).countdownText;
        if (pTVar2 != (Text *)0x0) {
          (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
          this_00 = (this->fields).countDownFader;
          if (this_00 != (NotificationFade *)0x0) {
            NotificationFade::NotificationFade_Unpause(this_00,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

