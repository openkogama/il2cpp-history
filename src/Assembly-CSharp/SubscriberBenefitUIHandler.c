
/* Void Start() */

void Assembly-CSharp.dll::SubscriberBenefitUIHandler::SubscriberBenefitUIHandler_Start
               (SubscriberBenefitUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 == (MVNetworkGame *)0x0) ||
      (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      this_01 == (MVLocalPlayer *)0x0)) ||
     (this_02 = (SubscriptionRulesWrapper *)
                PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_01,
                           (MethodInfo *)0x0), this_02 == (SubscriptionRulesWrapper *)0x0))
  goto code_?;
  bVar1 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
          SubscriptionRulesWrapper_HasBenefit(this_02,(this->fields).benefitType,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pGVar2 = (this->fields).NonSubscriberUI;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pGVar2 = (this->fields).NonSubscriberUI;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pGVar2 = (this->fields).NonSubscriberUI;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
      }
    }
    pGVar2 = (this->fields).SubscriberUI;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pGVar2 = (this->fields).SubscriberUI;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pGVar2 = (this->fields).SubscriberUI;
  }
  else {
    pGVar2 = (this->fields).SubscriberUI;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pGVar2 = (this->fields).SubscriberUI;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pGVar2 = (this->fields).SubscriberUI;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
      }
    }
    pGVar2 = (this->fields).NonSubscriberUI;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pGVar2 = (this->fields).NonSubscriberUI;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pGVar2 = (this->fields).NonSubscriberUI;
  }
  if (pGVar2 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

