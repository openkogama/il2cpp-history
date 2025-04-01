
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
    ppTVar1 = &(this->fields)._.firstPersonTransform;
    pTVar2 = *ppTVar1;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (this_00,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                  ((Transform *)&UNK_?,pTVar2,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                     (MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
          *ppTVar1 = pTVar2;
          func_?();
          return;
        }
      }
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
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
  }
  else {
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar3,(this->fields).spawnerId,(MethodInfo *)0x0);
    if (pMVar4 != (MVWorldObject *)0x0) {
      bVar5 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
      if (((pMVar4->klass->_1).naturalAligment < bVar5) ||
         ((CollectTheItemCollectable__Class *)(pMVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
          TypeInfo__CollectTheItemCollectable)) goto code_?;
      pDVar6 = (Delegate *)pMVar4[2].fields.outputLinkRefs;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
                 (MethodInfo *)0x0);
      puVar7 = (undefined4 *)0x0;
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        *puVar7 = 0;
code_?:
        func_?();
        goto code_?;
      }
      pDVar8 = (Delegate *)0x0;
      if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
        pDVar8 = pDVar6;
      }
      if (pDVar8 != (Delegate *)0x0) {
        *puVar7 = pDVar8;
        pDVar8 = (Delegate *)0x0;
        if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
          pDVar8 = pDVar6;
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
    bVar5 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
    if ((pMVar4->klass->_1).naturalAligment < bVar5) {
      return;
    }
    if ((CollectTheItemDropOff__Class *)(pMVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__CollectTheItemDropOff) {
      return;
    }
    pDVar6 = (Delegate *)pMVar4[2].fields.outputLinkRefs;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
    piVar9 = (int *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,MethodInfo__PickupItemCollectTheItem__OnDropoffActivated_bool_
               ,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      *piVar9 = 0;
code_?:
      func_?();
      pUVar10 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)&(this->fields).arrow
      ;
      pOVar11 = *(ObjectiveArrow **)pUVar10;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pOVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      pMVar12 = (this->fields).woDropOff;
      if (pMVar12 == (MVWorldObjectClient *)0x0) {
code_?:
        if (pUVar10->klass !=
            (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pUVar10->klass,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          pUVar10->klass = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0
          ;
          func_?();
          return;
        }
        goto code_?;
      }
      source = (pMVar12->fields).PositionChanged;
      pOVar11 = *(ObjectiveArrow **)pUVar10;
      this_02 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,(Object *)pOVar11,
                 MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        this_02[1].fields._._.method_info = (MethodInfo_1 *)0x0;
        pUVar10 = source;
code_?:
        func_?();
        goto code_?;
      }
      pMVar13 = (MethodInfo_1 *)func_?();
      if (pMVar13 == (MethodInfo_1 *)0x0) goto code_?;
      this_02[1].fields._._.method_info = pMVar13;
      iVar14 = func_?();
      pUVar10 = source;
      if (iVar14 != 0) goto code_?;
      goto code_?;
    }
    iVar14 = func_?();
    if (iVar14 != 0) {
      *piVar9 = iVar14;
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    ppTVar2 = &(this->fields)._.originalParent;
    *ppTVar2 = pTVar1;
    func_?(ppTVar2);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         (&VStack_4,pTVar1,(MethodInfo *)0x0);
      fVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      (this->fields)._.originalPos.x = pVVar3->x;
      (this->fields)._.originalPos.y = fVar5;
      (this->fields)._.originalPos.z = fVar6;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                           ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
        fVar6 = pQVar7->y;
        fVar5 = pQVar7->z;
        fVar8 = pQVar7->w;
        (this->fields)._.originalRot.x = pQVar7->x;
        (this->fields)._.originalRot.y = fVar6;
        (this->fields)._.originalRot.z = fVar5;
        (this->fields)._.originalRot.w = fVar8;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             (&VStack_4,pTVar1,(MethodInfo *)0x0);
          fVar5 = pVVar3->y;
          fVar6 = pVVar3->z;
          (this->fields)._.originalScale.x = pVVar3->x;
          (this->fields)._.originalScale.y = fVar5;
          (this->fields)._.originalScale.z = fVar6;
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  x = (this->fields).pickup;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((newState == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                         (Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index == 0)) goto code_?;
  bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if ((*(byte *)(*(int *)TVar2.m_Index + 0xb8) < bVar3) ||
     (*(Dictionary_2_System_Object_System_Object___Class **)
       (*(int *)(*(int *)TVar2.m_Index + 100) + -4 + (uint)bVar3 * 4) !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    (TVar2.m_Index,(Object *)StringLiteral_CollectTheItemCollectableId,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (TVar2.m_Index == 0) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) == (TypeInfo__System__Int32->_0).element_class
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
    bVar3 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
    if (((pCVar7->klass->_1).naturalAligment < bVar3) ||
       ((CollectTheItemCollectable__Class *)(pCVar7->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__CollectTheItemCollectable)) goto code_?;
    iVar8 = CollectTheItemCollectable::CollectTheItemCollectable_get_CollectableModelId
                      (pCVar7,(MethodInfo *)0x0);
    (this->fields).cubeModelKeyId = iVar8;
    (this->fields).spawnerId = iVar5;
    iVar5 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                       (pCVar7,(MethodInfo *)0x0);
    (this->fields).dropOffId = iVar5;
    if (((this->fields).cubeModelKeyId == -1) || (iVar5 == -1)) goto code_?;
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar6 == (MVWorldObjectClientManager *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
    }
    else {
      wo = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar6,(this->fields).cubeModelKeyId,(MethodInfo *)0x0);
      if (wo == (MVWorldObjectClient *)0x0) {
        return;
      }
      PickupItemCollectTheItem_SetupPickupWo(this,wo,(MethodInfo *)0x0);
      pCVar7 = (CollectTheItemCollectable *)(this->fields)._.owner;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pCVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      pMVar9 = (this->fields)._.owner;
      if (pMVar9 == (MVPickupOwner *)0x0) goto code_?;
      if ((pMVar9->fields)._IsLocal_k__BackingField == 0) {
        return;
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar6 == (MVWorldObjectClientManager *)0x0) goto code_?;
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                (pMVar6,(this->fields).dropOffId,(MethodInfo *)0x0);
      iVar10 = func_?();
      if (iVar10 == 0) {
        return;
      }
      pDVar11 = *(Delegate **)(iVar10 + 0xf0);
      this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,
                 MethodInfo__PickupItemCollectTheItem__OnDropoffActivated_bool_,(MethodInfo *)0x0);
      pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar11,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar11 == (Delegate *)0x0) {
        *(undefined4 *)(iVar10 + 0xf0) = 0;
code_?:
        func_?();
        bVar1 = CollectTheItemCollectable::CollectTheItemCollectable_get_HasArrowIndicator
                          (pCVar7,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          PickupItemCollectTheItem_SetupDropOffArrow
                    (this,(this->fields).dropOffId,(MethodInfo *)0x0);
        }
        return;
      }
      iVar12 = func_?();
      if (iVar12 != 0) {
        *(int *)(iVar10 + 0xf0) = iVar12;
        iVar10 = func_?();
        if (iVar10 != 0) goto code_?;
        goto code_?;
      }
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
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
  if (pMVar1 == (MVPickupOwner *)0x0) {
code_?:
    func_?();
  }
  else {
    if ((pMVar1->fields)._IsLocal_k__BackingField == 0) {
      return;
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pCStack_2 = (CollectTheItemCollectable *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_02,(this->fields).spawnerId,(MethodInfo *)0x0);
    if (pCStack_2 == (CollectTheItemCollectable *)0x0) {
      return;
    }
    bVar3 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
    if ((pCStack_2->klass->_1).naturalAligment < bVar3) {
      return;
    }
    if ((CollectTheItemCollectable__Class *)(pCStack_2->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__CollectTheItemCollectable) {
      return;
    }
    VStack_4.x = (float)TypeInfo__System__Action;
    pAVar5 = (pCStack_2->fields).OnCollectTheItemDestroyed;
    ppAVar6 = &(pCStack_2->fields).OnCollectTheItemDestroyed;
    this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_03,(Object *)this,
               MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_03,(MethodInfo *)0x0);
    this_01 = pCStack_2;
    if (pAVar5 == (Action *)0x0) {
      *ppAVar6 = (Action *)0x0;
code_?:
      func_?();
      if ((this->fields).shouldSpawnInstanceOnUnequip == 0) {
        return;
      }
      this_00 = (this->fields).pickup;
      if ((this_00 != (GameObject *)0x0) &&
         (this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0), this_04 != (Transform *)0x0)) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_4,this_04,(MethodInfo *)0x0);
        CollectTheItemCollectable::CollectTheItemCollectable_CreateCollectableInstance
                  (this_01,*pVVar7,(Quaternion)ZEXT816(0),(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pAVar8 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar5;
    }
    if (pAVar8 == (Action *)0x0) goto code_?;
    *ppAVar6 = pAVar8;
    pAVar8 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar5;
    }
    if (pAVar8 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  }
  else {
    pMVar1 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,dropoffId,(MethodInfo *)0x0);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                &(this->fields).woDropOff;
    *(MVWorldObjectClient **)unaff_EBX = pMVar1;
    func_?(unaff_EBX,pMVar1);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    unaff_ESI = this;
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    unaff_EDI = (PickupItemCollectTheItem__Class *)(pPVar2->fields).collectTheItemDropOffArrow;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar3 = (ObjectiveArrow *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)unaff_EDI,
                        ObjectiveArrow_MethodInfo__UnityEngine__Object__Instantiate<ObjectiveArrow>_ObjectiveArrow_
                       );
    unaff_ESI = (PickupItemCollectTheItem *)&(this->fields).arrow;
    *(ObjectiveArrow **)unaff_ESI = pOVar3;
    pPStack_4 = unaff_ESI;
    func_?(unaff_ESI,pOVar3);
    pMVar1 = *(MVWorldObjectClient **)unaff_EBX;
    if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
    pUVar5 = (pMVar1->fields).PositionChanged;
    pOVar3 = *(ObjectiveArrow **)unaff_ESI;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)pOVar3,
               MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    unaff_ESI = (PickupItemCollectTheItem *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_EDI = (PickupItemCollectTheItem__Class *)
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
    ;
    if (unaff_ESI == (PickupItemCollectTheItem *)0x0) {
      (pMVar1->fields).PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      iVar6 = 0;
code_?:
      uStack_7 = CONCAT44(iVar6,&(pMVar1->fields).PositionChanged);
      VStack_8.z = (float)&UNK_?;
      func_?();
      unaff_ESI = pPStack_4;
      unaff_EDI = pPStack_4->klass;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)this;
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
          uVar13 = pVVar10->x;
          uVar14 = pVVar10->y;
          VStack_11.y = uStack_7._4_4_ + (float)uVar14 * _UNK_?;
          VStack_11.x = (float)uStack_7 + (float)uVar13 * _UNK_?;
          VStack_11.z = fStack_12 + pVVar10->z * _UNK_?;
          pMVar1 = (this->fields).woDropOff;
          if (pMVar1 != (MVWorldObjectClient *)0x0) {
            pTVar9 = (pMVar1->fields).transform;
            pickup = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (unaff_EDI != (PickupItemCollectTheItem__Class *)0x0) {
              startPos.z = VStack_11.z;
              startPos.x = VStack_11.x;
              startPos.y = VStack_11.y;
              ObjectiveArrow::ObjectiveArrow_Initialize
                        ((ObjectiveArrow *)unaff_EDI,startPos,pTVar9,pickup,(MethodInfo *)0x0);
              if (unaff_ESI->klass != (PickupItemCollectTheItem__Class *)0x0) {
                this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)unaff_ESI->klass,(MethodInfo *)0x0);
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
    pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar5 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
    unaff_EDI = (PickupItemCollectTheItem__Class *)&(pMVar1->fields).PositionChanged;
    *(UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ **)unaff_EDI = pUVar5;
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
code_?:
  uStack_7 = CONCAT44(unaff_EDI,unaff_ESI);
  VStack_8.z = (float)&UNK_?;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  if (wo == (MVWorldObjectClient *)0x0) {
code_?:
    pGVar1 = PickupItem::PickupItem_CloneCubeModelInstance
                       ((MVCubeModelInstance *)wo,0,(MethodInfo *)0x0);
    ppGVar2 = &(this->fields).pickup;
    *ppGVar2 = pGVar1;
    func_?(ppGVar2,pGVar1);
    if (*ppGVar2 == (GameObject *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (*ppGVar2,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (pTVar3,(this->fields).cubeModelAttachPoint,(MethodInfo *)0x0);
    pMVar4 = (this->fields)._.owner;
    if (pMVar4 == (MVPickupOwner *)0x0) goto code_?;
    pMVar5 = (pMVar4->fields)._.worldObjectParent;
    if (pMVar5 == (MVWorldObjectClient *)0x0) {
      pMVar6 = (MVWorldObjectClient *)0x0;
    }
    else {
      bVar7 = (TypeInfo__MVAvatar->_1).naturalAligment;
      if (((pMVar5->klass->_1).naturalAligment < bVar7) ||
         ((MVAvatar__Class *)(pMVar5->klass->_1).typeHierarchy[bVar7 - 1] != TypeInfo__MVAvatar)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      pMVar6 = (MVWorldObjectClient *)0x0;
      if (bVar8) {
        pMVar6 = pMVar5;
      }
    }
    if (*ppGVar2 == (GameObject *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (*ppGVar2,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    value_00.w = 0.0;
    value_00.x = 0.0;
    value_00.y = 0.0;
    value_00.z = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar3,value_00,(MethodInfo *)0x0);
    if (pMVar6 != (MVWorldObjectClient *)0x0) {
      this_00 = (MVBody *)pMVar6[1].fields.PositionChanged;
      if (this_00 == (MVBody *)0x0) goto code_?;
      this_01 = (MethodCall *)MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0);
      if (this_01 == (MethodCall *)0x0) goto code_?;
      pTVar3 = (Transform *)
                mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                          (this_01,1,(MethodInfo *)0x0);
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                          (pTVar3,(MethodInfo *)0x0);
      if (*ppGVar2 == (GameObject *)0x0) goto code_?;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (*ppGVar2,(MethodInfo *)0x0);
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pTVar3,(MethodInfo *)0x0);
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                          ((Quaternion *)&stack0xffffffec,pTVar3,(MethodInfo *)0x0);
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_02,*pQVar9,(MethodInfo *)0x0);
    }
    if (*ppGVar2 == (GameObject *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (*ppGVar2,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar3,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
    if (*ppGVar2 == (GameObject *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (*ppGVar2,(MethodInfo *)0x0);
    fVar10 = (this->fields).pickupScale;
    if (pTVar3 == (Transform *)0x0) goto code_?;
    value.y = fVar10;
    value.x = fVar10;
    value.z = fVar10;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar3,value,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_03,(this->fields).spawnerId,(MethodInfo *)0x0);
    if (pMVar11 == (MVWorldObject *)0x0) {
code_?:
      PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
      return;
    }
    bVar7 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
    if (((pMVar11->klass->_1).naturalAligment < bVar7) ||
       ((CollectTheItemCollectable__Class *)(pMVar11->klass->_1).typeHierarchy[bVar7 - 1] !=
        TypeInfo__CollectTheItemCollectable)) goto code_?;
    pDVar12 = (Delegate *)pMVar11[2].fields.outputLinkRefs;
    ppLVar13 = &pMVar11[2].fields.outputLinkRefs;
    this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_04,(Object *)this,
               MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
               (MethodInfo *)0x0);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar12,(Delegate *)this_04,(MethodInfo *)0x0);
    if (pDVar12 == (Delegate *)0x0) {
      *ppLVar13 = (List_1_MV_WorldObject_Link_ *)0x0;
      func_?();
      return;
    }
    pDVar14 = (Delegate *)0x0;
    if ((Action__Class *)pDVar12->klass == TypeInfo__System__Action) {
      pDVar14 = pDVar12;
    }
    if (pDVar14 != (Delegate *)0x0) {
      *ppLVar13 = (List_1_MV_WorldObject_Link_ *)pDVar14;
      pDVar14 = (Delegate *)0x0;
      if ((Action__Class *)pDVar12->klass == TypeInfo__System__Action) {
        pDVar14 = pDVar12;
      }
      if (pDVar14 != (Delegate *)0x0) {
        func_?();
        return;
      }
      goto code_?;
    }
  }
  else {
    bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((bVar7 <= (wo->klass->_1).naturalAligment) &&
       ((MVCubeModelInstance__Class *)(wo->klass->_1).typeHierarchy[bVar7 - 1] ==
        TypeInfo__MVCubeModelInstance)) goto code_?;
    func_?(wo,TypeInfo__MVCubeModelInstance);
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  ppMVar3 = &(this->fields)._.meshRenderers;
  *ppMVar3 = pMVar2;
  func_?(ppMVar3,pMVar2);
  (this->fields)._._AbleToFire_k__BackingField = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

