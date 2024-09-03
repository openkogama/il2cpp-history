
/* Void OnDisable() */

void Assembly-CSharp.dll::FirstTimeActivatableMessageStayForSeconds::
     FirstTimeActivatableMessageStayForSeconds_OnDisable
               (FirstTimeActivatableMessageStayForSeconds *this,MethodInfo *method)

{
  if (((this->fields).isDone != 0) || ((this->fields).isShown == 0)) {
    return;
  }
  pFVar1 = (this->fields)._.firstTimeEventMessage;
  if (pFVar1 != (FirstTimeEventMessage *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)pFVar1,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._._.firstTimeEvent,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pFVar1 = (this->fields)._.firstTimeEventMessage;
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


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableMessageStayForSeconds::
     FirstTimeActivatableMessageStayForSeconds_OnShow
               (FirstTimeActivatableMessageStayForSeconds *this,MethodInfo *method)

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
  pFVar1 = (this->fields)._.firstTimeEventMessagePrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pFVar1 = (FirstTimeEventMessage *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pFVar1,
                      FirstTimeEventMessage_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventMessage>_FirstTimeEventMessage_
                     );
  (this->fields)._.firstTimeEventMessage = pFVar1;
  func_?(&(this->fields)._.firstTimeEventMessage,pFVar1);
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)(this->fields)._.firstTimeMessageParentTransform,(Object_1 *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_firstTimeMessageParentTransform_,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    (this->fields)._.firstTimeMessageParentTransform = pTVar3;
    func_?();
  }
  pFVar1 = (this->fields)._.firstTimeEventMessage;
  if (pFVar1 != (FirstTimeEventMessage *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pFVar1,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar3,(this->fields)._.firstTimeMessageParentTransform,0,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._.firstTimeEventMessage;
      if ((pFVar1 != (FirstTimeEventMessage *)0x0) &&
         (pFVar4 = (pFVar1->fields).fader, pFVar4 != (FirstTimeFadeHandler *)0x0)) {
        this_00 = (pFVar4->fields).canvasGroup;
        (pFVar4->fields).fadingIn = 1;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pFVar4->fields).currentFadeInTime = 0.0;
          pFVar1 = (this->fields)._.firstTimeEventMessage;
          pSStack5 = TM::TM__((this->fields).messageText,(MethodInfo *)0x0);
          if ((pFVar1 != (FirstTimeEventMessage *)0x0) &&
             (pTStack6 = (pFVar1->fields).message, pTStack6 != (Text *)0x0)) {
            pIStack7 =
                 (pTStack6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
            (*(code *)(pTStack6->klass->vtable).set_text.method)();
            (this->fields).isShown = 1;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
        func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
        func_?(&
                        MethodInfo__FirstTimeActivatableMessage__OnFinished_UnityEngine__GameObject_
                       );
        cRam_? = '\x01';
      }
      this_00 = (this->fields)._.firstTimeEventMessage;
      this_02 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__FirstTimeActivatableMessage__OnFinished_UnityEngine__GameObject_,
                 (MethodInfo *)0x0);
      if (this_00 == (FirstTimeEventMessage *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = (this_00->fields).fader;
      targetGameObject =
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

