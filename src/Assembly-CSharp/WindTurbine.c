
/* Void Destroy() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Destroy(WindTurbine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WindTurbine__OnEditModeChange_EditModeChangeArgs_);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar1->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pDVar3 = (Delegate *)FUN_?();
    value = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(value,this);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove(pDVar3,value,(MethodInfo *)0x0);
    pAVar4 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar3 != (Delegate *)0x0) &&
       (lVar5 = FUN_?(pDVar3,TypeInfo__System__Action<EditModeChangeArgs>), lVar5 == 0))
    {
      FUN_?(pDVar3,pAVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?();
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar1->fields).gameMode == 4) goto code_?;
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,(MethodInfo *)0x0);
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
    bVar6 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
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
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar11 = (this->fields)._._.gameObject;
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
  if (pGVar11 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar11->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar11 = (this->fields)._._.gameObject;
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
                ((Object_1 *)pGVar11,0.0,(MethodInfo *)0x0);
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
  pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar12 != (MVGameControllerBase *)0x0) &&
     (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) {
    pRVar14 = (pMVar13->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar14 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar14->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                 HashSet_1_System_Int32Enum__Contains
                           (this_00,item,
                            MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar15 != 0) {
          pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar13 == (MVNetworkGame *)0x0) ||
             (pRVar14 = (pMVar13->fields).runtimeVariableNetworkManager,
             pRVar14 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar14,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnterWindZone(Int32) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_EnterWindZone
               (WindTurbine *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__set_Item_int__MVRigidBody_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).affectedBodies;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,instigatorWOID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      return;
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_02,instigatorWOID,(MethodInfo *)0x0),
        pMVar2 != (MVWorldObjectClient *)0x0)) &&
       (pGVar3 = (pMVar2->fields).gameObject, pGVar3 != (GameObject *)0x0)) {
      value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar3,
                         MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
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
      if (value != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (value[1].klass != (Object__Class *)0x0) {
          pGVar3 = (pMVar2->fields).gameObject;
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar3,
                              MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
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
          if (pOVar4 != (Object *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pOVar4[1].klass != (Object__Class *)0x0) {
              pLVar5 = (this->fields)._._._.inputLinkRefs;
              if (pLVar5 != (List_1_MV_WorldObject_Link_ *)0x0) {
                if (((pLVar5->fields)._size == 0) || ((this->fields)._._._.inputState != 0)) {
                  in_R9 = 0;
                  (*(code *)pOVar4->klass[1]._0.declaringType)
                            (pOVar4,0xd,0xffffffff,0,pOVar4->klass[1]._0.parent);
                }
                this_01 = (this->fields).affectedBodies;
                if (this_01 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,instigatorWOID,
                             value,(InsertionBehavior__Enum)
                                   CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__set_Item_int__MVRigidBody_
                             ->klass->rgctx_data[0x22].method);
                  return;
                }
              }
              goto code_?;
            }
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ExitWindZone(Int32) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_ExitWindZone
               (WindTurbine *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__Component__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).affectedBodies;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,instigatorWOID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return;
    }
    pDVar2 = (this->fields).affectedBodies;
    if ((pDVar2 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) &&
       (this_01 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,instigatorWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__get_Item_int_
                            ), this_01 != (Component *)0x0)) {
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         (this_01,
                          MVInteractableBase_MethodInfo__UnityEngine__Component__GetComponent<MVInteractableBase>__
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
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar3[1].klass == (Object__Class *)0x0) {
        return;
      }
      (*(code *)pOVar3->klass[1]._0.interopData)(pOVar3,0xd,0xffffffff,pOVar3->klass[1]._0.klass);
      pDVar2 = (this->fields).affectedBodies;
      if (pDVar2 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,instigatorWOID,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::WindTurbine::WindTurbine_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,WindTurbine *this,float gridSize,
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


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::WindTurbine::WindTurbine_GetLocalBounds
                   (Bounds *__return_storage_ptr__,WindTurbine *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  uVar1 = _UNK_?;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  fVar2 = _UNK_?;
  (__return_storage_ptr__->m_Extents).x = (float)uVar1;
  (__return_storage_ptr__->m_Extents).y = (float)uVar1;
  (__return_storage_ptr__->m_Extents).z = fVar2;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Initialize(WindTurbine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WindTurbine__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WindTurbine__OnEditModeChange_EditModeChangeArgs_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar1->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    pDVar2 = (Delegate *)FUN_?();
    b = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(b,this);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar2,b,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar2 != (Delegate *)0x0) &&
       (lVar4 = FUN_?(pDVar2,TypeInfo__System__Action<EditModeChangeArgs>), lVar4 == 0)) {
      FUN_?(pDVar2,pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?();
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar1->fields).gameMode == 4) goto code_?;
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,
             UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
  WindTurbine_SetData(this,(MethodInfo *)0x0);
  pWVar6 = (this->fields).windTurbineObject;
  if ((pWVar6 != (WindTurbineObject *)0x0) &&
     (this_00 = MVLogicObject::MVLogicObject_SetupCulling
                          ((MVLogicObject *)this,(pWVar6->fields).visualObject,
                           TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0),
     this_00 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Radius
              (this_00,_UNK_?,(MethodInfo *)0x0);
    this_01 = (Action_2_Int32Enum_Object_ *)
              FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__WindTurbine__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
               ,(MethodInfo *)0x0);
    pIVar7 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                       ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                        (Action_2_LogicInputState_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
    bVar8 = iRam_? != 0;
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar7;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
      bVar13 = FUN_?(1,TypeInfo__IInputSignalReceiver);
      pWVar6 = (this->fields).windTurbineObject;
      (this->fields).isActive = bVar13;
      if ((pWVar6 == (WindTurbineObject *)0x0) ||
         (pPStackX_20 = (pWVar6->fields).windParticleSystem, pPStackX_20 == (ParticleSystem *)0x0))
      {
        FUN_?(this,bVar13,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&stack0x00000008 >> 0xc);
        puVar12 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar12;
          LOCK();
          uVar10 = *puVar12;
          if (uVar11 == uVar10) {
            *puVar12 = uVar11 | 1L << (ulonglong)(uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar10);
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(&pPStackX_20,bVar13);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_InitializeInventory
               (WindTurbine *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pWVar1 = (this->fields).windTurbineObject;
  if (((pWVar1 != (WindTurbineObject *)0x0) &&
      (this_00 = (pWVar1->fields).areaColliderTransform, this_00 != (Transform *)0x0)) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pWVar1 = (this->fields).windTurbineObject;
    if (((pWVar1 != (WindTurbineObject *)0x0) &&
        (this_01 = (pWVar1->fields).windParticleSystem, this_01 != (ParticleSystem *)0x0)) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._.inputConnectorObject;
      if (pGVar2 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar2 == (GameObject *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar4 = (pGVar2->fields)._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_InputStateUpdateCallback
               (WindTurbine *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    uVar1 = CONCAT71((int7)(CONCAT44(in_register_00000014,logicInputState) >> 8),1);
  }
  else {
    if (logicInputState != LogicInputState__Enum_FromHotToCold) {
      return;
    }
    uVar1 = 0;
  }
  pWVar2 = (this->fields).windTurbineObject;
  (this->fields).isActive = (bool)uVar1;
  if ((pWVar2 != (WindTurbineObject *)0x0) &&
     (apPStackX_8[0] = (pWVar2->fields).windParticleSystem, apPStackX_8[0] != (ParticleSystem *)0x0)
     ) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)apPStackX_8 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pcVar7 = pcRam_?;
    pPStackX_20 = apPStackX_8[0];
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(&pPStackX_20,uVar1 & 0xff);
    return;
  }
  FUN_?(this,uVar1,0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_OnDataUpdate
               (WindTurbine *this,MethodInfo *method)

{
  WindTurbine_SetData(this,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__,
                  worldObjectManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  resetNodes = (HashSet_1_System_Int32_ *)
               FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(resetNodes,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
            (woID,resetNodes,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_OnEditModeChange
               (WindTurbine *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pWVar1 = (this->fields).windTurbineObject;
  if ((pWVar1 != (WindTurbineObject *)0x0) &&
     (pCVar2 = (pWVar1->fields).editorCollider, pCVar2 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar2,1,(MethodInfo *)0x0);
    pWVar1 = (this->fields).windTurbineObject;
    if ((pWVar1 != (WindTurbineObject *)0x0) &&
       (pCVar2 = (pWVar1->fields).areaCollider, pCVar2 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (pCVar2,0,(MethodInfo *)0x0);
      if (arg.playInEditor == 0) {
        return;
      }
      pWVar1 = (this->fields).windTurbineObject;
      if ((pWVar1 != (WindTurbineObject *)0x0) &&
         (pCVar2 = (pWVar1->fields).editorCollider, pCVar2 != (Collider *)0x0)) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar2,0,(MethodInfo *)0x0);
        pWVar1 = (this->fields).windTurbineObject;
        if ((pWVar1 != (WindTurbineObject *)0x0) &&
           (pCVar2 = (pWVar1->fields).areaCollider, pCVar2 != (Collider *)0x0)) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar2,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Rescale() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Rescale(WindTurbine *this,MethodInfo *method)

{
  pWVar1 = (this->fields).windTurbineObject;
  if ((pWVar1 == (WindTurbineObject *)0x0) ||
     (pTVar2 = (pWVar1->fields).areaColliderTransform, pTVar2 == (Transform *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
  pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar4);
  pWVar1 = (this->fields).windTurbineObject;
  fVar6 = (this->fields).windAreaSize;
  fStack_7 = 0.0;
  if ((pWVar1 != (WindTurbineObject *)0x0) &&
     (pTVar2 = (pWVar1->fields).areaColliderTransform, pTVar2 != (Transform *)0x0)) {
    uStack_8 = 0;
    fStack_7 = fVar6;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar4);
    pWVar1 = (this->fields).windTurbineObject;
    if ((pWVar1 != (WindTurbineObject *)0x0) &&
       (pTVar2 = (pWVar1->fields).areaColliderTransform, pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar4);
      pWVar1 = (this->fields).windTurbineObject;
      fStack_7 = 0.0;
      fVar6 = (this->fields).windAreaSize * _UNK_? + _UNK_?;
      if ((pWVar1 != (WindTurbineObject *)0x0) &&
         (pTVar2 = (pWVar1->fields).areaColliderTransform, pTVar2 != (Transform *)0x0)) {
        uStack_8 = 0;
        fStack_7 = fVar6;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar4,&uStack_8);
        pWVar1 = (this->fields).windTurbineObject;
        if ((pWVar1 != (WindTurbineObject *)0x0) &&
           (pPStackX_8 = (pWVar1->fields).windParticleSystem, pPStackX_8 != (ParticleSystem *)0x0))
        {
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          fVar6 = (this->fields).windAreaSize / _UNK_?;
          pcVar3 = pcRam_?;
          apPStackX_18[0] = pPStackX_8;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(apPStackX_18,fVar6);
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(apPStackX_18,_UNK_?);
          return;
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Rotate() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Rotate(WindTurbine *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._.gameObject;
      uVar5 = pVVar3->y;
      VStack_6.z = pVVar3->z;
      VStack_6.y = (float)uVar5;
      VStack_6.x = (this->fields).windPitch - _UNK_?;
      if (pGVar1 != (GameObject *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                    (pTVar2,&VStack_6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetData() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_SetData(WindTurbine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_windSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_windPitch);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,(Object *)StringLiteral_windSize,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pDVar1 = (this->fields)._._._.data;
      (this->fields).windAreaSize = *(float *)&pOVar2[1].klass;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_windPitch,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar2,lRam_?);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar4 = (this->fields).windAreaSize / _UNK_?;
          (this->fields).windPitch = *(float *)&pOVar2[1].klass;
          (this->fields).windStrength = fVar4 * _UNK_?;
          WindTurbine_Rescale(this,(MethodInfo *)0x0);
          pGVar5 = (this->fields)._._.gameObject;
          if (pGVar5 != (GameObject *)0x0) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar5,(MethodInfo *)0x0);
            if (pTVar6 != (Transform *)0x0) {
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localEulerAngles(&VStack_8,pTVar6,(MethodInfo *)0x0);
              pGVar5 = (this->fields)._._.gameObject;
              uVar9 = pVVar7->y;
              VStack_10.z = pVVar7->z;
              VStack_10.y = (float)uVar9;
              VStack_10.x = (this->fields).windPitch - _UNK_?;
              if (pGVar5 != (GameObject *)0x0) {
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                if (pTVar6 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                            (pTVar6,&VStack_10,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ToggleTurbine(Boolean) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_ToggleTurbine
               (WindTurbine *this,bool state,MethodInfo *method)

{
  puVar1 = (ulonglong *)CONCAT71(in_register_00000011,state);
  pWVar2 = (this->fields).windTurbineObject;
  (this->fields).isActive = state;
  if ((pWVar2 == (WindTurbineObject *)0x0) ||
     (apPStackX_8[0] = (pWVar2->fields).windParticleSystem, apPStackX_8[0] == (ParticleSystem *)0x0)
     ) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)apPStackX_8 >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
    puVar1 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar1;
      LOCK();
      uVar6 = *puVar1;
      if (uVar5 == uVar6) {
        *puVar1 = uVar5 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pcVar3 = pcRam_?;
  pPStackX_20 = apPStackX_8[0];
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?,puVar1,method), pcVar3 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(&pPStackX_20,state);
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_UpdateControllerFixedUpdate
               (WindTurbine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVRigidBody>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVRigidBody>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVRigidBody>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVRigidBody>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVRigidBody>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isActive == 0) {
    return;
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).affectedBodies;
  if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    fVar8 = _UNK_?;
    fVar9 = _UNK_?;
    uStack_10 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    uStack_13 = 0;
    DStack_14._version = (undefined4)uStack_10;
    DStack_14._index = uStack_10._4_4_;
    DStack_14._current.key = 0;
    DStack_14._current._4_4_ = 0;
    DStack_14._current.value._0_4_ = 0;
    DStack_14._current.value._4_4_ = 0;
    DStack_14._getEnumeratorRetType = 2;
    DStack_14._36_4_ = 0;
    uStack_15 = 0;
    pDStack_16 = &DStack_14;
    pDStack_3 = pDVar1;
    DStack_14._dictionary = pDVar1;
code_?:
    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (&DStack_14,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVRigidBody>__MoveNext__
                              ), uVar18 = DStack_14._current.key, bVar17 != 0) {
      this_01 = (MVRigidBody *)
                CONCAT44(DStack_14._current.value._4_4_,DStack_14._current.value._0_4_);
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
      if (this_01 != (MVRigidBody *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_01->fields)._._._._._.m_CachedPtr == (void *)0x0) goto code_?;
        if (this_01 != (MVRigidBody *)0x0) goto code_?;
        goto code_?;
      }
code_?:
      pLVar19 = (this->fields).keysToRemove;
      if (pLVar19 == (List_1_System_Int32_ *)0x0) goto code_?;
      FUN_?(pLVar19,uVar18);
    }
    uVar2 = 0;
    pLVar19 = (this->fields).keysToRemove;
    if (pLVar19 != (List_1_System_Int32_ *)0x0) {
      lVar20 = 0x20;
      do {
        if ((pLVar19->fields)._size <= (int)uVar2) {
          pLVar19 = (this->fields).keysToRemove;
          if (pLVar19 != (List_1_System_Int32_ *)0x0) {
            piVar21 = &(pLVar19->fields)._version;
            *piVar21 = *piVar21 + 1;
            (pLVar19->fields)._size = 0;
            return;
          }
          break;
        }
        this_00 = (this->fields).affectedBodies;
        pLVar19 = (this->fields).keysToRemove;
        if (pLVar19 == (List_1_System_Int32_ *)0x0) break;
        if ((uint)(pLVar19->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        pIVar23 = (pLVar19->fields)._items;
        if (pIVar23 == (Int32__Array *)0x0) break;
        if ((uint)pIVar23->max_length <= uVar2) {
          FUN_?();
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        if (this_00 == (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                   *(int32_t *)((longlong)pIVar23->vector + lVar20 + -0x20),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                  );
        uVar2 = uVar2 + 1;
        lVar20 = lVar20 + 4;
        pLVar19 = (this->fields).keysToRemove;
      } while (pLVar19 != (List_1_System_Int32_ *)0x0);
    }
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
code_?:
  cVar24 = (*(this_01->klass->vtable).__unknown_2.methodPtr)(this_01);
  if (cVar24 != '\0') goto code_?;
  pGVar25 = (this->fields)._._.gameObject;
  if (pGVar25 == (GameObject *)0x0) goto code_?;
  obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (pGVar25,(MethodInfo *)0x0);
  this_02 = (Collider *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this_01,
                       UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                      );
  if (this_02 != (Collider *)0x0) {
    pBVar26 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                        (aBStack_27,this_02,(MethodInfo *)0x0);
    uVar28._0_4_ = (pBVar26->m_Center).x;
    uVar28._4_4_ = (pBVar26->m_Center).y;
    uVar29 = (undefined4)*(undefined8 *)&(pBVar26->m_Center).z;
    uStack_12._0_4_ = (pBVar26->m_Extents).y;
    uStack_12._4_4_ = (pBVar26->m_Extents).z;
    if (obj != (Transform *)0x0) {
      uStack_30 = uVar28;
      uStack_31 = uVar29;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar32 = (obj->fields)._._.m_CachedPtr;
      if (pvVar32 != (void *)0x0) {
        pcVar22 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
          uVar28 = func_?(&UNK_?);
          FUN_?(uVar28);
code_?:
          FUN_?();
        }
        else {
          pcRam_? = pcVar22;
          (*pcRam_?)(pvVar32);
          fVar33 = fVar9 - 0.0 / ((this->fields).windAreaSize * fVar8);
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
          fVar33 = fVar33 * (this->fields).windStrength;
          pGVar25 = (this->fields)._._.gameObject;
          if (pGVar25 != (GameObject *)0x0) {
            this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar25,(MethodInfo *)0x0);
            if (this_03 != (Transform *)0x0) {
              pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                  (&VStack_35,this_03,(MethodInfo *)0x0);
              aBStack_27[0].m_Center.x = pVVar34->x;
              aBStack_27[0].m_Center.y = pVVar34->y;
              VStack_36.z = pVVar34->z * fVar33;
              VStack_36.x = aBStack_27[0].m_Center.x * fVar33;
              VStack_36.y = aBStack_27[0].m_Center.y * fVar33;
              MVRigidBody::MVRigidBody_AddImpulse_1(this_01,&VStack_36,1,(MethodInfo *)0x0);
              goto code_?;
            }
            goto code_?;
          }
        }
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* WindTurbine(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine__ctor
               (WindTurbine *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WindTurbineObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WindTurbine__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WindTurbine__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_windSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_windPitch);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).windStrength = 1000.0;
  (this->fields).windAreaSize = 10.0;
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).keysToRemove = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).keysToRemove >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar7 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar7->fields).windTurbinePrefab,
               worldObjects,(MethodInfo *)0x0);
    pWVar8 = (WindTurbineObject *)(this->fields)._._.component;
    if (pWVar8 == (WindTurbineObject *)0x0) {
      (this->fields).windTurbineObject = (WindTurbineObject *)0x0;
    }
    else {
      bVar9 = (TypeInfo__WindTurbineObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pWVar8->klass)->_1).naturalAligment < bVar9) ||
         ((((ObjectPrefab__Class *)pWVar8->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo__WindTurbineObject)) {
        FUN_?(pWVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (this->fields).windTurbineObject = pWVar8;
      bVar9 = (TypeInfo__WindTurbineObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pWVar8->klass)->_1).naturalAligment < bVar9) ||
         ((((ObjectPrefab__Class *)pWVar8->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo__WindTurbineObject)) {
        FUN_?(pWVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields).windTurbineObject >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pDVar11 = (this->fields)._._._.data;
    if ((pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar11,(Object *)StringLiteral_windSize,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pOVar12 != (Object *)0x0)) {
      if ((pOVar12->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar12);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pDVar11 = (this->fields)._._._.data;
      (this->fields).windAreaSize = *(float *)&pOVar12[1].klass;
      if ((pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar11,(Object *)StringLiteral_windPitch,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar12 != (Object *)0x0)) {
        if ((pOVar12->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar12);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar13 = (this->fields).windAreaSize / _UNK_?;
        (this->fields).windPitch = *(float *)&pOVar12[1].klass;
        (this->fields).windStrength = fVar13 * _UNK_?;
        WindTurbine_Rescale(this,(MethodInfo *)0x0);
        WindTurbine_Rotate(this,(MethodInfo *)0x0);
        pWVar8 = (this->fields).windTurbineObject;
        (this->fields)._._.interactionFlags =
             (this->fields)._._.interactionFlags & 0xfffffffffffffeffU | 0x3800018200;
        if (pWVar8 != (WindTurbineObject *)0x0) {
          pTVar14 = (pWVar8->fields).triggerBoxEvents;
          pUVar15 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar15,(Object *)this,
                     MethodInfo__WindTurbine__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar14 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar14,(EventHandler_1_TriggerEventArgs_ *)pUVar15,(MethodInfo *)0x0);
            pWVar8 = (this->fields).windTurbineObject;
            if (pWVar8 != (WindTurbineObject *)0x0) {
              pTVar14 = (pWVar8->fields).triggerBoxEvents;
              pUVar15 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar15,(Object *)this,
                         MethodInfo__WindTurbine__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                         ,(MethodInfo *)0x0);
              if (pTVar14 != (TriggerBoxEvents *)0x0) {
                TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                          (pTVar14,(EventHandler_1_TriggerEventArgs_ *)pUVar15,(MethodInfo *)0x0);
                this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                           *)FUN_?(
                                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>
                                          );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                TextCore::Text::TextResourceManager+FontAssetRef]::
                Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Dictionary__
                          );
                bVar2 = iRam_? != 0;
                (this->fields).affectedBodies = (Dictionary_2_System_Int32_MVRigidBody_ *)this_00;
                if (bVar2) {
                  uVar3 = (uint)((ulonglong)&(this->fields).affectedBodies >> 0xc);
                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                  do {
                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                    LOCK();
                    bVar2 = uVar5 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar2);
                }
                (this->fields).isActive = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::WindTurbine::WindTurbine_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,WindTurbine *this,MethodInfo *method)

{
  __return_storage_ptr__->x = -1.55;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::WindTurbine::WindTurbine_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,WindTurbine *this,MethodInfo *method)

{
  obj = (this->fields)._._.transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_triggerBoxEvents_TriggerEnter
               (WindTurbine *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (e == (TriggerEventArgs *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  key = (e->fields).instigatorWOID;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                  ,key,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__set_Item_int__MVRigidBody_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).affectedBodies;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      return;
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_02,key,(MethodInfo *)0x0), pMVar3 != (MVWorldObjectClient *)0x0))
       && (pGVar4 = (pMVar3->fields).gameObject, pGVar4 != (GameObject *)0x0)) {
      value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar4,
                         MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
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
      if (value != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (value[1].klass != (Object__Class *)0x0) {
          pGVar4 = (pMVar3->fields).gameObject;
          if (pGVar4 == (GameObject *)0x0) goto code_?;
          pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar4,
                              MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
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
          if (pOVar5 != (Object *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pOVar5[1].klass != (Object__Class *)0x0) {
              pLVar6 = (this->fields)._._._.inputLinkRefs;
              if (pLVar6 != (List_1_MV_WorldObject_Link_ *)0x0) {
                if (((pLVar6->fields)._size == 0) || ((this->fields)._._._.inputState != 0)) {
                  method = (MethodInfo *)0x0;
                  (*(code *)pOVar5->klass[1]._0.declaringType)
                            (pOVar5,0xd,0xffffffff,0,pOVar5->klass[1]._0.parent);
                }
                this_01 = (this->fields).affectedBodies;
                if (this_01 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,value,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),1),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__set_Item_int__MVRigidBody_
                             ->klass->rgctx_data[0x22].method);
                  return;
                }
              }
              goto code_?;
            }
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_triggerBoxEvents_TriggerExit
               (WindTurbine *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (e == (TriggerEventArgs *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  key = (e->fields).instigatorWOID;
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__Component__GetComponent<MVInteractableBase>__
                  ,key,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).affectedBodies;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return;
    }
    pDVar3 = (this->fields).affectedBodies;
    if ((pDVar3 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) &&
       (this_01 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__get_Item_int_
                            ), this_01 != (Component *)0x0)) {
      pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         (this_01,
                          MVInteractableBase_MethodInfo__UnityEngine__Component__GetComponent<MVInteractableBase>__
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
      if (pOVar4 == (Object *)0x0) {
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar4[1].klass == (Object__Class *)0x0) {
        return;
      }
      (*(code *)pOVar4->klass[1]._0.interopData)(pOVar4,0xd,0xffffffff,pOVar4->klass[1]._0.klass);
      pDVar3 = (this->fields).affectedBodies;
      if (pDVar3 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

