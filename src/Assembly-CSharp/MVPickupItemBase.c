
/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_CheckCanUse
               (MVPickupItemBase *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  if (avatarInteractable != (MVInteractableBase *)0x0) {
    cVar1 = (*(avatarInteractable->klass->vtable).__unknown_7.methodPtr)
                      (avatarInteractable,7,(avatarInteractable->klass->vtable).__unknown_7.method);
    if (cVar1 == '\0') {
      cVar1 = (*(avatarInteractable->klass->vtable).__unknown_7.methodPtr)(avatarInteractable,8);
      if ((cVar1 == '\0') && ((this->fields).canPickUp != 0)) {
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
        instigator = MVWorldObjectClientManager::
                     MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                               (this_00,woId,(MethodInfo *)0x0);
        bVar2 = MVPickupItemBase_ShouldDoAutoPickup(this,instigator,(MethodInfo *)0x0);
        if (bVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          bVar2 = (*(this->klass->vtable).CheckCanUse.methodPtr)
                            (this,(this->klass->vtable).CheckCanUse.method);
          return bVar2;
        }
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_Destroy
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._BaseObject_k__BackingField;
  if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar3,(Object *)this,
               MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._BaseObject_k__BackingField;
      if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
          if ((this->fields).useInteractor != (UseInteractor *)0x0) {
            pMVar1 = (this->fields)._BaseObject_k__BackingField;
            if (pMVar1 == (MVPickupItemBaseObject *)0x0) goto code_?;
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar3,(Object *)pUVar4,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 == (TriggerBoxEvents *)0x0) goto code_?;
            TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                      (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
            pMVar1 = (this->fields)._BaseObject_k__BackingField;
            if (pMVar1 == (MVPickupItemBaseObject *)0x0) goto code_?;
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar3,(Object *)pUVar4,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 == (TriggerBoxEvents *)0x0) goto code_?;
            TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                      (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
            pUVar4 = (this->fields).useInteractor;
            if ((pUVar4 == (UseInteractor *)0x0) ||
               (this_00 = (pUVar4->fields).useInteractorVisuals,
               this_00 == (UseInteractorVisualization *)0x0)) goto code_?;
            UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
                      (this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
            bVar5 = iRam_? != 0;
            (this->fields).useInteractor = (UseInteractor *)0x0;
            if (bVar5) {
              uVar6 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
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
          }
          if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
            FUN_?();
          }
          UpdateController::UpdateController_RemoveUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UpdateController);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
            FUN_?();
          }
          UpdateController::UpdateController_RemoveUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
          if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
            CullingSubscriberBase::CullingSubscriberBase_Destroy
                      ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
            bVar5 = iRam_? != 0;
            (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
            if (bVar5) {
              uVar6 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
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
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar10 = (this->fields)._._.gameObject;
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
          if (pGVar10 != (GameObject *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pGVar10->fields)._.m_CachedPtr != (void *)0x0) {
              pGVar10 = (this->fields)._._.gameObject;
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
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                        ((Object_1 *)pGVar10,0.0,(MethodInfo *)0x0);
            }
          }
          if ((this->fields)._._.initializedFromInventory != 0) {
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar11 != (MVGameControllerBase *)0x0) &&
             (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) {
            pRVar13 = (pMVar12->fields).runtimeVariableNetworkManager;
            item = (this->fields)._._._.id;
            if (pRVar13 != (RuntimeVariableNetworkManager *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar13->fields).runtimeDataVariables;
              if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
                bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]
                         ::HashSet_1_System_Int32Enum__Contains
                                   (this_01,item,
                                    MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                   );
                if (bVar14 != 0) {
                  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar12 == (MVNetworkGame *)0x0) ||
                     (pRVar13 = (pMVar12->fields).runtimeVariableNetworkManager,
                     pRVar13 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
                  RuntimeVariableNetworkManager::
                  RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                            (pRVar13,(this->fields)._._._.id,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
DAT_?:
          FUN_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean DoPickup(Int32) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_DoPickup
               (MVPickupItemBase *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields)._PlayerController_k__BackingField,
     this_00 != (MVLocalObjectController *)0x0)) {
    bVar3 = MVLocalObjectController::MVLocalObjectController_get_IsEnteringVehicle
                      (this_00,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_03 == (MVWorldObjectClientManager *)0x0) ||
          (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (this_03,instigatorWOID,(MethodInfo *)0x0),
          pMVar4 == (MVWorldObjectClient *)0x0)) ||
         ((pGVar5 = (pMVar4->fields).gameObject, pGVar5 == (GameObject *)0x0 ||
          (pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                               (pGVar5,
                                MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                               ), pOVar6 == (Object *)0x0)))) goto code_?;
      cVar7 = (*(code *)pOVar6->klass[1]._0.fields)(pOVar6,7,pOVar6->klass[1]._0.events);
      if (cVar7 == '\0') {
        pGVar5 = (pMVar4->fields).gameObject;
        if (pGVar5 == (GameObject *)0x0) goto code_?;
        pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (pGVar5,
                             MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                            );
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
        if (pOVar6 != (Object *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pOVar6[1].klass != (Object__Class *)0x0) {
            pEVar8 = PrefabPool::PrefabPool_GetPickupPrefab
                                (&EStack_9,(this->fields).pickupItemType,
                                 (this->fields)._._._.itemId,(MethodInfo *)0x0);
            iVar10 = (this->fields)._._._.itemId;
            EStack_9.prefabObject = pEVar8->prefabObject;
            EStack_9._8_8_ = *(undefined8 *)&pEVar8->equipableType;
            if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                         ->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar3 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                    MeleeWeaponData_IsLegacySword(iVar10,(MethodInfo *)0x0);
            iVar10 = 1;
            if (bVar3 == 0) {
              iVar10 = (this->fields).pickupVariantId;
            }
            iVar11 = (this->fields).pickupItemType;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           );
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
              FUN_?(&StringLiteral_itemData);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)(this->fields)._._._.data;
            if (this_01 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
              iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                (this_01,(Object *)StringLiteral_itemData,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 ->klass->rgctx_data[0x21].method);
              if (iVar12 < 0) {
                pOVar13 = (Object *)0x0;
              }
              else {
                this_02 = (this->fields)._._._.data;
                if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                goto code_?;
                pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (this_02,(Object *)StringLiteral_itemData,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar13 != (Object *)0x0) {
                  bVar14 = (
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          ->_1).naturalAligment;
                  if (((pOVar13->klass->_1).naturalAligment < bVar14) ||
                     ((Dictionary_2_System_Object_System_Object___Class *)
                      (pOVar13->klass->_1).typeHierarchy[(ulonglong)bVar14 - 1] !=
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     )) {
                    FUN_?(pOVar13);
                    pcVar15 = (code *)swi(3);
                    bVar3 = (*pcVar15)();
                    return bVar3;
                  }
                }
              }
              cVar7 = FUN_?(EStack_9._8_8_,pOVar6,iVar11,EStack_9._8_8_ & 0xffffffff,
                                    pOVar13,iVar10);
              if (cVar7 == '\0') {
                return 0;
              }
              this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                          (this_04,(this->fields)._._._.id,instigatorWOID,(MethodInfo *)0x0);
                (this->fields).canPickUp = 0;
                return 1;
              }
            }
            goto code_?;
          }
        }
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar3 = (*pcVar15)();
  return bVar3;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVPickupItemBase *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  fVar4 = VStack_2.x * TypeRef__System__Activator__T._0_4_;
  fVar5 = VStack_2.y + VStack_2.y;
  this_00 = (this->fields)._._.gameObject;
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
    QStack_6.x = 0.0;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,&QStack_6);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2.z = position->z;
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    aQStack_11[0].x = QStack_6.x;
    aQStack_11[0].y = QStack_6.y;
    aQStack_11[0].z = QStack_6.z;
    aQStack_11[0].w = QStack_6.w;
    VStack_12.y = fVar5;
    VStack_12.x = fVar4;
    VStack_12.z = fVar3 + fVar3;
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_6,&VStack_2,aQStack_11,gridSize,&VStack_12,
                        (MethodInfo *)0x0);
    fVar5 = pVVar9->y;
    fVar3 = pVVar9->z;
    __return_storage_ptr__->x = pVVar9->x;
    __return_storage_ptr__->y = fVar5;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* ObjectPrefab GetPickupPrefabName(Dictionary`2[System.Object,System.Object]) */

ObjectPrefab *
Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_GetPickupPrefabName
          (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
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
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] = 7;
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this = (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (data,pOVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
    if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((this->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(this,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        pcVar3 = (code *)swi(3);
        pOVar4 = (ObjectPrefab *)(*pcVar3)();
        return pOVar4;
      }
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this,(Object *)StringLiteral_itemType,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      auStackX_8[0] = 2;
      pOVar5 = (Object *)
               FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar5,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar5 != (Object *)0x0) {
        if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar5,lRam_?);
          pcVar3 = (code *)swi(3);
          pOVar4 = (ObjectPrefab *)(*pcVar3)();
          return pOVar4;
        }
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class ==
              (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
            pEVar6 = PrefabPool::PrefabPool_GetPickupPrefab
                               (&EStack_7,*(AvatarItemType__Enum *)&pOVar1[1].klass,
                                *(int32_t *)&pOVar5[1].klass,(MethodInfo *)0x0);
            return pEVar6->prefabObject;
          }
          FUN_?(pOVar1);
          pcVar3 = (code *)swi(3);
          pOVar4 = (ObjectPrefab *)(*pcVar3)();
          return pOVar4;
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      pOVar4 = (ObjectPrefab *)(*pcVar3)();
      return pOVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pOVar4 = (ObjectPrefab *)(*pcVar3)();
  return pOVar4;
}


/* Void HandleStateChange(PickupItemState) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_HandleStateChange
               (MVPickupItemBase *this,PickupItemState__Enum state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (state == PickupItemState__Enum_Listening) {
    pMVar1 = (this->fields)._BaseObject_k__BackingField;
    (this->fields).canPickUp = 1;
    if ((pMVar1 != (MVPickupItemBaseObject *)0x0) &&
       (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._BaseObject_k__BackingField;
      if ((pMVar1 != (MVPickupItemBaseObject *)0x0) &&
         ((pTVar3 = (pMVar1->fields).triggerBoxEvents, pTVar3 != (TriggerBoxEvents *)0x0 &&
          (pCVar4 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0),
          pCVar4 != (Collider *)0x0)))) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pCVar4 == (Collider *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar6 = (pCVar4->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar4,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar6,1);
        return;
      }
    }
  }
  else {
    if (state != PickupItemState__Enum_Pickup) {
      return;
    }
    pMVar1 = (this->fields)._BaseObject_k__BackingField;
    if ((pMVar1 != (MVPickupItemBaseObject *)0x0) &&
       (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._BaseObject_k__BackingField;
      if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
        pAVar8 = (pMVar1->fields).audioSource;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pAVar8,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          pMVar1 = (this->fields)._BaseObject_k__BackingField;
          if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
             (pAVar8 = (pMVar1->fields).audioSource, pAVar8 == (AudioSource *)0x0))
          goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar8,(MethodInfo *)0x0);
        }
        pMVar1 = (this->fields)._BaseObject_k__BackingField;
        (this->fields).canPickUp = 0;
        if (((pMVar1 != (MVPickupItemBaseObject *)0x0) &&
            (pTVar3 = (pMVar1->fields).triggerBoxEvents, pTVar3 != (TriggerBoxEvents *)0x0)) &&
           (pCVar4 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0),
           pCVar4 != (Collider *)0x0)) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar4,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void IUpdatecontrollerSubscriberUpdate.UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVPickupItemBase::
     MVPickupItemBase_IUpdatecontrollerSubscriberUpdate_UpdateControllerUpdate
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).canPickUp != 0) {
    pLVar1 = (this->fields).instigatorsInTrigger;
    if (pLVar1 == (List_1_System_Int32_ *)0x0) {
DAT_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar3 = (pLVar1->fields)._size - 1;
    if (-1 < (int)uVar3) {
      lVar4 = (longlong)(int)uVar3 * 4 + 0x20;
      do {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar5 == (MVGameControllerBase *)0x0) ||
           (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) goto DAT_?;
        pMVar7 = (MVWorldObjectClientManagerNetwork *)0x0;
        if ((pMVar6->fields).worldNetwork != (WorldNetwork *)0x0) {
          pMVar7 = (((pMVar6->fields).worldNetwork)->fields)._.worldObjectClientManager;
        }
        pLVar1 = (this->fields).instigatorsInTrigger;
        if (pLVar1 == (List_1_System_Int32_ *)0x0) goto DAT_?;
        if ((uint)(pLVar1->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pIVar8 = (pLVar1->fields)._items;
        if (pIVar8 == (Int32__Array *)0x0) goto DAT_?;
        if ((uint)pIVar8->max_length <= uVar3) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = *(int32_t *)((longlong)pIVar8->vector + lVar4 + -0x20);
        if (pMVar7 == (MVWorldObjectClientManagerNetwork *)0x0) goto DAT_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar7->fields)._.worldObjects;
        pOStackX_8 = (Object *)0x0;
        if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar9,&pOStackX_8,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        pLVar1 = (this->fields).instigatorsInTrigger;
        if (pLVar1 == (List_1_System_Int32_ *)0x0) goto DAT_?;
        if (pOStackX_8 == (Object *)0x0) {
          FUN_?(pLVar1,uVar3);
        }
        else {
          iVar9 = FUN_?();
          bVar10 = MVPickupItemBase_ShouldDoAutoPickup(this,iVar9,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            pLVar1 = (this->fields).instigatorsInTrigger;
            if (pLVar1 == (List_1_System_Int32_ *)0x0) goto DAT_?;
            iVar9 = FUN_?(pLVar1,uVar3);
            MVPickupItemBase_DoPickup(this,iVar9,(MethodInfo *)0x0);
          }
        }
        lVar4 = lVar4 + -4;
        uVar3 = uVar3 - 1;
      } while (-1 < (int)uVar3);
    }
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_Initialize
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVPickupItemBase_SetupUseInteractor(this,(MethodInfo *)0x0);
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this,(this->klass->vtable).OnDataUpdate.method);
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_00,(this->fields)._._._.data,(pUVar1->fields).woOwnerID,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._BaseObject_k__BackingField;
    if ((pMVar2 != (MVPickupItemBaseObject *)0x0) &&
       (((pGVar3 = (pMVar2->fields).pickupItem, pGVar3 != (GreyOutObjectScript *)0x0 &&
         (this_01 = (pGVar3->fields).pickupObject, this_01 != (GameObject *)0x0)) &&
        (pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                             (this_01,
                              RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                             ), pOVar4 != (Object *)0x0)))) {
      *(undefined4 *)&pOVar4[2].klass = 0x42880000;
      pMVar2 = (this->fields)._BaseObject_k__BackingField;
      if ((pMVar2 != (MVPickupItemBaseObject *)0x0) &&
         (pGVar3 = (pMVar2->fields).pickupItem, pGVar3 != (GreyOutObjectScript *)0x0)) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pGVar3->fields).pickupObject,
                   TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
        pCVar5 = (this->fields)._.cullingSubscriberBase;
        if (pCVar5 != (CullingSubscriberBase *)0x0) {
          (pCVar5->fields)._DistanceBandIndex_k__BackingField = 2;
          if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
            FUN_?();
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)this,
                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
          pMVar2 = (this->fields)._BaseObject_k__BackingField;
          if (pMVar2 != (MVPickupItemBaseObject *)0x0) {
            pTVar6 = (pMVar2->fields).triggerBoxEvents;
            pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar7,(Object *)this,
                       MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar6 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar7,(MethodInfo *)0x0);
              pMVar2 = (this->fields)._BaseObject_k__BackingField;
              if (pMVar2 != (MVPickupItemBaseObject *)0x0) {
                pTVar6 = (pMVar2->fields).triggerBoxEvents;
                pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar7,(Object *)this,
                           MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar6 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar7,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__PrefabPool);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
                  if ((pPVar8 != (PrefabPool *)0x0) &&
                     (pDVar9 = (pPVar8->fields).pickupPrefabLUT,
                     pDVar9 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0)) {
                    lVar10 = FUN_?(auStack_11,pDVar9,(this->fields).pickupItemType);
                    if (*(int *)(lVar10 + 8) != 0) {
                      return;
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
                         (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
                        (this_02 = (pMVar13->fields).playerContainer,
                        this_02 != (MVPlayerContainer *)0x0)) &&
                       ((pMVar14 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                             (this_02,(MethodInfo *)0x0),
                        pMVar14 != (MVLocalPlayer *)0x0 &&
                        (this_03 = (pMVar14->fields).boostController,
                        this_03 != (BoostController *)0x0)))) {
                      BoostController::BoostController_AllowBoost
                                (this_03,BoostType__Enum_AmmoIntMultiplier,1,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_InitializeInventory
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pGVar1 = (this->fields)._._.gameObject;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (StringLiteral_Cube == (String *)0x0) {
      uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
      this_00 = (ArgumentNullException *)func_?(uVar3);
      paramName = (String *)func_?(&StringLiteral_Name_cannot_be_null);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (this_00,paramName,(MethodInfo *)0x0);
      uVar3 = func_?(&MethodInfo__UnityEngine__Transform__Find_System__String_);
      FUN_?(this_00,uVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
             Transform_FindRelativeTransformWithPath(pTVar2,StringLiteral_Cube,0,(MethodInfo *)0x0);
    if ((pTVar2 != (Transform *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar5 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar5,0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsSameWeapon(PickupItem) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_IsSameWeapon
               (MVPickupItemBase *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (pickupItem != (PickupItem *)0x0) {
    iVar1 = (*(pickupItem->klass->vtable).__unknown.methodPtr)
                      (pickupItem,(pickupItem->klass->vtable).__unknown.method);
    return iVar1 == (this->fields).pickupItemType;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_OnDataUpdate
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&StringLiteral_PtrPtrPtr_Update_variant_id_);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&StringLiteral_variantId);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&StringLiteral_itemType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._.data;
  if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
  auStack_1._0_8_ = &UNK_?;
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     (pDVar2,(Object *)StringLiteral_variantId,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar3) {
    pDVar4 = (this->fields)._._._.data;
    if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    auStack_1._0_8_ = &UNK_?;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar4,(Object *)StringLiteral_variantId,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar5 == (Object *)0x0) goto code_?;
    if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?(pOVar5,lRam_?);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (this->fields).pickupVariantId = *(int32_t *)&pOVar5[1].klass;
    auStack_1._0_8_ = &UNK_?;
    pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(this->fields).pickupVariantId,(MethodInfo *)0x0);
    auStack_1._0_8_ = &UNK_?;
    pSVar7 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_PtrPtrPtr_Update_variant_id_,pSVar7,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?();
    }
    auStack_1._0_8_ = &UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar7,(MethodInfo *)0x0)
    ;
  }
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._.data;
  if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
  auStack_1._0_8_ = &UNK_?;
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     (pDVar2,(Object *)StringLiteral_itemType,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar3) {
    pDVar4 = (this->fields)._._._.data;
    if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    auStack_1._0_8_ = &UNK_?;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar4,(Object *)StringLiteral_itemType,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar5 == (Object *)0x0) goto code_?;
    if ((pOVar5->klass->_0).element_class !=
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?(pOVar5,TypeInfo__MV__Common__AvatarItemType);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (this->fields).pickupItemType = *(int32_t *)&pOVar5[1].klass;
  }
  pUVar8 = (this->fields).useInteractor;
  if ((pUVar8 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar8->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = (pUVar8->fields).woOwnerID;
  pOVar9 = (Object__Class *)(this->fields)._._._.data;
  if (cRam_? == '\0') {
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = &UNK_?;
  pOVar5 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar5 == (Object *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar10 = iRam_? != 0;
  pOVar5[1].klass = pOVar9;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
    lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
    do {
      uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar14 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar10 = uVar13 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  *(int32_t *)&pOVar5[1].monitor = iVar3;
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    auStack_1._0_8_ = &UNK_?;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    auStack_1._0_8_ = &UNK_?;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_01;
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
      lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
      do {
        uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar14 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar10 = uVar13 == *puVar14;
        if (bVar10) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  auStack_1._0_8_ = &UNK_?;
  this_02 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  auStack_1._0_8_ = &UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_02,pOVar5,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
  auStack_1._0_8_ = &UNK_?;
  UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
            (this_00,this_01,(Func_2_UseRequirement_Boolean_ *)this_02,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  pLVar15 = (this_00->fields).useRequirements;
  if (pLVar15 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (iRam_? != 0) {
    uVar11 = (uint)((ulonglong)&pLStack_16 >> 0xc);
    uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar17 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar17 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar17 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  puStack_18 = (undefined1 *)((ulonglong)(uint)(pLVar15->fields)._version << 0x20);
  uStack_19 = 0;
  auStack_1._8_8_ = puStack_18;
  pOStack_20 = (Object *)0x0;
  uStack_21 = 0;
  puStack_22 = auStack_1;
  pLStack_16 = pLVar15;
  auStack_1._0_8_ = pLVar15;
  while (bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar23 != 0) {
    if (pOStack_20 == (Object *)0x0) goto code_?;
    cVar24 = (*(code *)pOStack_20->klass[1]._0.interopData)
                       (pOStack_20,pOStack_20->klass[1]._0.klass);
    if (cVar24 != '\0') {
      piVar25 = &(this_00->fields).active;
      *piVar25 = *piVar25 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar10 = (this_00->fields).active == 0;
  if (!bVar10) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar10 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar10;
  fVar26 = 0.0;
  pLVar15 = (this_00->fields).useRequirements;
  if (pLVar15 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar11 = (uint)((ulonglong)&pLStack_16 >> 0xc);
    uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar17 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar17 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar17 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  puStack_18 = (undefined1 *)((ulonglong)(uint)(pLVar15->fields)._version << 0x20);
  uStack_19 = 0;
  auStack_1._8_8_ = puStack_18;
  pOStack_20 = (Object *)0x0;
  pLStack_16 = (List_1_UseRequirement_ *)0x0;
  puStack_18 = auStack_1;
  auStack_1._0_8_ = pLVar15;
  while (bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar5 = pOStack_20, bVar23 != 0) {
    if (pOStack_20 == (Object *)0x0) goto code_?;
    cVar24 = (*(code *)pOStack_20->klass[1]._0.interopData)
                       (pOStack_20,pOStack_20->klass[1]._0.klass);
    if (cVar24 != '\0') {
      pOVar9 = pOVar5->klass;
      uStack_21._0_4_ = (this_00->fields).pivot.x;
      uStack_21._4_4_ = (this_00->fields).pivot.y;
      puStack_22 = (undefined1 *)CONCAT44(puStack_22._4_4_,(this_00->fields).pivot.z);
      (*(code *)pOVar9[1]._0.fields)
                (pOVar5,&uStack_21,fVar26,(this_00->fields).dist,pOVar9[1]._0.events);
      fVar26 = fVar26 + (this_00->fields).spacing;
    }
  }
  if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_00,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_00,(MethodInfo *)0x0);
  }
code_?:
  bVar23 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar27 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar27 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar28 = func_?(&UNK_?);
    FUN_?(uVar28,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar27,bVar23);
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_SetupUseInteractor
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameCoinLogic);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameRankRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPickupItemBase__CheckCanUse_int__MVInteractableBase_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPickupItemBase__DoPickup_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._BaseObject_k__BackingField;
  if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pGVar3 = (pMVar1->fields).useInteractionRotator;
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
      useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(useFunction,this,MethodInfo__MVPickupItemBase__DoPickup_int_);
      checkCanUseFunction =
           (Func_3_Int32_MVInteractableBase_Boolean_ *)
           FUN_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      FUN_?(checkCanUseFunction,this,
                    MethodInfo__MVPickupItemBase__CheckCanUse_int__MVInteractableBase_);
      pUVar4 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar4,(MVWorldObjectClient *)this,pGVar3,0,triggerCollider,useFunction,
                 checkCanUseFunction,_UNK_?,0,1,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).useInteractor = pUVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pMVar1 = (this->fields)._BaseObject_k__BackingField;
      if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
        pGVar3 = (pMVar1->fields).useInteractionRotator;
        pUVar10 = (UseRequirement *)FUN_?(TypeInfo__GameCoinLogic);
        bVar5 = iRam_? != 0;
        pUVar10[1].monitor = (MonitorData *)0x0;
        *(undefined4 *)&pUVar10[1].fields = 0;
        *(undefined4 *)((longlong)&pUVar10[1].klass + 4) = 1;
        *(undefined1 *)&pUVar10[3].klass = 1;
        *(GameObject **)&pUVar10[2].fields = pGVar3;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&pUVar10[2].fields >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pUVar4 = (this->fields).useInteractor;
        if (pUVar4 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement(pUVar4,pUVar10,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._BaseObject_k__BackingField;
          if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
            pGVar3 = (pMVar1->fields).useInteractionRotator;
            pUVar10 = (UseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
            bVar5 = iRam_? != 0;
            *(undefined8 *)&pUVar10[1].fields = 0;
            *(undefined4 *)&pUVar10[2].klass = 0;
            *(undefined1 *)((longlong)&pUVar10[1].klass + 4) = 1;
            pUVar10[2].monitor = (MonitorData *)pGVar3;
            if (bVar5) {
              uVar6 = (uint)((ulonglong)&pUVar10[2].monitor >> 0xc);
              uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
              do {
                uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                LOCK();
                bVar5 = uVar8 == *puVar9;
                if (bVar5) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            pUVar4 = (this->fields).useInteractor;
            if (pUVar4 != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement(pUVar4,pUVar10,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._BaseObject_k__BackingField;
              if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                pGVar3 = (pMVar1->fields).useInteractionRotator;
                this_00 = (GameRankRequirement *)FUN_?(TypeInfo__GameRankRequirement);
                GameRankRequirement::GameRankRequirement__ctor
                          (this_00,pGVar3,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
                pUVar4 = (this->fields).useInteractor;
                if (pUVar4 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar4,(UseRequirement *)this_00,(MethodInfo *)0x0);
                  pMVar1 = (this->fields)._BaseObject_k__BackingField;
                  if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                    pGVar3 = (pMVar1->fields).useInteractionRotator;
                    this_01 = (RewardedAdRequirement *)
                              FUN_?(
                                           TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                           );
                    WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                    RewardedAdRequirement__ctor(this_01,pGVar3,(MethodInfo *)0x0);
                    pUVar4 = (this->fields).useInteractor;
                    if (pUVar4 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar4,(UseRequirement *)this_01,(MethodInfo *)0x0);
                      pMVar1 = (this->fields)._BaseObject_k__BackingField;
                      if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                        (*(this->klass->vtable).AddExtraUseRequirements.methodPtr)
                                  (this,(pMVar1->fields).useInteractionRotator,
                                   (this->fields).useInteractor);
                        pMVar1 = (this->fields)._BaseObject_k__BackingField;
                        if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                          pTVar2 = (pMVar1->fields).triggerBoxEvents;
                          pUVar4 = (this->fields).useInteractor;
                          pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
                                    FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    (pUVar11,(Object *)pUVar4,
                                     MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                     ,(MethodInfo *)0x0);
                          if (pTVar2 != (TriggerBoxEvents *)0x0) {
                            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                      (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar11,
                                       (MethodInfo *)0x0);
                            pMVar1 = (this->fields)._BaseObject_k__BackingField;
                            if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                              pTVar2 = (pMVar1->fields).triggerBoxEvents;
                              pUVar4 = (this->fields).useInteractor;
                              pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
                                        FUN_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System
                              ::Object,System::Object]::
                              UnityAction_2_System_Object_System_Object___ctor
                                        (pUVar11,(Object *)pUVar4,
                                         MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                         ,(MethodInfo *)0x0);
                              if (pTVar2 != (TriggerBoxEvents *)0x0) {
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                ppEVar12 = &(pTVar2->fields).TriggerExit;
                                a = (pTVar2->fields).TriggerExit;
                                do {
                                  pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                     ((Delegate *)a,(Delegate *)pUVar11,
                                                      (MethodInfo *)0x0);
                                  pEVar14 = TypeInfo__System__EventHandler<TriggerEventArgs>;
                                  if (pDVar13 == (Delegate *)0x0) {
                                    pEVar15 = (EventHandler_1_TriggerEventArgs_ *)0x0;
                                  }
                                  else {
                                    pEVar15 = (EventHandler_1_TriggerEventArgs_ *)
                                              FUN_?(pDVar13,
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                    if (pEVar15 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
                                      FUN_?(pDVar13,pEVar14);
                                      pcVar16 = (code *)swi(3);
                                      (*pcVar16)();
                                      return;
                                    }
                                  }
                                  LOCK();
                                  pEVar17 = *ppEVar12;
                                  bVar5 = a == pEVar17;
                                  if (bVar5) {
                                    *ppEVar12 = pEVar15;
                                    pEVar17 = a;
                                  }
                                  UNLOCK();
                                  pEVar15 = a;
                                  if (!bVar5) {
                                    pEVar15 = pEVar17;
                                  }
                                  if (iRam_? != 0) {
                                    uVar6 = (uint)((ulonglong)ppEVar12 >> 0xc);
                                    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                                    do {
                                      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                                      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                                      LOCK();
                                      bVar5 = uVar8 == *puVar9;
                                      if (bVar5) {
                                        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                                      }
                                      UNLOCK();
                                    } while (!bVar5);
                                  }
                                  bVar5 = pEVar15 != a;
                                  a = pEVar15;
                                } while (bVar5);
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
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean ShouldDoAutoPickup(Int32) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_ShouldDoAutoPickup
               (MVPickupItemBase *this,int32_t instigator,MethodInfo *method)

{
  pMStackX_20 = (MVPickupOwner *)0x0;
  cVar1 = '\0';
  bVar2 = MVPickupItemBase_TryGetPickupOwner(this,instigator,&pMStackX_20,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (pMStackX_20 == (MVPickupOwner *)0x0) goto code_?;
    cVar1 = (*(this->klass->vtable).IsSameWeapon.methodPtr)
                      (this,(pMStackX_20->fields).currentItem,
                       (this->klass->vtable).IsSameWeapon.method);
    if (cVar1 == '\0') {
      if ((pMStackX_20 == (MVPickupOwner *)0x0) ||
         (pPVar3 = (pMStackX_20->fields).currentItem, pPVar3 == (PickupItem *)0x0))
      goto code_?;
      iVar4 = (*(pPVar3->klass->vtable).__unknown.methodPtr)();
      bVar5 = iVar4 == 5;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      return 0;
    }
  }
  pUVar6 = (this->fields).useInteractor;
  if ((pUVar6 != (UseInteractor *)0x0) &&
     (pUVar7 = (pUVar6->fields).useInteractorVisuals, pUVar7 != (UseInteractorVisualization *)0x0))
  {
    UVar8 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                      (pUVar7,(MethodInfo *)0x0);
    if ((UVar8 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
      pUVar6 = (this->fields).useInteractor;
      if ((pUVar6 == (UseInteractor *)0x0) ||
         (pUVar7 = (pUVar6->fields).useInteractorVisuals,
         pUVar7 == (UseInteractorVisualization *)0x0)) goto code_?;
      SVar9 = UseInteractorVisualization::UseInteractorVisualization_GetShowOptions
                        (pUVar7,(MethodInfo *)0x0);
      if (((SVar9 & ShowUseOption__Enum_UsingGameCoins) != ShowUseOption__Enum_Normal) ||
         (((UVar8 & UseGUIResult__Enum_CannotAfford) != 0 || (cVar1 == '\0')))) {
        return 0;
      }
    }
    return 1;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar2 = (*pcVar10)();
  return bVar2;
}


/* Boolean TryGetPickupOwner(Int32, MVPickupOwner ByRef) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_TryGetPickupOwner
               (MVPickupItemBase *this,int32_t instigator,MVPickupOwner **pickupOwner,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__VehiclePickupOwner);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  *pickupOwner = (MVPickupOwner *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)pickupOwner >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar6 != (PrefabPool *)0x0) &&
     ((pPVar6->fields).pickupPrefabLUT !=
      (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0)) {
    lVar3 = FUN_?();
    if (*(int *)(lVar3 + 8) != 0) {
      return 0;
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (pMVar7,instigator,(MethodInfo *)0x0);
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
        pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar7,id,(MethodInfo *)0x0);
        if (pMVar8 != (MVWorldObjectClient *)0x0) {
          this_00 = (pMVar8->fields).gameObject;
          if (this_00 == (GameObject *)0x0) goto code_?;
          pMVar9 = (MVPickupOwner *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (this_00,
                               MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                              );
          bVar1 = iRam_? != 0;
          *pickupOwner = pMVar9;
          if (bVar1) {
            uVar2 = (uint)((ulonglong)pickupOwner >> 0xc);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          pMVar9 = *pickupOwner;
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
          if (pMVar9 != (MVPickupOwner *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pMVar9->fields)._._._._._.m_CachedPtr != (void *)0x0) {
              if (*pickupOwner == (MVPickupOwner *)0x0) goto code_?;
              pMVar10 = (*pickupOwner)->klass;
              bVar11 = (TypeInfo__VehiclePickupOwner->_1).naturalAligment;
              if (((pMVar10->_1).naturalAligment < bVar11) ||
                 ((pMVar10->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
                  (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
                pPVar12 = ((*pickupOwner)->fields).currentItem;
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
                if (pPVar12 != (PickupItem *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if ((pPVar12->fields)._._._._.m_CachedPtr != (void *)0x0) {
                    return 1;
                  }
                }
              }
            }
          }
        }
        return 0;
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* MVPickupItemBase() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupItemBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Dictionary__
            );
  if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,3,1,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,1,2,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,2,3,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,4,4,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,6,5,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,8,6,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,7,7,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,10,8,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,9,9,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x40,0xb,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x3f,0xc,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x3c,0xd,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x2d,0xe,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x2e,0xf,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0xb,0x10,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0xd,0x13,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x3e,0x14,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0xc,0x15,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0xe,0x16,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x46,0x43,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__MVPickupItemBase->static_fields->avatarItemToToinventoryItemDescrip =
       (Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType_ *)this;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__MVPickupItemBase->static_fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}


/* MVPickupItemBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase__ctor
               (MVPickupItemBase *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__ContainsKey_MV__Common__AvatarItemType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__get_Item_MV__Common__AvatarItemType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupItemBaseObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupItemBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).canPickUp = 1;
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>)
  ;
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).instigatorsInTrigger = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).instigatorsInTrigger >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (*(int *)&(TypeInfo__MVPickupItemBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
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
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] = 7;
  pOVar7 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8)
  ;
  if ((data == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar7,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0))
  goto code_?;
  bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    FUN_?(pDVar8);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (pDVar8,(Object *)StringLiteral_itemType,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  auStackX_8[0] = 2;
  pOVar11 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8)
  ;
  pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (data,pOVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar11 != (Object *)0x0) {
    if ((pOVar11->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar11);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (pOVar7 != (Object *)0x0) {
      if ((pOVar7->klass->_0).element_class !=
          (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
        FUN_?(pOVar7);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pEVar12 = PrefabPool::PrefabPool_GetPickupPrefab
                          (&EStack_13,*(AvatarItemType__Enum *)&pOVar7[1].klass,
                           *(int32_t *)&pOVar11[1].klass,(MethodInfo *)0x0);
      pMVar14 = (MVPickupItemBaseObject *)0x0;
      IVar15 = 0;
      MVLogicObject::MVLogicObject__ctor
                ((MVLogicObject *)this,data,pEVar12->prefabObject,worldObjects,(MethodInfo *)0x0);
      pMVar16 = (MVPickupItemBaseObject *)(this->fields)._._.component;
      if (pMVar16 != (MVPickupItemBaseObject *)0x0) {
        bVar9 = (TypeInfo__MVPickupItemBaseObject->_1).naturalAligment;
        if (((((ObjectPrefab__Class *)pMVar16->klass)->_1).naturalAligment < bVar9) ||
           (pMVar14 = pMVar16,
           (((ObjectPrefab__Class *)pMVar16->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
           (Il2CppClass *)TypeInfo__MVPickupItemBaseObject)) {
          FUN_?(pMVar16);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      bVar2 = iRam_? != 0;
      (this->fields)._BaseObject_k__BackingField = pMVar14;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields)._BaseObject_k__BackingField >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      auStackX_8[0] = 7;
      pOVar7 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
      pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar7,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar8,(Object *)StringLiteral_itemType,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pOVar7 != (Object *)0x0) {
          if ((pOVar7->klass->_0).element_class !=
              (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
            FUN_?(pOVar7,TypeInfo__MV__Common__AvatarItemType);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          key = *(Int32Enum__Enum *)&pOVar7[1].klass;
          piVar17 = &(this->fields)._._.interactionFlags;
          *piVar17 = *piVar17 | 0x210300000;
          (this->fields).pickupItemType = key;
          this_00 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                    TypeInfo__MVPickupItemBase->static_fields->avatarItemToToinventoryItemDescrip;
          if (this_00 != (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) {
            iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_System_Int32Enum_System_Single__FindEntry
                              (this_00,key,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__ContainsKey_MV__Common__AvatarItemType_
                               ->klass->rgctx_data[0x21].method);
            if (-1 < iVar18) {
              if (*(int *)&(TypeInfo__MVPickupItemBase->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MVPickupItemBase);
              }
              this_01 = TypeInfo__MVPickupItemBase->static_fields->
                        avatarItemToToinventoryItemDescrip;
              if (this_01 ==
                  (Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType_ *)0x0)
              goto code_?;
              IVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Int32Enum]::
                      Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this_01,
                                 (this->fields).pickupItemType,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__get_Item_MV__Common__AvatarItemType_
                                );
            }
            (this->fields).documentationType = IVar15;
            return;
          }
        }
      }
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Dictionary`2[System.Object,System.Object] get_ItemData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_get_ItemData
          (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
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
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      pDVar2 = (this->fields)._._._.data;
      if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,(Object *)StringLiteral_itemData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((bVar3 <= (pDVar2->klass->_1).naturalAligment) &&
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          return pDVar2;
        }
        FUN_?(pDVar2,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        pcVar4 = (code *)swi(3);
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar4)();
        return pDVar2;
      }
    }
    return (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar4)();
  return pDVar2;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_triggerBoxEvents_TriggerEnter
               (MVPickupItemBase *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
  if (e != (TriggerEventArgs *)0x0) {
    if ((e->fields).instigatorWOID == -1) {
      return;
    }
    this_00 = (List_1_System_UInt32Enum_ *)(this->fields).instigatorsInTrigger;
    item = (e->fields).instigatorWOID;
    if (this_00 != (List_1_System_UInt32Enum_ *)0x0) {
      piVar2 = &(this_00->fields)._version;
      *piVar2 = *piVar2 + 1;
      pUVar3 = (this_00->fields)._items;
      if (pUVar3 != (UInt32Enum__Enum__Array *)0x0) {
        uVar4 = (this_00->fields)._size;
        if ((uint)pUVar3->max_length <= uVar4) {
          mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
          List_1_System_UInt32Enum__AddWithResize
                    (this_00,item,pMVar1->klass->rgctx_data[0xe].method);
          return;
        }
        (this_00->fields)._size = uVar4 + 1;
        if ((uint)pUVar3->max_length <= uVar4) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar3->vector[(int)uVar4] = item;
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_triggerBoxEvents_TriggerExit
               (MVPickupItemBase *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (e != (TriggerEventArgs *)0x0)) &&
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
              (this_00,(this->fields)._._._.id,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    pLVar3 = (this->fields).instigatorsInTrigger;
    if (pLVar3 != (List_1_System_Int32_ *)0x0) {
      destinationIndex =
           FUN_?(pLVar3,(e->fields).instigatorWOID,
                         MethodInfo__System__Collections__Generic__List<int>__Remove_int_->klass->
                         rgctx_data[0x17].rgctxDataDummy);
      if ((int)destinationIndex < 0) {
        return;
      }
      if (destinationIndex < (uint)(pLVar3->fields)._size) {
        iVar4 = (pLVar3->fields)._size + -1;
        (pLVar3->fields)._size = iVar4;
        if ((int)destinationIndex < iVar4) {
          sourceArray = (pLVar3->fields)._items;
          mscorlib.dll::System::Array::Array_Copy_3
                    ((Array *)sourceArray,destinationIndex + 1,(Array *)sourceArray,destinationIndex
                     ,iVar4 - destinationIndex,(MethodInfo *)0x0);
        }
        piVar5 = &(pLVar3->fields)._version;
        *piVar5 = *piVar5 + 1;
        return;
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

