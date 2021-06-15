
/* Void DestroyMessage() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_DestroyMessage
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstTimeEventMessage;
  if (this_00 != (FirstTimeEventMessage *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DoDisabled() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_DoDisabled
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  this_00 = (this->fields).firstTimeEventMessage;
  if (this_00 != (FirstTimeEventMessage *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    firstTimeEvent = (this->fields)._._.firstTimeEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0)
    ;
    FirstTimeActivatableMessage_DestroyMessage(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void FadeOut() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_FadeOut
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstTimeEventMessage;
  this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_02,(Object *)this,
             MethodInfo__FirstTimeActivatableMessage__OnFinished_UnityEngine__GameObject_,
             MethodInfo__System__Action<UnityEngine::GameObject>__Action_System__Object__void__);
  if (this_00 != (FirstTimeEventMessage *)0x0) {
    this_01 = (this_00->fields).fader;
    targetGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this_00,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  firstTimeEvent = (this->fields)._._.firstTimeEvent;
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0);
  FirstTimeActivatableMessage_DestroyMessage(this,(MethodInfo *)0x0);
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_OnShow
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).firstTimeEventMessagePrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      FirstTimeEventMessage_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventMessage>_FirstTimeEventMessage_
                     );
  (this->fields).firstTimeEventMessage = (FirstTimeEventMessage *)pXVar1;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)(this->fields).firstTimeMessageParentTransform,(Object_1 *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_firstTimeMessageParentTransform_,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    (this->fields).firstTimeMessageParentTransform = pTVar3;
  }
  pFVar4 = (this->fields).firstTimeEventMessage;
  if (pFVar4 != (FirstTimeEventMessage *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pFVar4,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar3,(this->fields).firstTimeMessageParentTransform,0,(MethodInfo *)0x0);
      pFVar4 = (this->fields).firstTimeEventMessage;
      if ((pFVar4 != (FirstTimeEventMessage *)0x0) &&
         (pFVar5 = (pFVar4->fields).fader, pFVar5 != (FirstTimeFadeHandler *)0x0)) {
        this_00 = (pFVar5->fields).canvasGroup;
        (pFVar5->fields).fadingIn = 1;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pFVar5->fields).currentFadeInTime = 0.0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar2 == (GameObject *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    bVar1 = (*pcVar3)();
    return bVar1;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)func_?(), pcVar3 == (code *)0x0))
  {
    func_?();
    func_?();
    pcVar3 = (code *)swi(3);
    bVar1 = (*pcVar3)();
    return bVar1;
  }
  pcRam_? = pcVar3;
  bVar1 = (*pcRam_?)();
  return bVar1;
}

