
/* Void CreateCollectableInstance(Vector3, Quaternion) */

void Assembly-CSharp.dll::CollectTheItemCollectable::
     CollectTheItemCollectable_CreateCollectableInstance
               (CollectTheItemCollectable *this,Vector3 *position,Quaternion *rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    this_00 = (pMVar2->fields).operationRequests;
    root = (this->fields).collectableInstance;
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
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
      uVar3 = 0;
      this_01 = MVNetworkGame+OperationRequests::
                MVNetworkGame_OperationRequests_CreateBasicCloneData
                          (this_00,(MVWorldObjectClient *)root,1,0,1,(MethodInfo *)0x0);
      auStack_4[0] = 1;
      value = (Object *)FUN_?(uRam_?,auStack_4);
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0xcb,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        QStack_5.x = position->x;
        QStack_5.y = position->y;
        QStack_5.z = position->z;
        MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
                  ((Vector3 *)&QStack_5,this_01,(MethodInfo *)0x0);
        QStack_5.x = rotation->x;
        QStack_5.y = rotation->y;
        QStack_5.z = rotation->z;
        QStack_5.w = rotation->w;
        pDVar6 = this_01;
        MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
                  (&QStack_5,this_01,(MethodInfo *)0x0);
        pPVar7 = (this_00->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar7 != (PhotonPeer *)0x0) {
          (*(pPVar7->klass->vtable).SendOperation.methodPtr)
                    (pPVar7,CONCAT71((int7)((ulonglong)pDVar6 >> 8),0x41),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar7->klass->vtable).SendOperation.method);
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


/* Void Destroy() */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_Destroy
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    pUVar1 = (this->fields)._._._.PositionChanged;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar1,(Delegate *)this_02,(MethodInfo *)0x0);
    pUVar3 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      (this->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                FUN_?(pDVar2,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        FUN_?(pDVar2,pUVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->fields)._._._.PositionChanged = pUVar1;
      pUVar3 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      lVar5 = FUN_?();
      if (lVar5 == 0) {
        FUN_?(pDVar2,pUVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields)._._._.PositionChanged >> 0xc);
      lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar8 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 == (CullingSubscriberBase *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    bVar9 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar9) {
      uVar6 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar8 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  if ((this->fields).OnCollectTheItemDestroyed != (Action *)0x0) {
    pAVar10 = (this->fields).OnCollectTheItemDestroyed;
    (*(pAVar10->fields)._._.invoke_impl)
              ((pAVar10->fields)._._.method_code,(pAVar10->fields)._._.method);
    bVar9 = iRam_? != 0;
    (this->fields).OnCollectTheItemDestroyed = (Action *)0x0;
    if (bVar9) {
      uVar6 = (uint)((ulonglong)&(this->fields).OnCollectTheItemDestroyed >> 0xc);
      lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar8 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar11 = (this->fields)._._._.gameObject;
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
      pGVar11 = (this->fields)._._._.gameObject;
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
  if ((this->fields)._._._.initializedFromInventory != 0) {
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
    item = (this->fields)._._._._.id;
    if (pRVar14 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar14->fields).runtimeDataVariables;
      if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_01,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar15 != 0) {
          pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar13 == (MVNetworkGame *)0x0) ||
             (pRVar14 = (pMVar13->fields).runtimeVariableNetworkManager,
             pRVar14 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar14,(this->fields)._._._._.id,(MethodInfo *)0x0);
        }
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


/* Dictionary`2[System.String,System.Object] GetItemData() */

Dictionary_2_System_String_System_Object_ *
Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_GetItemData
          (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_dropOffId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isOriginal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spawnerId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cubeModelId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  pMVar1 = (this->fields).collectableModel;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    aiStackX_8[0] = (pMVar1->fields)._._._.id;
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_8);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      IVar3 = CONCAT31((int3)((uint)in_R9D >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                 (Object *)StringLiteral_cubeModelId,pOVar2,IVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pCVar4 = (this->fields).controller;
      if ((pCVar4 != (CollectTheItem *)0x0) &&
         (pCVar5 = (pCVar4->fields).dropOff, pCVar5 != (CollectTheItemDropOff *)0x0)) {
        aiStackX_8[0] = (pCVar5->fields)._._._._.id;
        pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_8);
        IVar3 = CONCAT31((int3)(IVar3 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_dropOffId,pOVar2,IVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        aiStackX_8[0] = (this->fields)._._._._.id;
        pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_8);
        IVar3 = CONCAT31((int3)(IVar3 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_spawnerId,pOVar2,IVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,1);
        pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_isOriginal,pOVar2,CONCAT31((int3)(IVar3 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return (Dictionary_2_System_String_System_Object_ *)this_00;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pDVar7 = (Dictionary_2_System_String_System_Object_ *)(*pcVar6)();
  return pDVar7;
}


/* Void InitializeWithController(CollectTheItem) */

void Assembly-CSharp.dll::CollectTheItemCollectable::
     CollectTheItemCollectable_InitializeWithController
               (CollectTheItemCollectable *this,CollectTheItem *controller,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CollectTheItemCollectable__OnStateChanged_UnityEngine__CullingGroupEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).controller = controller;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).controller >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  CollectTheItemCollectable_SetupCollectableModel(this,(MethodInfo *)0x0);
  pMVar6 = (this->fields).collectableModel;
  if ((pMVar6 != (MVCubeModelInstance *)0x0) && (controller != (CollectTheItem *)0x0)) {
    (controller->fields)._WoKeyInstance_k__BackingField = (pMVar6->fields)._._._.id;
    obj = (this->fields)._._._.transform;
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_7.x = 0.0;
      VStack_7.y = 0.0;
      VStack_7.z = 0.0;
      pvVar8 = (obj->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar8,&VStack_7);
      callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                 FUN_?(
                              TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                              );
      FUN_?(callback,this);
      this_00 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
      CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,callback,(MethodInfo *)0x0);
      VStack_11.z = VStack_7.z;
      VStack_11.x = VStack_7.x;
      VStack_11.y = VStack_7.y;
      CullingSubscriberBase::CullingSubscriberBase_Setup
                (this_00,TypeRef__System__Activator__T._0_4_,&VStack_11,(MethodInfo *)0x0);
      bVar1 = iRam_? != 0;
      (this->fields).cullingSubscriberBase = this_00;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pUVar12 = (this->fields)._._._.PositionChanged;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar12,(Delegate *)this_01,(MethodInfo *)0x0);
      pUVar14 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar13 == (Delegate *)0x0) {
        (this->fields)._._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar12 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                 FUN_?(pDVar13,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (pUVar12 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar13,pUVar14);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (this->fields)._._._.PositionChanged = pUVar12;
        pUVar14 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar15 = FUN_?(pDVar13,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
        if (lVar15 == 0) {
          FUN_?(pDVar13,pUVar14);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(this->fields)._._._.PositionChanged >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_OnEnterObject
               (CollectTheItemCollectable *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).collectableInstance;
  if (this_00 != (CollectTheItemCollectableInstance *)0x0) {
    CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_SetRotationEnabled
              (this_00,0,(MethodInfo *)0x0);
    pMVar1 = (this->fields).collectableModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      obj = (pMVar1->fields)._._.transform;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
      if (obj != (Transform *)0x0) {
        fStack_3 = (pQVar2->identityQuaternion).x;
        fStack_4 = (pQVar2->identityQuaternion).y;
        fStack_5 = (pQVar2->identityQuaternion).z;
        fStack_6 = (pQVar2->identityQuaternion).w;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar7 = (obj->fields)._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7,&fStack_3);
        pEVar11 = (this->fields).editableCubeModelWrapper;
        if (pEVar11 != (EditableCubeModelWrapper *)0x0) {
          bVar9 = (*(pEVar11->klass->vtable).OnEnterObject.methodPtr)
                            (pEVar11,e,(pEVar11->klass->vtable).OnEnterObject.method);
          return bVar9;
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_OnExitObject
               (CollectTheItemCollectable *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).collectableInstance;
  if (this_00 != (CollectTheItemCollectableInstance *)0x0) {
    CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_SetRotationEnabled
              (this_00,1,(MethodInfo *)0x0);
    pEVar1 = (this->fields).editableCubeModelWrapper;
    if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar2 = (*(pEVar1->klass->vtable).OnExitObject.methodPtr)
                        (pEVar1,e,(pEVar1->klass->vtable).OnExitObject.method);
      return bVar2;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_OnStateChanged
               (CollectTheItemCollectable *this,CullingGroupEvent cullingEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    obj = (this->fields)._._._.gameObject;
    if (obj != (GameObject *)0x0) {
      bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                        (cullingEvent,distanceBandIndex,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,bVar2,0,in_R9,unaff_RSI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (obj->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar4,bVar2);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupCollectableModel() */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_SetupCollectableModel
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CollectTheItemCollectableInstance__SetupGreyoutScript_System__Object__EditStateEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemCollectableInstance);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditableCubeModelWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CollectableModel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CollectableInstance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (CollectTheItemCollectableInstance *)
            MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_CollectableInstance,(MethodInfo *)0x0);
  if (pCVar1 == (CollectTheItemCollectableInstance *)0x0) {
    (this->fields).collectableInstance = (CollectTheItemCollectableInstance *)0x0;
  }
  else {
    bVar2 = (TypeInfo__CollectTheItemCollectableInstance->_1).naturalAligment;
    if (((pCVar1->klass->_1).naturalAligment < bVar2) ||
       ((CollectTheItemCollectableInstance__Class *)
        (pCVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__CollectTheItemCollectableInstance)) {
      FUN_?(pCVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).collectableInstance = pCVar1;
    bVar2 = (TypeInfo__CollectTheItemCollectableInstance->_1).naturalAligment;
    if (((pCVar1->klass->_1).naturalAligment < bVar2) ||
       ((CollectTheItemCollectableInstance__Class *)
        (pCVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__CollectTheItemCollectableInstance)) {
      FUN_?(pCVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).collectableInstance >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pCVar1 = (this->fields).collectableInstance;
  if (pCVar1 != (CollectTheItemCollectableInstance *)0x0) {
    pMVar9 = (MVCubeModelInstance *)
              MVBlueprintBase::MVBlueprintBase_GetChild
                        ((MVBlueprintBase *)pCVar1,StringLiteral_CollectableModel,(MethodInfo *)0x0
                        );
    if (pMVar9 == (MVCubeModelInstance *)0x0) {
      (this->fields).collectableModel = (MVCubeModelInstance *)0x0;
    }
    else {
      bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar9->klass->_1).naturalAligment < bVar2) ||
         ((MVCubeModelInstance__Class *)(pMVar9->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        FUN_?(pMVar9);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->fields).collectableModel = pMVar9;
      bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar9->klass->_1).naturalAligment < bVar2) ||
         ((MVCubeModelInstance__Class *)(pMVar9->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        FUN_?(pMVar9);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).collectableModel >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pMVar9 = (this->fields).collectableModel;
    if (pMVar9 != (MVCubeModelInstance *)0x0) {
      (*(pMVar9->klass->vtable).set_Visible.methodPtr)();
      pMVar9 = (this->fields).collectableModel;
      if (pMVar9 != (MVCubeModelInstance *)0x0) {
        gameObject = (pMVar9->fields)._._.gameObject;
        iVar10 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Player,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively_4(gameObject,iVar10,(MethodInfo *)0x0);
        pMVar9 = (this->fields).collectableModel;
        if (pMVar9 != (MVCubeModelInstance *)0x0) {
          obj = (pMVar9->fields)._._.transform;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj != (Transform *)0x0) {
            auStack_11._0_8_ = *(ObscuredShort *)TypeInfo__UnityEngine__Quaternion->static_fields;
            auStack_11._8_8_ =
                 ((ObscuredShort *)TypeInfo__UnityEngine__Quaternion->static_fields)[1];
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar12 = (obj->fields)._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar13 = func_?(&UNK_?);
              FUN_?(uVar13,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar12,auStack_11);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
            ;
            if (pGVar14 != (GameSessionData *)0x0) {
              if ((pGVar14->fields).gameMode != 0) {
                return;
              }
              pCVar1 = (this->fields).collectableInstance;
              if (pCVar1 != (CollectTheItemCollectableInstance *)0x0) {
                pUVar15 = (pCVar1->fields)._._._.PositionChanged;
                pUVar16 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar16,(Object *)this,
                           MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                           ,(MethodInfo *)0x0);
                pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pUVar15,(Delegate *)pUVar16,(MethodInfo *)0x0);
                pUVar18 = 
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                ;
                if (pDVar17 == (Delegate *)0x0) {
                  (pCVar1->fields)._._._.PositionChanged =
                       (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
                }
                else {
                  pUVar15 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                            FUN_?(pDVar17,
                                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                         );
                  if (pUVar15 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
                  {
                    FUN_?(pDVar17,pUVar18);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  (pCVar1->fields)._._._.PositionChanged = pUVar15;
                  pUVar18 = 
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                  ;
                  lVar5 = FUN_?();
                  if (lVar5 == 0) {
                    FUN_?(pDVar17,pUVar18);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar4 = (uint)((ulonglong)&(pCVar1->fields)._._._.PositionChanged >> 0xc);
                  lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                    puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                    LOCK();
                    bVar8 = uVar6 == *puVar7;
                    if (bVar8) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                pMVar9 = (this->fields).collectableModel;
                OVar19 = (this->fields).minBounds.x;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                OStackX_18 = OVar19;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_18,(MethodInfo *)0x0)
                ;
                OStackX_20 = (this->fields).minBounds.y;
                OStackX_18.currentCryptoKey = iVar20;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_20,(MethodInfo *)0x0)
                ;
                auStack_11._0_8_ = (this->fields).minBounds.z;
                OStackX_20.currentCryptoKey = iVar20;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredShort::ObscuredShort_InternalDecrypt
                                   ((ObscuredShort *)auStack_11,(MethodInfo *)0x0);
                auStack_11._0_8_ = (this->fields).maxBounds.x;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredShort::ObscuredShort_InternalDecrypt
                                   ((ObscuredShort *)auStack_11,(MethodInfo *)0x0);
                auStack_11._0_8_ = (this->fields).maxBounds.y;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredShort::ObscuredShort_InternalDecrypt
                                   ((ObscuredShort *)auStack_11,(MethodInfo *)0x0);
                auStack_11._0_8_ = (this->fields).maxBounds.z;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredShort::ObscuredShort_InternalDecrypt
                                   ((ObscuredShort *)auStack_11,(MethodInfo *)0x0);
                OVar19 = *(ObscuredShort *)&(this->fields).minCubes;
                OVar24 = *(ObscuredShort *)&(this->fields).minCubes.fakeValue;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                auStack_11._0_8_ = OVar19;
                auStack_11._8_8_ = OVar24;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredInt::ObscuredInt_InternalDecrypt
                                   ((ObscuredInt *)auStack_11,(MethodInfo *)0x0);
                pEVar25 = (EditableCubeModelWrapper *)
                          FUN_?(TypeInfo__EditableCubeModelWrapper);
                uVar13 = auStack_11._0_8_;
                OVar19 = OStackX_18;
                bVar8 = iRam_? != 0;
                auStack_11._2_2_ = iVar22;
                auStack_11._0_2_ = iVar21;
                (pEVar25->fields).cubeModelBase = pMVar9;
                if (bVar8) {
                  uVar4 = (uint)((ulonglong)&pEVar25->fields >> 0xc);
                  lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                    puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                    LOCK();
                    bVar8 = uVar6 == *puVar7;
                    if (bVar8) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                if (pMVar9 != (MVCubeModelInstance *)0x0) {
                  piVar26 = &(pMVar9->fields)._._.interactionFlags;
                  *piVar26 = *piVar26 | 0x10;
                  OStackX_18.hiddenValue = OStackX_20.currentCryptoKey;
                  OStackX_18._6_2_ = OVar19._6_2_;
                  OStackX_18.fakeValue = iVar20;
                  auStack_11._6_2_ = SUB82(uVar13,6);
                  auStack_11._4_2_ = iVar23;
                  EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
                            (pEVar25,(IntVector *)&OStackX_18,(IntVector *)auStack_11,iVar10,
                             (MethodInfo *)0x0);
                  bVar8 = iRam_? != 0;
                  (this->fields).editableCubeModelWrapper = pEVar25;
                  if (bVar8) {
                    uVar4 = (uint)((ulonglong)&(this->fields).editableCubeModelWrapper >> 0xc);
                    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                      LOCK();
                      bVar8 = uVar6 == *puVar7;
                      if (bVar8) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar8);
                  }
                  pEVar25 = (this->fields).editableCubeModelWrapper;
                  if (pEVar25 != (EditableCubeModelWrapper *)0x0) {
                    pMVar9 = (pEVar25->fields).cubeModelBase;
                    pCVar1 = (this->fields).collectableInstance;
                    pUVar16 = (UnityAction_2_System_Object_System_Object_ *)
                              FUN_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (pUVar16,(Object *)pCVar1,
                               MethodInfo__CollectTheItemCollectableInstance__SetupGreyoutScript_System__Object__EditStateEventArgs_
                               ,(MethodInfo *)0x0);
                    if (pMVar9 != (MVCubeModelInstance *)0x0) {
                      MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                                ((MVCubeModelBase *)pMVar9,
                                 (EventHandler_1_EditStateEventArgs_ *)pUVar16,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
              goto code_?;
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
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CollectTheItemCollectable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable__ctor
               (CollectTheItemCollectable *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(-3,(MethodInfo *)0x0);
  OVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(0,(MethodInfo *)0x0);
  OVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(-3,(MethodInfo *)0x0);
  bVar4 = cRam_? == '\0';
  uStack_5._0_4_ = OVar1._0_4_;
  uStack_5._4_4_ = OVar1._4_4_;
  uStack_6._0_4_ = OVar2._0_4_;
  uStack_6._4_4_ = OVar2._4_4_;
  (this->fields).minBounds.x.currentCryptoKey = (undefined2)uStack_5;
  (this->fields).minBounds.x.hiddenValue = uStack_5._2_2_;
  (this->fields).minBounds.x.fakeValue = uStack_5._4_2_;
  (this->fields).minBounds.x.inited = uStack_5._6_1_;
  (this->fields).minBounds.x.field_0x7 = uStack_5._7_1_;
  (this->fields).minBounds.y.currentCryptoKey = (undefined2)uStack_6;
  (this->fields).minBounds.y.hiddenValue = uStack_6._2_2_;
  (this->fields).minBounds.y.fakeValue = uStack_6._4_2_;
  (this->fields).minBounds.y.inited = uStack_6._6_1_;
  (this->fields).minBounds.y.field_0x7 = uStack_6._7_1_;
  (this->fields).minBounds.z = OVar3;
  if (bVar4) {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(3,(MethodInfo *)0x0);
  OVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(6,(MethodInfo *)0x0);
  OVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(3,(MethodInfo *)0x0);
  uStack_5._0_4_ = OVar1._0_4_;
  uStack_5._4_4_ = OVar1._4_4_;
  uStack_6._0_4_ = OVar2._0_4_;
  uStack_6._4_4_ = OVar2._4_4_;
  (this->fields).maxBounds.x.currentCryptoKey = (undefined2)uStack_5;
  (this->fields).maxBounds.x.hiddenValue = uStack_5._2_2_;
  (this->fields).maxBounds.x.fakeValue = uStack_5._4_2_;
  (this->fields).maxBounds.x.inited = uStack_5._6_1_;
  (this->fields).maxBounds.x.field_0x7 = uStack_5._7_1_;
  (this->fields).maxBounds.y.currentCryptoKey = (undefined2)uStack_6;
  (this->fields).maxBounds.y.hiddenValue = uStack_6._2_2_;
  (this->fields).maxBounds.y.fakeValue = uStack_6._4_2_;
  (this->fields).maxBounds.y.inited = uStack_6._6_1_;
  (this->fields).maxBounds.y.field_0x7 = uStack_6._7_1_;
  (this->fields).maxBounds.z = OVar3;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uVar8 = 0;
  iVar9 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar10 != 0) {
    uVar8 = 5;
  }
  uStack_6 = (ulonglong)CONCAT14(1,uVar8);
  (this->fields).minCubes.currentCryptoKey = iVar9;
  (this->fields).minCubes.hiddenValue = iVar7;
  (this->fields).minCubes.fakeValue = (undefined4)uStack_6;
  (this->fields).minCubes.inited = uStack_6._4_1_;
  *(undefined3 *)&(this->fields).minCubes.field_0xd = uStack_6._5_3_;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  (this->fields)._._._.interactionFlags =
       (this->fields)._._._.interactionFlags & 0xffffffffffffdfffU | 0x9008;
  return;
}


/* Int32 get_CollectableModelId() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectable::
        CollectTheItemCollectable_get_CollectableModelId
                  (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).collectableModel == (MVCubeModelInstance *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pCVar1 = (CollectTheItem *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
    if (pCVar1 == (CollectTheItem *)0x0) {
      (this->fields).controller = (CollectTheItem *)0x0;
    }
    else {
      bVar2 = (TypeInfo__CollectTheItem->_1).naturalAligment;
      if (((pCVar1->klass->_1).naturalAligment < bVar2) ||
         ((CollectTheItem__Class *)(pCVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__CollectTheItem)) {
        FUN_?(pCVar1);
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      (this->fields).controller = pCVar1;
      bVar2 = (TypeInfo__CollectTheItem->_1).naturalAligment;
      if (((pCVar1->klass->_1).naturalAligment < bVar2) ||
         ((CollectTheItem__Class *)(pCVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__CollectTheItem)) {
        FUN_?(pCVar1);
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(this->fields).controller >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    pCVar1 = (this->fields).controller;
    if (pCVar1 == (CollectTheItem *)0x0) goto code_?;
    CollectTheItem::CollectTheItem_SetupReferences(pCVar1,(MethodInfo *)0x0);
  }
  pMVar9 = (this->fields).collectableModel;
  if (pMVar9 != (MVCubeModelInstance *)0x0) {
    return (pMVar9->fields)._._._.id;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 get_DropOffId() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                  (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).controller == (CollectTheItem *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pCVar1 = (CollectTheItem *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
    if (pCVar1 == (CollectTheItem *)0x0) {
      (this->fields).controller = (CollectTheItem *)0x0;
    }
    else {
      bVar2 = (TypeInfo__CollectTheItem->_1).naturalAligment;
      if (((pCVar1->klass->_1).naturalAligment < bVar2) ||
         ((CollectTheItem__Class *)(pCVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__CollectTheItem)) {
        FUN_?(pCVar1);
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      (this->fields).controller = pCVar1;
      bVar2 = (TypeInfo__CollectTheItem->_1).naturalAligment;
      if (((pCVar1->klass->_1).naturalAligment < bVar2) ||
         ((CollectTheItem__Class *)(pCVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__CollectTheItem)) {
        FUN_?(pCVar1);
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(this->fields).controller >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    pCVar1 = (this->fields).controller;
    if (pCVar1 == (CollectTheItem *)0x0) goto code_?;
    CollectTheItem::CollectTheItem_SetupReferences(pCVar1,(MethodInfo *)0x0);
  }
  pCVar1 = (this->fields).controller;
  if ((pCVar1 != (CollectTheItem *)0x0) &&
     (pCVar9 = (pCVar1->fields).dropOff, pCVar9 != (CollectTheItemDropOff *)0x0)) {
    return (pCVar9->fields)._._._._.id;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean get_HasArrowIndicator() */

bool Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_get_HasArrowIndicator
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  pCVar1 = (this->fields).collectableInstance;
  if (pCVar1 != (CollectTheItemCollectableInstance *)0x0) {
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
    this_00 = (pCVar1->fields)._.blueprintData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_hasIndicator,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          return *(bool *)&pOVar2[1].klass;
        }
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_HasDropOff() */

bool Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_get_HasDropOff
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  if ((this->fields).controller == (CollectTheItem *)0x0) {
    return 0;
  }
  return (((this->fields).controller)->fields).dropOff != (CollectTheItemDropOff *)0x0;
}

