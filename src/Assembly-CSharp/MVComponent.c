
/* Void Awake() */

void Assembly-CSharp.dll::MVComponent::MVComponent_Awake(MVComponent *this,MethodInfo *method)

{
  if ((this->fields).findWorldObjectParent == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).worldObjectParent;
  (this->fields).findWorldObjectParent = 1;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_worldObjectParent_already_set_,(Object *)pMVar1,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                     ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                         (this_00,goId,(MethodInfo *)0x0);
      (this->fields).worldObjectParent = pMVar1;
      if (pMVar1 == (MVWorldObjectClient *)0x0) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar2 = TypeInfo__System__String->static_fields->Empty;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        str1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar2,str1,StringLiteral___worldobjectParent_not_found_on,
                            (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar2,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void FindWorldObjectParent() */

void Assembly-CSharp.dll::MVComponent::MVComponent_FindWorldObjectParent
               (MVComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).worldObjectParent;
  (this->fields).findWorldObjectParent = 1;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_worldObjectParent_already_set_,(Object *)pMVar1,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                     ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                         (this_00,goId,(MethodInfo *)0x0);
      (this->fields).worldObjectParent = pMVar1;
      if (pMVar1 == (MVWorldObjectClient *)0x0) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar2 = TypeInfo__System__String->static_fields->Empty;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        str1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar2,str1,StringLiteral___worldobjectParent_not_found_on,
                            (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar2,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVComponent() */

void Assembly-CSharp.dll::MVComponent::MVComponent__ctor(MVComponent *this,MethodInfo *method)

{
  (this->fields).findWorldObjectParent = 1;
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

