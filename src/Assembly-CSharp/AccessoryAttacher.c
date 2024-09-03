
/* Void AttachAccessory(Int32, MVBody, Single, Single, Action) */

void Assembly-CSharp.dll::AccessoryAttacher::AccessoryAttacher_AttachAccessory
               (AccessoryAttacher *this,int32_t streamingAssetsId,MVBody *currentBody,float offset,
               float scale,Action *OnFinishedCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
                   );
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Reimplement__AttachAccessory);
    func_?(&StringLiteral_Don_t_understand_ordering_of_thi);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Don_t_understand_ordering_of_thi,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Reimplement__AttachAccessory,(MethodInfo *)0x0);
  (this->fields).OnFinishedCallback = OnFinishedCallback;
  func_?(&(this->fields).OnFinishedCallback,OnFinishedCallback);
  (this->fields).avatarBody = currentBody;
  func_?(&(this->fields).avatarBody,currentBody);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_Boolean_ *)func_?();
      if (pAVar2 == (Action_1_Boolean_ *)0x0) goto code_?;
      (pMVar1->fields).OnSetAvatarAccessoryResponse = pAVar2;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pMVar5 = (this->fields).avatarBody;
    if ((pMVar5 != (MVBody *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetAvatarAccessorySlot
                (this_01,(pMVar5->fields)._._._._.id,streamingAssetsId,offset,3.820966e-29,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Game_OnSetAvatarAccessorySlotResponseEquipHandler(Boolean) */

void Assembly-CSharp.dll::AccessoryAttacher::
     AccessoryAttacher_Game_OnSetAvatarAccessorySlotResponseEquipHandler
               (AccessoryAttacher *this,bool setSlotSuccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
                   );
    func_?(&TypeInfo__System__Action<bool>);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_Boolean_ *)func_?();
      if (pAVar2 == (Action_1_Boolean_ *)0x0) goto code_?;
      (pMVar1->fields).OnSetAvatarAccessoryResponse = pAVar2;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    if (_UNK_? != 0) {
      (**(code **)(_UNK_? + 0xc))
                (*(undefined4 *)(_UNK_? + 0x20),*(undefined4 *)(_UNK_? + 0x14));
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

