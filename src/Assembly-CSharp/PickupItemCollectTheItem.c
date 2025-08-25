
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_Awake
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_FirstPersonTransform);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson != 0) {
    pTVar1 = (this->fields)._.firstPersonTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar1,p,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar1,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_00,(MethodInfo *)0x0);
            (this->fields)._.firstPersonTransform = pTVar1;
            func_?();
            return;
          }
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void ForceUnequipPickup() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_ForceUnequipPickup
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).shouldSpawnInstanceOnUnequip = 0;
  pMVar1 = (this->fields)._.owner;
  if (((pMVar1 != (MVPickupOwner *)0x0) &&
      (pMVar2 = (pMVar1->fields)._.worldObjectParent, pMVar2 != (MVWorldObjectClient *)0x0)) &&
     (this_00 = (pMVar2->fields).gameObject, this_00 != (GameObject *)0x0)) {
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (this_00,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      (**(code **)&x->klass[1]._0.byval_arg.attrs)(x,x->klass[1]._0.this_arg.data.dummy);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnDestroy
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(&TypeInfo__CollectTheItemDropOff);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&MethodInfo__PickupItemCollectTheItem__OnDropoffActivated_bool_);
    func_?(&MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar3,(this->fields).spawnerId,(MethodInfo *)0x0);
    if (pMVar4 != (MVWorldObject *)0x0) {
      if (((pMVar4->klass->_1).naturalAligment <
           (TypeInfo__CollectTheItemCollectable->_1).naturalAligment) ||
         ((CollectTheItemCollectable__Class *)
          (pMVar4->klass->_1).typeHierarchy
          [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] !=
          TypeInfo__CollectTheItemCollectable)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVWorldObject *)0x0;
      if (bVar5) {
        pMVar6 = pMVar4;
      }
      if (pMVar6 == (MVWorldObject *)0x0) goto code_?;
      pDVar7 = (Delegate *)pMVar6[2].fields.outputLinkRefs;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
                 (MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar7,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar7 == (Delegate *)0x0) {
        this_01[3].fields._._.original_method_info = (MethodInfo_1 *)0x0;
code_?:
        func_?();
        goto code_?;
      }
      pDVar8 = (Delegate *)0x0;
      if ((Action__Class *)pDVar7->klass == TypeInfo__System__Action) {
        pDVar8 = pDVar7;
      }
      if (pDVar8 != (Delegate *)0x0) {
        this_01[3].fields._._.original_method_info = (MethodInfo_1 *)pDVar8;
        pDVar8 = (Delegate *)0x0;
        if ((Action__Class *)pDVar7->klass == TypeInfo__System__Action) {
          pDVar8 = pDVar7;
        }
        if (pDVar8 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar3,(this->fields).dropOffId,(MethodInfo *)0x0);
    if (pMVar4 == (MVWorldObject *)0x0) {
      return;
    }
    if (((pMVar4->klass->_1).naturalAligment < (TypeInfo__CollectTheItemDropOff->_1).naturalAligment
        ) || ((CollectTheItemDropOff__Class *)
              (pMVar4->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] !=
              TypeInfo__CollectTheItemDropOff)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVWorldObject *)0x0;
    if (bVar5) {
      pMVar6 = pMVar4;
    }
    if (pMVar6 == (MVWorldObject *)0x0) {
      return;
    }
    pDVar7 = (Delegate *)pMVar6[2].fields.outputLinkRefs;
    this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)this,MethodInfo__PickupItemCollectTheItem__OnDropoffActivated_bool_
               ,(MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                        (pDVar7,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      pMVar6[2].fields.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
code_?:
      func_?();
      x = (this->fields).arrow;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      pUVar9 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (bVar1 == 0) {
        return;
      }
      if ((this->fields).woDropOff == (MVWorldObjectClient *)0x0) {
code_?:
        this_00 = (Component *)
                  (((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)this)->_1)
                  .cctor_started;
        if (this_00 != (Component *)0x0) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          (((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)this)->_1).
          cctor_started = 0;
          func_?();
          return;
        }
        goto code_?;
      }
      source = (((this->fields).woDropOff)->fields).PositionChanged;
      object = pDVar7[1].fields.data;
      this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_03,(Object *)object,
                 MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)this_03,(MethodInfo *)0x0);
      if (pDVar7 == (Delegate *)0x0) {
        source[1].fields._._.method_info = (MethodInfo_1 *)0x0;
code_?:
        func_?();
        this = (PickupItemCollectTheItem *)pUVar9;
        goto code_?;
      }
      pMVar10 = (MethodInfo_1 *)func_?();
      if (pMVar10 != (MethodInfo_1 *)0x0) {
        source[1].fields._._.method_info = pMVar10;
        iVar11 = func_?();
        if (iVar11 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pLVar12 = (List_1_MV_WorldObject_Link_ *)func_?();
    if (pLVar12 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
    pMVar6[2].fields.outputLinkRefs = pLVar12;
    iVar11 = func_?();
    if (iVar11 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnDropoffActivated(Boolean) */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnDropoffActivated
               (PickupItemCollectTheItem *this,bool shouldStayEquipped,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationController);
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_A_player_has_delivered_the_carri);
    cRam_? = '\x01';
  }
  if (shouldStayEquipped != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    original = (pPVar1->fields).collectTheItemParticles;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_02 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                        );
    if (this_02 != (Component *)0x0) {
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_02,(MethodInfo *)0x0);
      pGVar2 = (this->fields).pickup;
      if (((pGVar2 != (GameObject *)0x0) &&
          (this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0), this_04 != (Transform *)0x0)) &&
         (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,this_04,(MethodInfo *)0x0),
         this_03 != (Transform *)0x0)) {
        uVar4 = pVVar3->x;
        uVar5 = pVVar3->y;
        this = (PickupItemCollectTheItem *)pVVar3->z;
        fVar6 = (float)uVar5;
        value.x = (float)uVar4;
        value = (Vector3)CONCAT84(uVar7,value.x);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_03,value,(MethodInfo *)0x0);
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)(this_01->fields).arrow,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          this_00 = (this_01->fields).arrow;
          if ((this_00 == (ObjectiveArrow *)0x0) ||
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0),
             pGVar2 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
        }
        text = TM::TM__(StringLiteral_A_player_has_delivered_the_carri,(MethodInfo *)0x0);
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__NotificationController);
        }
        NotificationController::NotificationController_PushNotification
                  (text,(Sprite *)0x0,7,(MethodInfo *)0x0);
        PickupItemCollectTheItem_ForceUnequipPickup(this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::
     PickupItemCollectTheItem_OnEnterVehicleWithWeapon
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).arrow;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pOVar1 = (this->fields).arrow;
  if ((pOVar1 != (ObjectiveArrow *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pOVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnEquip
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    (this->fields)._.originalParent = pTVar1;
    func_?(&(this->fields)._.originalParent);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         (&VStack_3,pTVar1,(MethodInfo *)0x0);
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      (this->fields)._.originalPos.x = pVVar2->x;
      (this->fields)._.originalPos.y = fVar4;
      (this->fields)._.originalPos.z = fVar5;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                           ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
        fVar5 = pQVar6->y;
        fVar4 = pQVar6->z;
        fVar7 = pQVar6->w;
        (this->fields)._.originalRot.x = pQVar6->x;
        (this->fields)._.originalRot.y = fVar5;
        (this->fields)._.originalRot.z = fVar4;
        (this->fields)._.originalRot.w = fVar7;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             (&VStack_3,pTVar1,(MethodInfo *)0x0);
          fVar4 = pVVar2->y;
          fVar5 = pVVar2->z;
          (this->fields)._.originalScale.x = pVVar2->x;
          (this->fields)._.originalScale.y = fVar4;
          (this->fields)._.originalScale.z = fVar5;
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::
     PickupItemCollectTheItem_OnLeaveVehicleWithWeapon
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).arrow;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pOVar1 = (this->fields).arrow;
  if ((pOVar1 != (ObjectiveArrow *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pOVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnStateChanged
               (PickupItemCollectTheItem *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(&TypeInfo__CollectTheItemDropOff);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__PickupItemCollectTheItem__OnDropoffActivated_bool_);
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_CollectTheItemCollectableId);
    cRam_? = '\x01';
  }
  this_00.m_Index = (int32_t)(this->fields).pickup;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)this_00.m_Index,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((newState == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                           (Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), this_00.m_Index == 0)) goto code_?;
  TVar2 = this_00;
  if ((*(byte *)(*(int *)this_00.m_Index + 0xb8) <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment) ||
     (*(Dictionary_2_System_Object_System_Object___Class **)
       (*(int *)(*(int *)this_00.m_Index + 100) + -4 +
       (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment * 4) !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    (this_00.m_Index,(Object *)StringLiteral_CollectTheItemCollectableId,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (TVar3.m_Index == 0) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) == (TypeInfo__System__Int32->_0).element_class
     ) {
    piVar4 = (int32_t *)func_?();
    iVar5 = *piVar4;
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar6 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pCVar7 = (CollectTheItemCollectable *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar6,iVar5,(MethodInfo *)0x0);
    if (pCVar7 == (CollectTheItemCollectable *)0x0) {
code_?:
      PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
      return;
    }
    if (((pCVar7->klass->_1).naturalAligment <
         (TypeInfo__CollectTheItemCollectable->_1).naturalAligment) ||
       ((CollectTheItemCollectable__Class *)
        (pCVar7->klass->_1).typeHierarchy
        [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] !=
        TypeInfo__CollectTheItemCollectable)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    this_00.m_Index = (int32_t)(CollectTheItemCollectable *)0x0;
    if (bVar8) {
      this_00.m_Index = (int32_t)pCVar7;
    }
    if ((CollectTheItemCollectable *)this_00.m_Index == (CollectTheItemCollectable *)0x0)
    goto code_?;
    iVar9 = CollectTheItemCollectable::CollectTheItemCollectable_get_CollectableModelId
                      (this_00.m_Index,(MethodInfo *)0x0);
    (this->fields).cubeModelKeyId = iVar9;
    (this->fields).spawnerId = iVar5;
    iVar5 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                       (this_00.m_Index,(MethodInfo *)0x0);
    (this->fields).dropOffId = iVar5;
    if (((this->fields).cubeModelKeyId == -1) || (iVar5 == -1)) goto code_?;
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar6 == (MVWorldObjectClientManager *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      TVar2.m_Index = this_00.m_Index;
    }
    else {
      wo = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar6,(this->fields).cubeModelKeyId,(MethodInfo *)0x0);
      if (wo == (MVWorldObjectClient *)0x0) {
        return;
      }
      PickupItemCollectTheItem_SetupPickupWo(this,wo,(MethodInfo *)0x0);
      this_00.m_Index = (int32_t)(this->fields)._.owner;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pCVar7 = (CollectTheItemCollectable *)0x0;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_00.m_Index,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      pMVar10 = (this->fields)._.owner;
      if (pMVar10 == (MVPickupOwner *)0x0) goto code_?;
      if ((pMVar10->fields)._IsLocal_k__BackingField == 0) {
        return;
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar6 == (MVWorldObjectClientManager *)0x0) goto code_?;
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                (pMVar6,(this->fields).dropOffId,(MethodInfo *)0x0);
      iVar11 = func_?();
      if (iVar11 == 0) {
        return;
      }
      pDVar12 = *(Delegate **)(iVar11 + 0xf0);
      this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,
                 MethodInfo__PickupItemCollectTheItem__OnDropoffActivated_bool_,(MethodInfo *)0x0);
      this_00.m_Index = (int32_t)pCVar7;
      pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar12,(Delegate *)this_01,(MethodInfo *)0x0);
      TVar2.m_Index = (int32_t)TypeInfo__System__Action<bool>;
      if (pDVar12 == (Delegate *)0x0) {
        _UNK_? = 0;
code_?:
        func_?();
        bVar1 = CollectTheItemCollectable::CollectTheItemCollectable_get_HasArrowIndicator
                          ((CollectTheItemCollectable *)this_00.m_Index,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          PickupItemCollectTheItem_SetupDropOffArrow
                    (this,(this->fields).dropOffId,(MethodInfo *)0x0);
        }
        return;
      }
      iVar11 = func_?();
      if (iVar11 != 0) {
        _UNK_? = iVar11;
        iVar11 = func_?();
        if (iVar11 != 0) goto code_?;
        goto code_?;
      }
    }
    func_?();
  }
  func_?();
code_?:
  func_?(TVar2.m_Index);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnUnequip
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(&MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if ((pMVar1->fields)._IsLocal_k__BackingField == 0) {
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pCVar2 = (CollectTheItemCollectable *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,(this->fields).spawnerId,(MethodInfo *)0x0);
      if (pCVar2 == (CollectTheItemCollectable *)0x0) {
        return;
      }
      if (((pCVar2->klass->_1).naturalAligment <
           (TypeInfo__CollectTheItemCollectable->_1).naturalAligment) ||
         ((CollectTheItemCollectable__Class *)
          (pCVar2->klass->_1).typeHierarchy
          [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] !=
          TypeInfo__CollectTheItemCollectable)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this_03 = (CollectTheItemCollectable *)0x0;
      if (bVar3) {
        this_03 = pCVar2;
      }
      if (this_03 == (CollectTheItemCollectable *)0x0) {
        return;
      }
      VStack_4.x = (float)TypeInfo__System__Action;
      pAVar5 = (this_03->fields).OnCollectTheItemDestroyed;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
                 (MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pAVar5 == (Action *)0x0) {
        (this_03->fields).OnCollectTheItemDestroyed = (Action *)0x0;
      }
      else {
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) goto code_?;
        (this_03->fields).OnCollectTheItemDestroyed = pAVar6;
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) goto code_?;
      }
      func_?();
      if (UNK_? == '\0') {
        return;
      }
      if ((_UNK_? != (GameObject *)0x0) &&
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (_UNK_?,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_4,this_02,(MethodInfo *)0x0);
        CollectTheItemCollectable::CollectTheItemCollectable_CreateCollectableInstance
                  (this_03,*pVVar7,(Quaternion)ZEXT816(0),(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnWorldObjectSpawnerDestroyed() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::
     PickupItemCollectTheItem_OnWorldObjectSpawnerDestroyed
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).arrow;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pOVar1 = (this->fields).arrow;
  if ((pOVar1 != (ObjectiveArrow *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pOVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupDropOffArrow(Int32) */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_SetupDropOffArrow
               (PickupItemCollectTheItem *this,int32_t dropoffId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ObjectiveArrow_MethodInfo__UnityEngine__Object__Instantiate<ObjectiveArrow>_ObjectiveArrow_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
    pUVar1 = unaff_EDI;
  }
  else {
    pMVar2 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,dropoffId,(MethodInfo *)0x0);
    (this->fields).woDropOff = pMVar2;
    func_?(&(this->fields).woDropOff,pMVar2);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    unaff_ESI = this;
    if (pPVar3 == (PrefabPool *)0x0) goto code_?;
    unaff_EDI = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (pPVar3->fields).collectTheItemDropOffArrow;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar4 = (ObjectiveArrow *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)unaff_EDI,
                        ObjectiveArrow_MethodInfo__UnityEngine__Object__Instantiate<ObjectiveArrow>_ObjectiveArrow_
                       );
    (this->fields).arrow = pOVar4;
    func_?(&(this->fields).arrow,pOVar4);
    pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
             (this->fields).woDropOff;
    if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    a = (Delegate *)(pUVar1->_1).initializationExceptionGCHandle;
    pOVar4 = (this->fields).arrow;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)pOVar4,
               MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    unaff_ESI = (PickupItemCollectTheItem *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          (a,(Delegate *)this_01,(MethodInfo *)0x0);
    pUVar5 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (unaff_ESI == (PickupItemCollectTheItem *)0x0) {
      (pUVar1->_1).initializationExceptionGCHandle = 0;
      iVar6 = 0;
code_?:
      uStack_7 = CONCAT44(iVar6,&(pUVar1->_1).initializationExceptionGCHandle);
      VStack_8.z = (float)&UNK_?;
      func_?();
      unaff_ESI = (PickupItemCollectTheItem *)(this->fields).arrow;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)this;
      unaff_EDI = pUVar1;
      if (pTVar9 != (Transform *)0x0) {
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_11,pTVar9,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar10->x;
        uStack_7._4_4_ = pVVar10->y;
        fStack_12 = pVVar10->z;
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             (&VStack_8,pTVar9,(MethodInfo *)0x0);
          VStack_11.x = pVVar10->x;
          VStack_11.y = pVVar10->y;
          VStack_11.z = pVVar10->z;
          fStack_12 = fStack_12 + VStack_11.z * _UNK_?;
          uStack_7 = CONCAT44(uStack_7._4_4_ + VStack_11.y * _UNK_?,
                               (float)uStack_7 + VStack_11.x * _UNK_?);
          pMVar2 = (this->fields).woDropOff;
          unaff_EDI = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0;
          if (pMVar2 != (MVWorldObjectClient *)0x0) {
            unaff_EDI = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                        (pMVar2->fields).transform;
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (unaff_ESI != (PickupItemCollectTheItem *)0x0) {
              startPos.z = fStack_12;
              startPos.x = (float)uStack_7;
              startPos.y = uStack_7._4_4_;
              ObjectiveArrow::ObjectiveArrow_Initialize
                        ((ObjectiveArrow *)unaff_ESI,startPos,(Transform *)unaff_EDI,pTVar9,
                         (MethodInfo *)0x0);
              pOVar4 = (this->fields).arrow;
              if (pOVar4 != (ObjectiveArrow *)0x0) {
                this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pOVar4,(MethodInfo *)0x0);
                if (this_02 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_02,1,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    uStack_7 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         ,unaff_ESI);
    VStack_8.z = (float)&UNK_?;
    uVar13 = func_?();
    if (uVar13 == 0) goto code_?;
    (pUVar1->_1).initializationExceptionGCHandle = uVar13;
    unaff_EBX = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    uStack_7 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         ,unaff_ESI);
    VStack_8.z = (float)&UNK_?;
    iVar6 = func_?();
    if (iVar6 != 0) goto code_?;
  }
  uStack_7 = CONCAT44(unaff_EBX,unaff_ESI);
  VStack_8.z = (float)&UNK_?;
  func_?();
  pUVar5 = pUVar1;
code_?:
  uStack_7 = CONCAT44(pUVar5,unaff_ESI);
  VStack_8.z = (float)&UNK_?;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetupPickupWo(MVWorldObjectClient) */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_SetupPickupWo
               (PickupItemCollectTheItem *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__);
    cRam_? = '\x01';
  }
  if ((wo == (MVWorldObjectClient *)0x0) ||
     (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (wo->klass->_1).naturalAligment &&
      ((MVCubeModelInstance__Class *)
       (wo->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
       TypeInfo__MVCubeModelInstance)))) {
    pGVar1 = PickupItem::PickupItem_CloneCubeModelInstance
                       ((MVCubeModelInstance *)wo,0,(MethodInfo *)0x0);
    (this->fields).pickup = pGVar1;
    func_?(&(this->fields).pickup,pGVar1);
    pGVar1 = (this->fields).pickup;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (pTVar2,(this->fields).cubeModelAttachPoint,(MethodInfo *)0x0);
    pMVar3 = (this->fields)._.owner;
    if (pMVar3 == (MVPickupOwner *)0x0) goto code_?;
    pMVar4 = (pMVar3->fields)._.worldObjectParent;
    if (pMVar4 == (MVWorldObjectClient *)0x0) {
      pMVar5 = (MVWorldObjectClient *)0x0;
    }
    else {
      if (((pMVar4->klass->_1).naturalAligment < (TypeInfo__MVAvatar->_1).naturalAligment) ||
         ((MVAvatar__Class *)
          (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatar)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pMVar5 = (MVWorldObjectClient *)0x0;
      if (bVar6) {
        pMVar5 = pMVar4;
      }
    }
    pGVar1 = (this->fields).pickup;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    value_00.w = 0.0;
    value_00.x = 0.0;
    value_00.y = 0.0;
    value_00.z = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar2,value_00,(MethodInfo *)0x0);
    if (pMVar5 != (MVWorldObjectClient *)0x0) {
      this_00 = (MVBody *)pMVar5[1].fields.PositionChanged;
      if (this_00 == (MVBody *)0x0) goto code_?;
      this_01 = (MethodCall *)MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0);
      if (this_01 == (MethodCall *)0x0) goto code_?;
      pTVar2 = (Transform *)
               mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                         (this_01,1,(MethodInfo *)0x0);
      if (pTVar2 == (Transform *)0x0) goto code_?;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar2,(MethodInfo *)0x0);
      pGVar1 = (this->fields).pickup;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar1,(MethodInfo *)0x0);
      if (pTVar2 == (Transform *)0x0) goto code_?;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar2,(MethodInfo *)0x0);
      if (pTVar2 == (Transform *)0x0) goto code_?;
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffec,pTVar2,(MethodInfo *)0x0);
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_02,*pQVar7,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).pickup;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar2,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
    pGVar1 = (this->fields).pickup;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    fVar8 = (this->fields).pickupScale;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    value.y = fVar8;
    value.x = fVar8;
    value.z = fVar8;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar2,value,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_03,(this->fields).spawnerId,(MethodInfo *)0x0);
    if (pMVar9 == (MVWorldObject *)0x0) {
code_?:
      PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
      return;
    }
    if (((pMVar9->klass->_1).naturalAligment <
         (TypeInfo__CollectTheItemCollectable->_1).naturalAligment) ||
       ((CollectTheItemCollectable__Class *)
        (pMVar9->klass->_1).typeHierarchy
        [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] !=
        TypeInfo__CollectTheItemCollectable)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pMVar10 = (MVWorldObject *)0x0;
    if (bVar6) {
      pMVar10 = pMVar9;
    }
    if (pMVar10 == (MVWorldObject *)0x0) goto code_?;
    pDVar11 = (Delegate *)pMVar10[2].fields.outputLinkRefs;
    this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_04,(Object *)this,
               MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
               (MethodInfo *)0x0);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar11,(Delegate *)this_04,(MethodInfo *)0x0);
    if (pDVar11 == (Delegate *)0x0) {
      pMVar10[2].fields.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
code_?:
      func_?();
      return;
    }
    pDVar12 = (Delegate *)0x0;
    if ((Action__Class *)pDVar11->klass == TypeInfo__System__Action) {
      pDVar12 = pDVar11;
    }
    if (pDVar12 != (Delegate *)0x0) {
      pMVar10[2].fields.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)pDVar12;
      pDVar12 = (Delegate *)0x0;
      if ((Action__Class *)pDVar11->klass == TypeInfo__System__Action) {
        pDVar12 = pDVar11;
      }
      if (pDVar12 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    func_?(wo,TypeInfo__MVCubeModelInstance);
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* PickupItemCollectTheItem() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem__ctor
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).pickupScale = 0.15;
  (this->fields).shouldSpawnInstanceOnUnequip = 1;
  if (bVar1) {
    func_?(&TypeInfo__UnityEngine__MeshRenderer);
    cRam_? = '\x01';
  }
  pMVar2 = (MeshRenderer__Array *)func_?(TypeInfo__UnityEngine__MeshRenderer,0);
  (this->fields)._.meshRenderers = pMVar2;
  func_?(&(this->fields)._.meshRenderers,pMVar2);
  (this->fields)._._AbleToFire_k__BackingField = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

