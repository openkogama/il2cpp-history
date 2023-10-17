
/* Void Start() */

void Assembly-CSharp.dll::SubscriberBenefitUIHandler::SubscriberBenefitUIHandler_Start
               (SubscriberBenefitUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_01 == (MVNetworkGame *)0x0) ||
      (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
      pMVar1 == (MVLocalPlayer *)0x0)) ||
     (this_00 = (pMVar1->fields)._._SubscriptionRules_k__BackingField,
     this_00 == (SubscriptionRulesWrapper *)0x0)) goto code_?;
  bVar2 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
          SubscriptionRulesWrapper_HasBenefit(this_00,(this->fields).benefitType,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar3 = (this->fields).NonSubscriberUI;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar3 = (this->fields).NonSubscriberUI;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pGVar3 = (this->fields).NonSubscriberUI;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
      }
    }
    pGVar3 = (this->fields).SubscriberUI;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pGVar3 = (this->fields).SubscriberUI;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pGVar3 = (this->fields).SubscriberUI;
  }
  else {
    pGVar3 = (this->fields).SubscriberUI;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar3 = (this->fields).SubscriberUI;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pGVar3 = (this->fields).SubscriberUI;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
      }
    }
    pGVar3 = (this->fields).NonSubscriberUI;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pGVar3 = (this->fields).NonSubscriberUI;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pGVar3 = (this->fields).NonSubscriberUI;
  }
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

