
/* Void Destroy() */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_Destroy(MVTriggerBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).triggerBoxEvents;
  pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar1 != (TriggerBoxEvents *)0x0) {
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pTVar1 = (this->fields).triggerBoxEvents;
    pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar2,(Object *)this,
               MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
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
        bVar3 = iRam_? != 0;
        (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
          puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar6 = *puVar5;
            LOCK();
            uVar7 = *puVar5;
            if (uVar6 == uVar7) {
              *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar6 != uVar7);
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar8 = (this->fields)._._.gameObject;
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
      if (pGVar8 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar8->fields)._.m_CachedPtr != (void *)0x0) {
          pGVar8 = (this->fields)._._.gameObject;
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
                    ((Object_1 *)pGVar8,0.0,(MethodInfo *)0x0);
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
      pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar9 != (MVGameControllerBase *)0x0) &&
         (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) {
        pRVar11 = (pMVar10->fields).runtimeVariableNetworkManager;
        item = (this->fields)._._._.id;
        if (pRVar11 != (RuntimeVariableNetworkManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar11->fields).runtimeDataVariables;
          if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
            bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                    HashSet_1_System_Int32Enum__Contains
                              (this_00,item,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                              );
            if (bVar12 != 0) {
              pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar10 == (MVNetworkGame *)0x0) ||
                 (pRVar11 = (pMVar10->fields).runtimeVariableNetworkManager,
                 pRVar11 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
              RuntimeVariableNetworkManager::
              RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                        (pRVar11,(this->fields)._._._.id,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
DAT_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Enter(Int32) */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_Enter
               (MVTriggerBox *this,int32_t instigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                  ,CONCAT44(in_register_00000014,instigatorId));
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._._._.outputLinkRefs;
  if ((List_1_MV_WorldObject_Link_ *)LStack_1._list == (List_1_MV_WorldObject_Link_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_MV_WorldObject_Link_ *)LStack_1._list)->fields)._version
               << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    *(undefined1 *)((longlong)&LStack_1._current[1].monitor + 4) = 1;
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_Exit(MVTriggerBox *this,MethodInfo *method)

{
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._._._.outputLinkRefs;
  if ((List_1_MV_WorldObject_Link_ *)LStack_1._list == (List_1_MV_WorldObject_Link_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_MV_WorldObject_Link_ *)LStack_1._list)->fields)._version
               << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    *(undefined1 *)((longlong)&LStack_1._current[1].monitor + 4) = 0;
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVTriggerBox *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.gameObject;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
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
  QStack_3.x = 0.0;
  QStack_3.y = 0.0;
  QStack_3.z = 0.0;
  QStack_3.w = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&QStack_3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_7.x = (pVVar6->oneVector).x;
  VStack_7.y = (pVVar6->oneVector).y;
  fVar8 = (pVVar6->oneVector).z;
  fVar9 = VStack_7.x * TypeRef__System__Activator__T._0_4_;
  fVar10 = VStack_7.y + VStack_7.y;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_7.z = position->z;
  VStack_7.x = position->x;
  VStack_7.y = position->y;
  aQStack_11[0].x = QStack_3.x;
  aQStack_11[0].y = QStack_3.y;
  aQStack_11[0].z = QStack_3.z;
  aQStack_11[0].w = QStack_3.w;
  VStack_12.y = fVar10;
  VStack_12.x = fVar9;
  VStack_12.z = fVar8 + fVar8;
  pVVar2 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                     ((Vector3 *)&QStack_3,&VStack_7,aQStack_11,gridSize,&VStack_12,
                      (MethodInfo *)0x0);
  fVar10 = pVVar2->y;
  fVar8 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar10;
  __return_storage_ptr__->z = fVar8;
  return __return_storage_ptr__;
}


/* Void OnExit(MVPlayer) */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_OnExit
               (MVTriggerBox *this,MVPlayer *player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVLocalPlayer,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                       (this_00,(this_00->fields).localPlayerActorNumber,(MethodInfo *)0x0);
    if (pMVar3 != (MVPlayer *)0x0) {
      bVar4 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVLocalPlayer)) {
        FUN_?(pMVar3,TypeInfo__MVLocalPlayer);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVTriggerBox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox__ctor
               (MVTriggerBox *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTriggerBoxObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
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
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvTriggerBoxPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *piVar2 = *piVar2 | 0x8000;
    pOVar3 = (this->fields)._._.component;
    if (pOVar3 != (ObjectPrefab *)0x0) {
      bVar4 = (TypeInfo__MVTriggerBoxObject->_1).naturalAligment;
      if (((pOVar3->klass->_1).naturalAligment < bVar4) ||
         ((pOVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVTriggerBoxObject)) {
        FUN_?(pOVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar6 = iRam_? != 0;
      (this->fields).triggerBoxEvents = (TriggerBoxEvents *)pOVar3[1].monitor;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).triggerBoxEvents >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      pTVar11 = (this->fields).triggerBoxEvents;
      pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar12,(Object *)this,
                 MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar11 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar11,(EventHandler_1_TriggerEventArgs_ *)pUVar12,(MethodInfo *)0x0);
        pTVar11 = (this->fields).triggerBoxEvents;
        pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar12,(Object *)this,
                   MethodInfo__MVTriggerBox__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar11 != (TriggerBoxEvents *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          ppEVar13 = &(pTVar11->fields).TriggerExit;
          a = (pTVar11->fields).TriggerExit;
          do {
            pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)a,(Delegate *)pUVar12,(MethodInfo *)0x0);
            pEVar15 = TypeInfo__System__EventHandler<TriggerEventArgs>;
            if (pDVar14 == (Delegate *)0x0) {
              pEVar16 = (EventHandler_1_TriggerEventArgs_ *)0x0;
            }
            else {
              pEVar16 = (EventHandler_1_TriggerEventArgs_ *)
                        FUN_?(pDVar14,TypeInfo__System__EventHandler<TriggerEventArgs>);
              if (pEVar16 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
                FUN_?(pDVar14,pEVar15);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            LOCK();
            pEVar17 = *ppEVar13;
            bVar6 = a == pEVar17;
            if (bVar6) {
              *ppEVar13 = pEVar16;
              pEVar17 = a;
            }
            UNLOCK();
            pEVar16 = a;
            if (!bVar6) {
              pEVar16 = pEVar17;
            }
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)ppEVar13 >> 0xc);
              uVar10 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar9 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar8 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar6 = uVar9 == *puVar8;
                if (bVar6) {
                  *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar6);
            }
            bVar6 = pEVar16 != a;
            a = pEVar16;
          } while (bVar6);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVTriggerBox *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 2.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_triggerBoxEvents_TriggerEnter
               (MVTriggerBox *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (e == (TriggerEventArgs *)0x0)) ||
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 == (MVNetworkGame_OperationRequests *)0x0)
     ) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = (e->fields).instigatorWOID;
  uVar6 = 0;
  iVar7 = (this->fields)._._._.id;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,iVar7,iVar5,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
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
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uVar8 = 0;
    value = (Object *)FUN_?(TypeInfo__System__Int32,2);
    if (value != (Object *)0x0) {
      if ((*(int *)&value[1].monitor == 0) ||
         (*(int32_t *)&value[2].klass = iVar7, *(uint *)&value[1].monitor < 2)) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(int32_t *)((longlong)&value[2].klass + 4) = iVar5;
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),0x16);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x16,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar9 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar9 != (PhotonPeer *)0x0) {
          (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                    (pPVar9,CONCAT71((int7)((ulonglong)uVar8 >> 8),0x12),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar9->klass->vtable).SendOperation.method);
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


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVTriggerBox::MVTriggerBox_triggerBoxEvents_TriggerExit
               (MVTriggerBox *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (e == (TriggerEventArgs *)0x0)) ||
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 == (MVNetworkGame_OperationRequests *)0x0)
     ) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = (e->fields).instigatorWOID;
  uVar6 = 0;
  iVar7 = (this->fields)._._._.id;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,iVar7,iVar5,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
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
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uVar8 = 0;
    value = (Object *)FUN_?(TypeInfo__System__Int32,2);
    if (value != (Object *)0x0) {
      if ((*(int *)&value[1].monitor == 0) ||
         (*(int32_t *)&value[2].klass = iVar7, *(uint *)&value[1].monitor < 2)) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(int32_t *)((longlong)&value[2].klass + 4) = iVar5;
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),0x16);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x16,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar9 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar9 != (PhotonPeer *)0x0) {
          (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                    (pPVar9,CONCAT71((int7)((ulonglong)uVar8 >> 8),0x13),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar9->klass->vtable).SendOperation.method);
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

