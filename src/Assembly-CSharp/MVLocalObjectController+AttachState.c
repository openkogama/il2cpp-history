
/* Void HandleAttachFailed() */

void Assembly-CSharp.dll::MVLocalObjectController+AttachState::
     MVLocalObjectController_AttachState_HandleAttachFailed
               (MVLocalObjectController_AttachState *this,MethodInfo *method)

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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pTVar2 = (TransformNetworkManager *)
               UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar1,(MethodInfo *)0x0)
     , pTVar2 != (TransformNetworkManager *)0x0)) {
    pMVar3 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                       (pTVar2,(this->fields).woID,(MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkObject *)0x0) || ((this->fields).transformDataWasSuspended == 0)) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pTVar2 = (TransformNetworkManager *)
               UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar1,(MethodInfo *)0x0)
      ;
      woID = (this->fields).woID;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        owner = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_00,(this->fields).woID,(MethodInfo *)0x0);
        this_01 = (MVNetworkReporter *)func_?(TypeInfo__MVNetworkReporter);
        MVNetworkReporter::MVNetworkReporter__ctor(this_01,owner,(MethodInfo *)0x0);
        if (pTVar2 != (TransformNetworkManager *)0x0) {
          TransformNetworkManager::TransformNetworkManager_AddReporter
                    (pTVar2,woID,this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  iStack_2 = (this->fields).woID;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  this = (MVLocalObjectController_AttachState *)
         CONCAT13((pMVar1->fields).transformDataWasSuspended,this._0_3_);
  arg1 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pTVar2 = (TransformNetworkManager *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar1,(MethodInfo *)0x0);
    if (pTVar2 != (TransformNetworkManager *)0x0) {
      pMVar3 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                         (pTVar2,worldObjectID,(MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkObject *)0x0) {
        bVar4 = (TypeInfo__MVNetworkReporter->_1).naturalAligment;
        if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
           ((pMVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
            (Il2CppClass *)TypeInfo__MVNetworkReporter)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pMVar6 = (MVNetworkObject *)0x0;
        if (bVar5) {
          pMVar6 = pMVar3;
        }
        if (pMVar6 != (MVNetworkObject *)0x0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pTVar2 = (TransformNetworkManager *)
                     UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                     TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                     TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                               ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar1,
                                (MethodInfo *)0x0);
            if (pTVar2 != (TransformNetworkManager *)0x0) {
              TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                        (pTVar2,worldObjectID,(MethodInfo *)0x0);
              (this->fields).transformDataWasSuspended = 1;
              goto code_?;
            }
          }
          goto code_?;
        }
      }
code_?:
      (this->fields).woID = worldObjectID;
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

