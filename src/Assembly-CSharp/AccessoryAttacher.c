
/* Void AttachAccessory(Int32, MVBody, Single, Single, Action) */

void Assembly-CSharp.dll::AccessoryAttacher::AccessoryAttacher_AttachAccessory
               (AccessoryAttacher *this,int32_t streamingAssetsId,MVBody *currentBody,float offset,
               float scale,Action *OnFinishedCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_Don_t_understand_ordering_of_thi,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_Reimplement__AttachAccessory,(MethodInfo *)0x0);
  (this->fields).OnFinishedCallback = OnFinishedCallback;
  (this->fields).avatarBody = currentBody;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    a = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
               ,MethodInfo__System__Action<bool>__Action_System__Object__void__);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Boolean___Class *)pDVar2->klass == TypeInfo__System__Action<bool>) {
        pDVar3 = pDVar2;
      }
      pAVar4 = TypeInfo__System__Action<bool>;
      if (pDVar3 == (Delegate *)0x0) goto code_?;
    }
    *(Delegate **)(unaff_EDI + 0xcc) = pDVar3;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    this_00 = (this->fields).avatarBody;
    if (this_00 != (MVBody *)0x0) {
      avatarBodyWoID =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetAvatarAccessorySlot
                  (this_02,(int32_t)avatarBodyWoID,streamingAssetsId,offset,scale,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?();
  pDVar2 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pDVar2,pAVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Game_OnSetAvatarAccessorySlotResponseEquipHandler(Boolean) */

void Assembly-CSharp.dll::AccessoryAttacher::
     AccessoryAttacher_Game_OnSetAvatarAccessorySlotResponseEquipHandler
               (AccessoryAttacher *this,bool setSlotSuccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
               ,MethodInfo__System__Action<bool>__Action_System__Object__void__);
    pAVar3 = (Action_1_Boolean_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar2 = (Action_1_Boolean_ *)0x0;
    if (pAVar3 != (Action_1_Boolean_ *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action<bool>) {
        pAVar2 = pAVar3;
      }
      pAVar4 = TypeInfo__System__Action<bool>;
      if (pAVar2 == (Action_1_Boolean_ *)0x0) goto code_?;
    }
    (pMVar1->fields).OnSetAvatarAccessoryResponse = pAVar2;
    this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnFinishedCallback;
    if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pAVar3 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pAVar3,pAVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

