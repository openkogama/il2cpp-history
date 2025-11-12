
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_Awake
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FirstPersonTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson == 0) {
    return;
  }
  pTVar1 = (this->fields)._.firstPersonTransform;
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
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  this_00 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar1,parent,1,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar1 == (Transform *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar3 != (void *)0x0) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar3);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        bVar5 = iRam_? == 0;
        (this->fields)._.firstPersonTransform = pTVar1;
        if (bVar5) {
          return;
        }
        uVar6 = (uint)((ulonglong)&(this->fields)._.firstPersonTransform >> 0xc);
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
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ForceUnequipPickup() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_ForceUnequipPickup
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  (this->fields).shouldSpawnInstanceOnUnequip = 0;
  if (((pMVar1 == (MVPickupOwner *)0x0) ||
      (pMVar2 = (pMVar1->fields)._.worldObjectParent, pMVar2 == (MVWorldObjectClient *)0x0)) ||
     (this_00 = (pMVar2->fields).gameObject, this_00 == (GameObject *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (this_00,
                      MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
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
  if (pOVar4 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar4[1].klass != (Object__Class *)0x0) {
      pOVar5 = pOVar4->klass;
      uVar6._0_2_ = pOVar5[1]._0.byval_arg.attrs;
      uVar6._2_1_ = pOVar5[1]._0.byval_arg.type;
      uVar6._3_5_ = *(undefined5 *)&pOVar5[1]._0.byval_arg.field_0xb;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pOVar5[1]._0.byval_arg.data)(pOVar4,uVar6);
      return;
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnDestroy
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemDropOff);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemCollectTheItem__OnDropoffActivated_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar3,(this->fields).spawnerId,(MethodInfo *)0x0);
      if (pMVar4 != (MVWorldObjectClient *)0x0) {
        bVar5 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
        if ((bVar5 <= (pMVar4->klass->_1).naturalAligment) &&
           ((CollectTheItemCollectable__Class *)
            (pMVar4->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] ==
            TypeInfo__CollectTheItemCollectable)) {
          pDVar6 = (Delegate *)pMVar4[1].fields._.outputLinkRefs;
          this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_00,(Object *)this,
                     MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
                     (MethodInfo *)0x0);
          pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                              (pDVar6,(Delegate *)this_00,(MethodInfo *)0x0);
          if (pDVar6 == (Delegate *)0x0) {
            pMVar4[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
          }
          else {
            pDVar7 = (Delegate *)0x0;
            if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
              pDVar7 = pDVar6;
            }
            if (pDVar7 == (Delegate *)0x0) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pMVar4[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)pDVar7;
            pDVar7 = (Delegate *)0x0;
            if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
              pDVar7 = pDVar6;
            }
            if (pDVar7 == (Delegate *)0x0) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          func_?();
        }
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar3,(this->fields).dropOffId,(MethodInfo *)0x0);
        if (pMVar4 == (MVWorldObjectClient *)0x0) {
          return;
        }
        bVar5 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
        if ((pMVar4->klass->_1).naturalAligment < bVar5) {
          return;
        }
        if ((CollectTheItemDropOff__Class *)(pMVar4->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1]
            != TypeInfo__CollectTheItemDropOff) {
          return;
        }
        pDVar6 = (Delegate *)pMVar4[1].fields._.outputLinkRefs;
        pDVar7 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
        FUN_?(pDVar7,this);
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove(pDVar6,pDVar7,(MethodInfo *)0x0)
        ;
        pAVar9 = TypeInfo__System__Action<bool>;
        if (pDVar6 == (Delegate *)0x0) {
          pMVar4[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
        }
        else {
          pLVar10 = (List_1_MV_WorldObject_Link_ *)
                    FUN_?(pDVar6,TypeInfo__System__Action<bool>);
          if (pLVar10 == (List_1_MV_WorldObject_Link_ *)0x0) {
            FUN_?(pDVar6,pAVar9);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pMVar4[1].fields._.outputLinkRefs = pLVar10;
          pAVar9 = TypeInfo__System__Action<bool>;
          lVar11 = FUN_?();
          if (lVar11 == 0) {
            FUN_?(pDVar6,pAVar9);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        func_?(&pMVar4[1].fields._.outputLinkRefs);
        pOVar12 = (this->fields).arrow;
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
        if (pOVar12 == (ObjectiveArrow *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pOVar12->fields)._._._._.m_CachedPtr == (void *)0x0) {
          return;
        }
        if ((this->fields).woDropOff != (MVWorldObjectClient *)0x0) {
          pMVar4 = (this->fields).woDropOff;
          pOVar12 = (this->fields).arrow;
          pUVar13 = (pMVar4->fields).PositionChanged;
          this_01 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_01,(Object *)pOVar12,
                     MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pUVar13,(Delegate *)this_01,(MethodInfo *)0x0);
          pUVar14 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          if (pDVar6 == (Delegate *)0x0) {
            (pMVar4->fields).PositionChanged =
                 (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
          }
          else {
            pUVar13 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                      FUN_?(pDVar6,
                                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                   );
            if (pUVar13 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              FUN_?(pDVar6,pUVar14);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            (pMVar4->fields).PositionChanged = pUVar13;
            pUVar14 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            lVar11 = FUN_?();
            if (lVar11 == 0) {
              FUN_?(pDVar6,pUVar14);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          func_?(&(pMVar4->fields).PositionChanged);
        }
        pOVar12 = (this->fields).arrow;
        if (pOVar12 != (ObjectiveArrow *)0x0) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pOVar12,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          (this->fields).arrow = (ObjectiveArrow *)0x0;
          func_?(&(this->fields).arrow);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDropoffActivated(Boolean) */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnDropoffActivated
               (PickupItemCollectTheItem *this,bool shouldStayEquipped,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_player_has_delivered_the_carri);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (shouldStayEquipped != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    original = (pPVar1->fields).collectTheItemParticles;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                        );
    if (this_00 != (Component *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      (this_00,(MethodInfo *)0x0);
      pGVar2 = (this->fields).pickup;
      if ((pGVar2 != (GameObject *)0x0) &&
         (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0), obj_00 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (obj_00->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3);
        if (obj == (Transform *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (obj->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3);
        pOVar6 = (this->fields).arrow;
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
        if (pOVar6 != (ObjectiveArrow *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pOVar6->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pOVar6 = (this->fields).arrow;
            if ((pOVar6 == (ObjectiveArrow *)0x0) ||
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pOVar6,(MethodInfo *)0x0),
               pGVar2 == (GameObject *)0x0)) goto DAT_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
          }
        }
        text = TM::TM__(StringLiteral_A_player_has_delivered_the_carri,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
          FUN_?();
        }
        NotificationController::NotificationController_PushNotification
                  (text,(Sprite *)0x0,7,(MethodInfo *)0x0);
        PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::
     PickupItemCollectTheItem_OnEnterVehicleWithWeapon
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).arrow;
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
  if (pOVar1 != (ObjectiveArrow *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pOVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pOVar1 = (this->fields).arrow;
      if ((pOVar1 != (ObjectiveArrow *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pOVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
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
    bVar2 = iRam_? != 0;
    (this->fields)._.originalParent = pTVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._.originalParent >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      uStack_8 = uStack_8 & 0xffffffff00000000;
      pvVar9 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      (this->fields)._.originalPos.x = (float)(undefined4)uStack_7;
      (this->fields)._.originalPos.y = (float)uStack_7._4_4_;
      (this->fields)._.originalPos.z = (float)uStack_8;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_7 = 0;
        uStack_8 = 0;
        pvVar9 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar9);
        (this->fields)._.originalRot.x = (float)(undefined4)uStack_7;
        (this->fields)._.originalRot.y = (float)uStack_7._4_4_;
        (this->fields)._.originalRot.z = (float)uStack_8;
        (this->fields)._.originalRot.w = (float)uStack_8._4_4_;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_7 = 0;
          uStack_8 = uStack_8 & 0xffffffff00000000;
          pvVar9 = (pTVar1->fields)._._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar9,&uStack_7);
          (this->fields)._.originalScale.x = (float)(undefined4)uStack_7;
          (this->fields)._.originalScale.y = (float)uStack_7._4_4_;
          (this->fields)._.originalScale.z = (float)uStack_8;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::
     PickupItemCollectTheItem_OnLeaveVehicleWithWeapon
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).arrow;
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
  if (pOVar1 != (ObjectiveArrow *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pOVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pOVar1 = (this->fields).arrow;
      if ((pOVar1 != (ObjectiveArrow *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pOVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnStateChanged
               (PickupItemCollectTheItem *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemDropOff);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemCollectTheItem__OnDropoffActivated_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CollectTheItemCollectableId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).pickup;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  if ((newState != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (newState,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar2,(Object *)StringLiteral_CollectTheItemCollectableId,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar5 != (Object *)0x0) {
      if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar5);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = *(int32_t *)&pOVar5[1].klass;
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
        this_00 = (CollectTheItemCollectable *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar7,iVar6,(MethodInfo *)0x0);
        if (this_00 != (CollectTheItemCollectable *)0x0) {
          bVar3 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
          if ((bVar3 <= (this_00->klass->_1).naturalAligment) &&
             ((CollectTheItemCollectable__Class *)
              (this_00->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
              TypeInfo__CollectTheItemCollectable)) {
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((this_00->fields).collectableModel == (MVCubeModelInstance *)0x0) {
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
              pCVar8 = (CollectTheItem *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                  (pMVar7,(this_00->fields)._._._._.groupId,(MethodInfo *)0x0);
              if (pCVar8 == (CollectTheItem *)0x0) {
                (this_00->fields).controller = (CollectTheItem *)0x0;
              }
              else {
                bVar3 = (TypeInfo__CollectTheItem->_1).naturalAligment;
                if (((pCVar8->klass->_1).naturalAligment < bVar3) ||
                   ((CollectTheItem__Class *)
                    (pCVar8->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                    TypeInfo__CollectTheItem)) {
                  FUN_?(pCVar8);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                (this_00->fields).controller = pCVar8;
                bVar3 = (TypeInfo__CollectTheItem->_1).naturalAligment;
                if (((pCVar8->klass->_1).naturalAligment < bVar3) ||
                   ((CollectTheItem__Class *)
                    (pCVar8->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                    TypeInfo__CollectTheItem)) {
                  FUN_?(pCVar8);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar9 = (uint)((ulonglong)&(this_00->fields).controller >> 0xc);
                puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar11 = *puVar10;
                  LOCK();
                  uVar12 = *puVar10;
                  if (uVar11 == uVar12) {
                    *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar11 != uVar12);
              }
              pCVar8 = (this_00->fields).controller;
              if (pCVar8 == (CollectTheItem *)0x0) goto code_?;
              CollectTheItem::CollectTheItem_SetupReferences(pCVar8,(MethodInfo *)0x0);
            }
            pMVar13 = (this_00->fields).collectableModel;
            if (pMVar13 != (MVCubeModelInstance *)0x0) {
              (this->fields).cubeModelKeyId = (pMVar13->fields)._._._.id;
              (this->fields).spawnerId = iVar6;
              iVar6 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                                 (this_00,(MethodInfo *)0x0);
              (this->fields).dropOffId = iVar6;
              if (((this->fields).cubeModelKeyId == -1) || (iVar6 == -1)) goto DAT_?;
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
                pMVar14 = MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClient
                                    (pMVar7,(this->fields).cubeModelKeyId,(MethodInfo *)0x0);
                if (pMVar14 == (MVWorldObjectClient *)0x0) {
                  return;
                }
                PickupItemCollectTheItem_SetupPickupWo(this,pMVar14,(MethodInfo *)0x0);
                pMVar15 = (this->fields)._.owner;
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
                if (pMVar15 == (MVPickupOwner *)0x0) {
                  return;
                }
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pMVar15->fields)._._._._._.m_CachedPtr == (void *)0x0) {
                  return;
                }
                pMVar15 = (this->fields)._.owner;
                if (pMVar15 != (MVPickupOwner *)0x0) {
                  if ((pMVar15->fields)._IsLocal_k__BackingField == 0) {
                    return;
                  }
                  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
                    pMVar14 = MVWorldObjectClientManager::
                              MVWorldObjectClientManager_GetWorldObjectClient
                                        (pMVar7,(this->fields).dropOffId,(MethodInfo *)0x0);
                    if (pMVar14 == (MVWorldObjectClient *)0x0) {
                      return;
                    }
                    bVar3 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
                    if ((pMVar14->klass->_1).naturalAligment < bVar3) {
                      return;
                    }
                    if ((CollectTheItemDropOff__Class *)
                        (pMVar14->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                        TypeInfo__CollectTheItemDropOff) {
                      return;
                    }
                    pDVar16 = (Delegate *)pMVar14[1].fields._.outputLinkRefs;
                    b = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
                    FUN_?(b,this);
                    pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        (pDVar16,b,(MethodInfo *)0x0);
                    pAVar17 = TypeInfo__System__Action<bool>;
                    if (pDVar16 == (Delegate *)0x0) {
                      pMVar14[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
                    }
                    else {
                      pLVar18 = (List_1_MV_WorldObject_Link_ *)
                                FUN_?(pDVar16,TypeInfo__System__Action<bool>);
                      if (pLVar18 == (List_1_MV_WorldObject_Link_ *)0x0) {
                        FUN_?(pDVar16,pAVar17);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pMVar14[1].fields._.outputLinkRefs = pLVar18;
                      pAVar17 = TypeInfo__System__Action<bool>;
                      lVar19 = FUN_?(pDVar16,TypeInfo__System__Action<bool>);
                      if (lVar19 == 0) {
                        FUN_?(pDVar16,pAVar17);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                    }
                    func_?(&pMVar14[1].fields._.outputLinkRefs);
                    pCVar20 = (this_00->fields).collectableInstance;
                    if (pCVar20 != (CollectTheItemCollectableInstance *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&StringLiteral_hasIndicator);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pDVar2 = (pCVar20->fields)._.blueprintData;
                      if ((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,System::Object]::
                                    Dictionary_2_System_Object_System_Object__get_Item
                                              (pDVar2,(Object *)StringLiteral_hasIndicator,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                              ), pOVar5 != (Object *)0x0)) {
                        if ((pOVar5->klass->_0).element_class !=
                            *(Il2CppClass **)(lRam_? + 0x40)) {
                          FUN_?(pOVar5,lRam_?);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        if (*(char *)&pOVar5[1].klass == '\0') {
                          return;
                        }
                        PickupItemCollectTheItem_SetupDropOffArrow
                                  (this,(this->fields).dropOffId,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto code_?;
          }
        }
DAT_?:
        PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnUnequip
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if ((pMVar1->fields)._IsLocal_k__BackingField != 0) {
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_02,(this->fields).spawnerId,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        bVar3 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
        if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
           ((CollectTheItemCollectable__Class *)
            (pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
            TypeInfo__CollectTheItemCollectable)) {
          pDVar4 = (Delegate *)pMVar2[1].fields._.outputLinkRefs;
          this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_03,(Object *)this,
                     MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
                     (MethodInfo *)0x0);
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                              (pDVar4,(Delegate *)this_03,(MethodInfo *)0x0);
          if (pDVar4 == (Delegate *)0x0) {
            pMVar2[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
          }
          else {
            pDVar5 = (Delegate *)0x0;
            if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
              pDVar5 = pDVar4;
            }
            if (pDVar5 == (Delegate *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pMVar2[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)pDVar5;
            pDVar5 = (Delegate *)0x0;
            if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
              pDVar5 = pDVar4;
            }
            if (pDVar5 == (Delegate *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)&pMVar2[1].fields._.outputLinkRefs >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
          if ((this->fields).shouldSpawnInstanceOnUnequip != 0) {
            this_00 = (this->fields).pickup;
            if ((this_00 != (GameObject *)0x0) &&
               (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              QStack_11.x = 0.0;
              QStack_11.y = 0.0;
              QStack_11.z = 0.0;
              pvVar12 = (obj->fields)._._.m_CachedPtr;
              if (pvVar12 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(pvVar12,&QStack_11);
              if (pMVar2 != (MVWorldObjectClient *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar14 != (MVGameControllerBase *)0x0) &&
                   (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) {
                  this_01 = (pMVar15->fields).operationRequests;
                  pMVar2 = *(MVWorldObjectClient **)&pMVar2[1].fields._.ownerActorNr;
                  if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uVar13 = 0;
                    this_04 = MVNetworkGame+OperationRequests::
                              MVNetworkGame_OperationRequests_CreateBasicCloneData
                                        (this_01,pMVar2,1,0,1,(MethodInfo *)0x0);
                    auStackX_8[0] = 1;
                    value = (Object *)FUN_?(uRam_?,auStackX_8);
                    if (this_04 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                (this_04,0xcb,value,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar13 >> 8),2)
                                 ,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                  ->klass->rgctx_data[0x22].method);
                      aQStack_16[0].x = QStack_11.x;
                      aQStack_16[0].y = QStack_11.y;
                      aQStack_16[0].z = QStack_11.z;
                      MVWorldObject.dll::MV::WorldObject::TransformHelper::
                      TransformHelper_SetPosition((Vector3 *)aQStack_16,this_04,(MethodInfo *)0x0);
                      aQStack_16[0].x = 0.0;
                      aQStack_16[0].y = 0.0;
                      aQStack_16[0].z = 0.0;
                      aQStack_16[0].w = 0.0;
                      pDVar17 = this_04;
                      MVWorldObject.dll::MV::WorldObject::TransformHelper::
                      TransformHelper_SetRotation(aQStack_16,this_04,(MethodInfo *)0x0);
                      pPVar18 = (this_01->fields).peer;
                      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c
                          == 0) {
                        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                      }
                      if (pPVar18 != (PhotonPeer *)0x0) {
                        (*(pPVar18->klass->vtable).SendOperation.methodPtr)
                                  (pPVar18,CONCAT71((int7)((ulonglong)pDVar17 >> 8),0x41),this_04,
                                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                                   SendReliable,(pPVar18->klass->vtable).SendOperation.method);
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto code_?;
          }
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnWorldObjectSpawnerDestroyed() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::
     PickupItemCollectTheItem_OnWorldObjectSpawnerDestroyed
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).arrow;
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
  if (pOVar1 != (ObjectiveArrow *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pOVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pOVar1 = (this->fields).arrow;
      if ((pOVar1 != (ObjectiveArrow *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pOVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void SetupDropOffArrow(Int32) */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_SetupDropOffArrow
               (PickupItemCollectTheItem *this,int32_t dropoffId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ObjectiveArrow_MethodInfo__UnityEngine__Object__Instantiate<ObjectiveArrow>_ObjectiveArrow_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = (undefined *)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,dropoffId,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).woDropOff = pMVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).woDropOff >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar8 != (PrefabPool *)0x0) {
      pOVar9 = (pPVar8->fields).collectTheItemDropOffArrow;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar9 = (ObjectiveArrow *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pOVar9,
                          ObjectiveArrow_MethodInfo__UnityEngine__Object__Instantiate<ObjectiveArrow>_ObjectiveArrow_
                         );
      bVar3 = iRam_? != 0;
      (this->fields).arrow = pOVar9;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).arrow >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pMVar2 = (this->fields).woDropOff;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        pUVar10 = (pMVar2->fields).PositionChanged;
        pOVar9 = (this->fields).arrow;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)pOVar9,
                   MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar10,(Delegate *)this_01,(MethodInfo *)0x0);
        pUVar12 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pDVar11 == (Delegate *)0x0) {
          (pMVar2->fields).PositionChanged =
               (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        }
        else {
          pUVar10 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                    FUN_?(pDVar11,
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
          if (pUVar10 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
            FUN_?(pDVar11,pUVar12);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (pMVar2->fields).PositionChanged = pUVar10;
          pUVar12 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          lVar14 = FUN_?();
          if (lVar14 == 0) {
            FUN_?(pDVar11,pUVar12);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&(pMVar2->fields).PositionChanged >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pOVar9 = (this->fields).arrow;
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar15 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_16.x = 0.0;
          VStack_16.y = 0.0;
          VStack_16.z = 0.0;
          pvVar17 = (pTVar15->fields)._._.m_CachedPtr;
          if (pvVar17 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar18 = func_?(&UNK_?);
            FUN_?(uVar18,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcRam_? = pcVar13;
          (*pcRam_?)(pvVar17);
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar15 != (Transform *)0x0) {
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (aVStack_20,pTVar15,(MethodInfo *)0x0);
            uVar21 = pVVar19->x;
            pMVar2 = (this->fields).woDropOff;
            fVar22 = pVVar19->y + pVVar19->y + VStack_16.y;
            fVar23 = pVVar19->z + pVVar19->z + VStack_16.z;
            fVar24 = (float)uVar21 * TypeRef__System__Activator__T._0_4_ + VStack_16.x;
            if (pMVar2 != (MVWorldObjectClient *)0x0) {
              pTVar15 = (pMVar2->fields).transform;
              pickup = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pOVar9 != (ObjectiveArrow *)0x0) {
                VStack_16.y = fVar22;
                VStack_16.x = fVar24;
                VStack_16.z = fVar23;
                ObjectiveArrow::ObjectiveArrow_Initialize
                          (pOVar9,&VStack_16,pTVar15,pickup,(MethodInfo *)0x0);
                pOVar9 = (this->fields).arrow;
                if ((pOVar9 != (ObjectiveArrow *)0x0) &&
                   (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pOVar9,(MethodInfo *)0x0),
                   obj != (GameObject *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  ,1,0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (obj == (GameObject *)0x0) {
                    FUN_?();
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  pvVar17 = (obj->fields)._.m_CachedPtr;
                  if (pvVar17 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  pcVar13 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    pcVar13 = (code *)FUN_?(&UNK_?);
                    if (pcVar13 == (code *)0x0) {
                      uVar18 = func_?(&UNK_?);
                      FUN_?(uVar18,0);
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                  }
                  pcRam_? = pcVar13;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam_?)(pvVar17,1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetupPickupWo(MVWorldObjectClient) */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_SetupPickupWo
               (PickupItemCollectTheItem *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVCubeModelInstance *)0x0;
  pMVar2 = pMVar1;
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar3) ||
       (pMVar2 = (MVCubeModelInstance *)wo,
       (MVCubeModelInstance__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
       TypeInfo__MVCubeModelInstance)) {
      FUN_?(wo,TypeInfo__MVCubeModelInstance);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pGVar5 = PickupItem::PickupItem_CloneCubeModelInstance(pMVar2,0,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).pickup = pGVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).pickup >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar5 = (this->fields).pickup;
  if ((pGVar5 != (GameObject *)0x0) &&
     (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar5,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar11,(this->fields).cubeModelAttachPoint,1,(MethodInfo *)0x0);
    pMVar12 = (this->fields)._.owner;
    if (pMVar12 != (MVPickupOwner *)0x0) {
      pMVar2 = (MVCubeModelInstance *)(pMVar12->fields)._.worldObjectParent;
      pMVar13 = pMVar1;
      if (pMVar2 != (MVCubeModelInstance *)0x0) {
        bVar3 = (TypeInfo__MVAvatar->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
           (bVar6 = true,
           (MVAvatar__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
           TypeInfo__MVAvatar)) {
          bVar6 = false;
        }
        if (bVar6) {
          pMVar13 = pMVar2;
        }
      }
      pGVar5 = (this->fields).pickup;
      if ((pGVar5 != (GameObject *)0x0) &&
         (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar5,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) {
        uStack_14 = 0;
        uStack_15 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar16 = (pTVar11->fields)._._.m_CachedPtr;
        if (pvVar16 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar17 = func_?(&UNK_?);
          FUN_?(uVar17,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar16);
        if (pMVar13 == (MVCubeModelInstance *)0x0) {
code_?:
          pGVar5 = (this->fields).pickup;
          if ((pGVar5 != (GameObject *)0x0) &&
             (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar5,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar16 = (pTVar11->fields)._._.m_CachedPtr;
            if (pvVar16 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
            (*pcRam_?)(pvVar16);
            pGVar5 = (this->fields).pickup;
            if (pGVar5 != (GameObject *)0x0) {
              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar5,(MethodInfo *)0x0);
              fVar18 = (this->fields).pickupScale;
              if (pTVar11 != (Transform *)0x0) {
                uStack_14 = CONCAT44(fVar18,fVar18);
                uStack_15 = CONCAT44(uStack_15._4_4_,fVar18);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar16 = (pTVar11->fields)._._.m_CachedPtr;
                if (pvVar16 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar17 = func_?(&UNK_?);
                  FUN_?(uVar17,0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcRam_? = pcVar4;
                (*pcRam_?)(pvVar16,&uStack_14);
                this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (this_00 != (MVWorldObjectClientManager *)0x0) {
                  pMVar19 = MVWorldObjectClientManager::
                            MVWorldObjectClientManager_GetWorldObjectClient
                                      (this_00,(this->fields).spawnerId,(MethodInfo *)0x0);
                  if (pMVar19 != (MVWorldObjectClient *)0x0) {
                    bVar3 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
                    if ((bVar3 <= (pMVar19->klass->_1).naturalAligment) &&
                       ((CollectTheItemCollectable__Class *)
                        (pMVar19->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
                        TypeInfo__CollectTheItemCollectable)) {
                      a = (Delegate *)pMVar19[1].fields._.outputLinkRefs;
                      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                                FUN_?(TypeInfo__System__Action);
                      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                      NavMesh_OnNavMeshPreUpdate__ctor
                                (this_01,(Object *)this,
                                 MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__
                                 ,(MethodInfo *)0x0);
                      pMVar2 = (MVCubeModelInstance *)
                                mscorlib.dll::System::Delegate::Delegate_Combine
                                          (a,(Delegate *)this_01,(MethodInfo *)0x0);
                      if (pMVar2 == (MVCubeModelInstance *)0x0) {
                        pMVar19[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
                      }
                      else {
                        pMVar13 = pMVar1;
                        if (pMVar2->klass == (MVCubeModelInstance__Class *)TypeInfo__System__Action
                           ) {
                          pMVar13 = pMVar2;
                        }
                        if (pMVar13 == (MVCubeModelInstance *)0x0) {
                          FUN_?(pMVar2);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pMVar19[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)pMVar13;
                        if (pMVar2->klass == (MVCubeModelInstance__Class *)TypeInfo__System__Action
                           ) {
                          pMVar1 = pMVar2;
                        }
                        if (pMVar1 == (MVCubeModelInstance *)0x0) {
                          FUN_?(pMVar2);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                      }
                      if (iRam_? == 0) {
                        return;
                      }
                      uVar7 = (uint)((ulonglong)&pMVar19[1].fields._.outputLinkRefs >> 0xc);
                      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                      do {
                        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                        LOCK();
                        bVar6 = uVar9 == *puVar10;
                        if (bVar6) {
                          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar6);
                      return;
                    }
                  }
                  PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar20 = *(longlong *)&pMVar13[1].fields._._._.position.z;
        if ((((lVar20 != 0) && (lVar20 = *(longlong *)(lVar20 + 0x178), lVar20 != 0)) &&
            (lVar20 = *(longlong *)(lVar20 + 0x48), lVar20 != 0)) &&
           (lVar20 = *(longlong *)(lVar20 + 0x28), lVar20 != 0)) {
          if (*(uint *)(lVar20 + 0x18) < 2) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(Transform **)(lVar20 + 0x28) != (Transform *)0x0) {
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                               (*(Transform **)(lVar20 + 0x28),(MethodInfo *)0x0);
            pGVar5 = (this->fields).pickup;
            if (((pGVar5 != (GameObject *)0x0) &&
                (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar5,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) &&
               (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pTVar11,(MethodInfo *)0x0),
               pTVar11 != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_14 = 0;
              uStack_15 = 0;
              pvVar16 = (pTVar11->fields)._._.m_CachedPtr;
              if (pvVar16 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
              (*pcRam_?)(pvVar16);
              if (obj == (Transform *)0x0) {
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar16 = (obj->fields)._._.m_CachedPtr;
              if (pvVar16 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
              (*pcRam_?)(pvVar16);
              goto code_?;
            }
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PickupItemCollectTheItem() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem__ctor
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  (this->fields).pickupScale = 0.15;
  (this->fields).shouldSpawnInstanceOnUnequip = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar2 = iRam_? != 0;
  (this->fields)._.meshRenderers = pMVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.meshRenderers >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  bVar2 = cRam_? == '\0';
  (this->fields)._._AbleToFire_k__BackingField = 1;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar7 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar8 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar9 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar10 = ppMVar8;
  if (lVar9 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar9 = lRam_?;
  }
  else {
    do {
      uVar3 = (uint)ppMVar10;
      LOCK();
      bVar2 = uVar3 != uRam_?;
      uVar11 = uVar3;
      uVar12 = uVar3 + 1;
      if (bVar2) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar2) && (ppMVar10 = (MethodInfo **)(ulonglong)uVar11, uVar3 = uVar11, uVar11 != 2)
            );
    while (uVar3 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar3 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar9;
  puVar13 = &(pOVar7->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar13 == 1;
  if (bVar2) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar3 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar7->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar14 == 1;
  if (bVar2) {
    *puVar14 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar3 = GetCurrentThreadId();
    psVar15 = &(pOVar7->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar3 == *psVar15;
    if (bVar2) {
      *psVar15 = (ulonglong)uVar3;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar7->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar13 == 1;
      if (bVar2) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar9._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
      lVar9._4_4_ = (pOVar7->_1).cctor_started;
      if (lVar9 == 0) {
        (pOVar7->_1).initializationExceptionGCHandle = 0;
        (pOVar7->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar9 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar7->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar3 = GetCurrentThreadId();
    LOCK();
    (pOVar7->_1).cctor_thread = (ulonglong)uVar3;
    UNLOCK();
    LOCK();
    (pOVar7->_1).cctor_finished_or_no_cctor = 1;
    uVar3 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar7->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar7);
      ppMVar10 = ppMVar8;
      pIVar17 = (Il2CppClass *)pOVar7;
code_?:
      do {
        if (ppMVar10 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar10 = pIVar17->methods;
            pMVar18 = *ppMVar10;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar8;
                while (ppMVar20 = ppMVar19 + 0x30528cee,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar10 = ppMVar10 + 1;
          if (ppMVar10 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar10;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar10 = ppMVar8;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar7->_1).cctor_thread = 0;
    uVar6 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar7->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar7->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_24 < 0x10) {
code_?:
      lVar9 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar6;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar9 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar9;
        if (iRam_? != 0) {
          uVar3 = (uint)(lVar16 + 0x28U >> 0xc);
          puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar5 = *puVar4;
            LOCK();
            uVar6 = *puVar4;
            if (uVar5 == uVar6) {
              *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar5 != uVar6);
        }
      }
      FUN_?(pOVar7,lVar16);
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17))))
        goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      uVar21 = _UNK_?;
      uVar6 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar7->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}

