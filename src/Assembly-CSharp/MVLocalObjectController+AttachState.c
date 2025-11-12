
/* Void HandleAttachFailed() */

void Assembly-CSharp.dll::MVLocalObjectController+AttachState::
     MVLocalObjectController_AttachState_HandleAttachFailed
               (MVLocalObjectController_AttachState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVNetworkReporter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pTVar3 = (pMVar2->fields).transformNetworkManager, pTVar3 != (TransformNetworkManager *)0x0))
  {
    pMVar4 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                       (pTVar3,(this->fields).woID,(MethodInfo *)0x0);
    if ((pMVar4 != (MVNetworkObject *)0x0) || ((this->fields).transformDataWasSuspended == 0)) {
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pTVar3 = (pMVar2->fields).transformNetworkManager;
      woID = (this->fields).woID;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        owner = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_00,(this->fields).woID,(MethodInfo *)0x0);
        this_01 = (MVNetworkReporter *)FUN_?(TypeInfo__MVNetworkReporter);
        MVNetworkReporter::MVNetworkReporter__ctor(this_01,owner,(MethodInfo *)0x0);
        if (pTVar3 != (TransformNetworkManager *)0x0) {
          TransformNetworkManager::TransformNetworkManager_AddReporter
                    (pTVar3,woID,this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVLocalObjectController+AttachState::
         MVLocalObjectController_AttachState_ToString
                   (MVLocalObjectController_AttachState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_WoID__0___transformDataWasSuspen);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).woID;
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
  aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).transformDataWasSuspended);
  arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pSVar1 = StringLiteral_WoID__0___transformDataWasSuspen;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_2,arg0,arg1,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* MVLocalObjectController+AttachState(Int32) */

void Assembly-CSharp.dll::MVLocalObjectController+AttachState::
     MVLocalObjectController_AttachState__ctor
               (MVLocalObjectController_AttachState *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVNetworkReporter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pTVar3 = (pMVar2->fields).transformNetworkManager, pTVar3 != (TransformNetworkManager *)0x0))
  {
    pMVar4 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                       (pTVar3,worldObjectID,(MethodInfo *)0x0);
    if (pMVar4 != (MVNetworkObject *)0x0) {
      bVar5 = (TypeInfo__MVNetworkReporter->_1).naturalAligment;
      if ((bVar5 <= (pMVar4->klass->_1).naturalAligment) &&
         ((pMVar4->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] ==
          (Il2CppClass *)TypeInfo__MVNetworkReporter)) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pTVar3 = (pMVar2->fields).transformNetworkManager,
           pTVar3 == (TransformNetworkManager *)0x0)) goto code_?;
        TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                  (pTVar3,worldObjectID,(MethodInfo *)0x0);
        (this->fields).transformDataWasSuspended = 1;
      }
    }
    (this->fields).woID = worldObjectID;
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

