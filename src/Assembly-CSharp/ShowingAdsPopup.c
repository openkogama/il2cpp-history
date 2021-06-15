
/* Void Initialize(Single, Action) */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_Initialize
               (ShowingAdsPopup *this,float timeoutTime,Action *OnSkipPressed,MethodInfo *method)

{
  (this->fields).skipAction = OnSkipPressed;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).startTime = fVar1;
  (this->fields).timeoutTime = timeoutTime;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_OnDestroy
               (ShowingAdsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Resuming_audio,(MethodInfo *)0x0);
  value = (this->fields).previousMuteState;
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?();
  }
  MainCameraManager::MainCameraManager_set_Mute(value,(MethodInfo *)0x0);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_OnEnable
               (ShowingAdsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  bVar1 = MainCameraManager::MainCameraManager_get_Mute((MethodInfo *)0x0);
  (this->fields).previousMuteState = bVar1;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Muting_audio,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__MainCameraManager->static_fields->mute = in_stack_2;
  if (TypeInfo__MainCameraManager->static_fields->mute == 0) {
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?();
    }
    value = TypeInfo__MainCameraManager->static_fields->baseVolume;
  }
  else {
    value = 0.0;
  }
  UnityEngine.AudioModule.dll::UnityEngine::AudioListener::AudioListener_set_volume
            (value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__MainCameraManager->static_fields->OnMuteChange != (Action_1_Boolean_ *)0x0) {
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = (Action_1_UIPushOption_ *)TypeInfo__MainCameraManager->static_fields->OnMuteChange;
    if (this_00 == (Action_1_UIPushOption_ *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(uint)TypeInfo__MainCameraManager->static_fields->mute,
               MethodInfo__System__Action<bool>__Invoke_bool_);
  }
  return;
}


/* Void OnSkip() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_OnSkip
               (ShowingAdsPopup *this,MethodInfo *method)

{
  pAVar1 = (this->fields).skipAction;
  if (pAVar1 == (Action *)0x0) {
    return;
  }
  this_00 = (JumpState_OnWallJumpDelegate *)(pAVar1->fields)._.prev;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  this_01 = (pAVar1->fields)._._.method;
  pcVar2 = (pAVar1->fields)._._.method_ptr;
  pOVar3 = (pAVar1->fields)._._.m_target;
  pOVar4 = pOVar3;
  method_00 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar5 = func_?(this_01);
  if (cVar5 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pAVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar5 = func_?(pOVar3);
    if (cVar5 != '\0') {
      return;
    }
    pMVar6 = this_01;
    cVar5 = func_?();
    pOVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar6);
    cVar8 = func_?(pOVar7);
    if (cVar5 == '\0') {
      if (cVar8 != '\0') {
        pOVar4 = mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00
                            );
        func_?(this_01->flags,pOVar4,pOVar3);
        return;
      }
      (*(code *)(&(pOVar3->klass->vtable).Equals)[this_01->flags].method)
                (pOVar3,(&(pOVar3->klass->vtable).Finalize)[this_01->flags].methodPtr);
      return;
    }
    uVar9 = (uint)this_01->flags;
    if (cVar8 == '\0') {
      puVar10 = (undefined4 *)
                func_?((&(pOVar3->klass->vtable).Finalize)[uVar9].methodPtr,this_01);
      (*(code *)*puVar10)(pOVar3,puVar10);
      return;
    }
    pOVar11 = pOVar3->klass;
    uVar12 = 0;
    uVar13._0_1_ = (pOVar11->_1).rank;
    uVar13._1_1_ = (pOVar11->_1).minimumAlignment;
    pMVar6 = this_01;
    if (uVar13 != 0) {
      do {
        if (pOVar11->interfaceOffsets[uVar12].interfaceType == (Il2CppClass *)this_01->name) {
          ppMVar14 = &(&(pOVar4->klass->vtable).Equals)
                      [(uint)method_00->flags + pOVar4->klass->interfaceOffsets[uVar12].offset].
                      method;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
      uVar9 = (uint)method_00->flags;
      pMVar6 = method_00;
      pOVar3 = pOVar4;
    }
    pOVar4 = pOVar3;
    method_00 = pMVar6;
    ppMVar14 = (MethodInfo **)func_?(pOVar4,(Il2CppClass *)this_01->name,uVar9);
code_?:
    puVar10 = (undefined4 *)func_?(ppMVar14[1],method_00);
    (*(code *)*puVar10)(pOVar4,puVar10);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_Update
               (ShowingAdsPopup *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar1 - (this->fields).startTime < (this->fields).timeoutTime) {
    return;
  }
  this_00 = (this->fields).button;
  if ((this_00 != (Button *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
  {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

