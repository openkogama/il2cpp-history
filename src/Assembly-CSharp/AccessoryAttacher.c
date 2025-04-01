
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
  ppAVar1 = &(this->fields).OnFinishedCallback;
  *ppAVar1 = OnFinishedCallback;
  func_?(ppAVar1,OnFinishedCallback);
  ppMVar2 = &(this->fields).avatarBody;
  *ppMVar2 = currentBody;
  func_?(ppMVar2,currentBody);
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar3 != (MVNetworkGame *)0x0) {
    pAVar4 = (pMVar3->fields).OnSetAvatarAccessoryResponse;
    ppAVar5 = &(pMVar3->fields).OnSetAvatarAccessoryResponse;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
               ,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      *ppAVar5 = (Action_1_Boolean_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Boolean_ *)func_?();
      if (pAVar4 == (Action_1_Boolean_ *)0x0) goto code_?;
      *ppAVar5 = pAVar4;
      iVar7 = func_?();
      if (iVar7 == 0) goto code_?;
    }
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pMVar8 = (this->fields).avatarBody;
    if ((pMVar8 != (MVBody *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetAvatarAccessorySlot
                (this_01,(pMVar8->fields)._._._._.id,streamingAssetsId,offset,3.813326e-29,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    ppAVar3 = &(pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      *ppAVar3 = (Action_1_Boolean_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_Boolean_ *)func_?();
      if (pAVar2 == (Action_1_Boolean_ *)0x0) goto code_?;
      *ppAVar3 = pAVar2;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

