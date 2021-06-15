
/* Void OnDisable() */

void Assembly-CSharp.dll::FirstTimeActivatableMessageStayForSeconds::
     FirstTimeActivatableMessageStayForSeconds_OnDisable
               (FirstTimeActivatableMessageStayForSeconds *this,MethodInfo *method)

{
  if (((this->fields).isDone == 0) && ((this->fields).isShown != 0)) {
    this_00 = (this->fields)._.firstTimeEventMessage;
    if (this_00 == (FirstTimeEventMessage *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    firstTimeEvent = (this->fields)._._._.firstTimeEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0)
    ;
    FirstTimeActivatableMessage::FirstTimeActivatableMessage_DestroyMessage
              ((FirstTimeActivatableMessage *)this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableMessageStayForSeconds::
     FirstTimeActivatableMessageStayForSeconds_OnShow
               (FirstTimeActivatableMessageStayForSeconds *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields)._.firstTimeEventMessagePrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      FirstTimeEventMessage_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventMessage>_FirstTimeEventMessage_
                     );
  pTVar2 = (this->fields)._.firstTimeMessageParentTransform;
  (this->fields)._.firstTimeEventMessage = (FirstTimeEventMessage *)pXVar1;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_firstTimeMessageParentTransform_,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    (this->fields)._.firstTimeMessageParentTransform = pTVar2;
  }
  pFVar4 = (this->fields)._.firstTimeEventMessage;
  if (pFVar4 != (FirstTimeEventMessage *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pFVar4,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar2,(this->fields)._.firstTimeMessageParentTransform,0,(MethodInfo *)0x0);
      pFVar4 = (this->fields)._.firstTimeEventMessage;
      if ((pFVar4 != (FirstTimeEventMessage *)0x0) &&
         (pFVar5 = (pFVar4->fields).fader, pFVar5 != (FirstTimeFadeHandler *)0x0)) {
        this_00 = (pFVar5->fields).canvasGroup;
        (pFVar5->fields).fadingIn = 1;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pFVar5->fields).currentFadeInTime = 0.0;
          pFVar4 = (this->fields)._.firstTimeEventMessage;
          pSStack6 = TM::TM__((this->fields).messageText,(MethodInfo *)0x0);
          if ((pFVar4 != (FirstTimeEventMessage *)0x0) &&
             (pTStack7 = (pFVar4->fields).message, pTStack7 != (Text *)0x0)) {
            pIStack8 =
                 (pTStack7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
            (*(code *)(pTStack7->klass->vtable).set_text.method)();
            (this->fields).isShown = 1;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatableMessageStayForSeconds::
     FirstTimeActivatableMessageStayForSeconds_Update
               (FirstTimeActivatableMessageStayForSeconds *this,MethodInfo *method)

{
  if ((this->fields).isDone == 0) {
    fVar1 = (this->fields).showedTime;
    pfVar2 = &(this->fields).stayTimeInSeconds;
    if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (this->fields)._.firstTimeEventMessage;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,
                 MethodInfo__FirstTimeActivatableMessage__OnFinished_UnityEngine__GameObject_,
                 MethodInfo__System__Action<UnityEngine::GameObject>__Action_System__Object__void__)
      ;
      if (this_00 == (FirstTimeEventMessage *)0x0) {
code_?:
        func_?(0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = (this_00->fields).fader;
      targetGameObject =
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_01 == (FirstTimeFadeHandler *)0x0) goto code_?;
      FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
                (this_01,(Action_1_UnityEngine_GameObject_ *)this_02,targetGameObject,
                 (MethodInfo *)0x0);
      (this->fields).isDone = 1;
    }
    if ((this->fields).isShown != 0) {
      bVar4 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                        ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        fVar1 = (this->fields).showedTime;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        (this->fields).showedTime = fVar5 + fVar1;
      }
    }
  }
  return;
}


/* FirstTimeActivatableMessageStayForSeconds() */

void Assembly-CSharp.dll::FirstTimeActivatableMessageStayForSeconds::
     FirstTimeActivatableMessageStayForSeconds__ctor
               (FirstTimeActivatableMessageStayForSeconds *this,MethodInfo *method)

{
  (this->fields).stayTimeInSeconds = 2.0;
  (this->fields)._._.onShowSound = 3;
  (this->fields)._._.prerequisiteEvent = -1;
  (this->fields)._._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

