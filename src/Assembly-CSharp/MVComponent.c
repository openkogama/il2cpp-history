
/* Void Awake() */

void Assembly-CSharp.dll::MVComponent::MVComponent_Awake(MVComponent *this,MethodInfo *method)

{
  if ((this->fields).findWorldObjectParent == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_worldObjectParent_already_set_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).findWorldObjectParent = 1;
  pSVar1 = StringLiteral_worldObjectParent_already_set_;
  if ((this->fields).worldObjectParent != (MVWorldObjectClient *)0x0) {
    pMVar2 = (this->fields).worldObjectParent;
    pMVar3 = pMVar2->klass;
    str1 = (String *)(*(pMVar3->vtable).ToString.methodPtr)(pMVar2,(pMVar3->vtable).ToString.method)
    ;
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((pGVar4 != (GameObject *)0x0) &&
     (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                       ((Object_1 *)pGVar4,(MethodInfo *)0x0),
     this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                       (this_00,goId,(MethodInfo *)0x0);
    bVar5 = iRam_? != 0;
    (this->fields).worldObjectParent = pMVar2;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).worldObjectParent >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if ((this->fields).worldObjectParent == (MVWorldObjectClient *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                         ((Object_1 *)pGVar4,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar1,StringLiteral___worldobjectParent_not_found_on,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void FindWorldObjectParent() */

void Assembly-CSharp.dll::MVComponent::MVComponent_FindWorldObjectParent
               (MVComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_worldObjectParent_already_set_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).findWorldObjectParent = 1;
  pSVar1 = StringLiteral_worldObjectParent_already_set_;
  if ((this->fields).worldObjectParent != (MVWorldObjectClient *)0x0) {
    pMVar2 = (this->fields).worldObjectParent;
    pMVar3 = pMVar2->klass;
    str1 = (String *)(*(pMVar3->vtable).ToString.methodPtr)(pMVar2,(pMVar3->vtable).ToString.method)
    ;
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((pGVar4 != (GameObject *)0x0) &&
     (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                       ((Object_1 *)pGVar4,(MethodInfo *)0x0),
     this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                       (this_00,goId,(MethodInfo *)0x0);
    bVar5 = iRam_? != 0;
    (this->fields).worldObjectParent = pMVar2;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).worldObjectParent >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if ((this->fields).worldObjectParent == (MVWorldObjectClient *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                         ((Object_1 *)pGVar4,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar1,StringLiteral___worldobjectParent_not_found_on,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

