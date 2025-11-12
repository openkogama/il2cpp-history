
/* Void Start() */

void Assembly-CSharp.dll::SubscriberBenefitUIHandler::SubscriberBenefitUIHandler_Start
               (SubscriberBenefitUIHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
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
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar3 == (MVLocalPlayer *)0x0 ||
      (this_01 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
      this_01 == (SubscriptionRulesWrapper *)0x0)))) goto code_?;
  bVar4 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
          SubscriptionRulesWrapper_HasBenefit(this_01,(this->fields).benefitType,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    pGVar5 = (this->fields).NonSubscriberUI;
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
    if (pGVar5 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar5->fields)._.m_CachedPtr != (void *)0x0) {
        pGVar5 = (this->fields).NonSubscriberUI;
        if (pGVar5 == (GameObject *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar5,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          pGVar5 = (this->fields).NonSubscriberUI;
          if (pGVar5 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,1,(MethodInfo *)0x0);
        }
      }
    }
    pGVar5 = (this->fields).SubscriberUI;
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
    if (pGVar5 == (GameObject *)0x0) {
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar5->fields)._.m_CachedPtr == (void *)0x0) {
      return;
    }
    pGVar5 = (this->fields).SubscriberUI;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar5,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    pGVar5 = (this->fields).SubscriberUI;
  }
  else {
    pGVar5 = (this->fields).SubscriberUI;
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
    if (pGVar5 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar5->fields)._.m_CachedPtr != (void *)0x0) {
        pGVar5 = (this->fields).SubscriberUI;
        if (pGVar5 == (GameObject *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar5,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          pGVar5 = (this->fields).SubscriberUI;
          if (pGVar5 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,1,(MethodInfo *)0x0);
        }
      }
    }
    pGVar5 = (this->fields).NonSubscriberUI;
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
    if (pGVar5 == (GameObject *)0x0) {
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar5->fields)._.m_CachedPtr == (void *)0x0) {
      return;
    }
    pGVar5 = (this->fields).NonSubscriberUI;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar5,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    pGVar5 = (this->fields).NonSubscriberUI;
  }
  if (pGVar5 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

