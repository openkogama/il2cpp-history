
/* GameObject CreateMeshClone(MVCubeModelInstance) */

GameObject *
Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_CreateMeshClone
          (MVCubeModelInstance *cmb,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  method_00 = in_stack_2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    method_00 = in_stack_2;
  }
  method_05 = (MethodInfo *)0x0;
  puVar3 = (undefined4 *)&stack0xffffff74;
  func_?();
  if ((cmb != (MVCubeModelInstance *)0x0) &&
     (this = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)cmb,(MethodInfo *)0x0), this != (CelestialParam *)0x0)) {
    pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)this,(MethodInfo *)0x0);
    this_00 = (MethodInfo *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              ((GameObject *)this_00,pSVar4,(MethodInfo *)0x0);
    if (this_00 != (MethodInfo *)0x0) {
      method_04 = this_00;
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_00,in_stack_6);
      this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)cmb,(MethodInfo *)0x0);
      if ((this_01 != (MVPointLightObject *)0x0) &&
         (pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             ((Vector3 *)&stack0xffffffc4,(Transform *)this_01,in_stack_8),
         pTVar5 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar5,*pVVar7,in_stack_9);
        pMVar10 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                           ((MVMovingPlatformNode *)cmb,(MethodInfo *)0x0);
        if (pMVar10 != (MVMovingPlatformNode *)0x0) {
          iVar11 = func_?(0);
          while (iVar11 != 0) {
            cVar12 = func_?(1);
            if (cVar12 == '\0') {
              *puVar3 = 0x11f;
              iVar11 = func_?();
              if (iVar11 != 0) {
                func_?(0);
              }
              if (method_05 == (MethodInfo *)0x0) {
                *unaff_FS_OFFSET = puStack_1;
                return (GameObject *)this_00;
              }
              goto code_?;
            }
            piVar13 = (int *)func_?(0);
            if (piVar13 == (int *)0x0) break;
            if (*(Il2CppClass **)(*piVar13 + 0x20) !=
                (
                TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                ->_0).element_class) goto code_?;
            puVar3 = (undefined4 *)func_?();
            method_03 = (MVGameControllerBase__Class *)*puVar3;
            pQVar14 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
                      SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                                ((Quaternion *)&stack0xffffffa8,
                                 (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)
                                 &stack0xffffff80,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                                );
            original = (MethodInfo *)pQVar14->x;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            method_02 = original;
            method_01 = (MethodInfo *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                  ((XpBoostParticlePreviewer *)original,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  );
            if (method_01 == (MethodInfo *)0x0) break;
            this_05 = method_01;
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponent_47
                                ((GameObject *)method_01,
                                 UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                );
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              method_03 = TypeInfo__MVGameControllerBase;
              func_?();
            }
            this_03 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                ((MethodInfo *)0x0);
            if ((this_03 == (MaterialLoader *)0x0) ||
               (pSVar4 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                         NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                   ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,
                                    (MethodInfo *)0x0), this_02 == (UseInteractorHandler *)0x0))
            break;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      ((Renderer *)this_02,(Material *)pSVar4,(MethodInfo *)method_03);
            pUVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponentsInChildren_29
                                ((GameObject *)method_01,
                                 UnityEngine__Collider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Collider>______
                                );
            if (pUVar15 == (UseInteratorVisualization__Array *)0x0) break;
            iVar16 = pUVar15->max_length;
            while (iVar16 = iVar16 - 1, -1 < (int)iVar16) {
              this_04 = (Collider *)func_?();
              if (this_04 == (Collider *)0x0) goto code_?;
              UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                        (this_04,0,method_02);
            }
            if (((this_05 == (MethodInfo *)0x0) ||
                (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform((GameObject *)this_05,(MethodInfo *)0x0),
                this_00 == (MethodInfo *)0x0)) ||
               (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform((GameObject *)this_00,(MethodInfo *)method_03),
               pTVar5 == (Transform *)0x0)) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar5,pTVar17,method_01);
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)this_05,(MethodInfo *)0x0);
            if (((original == (MethodInfo *)0x0) ||
                (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform((GameObject *)original,in_stack_18),
                pTVar17 == (Transform *)0x0)) ||
               (pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localPosition((Vector3 *)&stack0xffffffc4,pTVar17,method_00),
               pTVar5 == (Transform *)0x0)) break;
            method_00 = (MethodInfo *)pVVar7->x;
            in_stack_18 = (MethodInfo *)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar5,*pVVar7,in_stack_19);
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)this_05,(MethodInfo *)0x0);
            pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                ((GameObject *)original,(MethodInfo *)0x0);
            if ((pTVar17 == (Transform *)0x0) ||
               (pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localRotation
                                    ((Quaternion *)&stack0xffffff98,pTVar17,method_04),
               pTVar5 == (Transform *)0x0)) break;
            method_04 = (MethodInfo *)pQVar14->y;
            puVar3 = (undefined4 *)pQVar14->z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar5,*pQVar14,method_05);
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)this_05,(MethodInfo *)0x0);
            pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                ((GameObject *)original,(MethodInfo *)0x0);
            if ((pTVar17 == (Transform *)0x0) ||
               (pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localScale((Vector3 *)&stack0xffffffb8,pTVar17,method),
               pTVar5 == (Transform *)0x0)) break;
            uVar20 = pVVar7->x;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar5,*pVVar7,in_stack_21);
            method = (MethodInfo *)uVar20;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  method_05 = (MethodInfo *)func_?();
