
/* Void Awake() */

void Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_Awake
               (InteractionDataHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ClosestPointPoint_MethodInfo__UnityEngine__GameObject__AddComponent<ClosestPointPoint>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._.findWorldObjectParent != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&StringLiteral_worldObjectParent_already_set_);
      func_?(&StringLiteral___worldobjectParent_not_found_on);
      cRam_? = '\x01';
    }
    pMVar1 = (this->fields)._.worldObjectParent;
    (this->fields)._.findWorldObjectParent = 1;
    pSVar2 = StringLiteral_worldObjectParent_already_set_;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pMVar1 = (this->fields)._.worldObjectParent;
      pMVar3 = pMVar1->klass;
      str1 = (String *)
             (*(code *)(pMVar3->vtable).ToString.method)
                       (pMVar1,(pMVar3->vtable).get_Position.methodPtr);
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
       this_00 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                       (this_00,goId,(MethodInfo *)0x0);
    (this->fields)._.worldObjectParent = pMVar1;
    func_?();
    if ((this->fields)._.worldObjectParent == (MVWorldObjectClient *)0x0) {
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
  pCVar5 = (this->fields).closestPoint;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    return;
  }
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar4 != (GameObject *)0x0) {
    pCVar5 = (ClosestPointBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar4,
                        ClosestPointPoint_MethodInfo__UnityEngine__GameObject__AddComponent<ClosestPointPoint>__
                       );
    pCVar7 = (ClosestPointBase__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pCVar5 != (ClosestPointBase *)0x0) {
      pCVar5[1].klass = pCVar7;
      func_?();
      (this->fields).closestPoint = pCVar5;
      func_?();
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::InteractionDataHandlerBase::
          InteractionDataHandlerBase_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,InteractionDataHandlerBase *this,Vector3 from,
                    MethodInfo *method)

{
  pCVar1 = (this->fields).closestPoint;
  if (pCVar1 != (ClosestPointBase *)0x0) {
    puVar2 = (undefined8 *)
             (*(code *)(pCVar1->klass->vtable).__unknown.method)
                       (&from,pCVar1,from._0_8_,from.z,pCVar1->klass[1]._0.image);
    uVar3 = *puVar2;
    fVar4 = *(float *)(puVar2 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Boolean HandleInteraction(InteractionData, Boolean) */

bool Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
               (InteractionDataHandlerBase *this,InteractionData interaction,bool interactionIsLocal
               ,MethodInfo *method)

{
  bVar1 = (*(code *)(this->klass->vtable).__unknown_1.method)
                    (this,0,interaction.damage,interaction.impulse.x,interaction.impulse.y,
                     interaction.impulse.z,interaction._16_4_,_interactionIsLocal,
                     (this->klass->vtable).OnValidate.methodPtr);
  return bVar1;
}


/* Boolean IsFriendlyFire(MVPickupOwner) */

bool Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_IsFriendlyFire
               (InteractionDataHandlerBase *this,MVPickupOwner *interactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)interactor,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar3 = (pMVar2->fields).teamManager, interactor != (MVPickupOwner *)0x0)) &&
      (pMVar4 = (interactor->fields)._.worldObjectParent, pMVar4 != (MVWorldObjectClient *)0x0)) &&
     (pMVar3 != (MVTeamManager *)0x0)) {
    MVar5 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                      (pMVar3,(pMVar4->fields)._.ownerActorNr,(MethodInfo *)0x0);
    MVar6 = (*(code *)(this->klass->vtable).__unknown.method)
                      (this,(this->klass->vtable).CanHandle.methodPtr);
    if (MVar5 != MVar6) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
      iVar7 = MVTeamManager::MVTeamManager_TeamCount(pMVar3,(MethodInfo *)0x0);
      return 1 < iVar7;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar1 = (*pcVar8)();
  return bVar1;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::InteractionDataHandlerBase::InteractionDataHandlerBase_OnValidate
               (InteractionDataHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ClosestPointBase_MethodInfo__UnityEngine__GameObject__GetComponent<ClosestPointBase>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).closestPoint;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pCVar1 = (ClosestPointBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        ClosestPointBase_MethodInfo__UnityEngine__GameObject__GetComponent<ClosestPointBase>__
                       );
    (this->fields).closestPoint = pCVar1;
    func_?();
  }
  return;
}

