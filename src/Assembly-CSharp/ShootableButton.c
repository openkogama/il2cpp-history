
/* Void Activate(Object, TakeDamageEventArgs) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_Activate
               (ShootableButton *this,Object *sender,TakeDamageEventArgs *e,MethodInfo *method)

{
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       (this_01 = (pSVar1->fields).greyOutObject, this_01 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (pMVar4 = (pMVar3->fields).operationRequests,
         pMVar4 != (MVNetworkGame_OperationRequests *)0x0)) {
        iVar5 = (this->fields)._._._.id;
        uVar6 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ,iVar5,1,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        aiStackX_10[0] = iVar5;
        pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_10);
        if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          uVar8 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_02,0x17,pOVar7,(InsertionBehavior__Enum)uVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     ->klass->rgctx_data[0x22].method);
          aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,1);
          pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_10);
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar6 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xce);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_02,0xce,pOVar7,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),method_00);
          pPVar9 = (pMVar4->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar9 != (PhotonPeer *)0x0) {
            (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                      (pPVar9,CONCAT71((int7)((ulonglong)uVar6 >> 8),0x43),this_02,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar9->klass->vtable).SendOperation.method);
            return;
          }
        }
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_Destroy
               (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ShootableButton__OnEditModeChange_EditModeChangeArgs_);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pDVar2 = (Delegate *)FUN_?();
    value = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(value,this);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove(pDVar2,value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar2 != (Delegate *)0x0) &&
       (lVar4 = FUN_?(pDVar2,TypeInfo__System__Action<EditModeChangeArgs>), lVar4 == 0))
    {
      FUN_?(pDVar2,pAVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_?();
  }
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
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar13->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_00,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar14 != 0) {
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar12 == (MVNetworkGame *)0x0) ||
             (pRVar13 = (pMVar12->fields).runtimeVariableNetworkManager,
             pRVar13 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar13,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::ShootableButton::ShootableButton_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,ShootableButton *this,float gridSize,
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
  fVar3 = VStack_2.y * _UNK_?;
  fVar4 = VStack_2.x * _UNK_?;
  fVar5 = (pVVar1->oneVector).z * _UNK_?;
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
    VStack_12.y = fVar3;
    VStack_12.x = fVar4;
    VStack_12.z = fVar5;
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_6,&VStack_2,aQStack_11,gridSize,&VStack_12,
                        (MethodInfo *)0x0);
    fVar4 = pVVar9->y;
    fVar3 = pVVar9->z;
    __return_storage_ptr__->x = pVVar9->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::ShootableButton::ShootableButton_GetLocalBounds
                   (Bounds *__return_storage_ptr__,ShootableButton *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  fVar2 = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (pVVar3->zeroVector).x;
  (__return_storage_ptr__->m_Center).y = fVar4;
  (__return_storage_ptr__->m_Center).z = fVar5;
  (__return_storage_ptr__->m_Extents).x = (float)uVar1;
  (__return_storage_ptr__->m_Extents).y = (float)uVar1;
  (__return_storage_ptr__->m_Extents).z = fVar2;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_Initialize
               (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TakeDamageEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ClientSideLogicInteractionHandler_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideLogicInteractionHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LogicInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<LogicInteractable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OutputSignalTransmitter);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ShootableButton__Activate_System__Object__TakeDamageEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ShootableButton__OnEditModeChange_EditModeChangeArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ShootableButton__SignalCallback_bool__bool__LogicObjectManager_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pGVar1 = (this->fields)._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pLVar2 = (LogicInteractable *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar1,
                         LogicInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<LogicInteractable>__
                        );
    bVar3 = iRam_? != 0;
    (this->fields).interactable = pLVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).interactable >> 0xc);
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
    pGVar1 = (this->fields)._._.gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                (pGVar1,
                 ClientSideLogicInteractionHandler_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideLogicInteractionHandler>__
                );
      pLVar2 = (this->fields).interactable;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<TakeDamageEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__ShootableButton__Activate_System__Object__TakeDamageEventArgs_,
                 (MethodInfo *)0x0);
      if (pLVar2 != (LogicInteractable *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__EventHandler<TakeDamageEventArgs>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        ppEVar8 = &(pLVar2->fields).OnDamageEvent;
        a = (pLVar2->fields).OnDamageEvent;
        do {
          pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
          pEVar10 = TypeInfo__System__EventHandler<TakeDamageEventArgs>;
          pEVar11 = (EventHandler_1_TakeDamageEventArgs_ *)0x0;
          if ((pDVar9 != (Delegate *)0x0) &&
             (pEVar11 = (EventHandler_1_TakeDamageEventArgs_ *)
                        FUN_?(pDVar9,TypeInfo__System__EventHandler<TakeDamageEventArgs>),
             pEVar11 == (EventHandler_1_TakeDamageEventArgs_ *)0x0)) {
            FUN_?(pDVar9,pEVar10);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          LOCK();
          pEVar13 = *ppEVar8;
          bVar3 = a == pEVar13;
          if (bVar3) {
            *ppEVar8 = pEVar11;
            pEVar13 = a;
          }
          UNLOCK();
          pEVar11 = a;
          if (!bVar3) {
            pEVar11 = pEVar13;
          }
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)ppEVar8 >> 0xc);
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
          bVar3 = pEVar11 != a;
          a = pEVar11;
        } while (bVar3);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
            (IEditModeUI *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
              (IEditModeUI *)0x0) goto code_?;
          pDVar9 = (Delegate *)FUN_?();
          b = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
          FUN_?(b,this);
          pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar9,b,(MethodInfo *)0x0);
          pAVar14 = TypeInfo__System__Action<EditModeChangeArgs>;
          if ((pDVar9 != (Delegate *)0x0) &&
             (lVar15 = FUN_?(pDVar9,TypeInfo__System__Action<EditModeChangeArgs>),
             lVar15 == 0)) {
            FUN_?(pDVar9,pAVar14);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FUN_?();
        }
        pSVar16 = (this->fields).buttonObject;
        if ((pSVar16 != (ShootableButtonObject *)0x0) &&
           (pCVar17 = (pSVar16->fields).targetCollider2D, pCVar17 != (Collider *)0x0)) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar17,0,(MethodInfo *)0x0);
          iVar18 = iRam_?;
          pSVar16 = (this->fields).buttonObject;
          if (pSVar16 != (ShootableButtonObject *)0x0) {
            (this->fields).targetCollider = (pSVar16->fields).targetCollider3D;
            if (iVar18 != 0) {
              uVar4 = (uint)((ulonglong)&(this->fields).targetCollider >> 0xc);
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
                iVar18 = iRam_?;
              } while (!bVar3);
            }
            (this->fields)._._.collider = (this->fields).targetCollider;
            if (iVar18 != 0) {
              uVar4 = (uint)((ulonglong)&(this->fields)._._.collider >> 0xc);
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
            pSVar16 = (this->fields).buttonObject;
            if (pSVar16 != (ShootableButtonObject *)0x0) {
              MVLogicObject::MVLogicObject_SetupCulling
                        ((MVLogicObject *)this,(pSVar16->fields).visualRoot,
                         TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
              signalCallback =
                   (Action_3_Boolean_Boolean_LogicObjectManager_ *)
                   FUN_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
              FUN_?(signalCallback,this,
                            MethodInfo__ShootableButton__SignalCallback_bool__bool__LogicObjectManager_
                           );
              pIVar19 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                                  ((MVWorldObject *)this,0,signalCallback,(MethodInfo *)0x0);
              bVar3 = iRam_? != 0;
              (this->fields)._InputSignalReceiver_k__BackingField = pIVar19;
              if (bVar3) {
                uVar4 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >>
                               0xc);
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
              iVar20 = (this->fields)._._._.id;
              pOVar21 = (OutputSignalTransmitter *)FUN_?(TypeInfo__OutputSignalTransmitter);
              bVar3 = iRam_? != 0;
              (pOVar21->fields).woId = iVar20;
              (this->fields).outputSignalTransmitter = pOVar21;
              if (bVar3) {
                uVar4 = (uint)((ulonglong)&(this->fields).outputSignalTransmitter >> 0xc);
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
              iVar20 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
              if (iVar20 == -1) {
                return;
              }
              pCVar17 = (this->fields).targetCollider;
              if (pCVar17 != (Collider *)0x0) {
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          (pCVar17,0,(MethodInfo *)0x0);
                pSVar16 = (this->fields).buttonObject;
                if ((pSVar16 != (ShootableButtonObject *)0x0) &&
                   (this_00 = (pSVar16->fields).greyOutObject, this_00 != (GreyOutObjectScript *)0x0)
                   ) {
                  GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_InitializeInventory
               (ShootableButton *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).buttonObject;
  if (((pSVar1 == (ShootableButtonObject *)0x0) ||
      (this_00 = (pSVar1->fields).editCollider, this_00 == (Collider *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_OnDataUpdate
               (ShootableButton *this,MethodInfo *method)

{
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

void Assembly-CSharp.dll::ShootableButton::ShootableButton_OnEditModeChange
               (ShootableButton *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pSVar1 = (this->fields).buttonObject;
  if ((pSVar1 != (ShootableButtonObject *)0x0) &&
     (pCVar2 = (pSVar1->fields).editCollider, pCVar2 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar2,1,(MethodInfo *)0x0);
    pCVar2 = (this->fields).targetCollider;
    if (pCVar2 != (Collider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (pCVar2,0,(MethodInfo *)0x0);
      if (arg.playInEditor == 0) {
        return;
      }
      pSVar1 = (this->fields).buttonObject;
      if ((pSVar1 != (ShootableButtonObject *)0x0) &&
         (pCVar2 = (pSVar1->fields).editCollider, pCVar2 != (Collider *)0x0)) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar2,0,(MethodInfo *)0x0);
        pCVar2 = (this->fields).targetCollider;
        if (pCVar2 != (Collider *)0x0) {
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


/* Void OnIsFiringChanged(Boolean) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_OnIsFiringChanged
               (ShootableButton *this,bool isFiring,MethodInfo *method)

{
  ShootableButton_set_CurrentTime(this,isFiring - 1,(MethodInfo *)0x0);
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       (this_01 = (pSVar1->fields).greyOutObject, this_01 != (GreyOutObjectScript *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this_01,
                 MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                 ,(MethodInfo *)0x0);
      GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                (this_01,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_02,
                 (MethodInfo *)0x0);
      (this_01->fields).isGreyedIn = 0;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_Reset
               (ShootableButton *this,MethodInfo *method)

{
  ShootableButton_set_CurrentTime(this,-1,(MethodInfo *)0x0);
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       (this_01 = (pSVar1->fields).greyOutObject, this_01 != (GreyOutObjectScript *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)0x0,
                 MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                 ,(MethodInfo *)0x0);
      GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                (this_01,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_02,
                 (MethodInfo *)0x0);
      (this_01->fields).isGreyedIn = 1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetToDownState() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_SetToDownState
               (ShootableButton *this,MethodInfo *method)

{
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       (this_01 = (pSVar1->fields).greyOutObject, this_01 != (GreyOutObjectScript *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this_01,
                 MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                 ,(MethodInfo *)0x0);
      GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                (this_01,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_02,
                 (MethodInfo *)0x0);
      (this_01->fields).isGreyedIn = 0;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetToUpState() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_SetToUpState
               (ShootableButton *this,MethodInfo *method)

{
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       (this_01 = (pSVar1->fields).greyOutObject, this_01 != (GreyOutObjectScript *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)0x0,
                 MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                 ,(MethodInfo *)0x0);
      GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                (this_01,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_02,
                 (MethodInfo *)0x0);
      (this_01->fields).isGreyedIn = 1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_SignalCallback
               (ShootableButton *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  auStack_1._8_8_ = &UNK_?;
  iVar2 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
  if (iVar2 == -1) {
    pOVar3 = (this->fields).outputSignalTransmitter;
    if (pOVar3 != (OutputSignalTransmitter *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__IInputSignalReceiver);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ILogicWorldObject);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar4 == (MVWorldObjectClientManager *)0x0) ||
          (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar4,(pOVar3->fields).woId,(MethodInfo *)0x0),
          pMVar5 == (MVWorldObjectClient *)0x0)) ||
         (auStack_1._0_8_ = (pMVar5->fields)._.outputLinkRefs,
         (List_1_MV_WorldObject_Link_ *)auStack_1._0_8_ == (List_1_MV_WorldObject_Link_ *)0x0)) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      puStack_12 = (undefined1 *)
                   ((ulonglong)
                    (uint)(((List_1_MV_WorldObject_Link_ *)auStack_1._0_8_)->fields)._version <<
                   0x20);
      puStack_13 = (undefined *)0x0;
      auStack_1._8_8_ = puStack_12;
      pOStack_14 = (Object *)0x0;
      uStack_8 = 0;
      puStack_12 = auStack_1;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                           );
        pOVar16 = pOStack_14;
        if (bVar15 == 0) {
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar17 == (MVGameControllerBase *)0x0) goto code_?;
        pMVar18 = (pMVar17->fields).game;
        if (pMVar18 == (MVNetworkGame *)0x0) break;
        pMVar4 = (MVWorldObjectClientManager *)0x0;
        if ((pMVar18->fields).worldNetwork != (WorldNetwork *)0x0) {
          pMVar4 = (MVWorldObjectClientManager *)
                    (((pMVar18->fields).worldNetwork)->fields)._.worldObjectClientManager;
        }
        if (pOVar16 == (Object *)0x0) {
code_?:
          FUN_?();
          break;
        }
        if (pMVar4 == (MVWorldObjectClientManager *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar4,*(int32_t *)&pOVar16[1].monitor,(MethodInfo *)0x0);
        pIVar19 = TypeInfo__ILogicWorldObject;
        if (pMVar5 == (MVWorldObjectClient *)0x0) {
          FUN_?();
code_?:
          FUN_?();
code_?:
          uVar20 = FUN_?(pMVar5,unaff_RSI);
code_?:
          FUN_?(uVar20,pIVar19);
          goto code_?;
        }
        lVar21 = FUN_?(pMVar5,TypeInfo__ILogicWorldObject);
        unaff_RSI = TypeInfo__ILogicWorldObject;
        uVar20 = extraout_XMM0_Da;
        if (lVar21 == 0) goto code_?;
        pIVar19 = (ILogicWorldObject__Class *)FUN_?(pMVar5,TypeInfo__ILogicWorldObject);
        if (pIVar19 == (ILogicWorldObject__Class *)0x0) goto code_?;
        pIVar22 = (pIVar19->_0).image;
        uVar23 = 0;
        uVar24 = *(ushort *)((longlong)&pIVar22[4].nameNoExt + 6);
        if (uVar24 != 0) {
          uVar25 = uVar23;
          do {
            if (*(ILogicWorldObject__Class **)
                 (*(longlong *)&pIVar22[2].customAttributeCount + (ulonglong)uVar25 * 0x10) ==
                TypeInfo__ILogicWorldObject) {
              puVar26 = &pIVar22[4].typeCount +
                        (longlong)
                        *(int *)(*(longlong *)&pIVar22[2].customAttributeCount + 8 +
                                (ulonglong)uVar25 * 0x10) * 4;
              goto code_?;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar24);
        }
        puVar26 = (uint32_t *)FUN_?(pIVar19,TypeInfo__ILogicWorldObject,0);
code_?:
        plVar27 = (longlong *)(**(code **)puVar26)(pIVar19,*(undefined8 *)(puVar26 + 2));
        pMVar5 = (MVWorldObjectClient *)0x0;
        if (plVar27 == (longlong *)0x0) goto code_?;
        lVar21 = *plVar27;
        if (*(ushort *)(lVar21 + 0x12e) != 0) {
          do {
            if (*(IInputSignalReceiver__Class **)
                 (*(longlong *)(lVar21 + 0xb0) + (ulonglong)uVar23 * 0x10) ==
                TypeInfo__IInputSignalReceiver) {
              puVar28 = (undefined8 *)
                        ((longlong)
                         *(int *)(*(longlong *)(lVar21 + 0xb0) + 8 + (ulonglong)uVar23 * 0x10) *
                         0x10 + 0x138 + lVar21);
              goto code_?;
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 < *(ushort *)(lVar21 + 0x12e));
        }
        puVar28 = (undefined8 *)FUN_?(plVar27,TypeInfo__IInputSignalReceiver,0);
code_?:
        (*(code *)*puVar28)(plVar27,0);
        *(undefined1 *)((longlong)&pOVar16[1].monitor + 4) = 0;
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    auStack_1._8_8_ = &UNK_?;
    iVar2 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      auStack_1._8_8_ = &UNK_?;
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      auStack_1._8_8_ = &UNK_?;
      FUN_?(&StringLiteral_duration);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._._._.data;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      auStack_1._8_8_ = &UNK_?;
      pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_00,(Object *)StringLiteral_duration,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar16 != (Object *)0x0) {
        if ((pOVar16->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          auStack_1._8_8_ = &UNK_?;
          FUN_?(pOVar16,lRam_?);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pOVar3 = (this->fields).outputSignalTransmitter;
        if (pOVar3 != (OutputSignalTransmitter *)0x0) {
          if (iVar2 <= (int)(*(float *)&pOVar16[1].klass * _UNK_?)) {
            auStack_1._8_8_ = &UNK_?;
            OutputSignalTransmitter::OutputSignalTransmitter_Send(pOVar3,1,(MethodInfo *)0x0);
            auStack_1._8_8_ = &UNK_?;
            iVar2 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&
                            void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                            ,iVar2 + 100,0);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__Extensions);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_cT);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uVar29 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?();
            }
            Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_Encrypt(iVar2 + 100,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            }
            Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
              FUN_?();
            }
            FUN_?(uVar29,StringLiteral_cT,&stack0xffffffffffffffe8);
            return;
          }
          auStack_1._8_8_ = &UNK_?;
          OutputSignalTransmitter::OutputSignalTransmitter_Send(pOVar3,0,(MethodInfo *)0x0);
          auStack_1._8_8_ = &UNK_?;
          ShootableButton_set_CurrentTime(this,-1,(MethodInfo *)0x0);
          this_01 = (this->fields).targetCollider;
          if (this_01 != (Collider *)0x0) {
            auStack_1._8_8_ = &UNK_?;
            UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                      (this_01,1,(MethodInfo *)0x0);
            pSVar30 = (this->fields).buttonObject;
            if ((pSVar30 != (ShootableButtonObject *)0x0) &&
               (this_02 = (pSVar30->fields).greyOutObject, this_02 != (GreyOutObjectScript *)0x0)) {
              if (cRam_? == '\0') {
                auStack_1._8_8_ = &UNK_?;
                FUN_?(&
                              TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                             );
                LOCK();
                UNLOCK();
                auStack_1._8_8_ = &UNK_?;
                FUN_?(&
                              MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              auStack_1._8_8_ = &UNK_?;
              this_03 = (UnityAction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                     );
              auStack_1._8_8_ = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_03,(Object *)0x0,
                         MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                         ,(MethodInfo *)0x0);
              auStack_1._8_8_ = &UNK_?;
              GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                        (this_02,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_03,
                         (MethodInfo *)0x0);
              (this_02->fields).isGreyedIn = 1;
              return;
            }
          }
        }
      }
    }
  }
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ShootableButton(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton__ctor
               (ShootableButton *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ShootableButtonObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).shootableButtonPrefab,
             worldObjects,(MethodInfo *)0x0);
  piVar3 = &(this->fields)._._.interactionFlags;
  *piVar3 = *piVar3 | 0x18000;
  pSVar4 = (ShootableButtonObject *)(this->fields)._._.component;
  (this->fields)._._._PlayInteractionType_k__BackingField = 1;
  if (pSVar4 == (ShootableButtonObject *)0x0) {
    (this->fields).buttonObject = (ShootableButtonObject *)0x0;
  }
  else {
    bVar5 = (TypeInfo__ShootableButtonObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSVar4->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pSVar4->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__ShootableButtonObject)) {
      FUN_?(pSVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).buttonObject = pSVar4;
    bVar5 = (TypeInfo__ShootableButtonObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSVar4->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pSVar4->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__ShootableButtonObject)) {
      FUN_?(pSVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).buttonObject >> 0xc);
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
  return;
}


/* Int32 get_CurrentTime() */