code_?:
  func_?(method_05);
  pcVar22 = (code *)swi(3);
  pGVar23 = (GameObject *)(*pcVar22)();
  return pGVar23;
}


/* Void ForceUnequipPickup() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_ForceUnequipPickup
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).shouldSpawnInstanceOnUnequip = 0;
  this_00 = (this->fields)._.owner;
  if (this_00 != (MVPickupOwner *)0x0) {
    this_01 = (DayNightCycle *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                          *)this_00,(MethodInfo *)0x0);
    if (this_01 != (DayNightCycle *)0x0) {
      this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
      if (this_02 != (CelestialParam *)0x0) {
        x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                      ((GameObject *)this_02,
                       MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__)
        ;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          if (x == (UseInteractorHandler *)0x0) goto code_?;
          (*(code *)x->klass[1]._0.namespaze)(x,x->klass[1]._0.byval_arg.data.dummy);
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnDestroy
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar3,(this->fields).spawnerId,(MethodInfo *)0x0);
    iVar5 = func_?(pMVar4,TypeInfo__CollectTheItemCollectable);
    if (iVar5 != 0) {
      pDVar6 = *(Delegate **)(iVar5 + 0xfc);
      pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar7,(Object *)this,
                 MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
                 (MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                          (pDVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
      pDVar6 = (Delegate *)0x0;
      if (pDVar8 != (Delegate *)0x0) {
        if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
          pDVar6 = pDVar8;
        }
        pAVar9 = (Action_1_Boolean___Class *)TypeInfo__System__Action;
        if (pDVar6 == (Delegate *)0x0) goto code_?;
      }
      *(Delegate **)(iVar5 + 0xfc) = pDVar6;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar3,(this->fields).dropOffId,(MethodInfo *)0x0);
      iVar5 = func_?(pMVar4,TypeInfo__CollectTheItemDropOff);
      if (iVar5 == 0) {
        return;
      }
      pDVar6 = *(Delegate **)(iVar5 + 0x140);
      pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar7,(Object *)this,
                 MethodInfo__PickupItemCollectTheItem__OnDropoffActivated_bool_,
                 MethodInfo__System__Action<bool>__Action_System__Object__void__);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                          (pDVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
      pDVar6 = (Delegate *)0x0;
      if (pDVar8 != (Delegate *)0x0) {
        if ((Action_1_Boolean___Class *)pDVar8->klass == TypeInfo__System__Action<bool>) {
          pDVar6 = pDVar8;
        }
        pAVar9 = TypeInfo__System__Action<bool>;
        if (pDVar6 == (Delegate *)0x0) goto code_?;
      }
      *(Delegate **)(iVar5 + 0x140) = pDVar6;
      pOVar10 = (this->fields).arrow;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pOVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      pMVar11 = (this->fields).woDropOff;
      if (pMVar11 != (MVWorldObjectClient *)0x0) {
        source = (pMVar11->fields).PositionChanged;
        pOVar10 = (this->fields).arrow;
        pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar7,(Object *)pOVar10,
                   MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                  );
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)source,(Delegate *)pUVar7,(MethodInfo *)0x0);
        pUVar12 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        uVar13 = func_?(pDVar6);
        (pUVar12->_1).initializationExceptionGCHandle = uVar13;
      }
      pOVar10 = (this->fields).arrow;
      if (pOVar10 != (ObjectiveArrow *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pOVar10,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        (this->fields).arrow = (ObjectiveArrow *)0x0;
        return;
      }
    }
  }
  func_?(0);
  pDVar8 = extraout_ECX;
  pAVar9 = extraout_EDX;
code_?:
  func_?(pDVar8,pAVar9);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDropoffActivated(Boolean) */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnDropoffActivated
               (PickupItemCollectTheItem *this,bool shouldStayEquipped,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (shouldStayEquipped != 0) {
    return;
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    pXVar1 = (XpBoostParticlePreviewer *)
             PrefabPool::PrefabPool_get_CollectTheItemParticles(this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                       );
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pXVar1,(MethodInfo *)0x0);
      pGVar2 = (this->fields).pickup;
      if (((pGVar2 != (GameObject *)0x0) &&
          (this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0), this_03 != (Transform *)0x0)) &&
         (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,this_03,(MethodInfo *)0x0),
         this_02 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_02,*pVVar3,(MethodInfo *)0x0);
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)(this->fields).arrow,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          this_00 = (this->fields).arrow;
          if ((this_00 == (ObjectiveArrow *)0x0) ||
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0),
             pGVar2 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
        }
        text = TM::TM__(StringLiteral_A_player_has_delivered_the_carri,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
          func_?();
        }
        NotificationController::NotificationController_PushNotification
                  (text,(Sprite *)0x0,7,(MethodInfo *)0x0);
        PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::
     PickupItemCollectTheItem_OnEnterVehicleWithWeapon
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).arrow;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pOVar1 = (this->fields).arrow;
  if ((pOVar1 != (ObjectiveArrow *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pOVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
  {
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
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    (this->fields)._.originalParent = pTVar1;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      (this->fields)._.originalPos.x = pVVar2->x;
      (this->fields)._.originalPos.y = fVar4;
      (this->fields)._.originalPos.z = fVar5;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
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
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).arrow;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pOVar1 = (this->fields).arrow;
  if ((pOVar1 != (ObjectiveArrow *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pOVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
  {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).pickup;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((newState == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pDVar2 = (Dictionary_2_System_Type_Pool_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_itemData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pDVar2 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
  bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (pDVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)0x0;
  if (bVar4) {
    this_00 = pDVar2;
  }
  if (this_00 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
  pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_00,(Type *)StringLiteral_CollectTheItemCollectableId,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pPVar5 == (Pool *)0x0) {
code_?:
    func_?();
  }
  else if ((pPVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar6 = (int32_t *)func_?();
    iVar7 = *piVar6;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
      pCVar9 = (CollectTheItemCollectable *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar8,iVar7,(MethodInfo *)0x0);
      if (pCVar9 == (CollectTheItemCollectable *)0x0) {
code_?:
        PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
        return;
      }
      bVar3 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
      if (((pCVar9->klass->_1).naturalAligment < bVar3) ||
         ((CollectTheItemCollectable__Class *)(pCVar9->klass->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__CollectTheItemCollectable)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      this_02 = (CollectTheItemCollectable *)0x0;
      if (bVar4) {
        this_02 = pCVar9;
      }
      if (this_02 == (CollectTheItemCollectable *)0x0) goto code_?;
      iVar10 = CollectTheItemCollectable::CollectTheItemCollectable_get_CollectableModelId
                         (this_02,(MethodInfo *)0x0);
      (this->fields).cubeModelKeyId = iVar10;
      (this->fields).spawnerId = iVar7;
      iVar7 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                         (this_02,(MethodInfo *)0x0);
      (this->fields).dropOffId = iVar7;
      if (((this->fields).cubeModelKeyId == -1) || (iVar7 == -1)) goto code_?;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
        wo = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar8,(this->fields).cubeModelKeyId,(MethodInfo *)0x0);
        if (wo == (MVWorldObjectClient *)0x0) {
          return;
        }
        PickupItemCollectTheItem_SetupPickupWo(this,wo,(MethodInfo *)0x0);
        pMVar11 = (this->fields)._.owner;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pCVar9 = (CollectTheItemCollectable *)0x0;
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pMVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          return;
        }
        pMVar11 = (this->fields)._.owner;
        if (pMVar11 != (MVPickupOwner *)0x0) {
          bVar1 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar11,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            return;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar8,(this->fields).dropOffId,(MethodInfo *)0x0);
            iVar12 = func_?();
            if (iVar12 == 0) {
              return;
            }
            pAStack13 = TypeInfo__System__Action<bool>;
            a = *(Delegate **)(iVar12 + 0x140);
            this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_01,(Object *)this,
                       MethodInfo__PickupItemCollectTheItem__OnDropoffActivated_bool_,
                       MethodInfo__System__Action<bool>__Action_System__Object__void__);
            mscorlib.dll::System::Delegate::Delegate_Combine
                      (a,(Delegate *)this_01,(MethodInfo *)0x0);
            uVar14 = func_?();
            *(undefined4 *)(iVar12 + 0x140) = uVar14;
            bVar1 = CollectTheItemCollectable::CollectTheItemCollectable_get_HasArrowIndicator
                              (pCVar9,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              return;
            }
            PickupItemCollectTheItem_SetupDropOffArrow
                      (this,(this->fields).dropOffId,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_OnUnequip
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.owner;
  if (this_00 != (MVPickupOwner *)0x0) {
    bVar1 = MVPickupOwner::MVPickupOwner_get_IsLocal(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pCVar2 = (CollectTheItemCollectable *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,(this->fields).spawnerId,(MethodInfo *)0x0);
      if (pCVar2 == (CollectTheItemCollectable *)0x0) {
        return;
      }
      bVar3 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
      if (((pCVar2->klass->_1).naturalAligment < bVar3) ||
         ((CollectTheItemCollectable__Class *)(pCVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__CollectTheItemCollectable)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      this_03 = (CollectTheItemCollectable *)0x0;
      if (bVar4) {
        this_03 = pCVar2;
      }
      if (this_03 == (CollectTheItemCollectable *)0x0) {
        return;
      }
      pAVar5 = (this_03->fields).OnCollectTheItemDestroyed;
      this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_04,(Object *)this,
                 MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
                 (MethodInfo *)0x0);
      pAVar6 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar5,(Delegate *)this_04,(MethodInfo *)0x0);
      pAVar5 = (Action *)0x0;
      if (pAVar6 != (Action *)0x0) {
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar6;
        }
        pAVar7 = TypeInfo__System__Action;
        if (pAVar5 == (Action *)0x0) goto code_?;
      }
      (this_03->fields).OnCollectTheItemDestroyed = pAVar5;
      if ((this->fields).shouldSpawnInstanceOnUnequip == 0) {
        return;
      }
      this_01 = (this->fields).pickup;
      if ((this_01 != (GameObject *)0x0) &&
         (this_05 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_01,(MethodInfo *)0x0), this_05 != (Transform *)0x0)) {
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_9,this_05,(MethodInfo *)0x0);
        CollectTheItemCollectable::CollectTheItemCollectable_CreateCollectableInstance
                  (this_03,*pVVar8,(Quaternion)ZEXT816(0),(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pAVar6 = extraout_ECX;
  pAVar7 = extraout_EDX;
code_?:
  func_?(pAVar6,pAVar7);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnWorldObjectSpawnerDestroyed() */

void Assembly-CSharp.dll::PickupItemCollectTheItem::
     PickupItemCollectTheItem_OnWorldObjectSpawnerDestroyed
               (PickupItemCollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).arrow;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pOVar1 = (this->fields).arrow;
  if ((pOVar1 != (ObjectiveArrow *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pOVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
  {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,dropoffId,(MethodInfo *)0x0);
    (this->fields).woDropOff = pMVar1;
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar2 != (PrefabPool *)0x0) {
      pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(pPVar2,(MethodInfo *)0x0)
      ;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pOVar3 = (ObjectiveArrow *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pOVar3,
                          ObjectiveArrow_MethodInfo__UnityEngine__Object__Instantiate<ObjectiveArrow>_ObjectiveArrow_
                         );
      (this->fields).arrow = pOVar3;
      pMVar1 = (this->fields).woDropOff;
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        pUVar4 = (pMVar1->fields).PositionChanged;
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)pOVar3,
                   MethodInfo__ObjectiveArrow__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                  );
        pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar4,(Delegate *)this_01,(MethodInfo *)0x0);
        pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        if (pUVar5 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          if (pUVar5->klass ==
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
             ) {
            pUVar4 = pUVar5;
          }
          pUVar6 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
          goto code_?;
        }
        (pMVar1->fields).PositionChanged = pUVar4;
        pOVar3 = (this->fields).arrow;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xfffffff0,pTVar7,(MethodInfo *)0x0);
          uVar9._0_4_ = pVVar8->x;
          uVar9._4_4_ = pVVar8->y;
          fVar10 = pVVar8->z;
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)&stack0xffffffdc,pTVar7,(MethodInfo *)0x0);
            VVar11 = *pVVar8;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                ((Vector3 *)&stack0xffffffdc,VVar11,2.0,(MethodInfo *)0x0);
            VVar11.z = fVar10;
            VVar11.x = (float)(int)uVar9;
            VVar11.y = (float)(int)((ulonglong)uVar9 >> 0x20);
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffffdc,VVar11,*pVVar8,(MethodInfo *)0x0);
            uVar12._0_4_ = pVVar8->x;
            uVar12._4_4_ = pVVar8->y;
            fVar10 = pVVar8->z;
            pPVar2 = (PrefabPool *)(this->fields).woDropOff;
            if (pPVar2 != (PrefabPool *)0x0) {
              dropOff = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar2,(MethodInfo *)0x0);
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
              if (pOVar3 != (ObjectiveArrow *)0x0) {
                startPos.z = fVar10;
                startPos.x = (float)(int)uVar12;
                startPos.y = (float)(int)((ulonglong)uVar12 >> 0x20);
                ObjectiveArrow::ObjectiveArrow_Initialize
                          (pOVar3,startPos,(Transform *)dropOff,pTVar7,(MethodInfo *)0x0);
                pOVar3 = (this->fields).arrow;
                if (pOVar3 != (ObjectiveArrow *)0x0) {
                  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)pOVar3,(MethodInfo *)0x0);
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
      }
    }
  }
  func_?();
  pUVar5 = extraout_ECX;
  pUVar6 = extraout_EDX;
code_?:
  func_?(pUVar5,pUVar6);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetupPickupWo(MVWorldObjectClient) */

void Assembly-CSharp.dll::PickupItemCollectTheItem::PickupItemCollectTheItem_SetupPickupWo
               (PickupItemCollectTheItem *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    cmb = (MVCubeModelInstance *)0x0;
code_?:
    pGVar1 = PickupItemCollectTheItem_CreateMeshClone(cmb,(MethodInfo *)0x0);
    (this->fields).pickup = pGVar1;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (pTVar2,(this->fields).cubeModelAttachPoint,(MethodInfo *)0x0);
    this_00 = (this->fields)._.owner;
    if (this_00 == (MVPickupOwner *)0x0) goto code_?;
    pMVar3 = (MVAvatar *)
             System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)this_00,(MethodInfo *)0x0);
    if (pMVar3 == (MVAvatar *)0x0) {
      this_06 = (MVAvatar *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVAvatar->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVAvatar__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] != TypeInfo__MVAvatar)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      this_06 = (MVAvatar *)0x0;
      if (bVar5) {
        this_06 = pMVar3;
      }
    }
    pGVar1 = (this->fields).pickup;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar2,(Quaternion)ZEXT816(0),(MethodInfo *)0x0);
    if (this_06 != (MVAvatar *)0x0) {
      this_01 = MVAvatar::MVAvatar_get_Body(this_06,(MethodInfo *)0x0);
      if (this_01 == (MVBody *)0x0) goto code_?;
      this_02 = MVBody::MVBody_get_BodyData(this_01,(MethodInfo *)0x0);
      if (this_02 == (BodyData *)0x0) goto code_?;
      pTVar2 = BodyData::BodyData_GetPartBone
                         (this_02,BodyData_PartIndex__Enum_Torso,(MethodInfo *)0x0);
      if (pTVar2 == (Transform *)0x0) goto code_?;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar2,(MethodInfo *)0x0);
      pGVar1 = (this->fields).pickup;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar1,(MethodInfo *)0x0);
      if (pTVar2 == (Transform *)0x0) goto code_?;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pTVar2,(MethodInfo *)0x0);
      if (pTVar2 == (Transform *)0x0) goto code_?;
      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
      if (this_03 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_03,*pQVar6,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).pickup;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    fVar7 = 0.0;
    uVar8 = 0;
    uVar9 = 0;
    func_?();
    if (pTVar2 == (Transform *)0x0) goto code_?;
    value.y = (float)uVar9;
    value.x = (float)uVar8;
    value.z = fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar2,value,(MethodInfo *)0x0);
    pGVar1 = (this->fields).pickup;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    fVar7 = 0.0;
    func_?();
    if (pTVar2 == (Transform *)0x0) goto code_?;
    auVar10._4_8_ = 0;
    auVar10._0_4_ = fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar2,(Vector3)(auVar10 << 0x40),(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_04,(this->fields).spawnerId,(MethodInfo *)0x0);
    if (pMVar11 == (MVWorldObject *)0x0) {
code_?:
      PickupItemCollectTheItem_ForceUnequipPickup(this,(MethodInfo *)0x0);
      return;
    }
    bVar4 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
    if (((pMVar11->klass->_1).naturalAligment < bVar4) ||
       ((CollectTheItemCollectable__Class *)(pMVar11->klass->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__CollectTheItemCollectable)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar12 = (MVWorldObject *)0x0;
    if (bVar5) {
      pMVar12 = pMVar11;
    }
    if (pMVar12 == (MVWorldObject *)0x0) goto code_?;
    pDVar13 = (Delegate *)pMVar12[2].fields.ownerActorNr;
    this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_05,(Object *)this,
               MethodInfo__PickupItemCollectTheItem__OnWorldObjectSpawnerDestroyed__,
               (MethodInfo *)0x0);
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar13,(Delegate *)this_05,(MethodInfo *)0x0);
    pDVar13 = (Delegate *)0x0;
    if (pDVar14 == (Delegate *)0x0) {
code_?:
      pMVar12[2].fields.ownerActorNr = (int32_t)pDVar13;
      return;
    }
    if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
      pDVar13 = pDVar14;
    }
    if (pDVar13 != (Delegate *)0x0) goto code_?;
  }
  else {
    bVar4 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar4) ||
       ((MVCubeModelInstance__Class *)(wo->klass->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    cmb = (MVCubeModelInstance *)0x0;
    if (bVar5) {
      cmb = (MVCubeModelInstance *)wo;
    }
    if (cmb != (MVCubeModelInstance *)0x0) goto code_?;
    func_?(wo,TypeInfo__MVCubeModelInstance);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar2 = (MeshRenderer__Array *)func_?(TypeInfo__UnityEngine__MeshRenderer,0);
  (this->fields)._.meshRenderers = pMVar2;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

