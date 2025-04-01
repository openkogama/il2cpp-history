
/* Void Awake() */

void Assembly-CSharp.dll::MVComponent::MVComponent_Awake(MVComponent *this,MethodInfo *method)

{
  if ((this->fields).findWorldObjectParent != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&StringLiteral_worldObjectParent_already_set_);
      func_?(&StringLiteral___worldobjectParent_not_found_on);
      cRam_? = '\x01';
    }
    pMVar1 = (this->fields).worldObjectParent;
    (this->fields).findWorldObjectParent = 1;
    pSVar2 = StringLiteral_worldObjectParent_already_set_;
    ppMVar3 = &(this->fields).worldObjectParent;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      str1 = (String *)
             (*(code *)(pMVar1->klass->vtable).ToString.method)
                       (pMVar1,(pMVar1->klass->vtable).get_Position.methodPtr);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,str1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameObject *)0x0) ||
       (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                         ((Object_1 *)pGVar4,(MethodInfo *)0x0),
       this_00 == (MVWorldObjectClientManager *)0x0)) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                       (this_00,goId,(MethodInfo *)0x0);
    *ppMVar3 = pMVar1;
    func_?(ppMVar3);
    if (*ppMVar3 == (MVWorldObjectClient *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar4,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar2,StringLiteral___worldobjectParent_not_found_on,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
    }
  }
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
  pMVar1 = (this->fields).worldObjectParent;
  ppMVar2 = &(this->fields).worldObjectParent;
  (this->fields).findWorldObjectParent = 1;
  pSVar3 = StringLiteral_worldObjectParent_already_set_;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    str1 = (String *)
           (*(code *)(pMVar1->klass->vtable).ToString.method)
                     (pMVar1,(pMVar1->klass->vtable).get_Position.methodPtr);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,str1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar3,(MethodInfo *)0x0);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar4 != (GameObject *)0x0) {
    goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                     ((Object_1 *)pGVar4,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                         (this_00,goId,(MethodInfo *)0x0);
      *ppMVar2 = pMVar1;
      func_?(ppMVar2);
      if (*ppMVar2 == (MVWorldObjectClient *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)pGVar4,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar3,StringLiteral___worldobjectParent_not_found_on,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar3,(MethodInfo *)0x0);
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

