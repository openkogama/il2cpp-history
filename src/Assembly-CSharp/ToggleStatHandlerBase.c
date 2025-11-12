
/* Void OnValidate() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_OnValidate
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)();
  if (cVar3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_Reset
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).button = pBVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).button >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_Start
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ToggleStatHandlerBase__Toggle__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).OnStartSetValue == (ToggleStateHandlerOnStartSetValue *)0x0) {
    (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  }
  else {
    pTVar1 = (this->fields).OnStartSetValue;
    if (pTVar1 == (ToggleStateHandlerOnStartSetValue *)0x0) goto code_?;
    value = (*(pTVar1->fields)._._.invoke_impl)
                      ((pTVar1->fields)._._.method_code,(pTVar1->fields)._._.method);
    ToggleStatHandlerBase_set_ToggleState(this,value,(MethodInfo *)0x0);
  }
  pBVar2 = (this->fields).button;
  if (pBVar2 != (Button *)0x0) {
    pBVar3 = (pBVar2->fields).m_OnClick;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__ToggleStatHandlerBase__Toggle__,(MethodInfo *)0x0)
    ;
    if (pBVar3 != (Button_ButtonClickedEvent *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (InvokableCall *)FUN_?(TypeInfo__UnityEngine__Events__InvokableCall);
      UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_add_Delegate
                (this_01,(UnityAction *)this_00,(MethodInfo *)0x0);
      pIVar4 = (pBVar3->fields)._._.m_Calls;
      if (pIVar4 != (InvokableCallList *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar5 = (pIVar4->fields).m_RuntimeCalls;
        if (pLVar5 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
          FUN_?(pLVar5,this_01);
          (pIVar4->fields).m_NeedsUpdate = 1;
          return;
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Toggle() */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_Toggle
               (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ToggleStatHandlerBase__ToggleCallback_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).waitingForToggleCallback == 0) {
    cVar1 = (*(this->klass->vtable).CurrentToggleState.methodPtr)
                      (this,(this->klass->vtable).CurrentToggleState.method);
    pTVar2 = (this->fields).toggleHandler;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar2 != (ToggleHandler *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pTVar2 = (this->fields).toggleHandler;
        (this->fields).waitingForToggleCallback = 1;
        uVar3 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
        FUN_?(uVar3,this,MethodInfo__ToggleStatHandlerBase__ToggleCallback_bool_);
        if (pTVar2 == (ToggleHandler *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(pTVar2->klass->vtable).__unknown.methodPtr)
                  (pTVar2,(ulonglong)(cVar1 == '\0'),uVar3,(pTVar2->klass->vtable).__unknown.method)
        ;
      }
    }
  }
  return;
}


/* Void ToggleCallback(Boolean) */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_ToggleCallback
               (ToggleStatHandlerBase *this,bool newState,MethodInfo *method)

{
  (this->fields).toggleState = newState;
  (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  (this->fields).waitingForToggleCallback = 0;
  return;
}


/* Image get_CurrentImage() */

Image * Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_get_CurrentImage
                  (ToggleStatHandlerBase *this,MethodInfo *method)

{
  if ((this->fields).usingImageComponent != 0) {
    return (this->fields).imageComponent;
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__UI__Image);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar2 = (Image *)(pBVar1->fields)._.m_TargetGraphic;
    pIVar3 = (Image *)0x0;
    if (pIVar2 != (Image *)0x0) {
      bVar4 = (TypeInfo__UnityEngine__UI__Image->_1).naturalAligment;
      if (((pIVar2->klass->_1).naturalAligment < bVar4) ||
         (bVar5 = true,
         (Image__Class *)(pIVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
         TypeInfo__UnityEngine__UI__Image)) {
        bVar5 = false;
      }
      if (bVar5) {
        pIVar3 = pIVar2;
      }
    }
    return pIVar3;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pIVar2 = (Image *)(*pcVar6)();
  return pIVar2;
}


/* Void set_ToggleState(Boolean) */

void Assembly-CSharp.dll::ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState
               (ToggleStatHandlerBase *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Overriding_toggle_state_while_wa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).waitingForToggleCallback != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Overriding_toggle_state_while_wa,(MethodInfo *)0x0);
  }
  pTVar1 = this->klass;
  (this->fields).toggleState = value;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pTVar1->vtable).__unknown.methodPtr)(this,(pTVar1->vtable).__unknown.method);
  return;
}

