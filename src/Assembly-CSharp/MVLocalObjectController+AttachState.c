
/* Void HandleAttachFailed() */

void Assembly-CSharp.dll::MVLocalObjectController+AttachState::
     MVLocalObjectController_AttachState_HandleAttachFailed
               (MVLocalObjectController_AttachState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkReporter);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pTVar2 = (pMVar1->fields).transformNetworkManager, pTVar2 != (TransformNetworkManager *)0x0))
  {
    pMVar3 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                       (pTVar2,(this->fields).woID,(MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkObject *)0x0) || ((this->fields).transformDataWasSuspended == 0)) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pTVar2 = (pMVar1->fields).transformNetworkManager;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        owner = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_00,(this->fields).woID,(MethodInfo *)0x0);
        this_01 = (MVNetworkReporter *)func_?();
        MVNetworkReporter::MVNetworkReporter__ctor(this_01,owner,(MethodInfo *)0x0);
        if (pTVar2 != (TransformNetworkManager *)0x0) {
          TransformNetworkManager::TransformNetworkManager_AddReporter
                    (pTVar2,(int32_t)this_00,this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVLocalObjectController+AttachState::
         MVLocalObjectController_AttachState_ToString
                   (MVLocalObjectController_AttachState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_WoID__0___transformDataWasSuspen);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  iStack_2 = (this->fields).woID;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  this = (MVLocalObjectController_AttachState *)
         CONCAT13((pMVar1->fields).transformDataWasSuspended,this._0_3_);
  arg1 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_WoID__0___transformDataWasSuspen,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}


/* MVLocalObjectController+AttachState(Int32) */

void Assembly-CSharp.dll::MVLocalObjectController+AttachState::
     MVLocalObjectController_AttachState__ctor
               (MVLocalObjectController_AttachState *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkReporter);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pTVar2 = (pMVar1->fields).transformNetworkManager, pTVar2 != (TransformNetworkManager *)0x0))
  {
    pMVar3 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                       (pTVar2,worldObjectID,(MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkObject *)0x0) {
      bVar4 = (TypeInfo__MVNetworkReporter->_1).naturalAligment;
      if ((bVar4 <= (pMVar3->klass->_1).naturalAligment) &&
         ((pMVar3->klass->_1).typeHierarchy[bVar4 - 1] == (Il2CppClass *)TypeInfo__MVNetworkReporter
         )) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pTVar2 = (pMVar1->fields).transformNetworkManager,
           pTVar2 == (TransformNetworkManager *)0x0)) goto code_?;
        TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                  (pTVar2,worldObjectID,(MethodInfo *)0x0);
        (this->fields).transformDataWasSuspended = 1;
      }
    }
    (this->fields).woID = worldObjectID;
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

