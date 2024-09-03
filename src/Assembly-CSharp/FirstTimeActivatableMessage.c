
/* Void DestroyMessage() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_DestroyMessage
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstTimeEventMessage;
  if (this_00 != (FirstTimeEventMessage *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DoDisabled() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_DoDisabled
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  pFVar1 = (this->fields).firstTimeEventMessage;
  if (pFVar1 != (FirstTimeEventMessage *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)pFVar1,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pFVar1 = (this->fields).firstTimeEventMessage;
    if (pFVar1 != (FirstTimeEventMessage *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pFVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FadeOut() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_FadeOut
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    func_?(&MethodInfo__FirstTimeActivatableMessage__OnFinished_UnityEngine__GameObject_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstTimeEventMessage;
  this_02 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__FirstTimeActivatableMessage__OnFinished_UnityEngine__GameObject_,
             (MethodInfo *)0x0);
  if (this_00 != (FirstTimeEventMessage *)0x0) {
    this_01 = (this_00->fields).fader;
    targetGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (FirstTimeFadeHandler *)0x0) {
      FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
                (this_01,(Action_1_UnityEngine_GameObject_ *)this_02,targetGameObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnFinished(GameObject) */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_OnFinished
               (FirstTimeActivatableMessage *this,GameObject *firstTimeEventMessage,
               MethodInfo *method)

{
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstTimeEventMessage;
  if (this_00 != (FirstTimeEventMessage *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_OnShow
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    FirstTimeEventMessage_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventMessage>_FirstTimeEventMessage_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_firstTimeMessageParentTransform_);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).firstTimeEventMessagePrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pFVar1 = (FirstTimeEventMessage *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pFVar1,
                      FirstTimeEventMessage_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventMessage>_FirstTimeEventMessage_
                     );
  (this->fields).firstTimeEventMessage = pFVar1;
  func_?(&(this->fields).firstTimeEventMessage,pFVar1);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)(this->fields).firstTimeMessageParentTransform,(Object_1 *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_firstTimeMessageParentTransform_,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    (this->fields).firstTimeMessageParentTransform = pTVar3;
    func_?();
  }
  pFVar1 = (this->fields).firstTimeEventMessage;
  if (pFVar1 != (FirstTimeEventMessage *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pFVar1,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar3,(this->fields).firstTimeMessageParentTransform,0,(MethodInfo *)0x0);
      pFVar1 = (this->fields).firstTimeEventMessage;
      if ((pFVar1 != (FirstTimeEventMessage *)0x0) &&
         (pFVar4 = (pFVar1->fields).fader, pFVar4 != (FirstTimeFadeHandler *)0x0)) {
        this_00 = (pFVar4->fields).canvasGroup;
        (pFVar4->fields).fadingIn = 1;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pFVar4->fields).currentFadeInTime = 0.0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstTimeActivatableMessage() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage__ctor
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_get_CanShow
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    bVar1 = (*pcRam_?)();
    return bVar1;
  }
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}

