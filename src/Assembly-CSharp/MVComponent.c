
/* Void Awake() */

void Assembly-CSharp.dll::MVComponent::MVComponent_Awake(MVComponent *this,MethodInfo *method)

{
  if ((this->fields).findWorldObjectParent == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_worldObjectParent_already_set_);
    func_?(&StringLiteral___worldobjectParent_not_found_on);
    cRam_? = '\x01';
  }
  (this->fields).findWorldObjectParent = 1;
  pSVar1 = StringLiteral_worldObjectParent_already_set_;
  if ((this->fields).worldObjectParent != (MVWorldObjectClient *)0x0) {
    pMVar2 = (this->fields).worldObjectParent;
    pMVar3 = pMVar2->klass;
    str1 = (String *)(*(pMVar3->vtable).ToString.methodPtr)(pMVar2,(pMVar3->vtable).ToString.method)
    ;
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar4 != (GameObject *)0x0) {
    goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                     ((Object_1 *)pGVar4,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                         (this_00,goId,(MethodInfo *)0x0);
      (this->fields).worldObjectParent = pMVar2;
      func_?();
      if ((this->fields).worldObjectParent == (MVWorldObjectClient *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)pGVar4,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar1,StringLiteral___worldobjectParent_not_found_on,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar1,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void FindWorldObjectParent() */

void Assembly-CSharp.dll::MVComponent::MVComponent_FindWorldObjectParent
               (MVComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_worldObjectParent_already_set_);
    func_?(&StringLiteral___worldobjectParent_not_found_on);
    cRam_? = '\x01';
  }
  (this->fields).findWorldObjectParent = 1;
  pSVar1 = StringLiteral_worldObjectParent_already_set_;
  if ((this->fields).worldObjectParent != (MVWorldObjectClient *)0x0) {
    pMVar2 = (this->fields).worldObjectParent;
    pMVar3 = pMVar2->klass;
    str1 = (String *)(*(pMVar3->vtable).ToString.methodPtr)(pMVar2,(pMVar3->vtable).ToString.method)
    ;
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar4 != (GameObject *)0x0) {
    goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                     ((Object_1 *)pGVar4,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                         (this_00,goId,(MethodInfo *)0x0);
      (this->fields).worldObjectParent = pMVar2;
      func_?();
      if ((this->fields).worldObjectParent == (MVWorldObjectClient *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)pGVar4,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar1,StringLiteral___worldobjectParent_not_found_on,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar1,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVComponent() */

void Assembly-CSharp.dll::MVComponent::MVComponent__ctor(MVComponent *this,MethodInfo *method)

{
  (this->fields).findWorldObjectParent = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

