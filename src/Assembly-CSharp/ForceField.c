
/* Void ApplyForceTo(MVRigidBody) */

void Assembly-CSharp.dll::ForceField::ForceField_ApplyForceTo
               (ForceField *this,MVRigidBody *body,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffbc,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->y;
    fVar4 = pVVar2->z;
    pCVar5 = (this->fields).trigger;
    if (pCVar5 != (CapsuleCollider *)0x0) {
      pVVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                CapsuleCollider_get_center((Vector3 *)&stack0xffffffbc,pCVar5,(MethodInfo *)0x0);
      uVar6 = pVVar2->x;
      uVar7 = pVVar2->y;
      fVar8 = pVVar2->z;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                            ((Vector3 *)&stack0xffffffbc,pTVar1,(MethodInfo *)0x0);
        a_00.y = (float)uVar7;
        a_00.x = (float)uVar6;
        a_00.z = fVar8;
        pVVar2 = MathFunctions::MathFunctions_Multiply
                            ((Vector3 *)&stack0xffffffbc,a_00,*pVVar2,(MethodInfo *)0x0);
        uVar9._0_4_ = pVVar2->x;
        uVar9._4_4_ = pVVar2->y;
        fVar8 = pVVar2->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          puVar10 = &UNK_?;
          func_?();
          uVar9 = CONCAT44(puVar10,(undefined4)uVar9);
        }
        auVar11._4_4_ = fVar4;
        auVar11._0_4_ = uVar3;
        auVar11._8_4_ = 0;
        b_00.z = fVar8;
        b_00.x = (float)(int)uVar9;
        b_00.y = (float)(int)((ulonglong)uVar9 >> 0x20);
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffe0,(Vector3)(auVar11 << 0x20),b_00,
                             (MethodInfo *)0x0);
        fVar4 = pVVar2->y;
        pCVar5 = (this->fields).trigger;
        if (pCVar5 != (CapsuleCollider *)0x0) {
          fVar8 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_get_height(pCVar5,(MethodInfo *)0x0);
          pCVar5 = (this->fields).trigger;
          if (pCVar5 != (CapsuleCollider *)0x0) {
            fVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                    CapsuleCollider_get_radius(pCVar5,(MethodInfo *)0x0);
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                  ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
              uVar13 = pVVar2->y;
              fVar8 = (fVar8 * _UNK_? - fVar12) * (float)uVar13;
              if (body != (MVRigidBody *)0x0) {
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)body,(MethodInfo *)0x0);
                if (pTVar1 != (Transform *)0x0) {
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
                  fVar12 = pVVar2->y;
                  fVar14 = fVar4 + fVar8;
                  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                    func_?();
                  }
                  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                                    (fVar12,fVar4 - fVar8,fVar14,(MethodInfo *)0x0);
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
                    fVar8 = pVVar2->x;
                    fVar12 = pVVar2->z;
                    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)body,(MethodInfo *)0x0);
                    if (pTVar1 != (Transform *)0x0) {
                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
                      b.y = fVar4;
                      b.x = fVar8;
                      b.z = fVar12;
                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                Vector3_op_Subtraction
                                          ((Vector3 *)&stack0xffffffb0,*pVVar2,b,(MethodInfo *)0x0)
                      ;
                      uVar15._0_4_ = pVVar2->x;
                      uVar15._4_4_ = pVVar2->y;
                      fVar4 = pVVar2->z;
                      pVVar2 = (Vector3 *)(*(code *)(body->klass->vtable).__unknown_1.method)();
                      rhs.z = fVar4;
                      rhs.x = (float)(int)uVar15;
                      rhs.y = (float)(int)((ulonglong)uVar15 >> 0x20);
                      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                                        (*pVVar2,rhs,(MethodInfo *)0x0);
                      if (fVar4 <= 0.0) {
                        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                Time_1_get_fixedDeltaTime((MethodInfo *)0x0);
                        puVar16 = (undefined8 *)func_?();
                        puStack17 = &stack0xffffffb0;
                        fVar8 = *(float *)(puVar16 + 1);
                        fVar14 = (float)*puVar16;
                        fVar18 = (float)((ulonglong)*puVar16 >> 0x20);
                        (*(code *)(body->klass->vtable).__unknown_1.method)();
                        puStack19 = (undefined *)0x0;
                        fVar20 = (float10)func_?();
                        fVar4 = (float)fVar20;
                        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                          func_?();
                        }
                        a.y = fVar18;
                        a.x = fVar14;
                        a.z = fVar8;
                        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                  Vector3_op_Multiply((Vector3 *)&stack0xffffffb0,a,fVar4,
                                                      (MethodInfo *)0x0);
                        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                  Vector3_op_Multiply((Vector3 *)&stack0xffffffb0,*pVVar2,
                                                      1.0 / fVar12,(MethodInfo *)0x0);
                        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                  Vector3_op_Multiply((Vector3 *)&stack0xffffffb0,*pVVar2,2.0,
                                                      (MethodInfo *)0x0);
                        MVRigidBody::MVRigidBody_AddImpulse_1(body,*pVVar2,0,(MethodInfo *)0x0);
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void ApplyNoFriction(MVInteractableBase) */

void Assembly-CSharp.dll::ForceField::ForceField_ApplyNoFriction
               (ForceField *this,MVInteractableBase *interactable,MethodInfo *method)

{
  if (interactable != (MVInteractableBase *)0x0) {
    (*(code *)(interactable->klass->vtable).__unknown_1.method)
              (interactable,7,0xffffffff,0,(interactable->klass->vtable).__unknown_2.methodPtr);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::ForceField::ForceField_Awake(ForceField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).triggerBoxEvents;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__ForceField__OnEnter_System__Object__TriggerEventArgs_
             ,
             MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
            );
  if (pTVar1 != (TriggerBoxEvents *)0x0) {
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pTVar1 = (this->fields).triggerBoxEvents;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__ForceField__OnExit_System__Object__TriggerEventArgs_,
               MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
              );
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::ForceField::ForceField_FixedUpdate(ForceField *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMStack_6 = (MVRotator *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_9 = 0xffffffff;
  this_00 = (this->fields).interactablesInField;
  item = (MVRotator *)this;
  piStack_10 = (int *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  if (this_00 == (HashSet_1_MVInteractableBase_ *)0x0) {
code_?:
    pMVar11 = (MVRotator *)func_?(0);
  }
  else {
    piStack_10 = (int *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_13,(HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_00,
                        MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__GetEnumerator__
                       );
    CStack_7.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar12->hashset;
    CStack_7.monitor = (MonitorData *)pHVar12->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar12->stamp;
    CStack_7.fields.syncRoot = (Object *)pHVar12->current;
    uStack_1 = 0;
    while (cVar14 = func_?(), cVar14 != '\0') {
      pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_7,
                          MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__get_Current__
                         );
      if (pOVar15 == (Object *)0x0) goto code_?;
      (**(code **)&pOVar15->klass[1]._0.byval_arg.attrs)
                (pOVar15,7,0xffffffff,0,pOVar15->klass[1]._0.this_arg.data.dummy);
    }
    iVar16 = 0;
    *piStack_10 = 0x3f;
    uStack_1 = 0xffffffff;
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__Dispose__
                   );
    pMVar11 = pMStack_6;
    if (pMStack_6 == (MVRotator *)0x0) {
      if (*piStack_10 == 0x3f) {
        iVar16 = -1;
      }
      this_01 = (this->fields).bodiesInField;
      if (this_01 != (HashSet_1_MVRigidBody_ *)0x0) {
        pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData
                 ::FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                           (&HStack_13,(HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_01,
                            MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__GetEnumerator__
                           );
        CStack_8.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar12->hashset;
        CStack_8.monitor = (MonitorData *)pHVar12->next;
        CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar12->stamp
        ;
        CStack_8.fields.syncRoot = (Object *)pHVar12->current;
        uStack_1 = 2;
        while (cVar14 = func_?(), item = pMStack_6, cVar14 != '\0') {
          item = (MVRotator *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_8,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__get_Current__
                           );
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)item,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar17 == 0) {
            ForceField_ApplyForceTo(this,(MVRigidBody *)item,(MethodInfo *)0x0);
          }
          else {
            this_02 = (HashSet_1_MVRotator_ *)(this->fields).bodiesInField;
            if (this_02 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[MVRotator]::
            HashSet_1_MVRotator__Remove
                      (this_02,item,
                       MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Remove_MVRigidBody_
                      );
          }
        }
        piStack_10[iVar16 + 1] = 0x9c;
        uStack_1 = 0xffffffff;
        func_?(&CStack_8,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__Dispose__
                       );
        if (item == (MVRotator *)0x0) {
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(pMVar11,0,0);
code_?:
  func_?(item,0,0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::ForceField::ForceField_OnEnter
               (ForceField *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    this_01 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (this_01 == (DayNightCycle *)0x0) {
      return;
    }
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       ((GameObject *)pCVar1,
                        MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                       );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)item,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pHVar3 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                 (item->fields).triggingCollider;
        if (pHVar3 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
        goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  (pHVar3,(UnityWebRequest *)item,
                   MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Add_MVRigidBody_)
        ;
      }
      pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
      if (pCVar1 != (CelestialParam *)0x0) {
        item_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)pCVar1,
                             MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                            );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)item_00,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pHVar3 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(item->fields).removeList;
          if (pHVar3 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
          goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    (pHVar3,(UnityWebRequest *)item_00,
                     MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__Add_MVInteractableBase_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::ForceField::ForceField_OnExit
               (ForceField *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    this_01 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (this_01 == (DayNightCycle *)0x0) {
      return;
    }
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      item = (MVRotator *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       ((GameObject *)pCVar1,
                        MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                       );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)item,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pHVar3 = (HashSet_1_MVRotator_ *)(item->fields)._._._._._.inputLinkRefs;
        if (pHVar3 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[MVRotator]::
        HashSet_1_MVRotator__Remove
                  (pHVar3,item,
                   MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Remove_MVRigidBody_
                  );
      }
      pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
      if (pCVar1 != (CelestialParam *)0x0) {
        item_00 = (MVRotator *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)pCVar1,
                             MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                            );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)item_00,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pHVar3 = (HashSet_1_MVRotator_ *)(item->fields)._._._._._.outputLinkRefs;
          if (pHVar3 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[MVRotator]::
          HashSet_1_MVRotator__Remove
                    (pHVar3,item_00,
                     MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__Remove_MVInteractableBase_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ForceField() */

void Assembly-CSharp.dll::ForceField::ForceField__ctor(ForceField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<MVInteractableBase>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__HashSet__
            );
  (this->fields).interactablesInField = (HashSet_1_MVInteractableBase_ *)pHVar1;
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<MVRigidBody>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__HashSet__);
  (this->fields).bodiesInField = (HashSet_1_MVRigidBody_ *)pHVar1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