int32_t Assembly-CSharp.dll::ShootableButton::ShootableButton_get_CurrentTime
                  (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cT);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_cT,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      OStack_2.currentCryptoKey = *(int32_t *)&pOVar1[1].klass;
      OStack_2.hiddenValue = *(int32_t *)((longlong)&pOVar1[1].klass + 4);
      OStack_2.fakeValue = *(int32_t *)&pOVar1[1].monitor;
      OStack_2._12_4_ = *(undefined4 *)((longlong)&pOVar1[1].monitor + 4);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_InternalDecrypt(&OStack_2,(MethodInfo *)0x0);
      return iVar3;
    }
    FUN_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    pcVar4 = (code *)swi(3);
    iVar3 = (*pcVar4)();
    return iVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Int32 get_Duration() */

int32_t Assembly-CSharp.dll::ShootableButton::ShootableButton_get_Duration
                  (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_duration);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_duration,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return (int)(*(float *)&pOVar1[1].klass * _UNK_?);
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::ShootableButton::ShootableButton_get_IsActive
               (ShootableButton *this,MethodInfo *method)

{
  iVar1 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
  return iVar1 != -1;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::ShootableButton::ShootableButton_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,ShootableButton *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 1.6;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Void set_CurrentTime(Int32) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_set_CurrentTime
               (ShootableButton *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cT);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uStack_3._0_5_ = CONCAT14(1,(int32_t)uStack_3);
  uStack_2 = CONCAT44(iVar4,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                             static_fields->cryptoKey);
  bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar4 = 0;
  if (bVar5 != 0) {
    iVar4 = value;
  }
  uStack_3._0_4_ = iVar4;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(uVar1,StringLiteral_cT,&uStack_2);
  return;
}


/* Void set_IsActive(Boolean) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_set_IsActive
               (ShootableButton *this,bool value,MethodInfo *method)

{
  value_00 = value - 1;
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                  ,value_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cT);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uStack_3._0_5_ = CONCAT14(1,(int)uStack_3);
  uStack_2 = CONCAT44(iVar4,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                             static_fields->cryptoKey);
  bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar6 = 0;
  if (bVar5 != 0) {
    iVar6 = value_00;
  }
  uStack_3._0_4_ = iVar6;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(uVar1,StringLiteral_cT,&uStack_2);
  return;
}

