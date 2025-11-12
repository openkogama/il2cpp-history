
/* Void ApplyDamage(MVWorldObjectClient, InteractionDataHandlerBase) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_ApplyDamage
               (MVSentryGun *this,MVWorldObjectClient *wo,
               InteractionDataHandlerBase *interactionDataHandlerBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSentryGun);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).beamType;
  if (wo == (MVWorldObjectClient *)0x0) goto code_?;
  puVar2 = (undefined8 *)
           (*(wo->klass->vtable).GetTargetPosition.methodPtr)
                     (&IStack_3,wo,(wo->klass->vtable).GetTargetPosition.method);
  this_00 = (this->fields)._._.gameObject;
  aIStack_4[0]._0_8_ = *puVar2;
  fVar5 = *(float *)(puVar2 + 1);
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  IStack_3.damage = 0.0;
  IStack_3.impulse.x = 0.0;
  IStack_3.impulse._4_8_ = IStack_3.impulse._4_8_ & 0xffffffff00000000;
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  pIVar9 = &IStack_3;
  (*pcRam_?)(pvVar6,pIVar9);
  fVar10 = aIStack_4[0].damage - IStack_3.damage;
  fVar11 = aIStack_4[0].impulse.x - IStack_3.impulse.x;
  fVar5 = fVar5 - IStack_3.impulse.y;
  aIStack_4[0].impulse.y = fVar5;
  aIStack_4[0].impulse.x = fVar11;
  aIStack_4[0].damage = fVar10;
  fVar12 = (float)FUN_?(aIStack_4);
  if (_UNK_? < fVar12) {
    fVar5 = fVar5 / fVar12;
    IStack_3.impulse.x = fVar11 / fVar12;
    IStack_3.damage = fVar10 / fVar12;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    IStack_3.damage = (pVVar13->zeroVector).x;
    IStack_3.impulse.x = (pVVar13->zeroVector).y;
    fVar5 = (pVVar13->zeroVector).z;
  }
  fVar12 = (this->fields).pushBackStrength;
  fVar10 = fVar12 * IStack_3.damage;
  fVar11 = fVar12 * IStack_3.impulse.x;
  if (*(int *)&(TypeInfo__MVSentryGun->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (uVar1 == 0) {
code_?:
    interactionType = (InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)pIVar9 >> 8),10);
  }
  else {
    pIVar9 = (InteractionData *)CONCAT71((int7)((ulonglong)pIVar9 >> 8),0xb);
    interactionType = (InteractionPackageType__Enum)pIVar9;
    if (uVar1 != 1) goto code_?;
  }
  pIVar9 = aIStack_4;
  aIStack_4[0].impulse.x = fVar11;
  aIStack_4[0].damage = fVar10;
  aIStack_4[0].impulse.y = fVar12 * fVar5;
  IStack_3.damage = 0.0;
  IStack_3.impulse.x = 0.0;
  IStack_3.impulse.y = 0.0;
  IStack_3.impulse.z = 0.0;
  IStack_3.interactionType = 0;
  IStack_3.playerKilledByType = 0;
  IStack_3._18_2_ = 0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (&IStack_3,interactionType,0.0,(Vector3 *)pIVar9,in_stack_14 & 0xffffff00
             ,(MethodInfo *)0x0);
  if (interactionDataHandlerBase != (InteractionDataHandlerBase *)0x0) {
    aIStack_4[0].interactionType = IStack_3.interactionType;
    aIStack_4[0].playerKilledByType = IStack_3.playerKilledByType;
    aIStack_4[0]._18_2_ = IStack_3._18_2_;
    aIStack_4[0].damage = IStack_3.damage;
    aIStack_4[0].impulse.x = IStack_3.impulse.x;
    aIStack_4[0].impulse.y = IStack_3.impulse.y;
    aIStack_4[0].impulse.z = IStack_3.impulse.z;
    (*(interactionDataHandlerBase->klass->vtable).__unknown_1.methodPtr)
              (interactionDataHandlerBase,0,aIStack_4,CONCAT71((int7)((ulonglong)pIVar9 >> 8),1),
               (interactionDataHandlerBase->klass->vtable).__unknown_1.method);
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* InteractionData BeamTypeToInteractionPackageType(SentryGunBeamType, Vector3) */

InteractionData *
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_BeamTypeToInteractionPackageType
          (InteractionData *__return_storage_ptr__,SentryGunBeamType__Enum btype,Vector3 *impulse,
          MethodInfo *method)

{
  cVar1 = (char)btype;
  if ((cVar1 == '\0') || (btype = CONCAT31((int3)(btype >> 8),0xb), cVar1 != '\x01')) {
    btype = CONCAT31((int3)(btype >> 8),10);
  }
  IStack_2.damage = 0.0;
  IStack_2.impulse.x = 0.0;
  IStack_2.impulse.y = 0.0;
  IStack_2.impulse.z = 0.0;
  IStack_2.interactionType = 0;
  IStack_2.playerKilledByType = 0;
  IStack_2._18_2_ = 0;
  VStack_3.x = impulse->x;
  VStack_3.y = impulse->y;
  VStack_3.z = impulse->z;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (&IStack_2,btype,0.0,&VStack_3,in_stack_4 & 0xffffff00,
             (MethodInfo *)0x0);
  __return_storage_ptr__->damage = IStack_2.damage;
  (__return_storage_ptr__->impulse).x = IStack_2.impulse.x;
  (__return_storage_ptr__->impulse).y = IStack_2.impulse.y;
  (__return_storage_ptr__->impulse).z = IStack_2.impulse.z;
  __return_storage_ptr__->interactionType = IStack_2.interactionType;
  __return_storage_ptr__->playerKilledByType = IStack_2.playerKilledByType;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = IStack_2._18_2_;
  return __return_storage_ptr__;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_CompareWithKoGaMaPackage
               (MVSentryGun *this,MVWorldObjectClient *wo,KoGaMaPackageClient *koGaMaPackageClient,
               int32_t *insertedBy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSentryGun);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentryGunBeamType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_beamType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,(Object *)StringLiteral_beamType,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__SentryGunBeamType->_0).element_class) {
        FUN_?(pOVar2,TypeInfo__SentryGunBeamType);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      cVar5 = *(char *)&pOVar2[1].klass;
      if (wo != (MVWorldObjectClient *)0x0) {
        bVar6 = (TypeInfo__MVSentryGun->_1).naturalAligment;
        if ((bVar6 <= (wo->klass->_1).naturalAligment) &&
           ((MVSentryGun__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
            TypeInfo__MVSentryGun)) {
          pMVar7 = (MVWorldObjectClient *)0x0;
          if ((MVSentryGun__Class *)
              (wo->klass->_1).typeHierarchy
              [(ulonglong)(TypeInfo__MVSentryGun->_1).naturalAligment - 1] == TypeInfo__MVSentryGun)
          {
            pMVar7 = wo;
          }
          pDVar1 = (pMVar7->fields)._.data;
          if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar1,(Object *)StringLiteral_beamType,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pOVar2 != (Object *)0x0) {
              if ((pOVar2->klass->_0).element_class ==
                  (TypeInfo__SentryGunBeamType->_0).element_class) {
                return *(char *)&pOVar2[1].klass == cVar5;
              }
              FUN_?(pOVar2,TypeInfo__SentryGunBeamType);
              pcVar3 = (code *)swi(3);
              bVar4 = (*pcVar3)();
              return bVar4;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DeSelect(MVSentryGun *this,MethodInfo *method)

{
  if ((this->fields)._._.selected != 0) {
    pMVar1 = this->klass;
    (this->fields)._._.selected = 0;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->vtable).OnSelectedChanged.methodPtr)
              (this,0,(pMVar1->vtable).OnSelectedChanged.method);
    return;
  }
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Destroy(MVSentryGun *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  return;
}


/* Void DoFrameDelete() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DoFrameDelete
               (MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Value__
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
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).woIdsBeamsMap;
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
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uVar4 = 0;
    uStack_8 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_9 = 2;
    uStack_10 = 0;
    uStack_11 = 0;
    DStack_12._version = (undefined4)uStack_8;
    DStack_12._index = uStack_8._4_4_;
    DStack_12._current._0_8_ = 0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    uStack_13 = 0;
    pDStack_14 = &DStack_12;
    pDStack_3 = pDVar1;
    DStack_12._dictionary = pDVar1;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (&DStack_12,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                              ), pOVar16 = DStack_12._current.value,
          uVar17 = DStack_12._current._0_8_, bVar15 != 0) {
      key = DStack_12._current.key;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar18 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar19 = (pMVar18->fields).game;
      if (pMVar19 == (MVNetworkGame *)0x0) goto code_?;
      if (((pMVar19->fields).worldNetwork == (WorldNetwork *)0x0) ||
         (pMVar20 = (((pMVar19->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar20 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      apOStackX_18[0] = (Object *)0x0;
      this_00 = (pMVar20->fields)._.worldObjects;
      if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,apOStackX_18,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (apOStackX_18[0] == (Object *)0x0) {
code_?:
        pLVar21 = (this->fields).deleteList;
        if (pLVar21 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar21,uVar17 & 0xffffffff,
                      MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      else {
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
        if (pOVar16 == (Object *)0x0) goto code_?;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar16[1].klass == (Object__Class *)0x0) goto code_?;
        pOVar22 = apOStackX_18[0][0xd].klass;
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
        if (pOVar22 == (Object__Class *)0x0) {
code_?:
          pLVar21 = (this->fields).deleteList;
          if (pLVar21 == (List_1_System_Int32_ *)0x0) goto code_?;
          FUN_?(pLVar21,uVar17 & 0xffffffff,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pOVar22->_0).name == (char *)0x0) goto code_?;
          pOVar22 = apOStackX_18[0][0xd].klass;
          pGVar23 = (this->fields)._._.gameObject;
          if (pGVar23 == (GameObject *)0x0) goto code_?;
          pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar23,(MethodInfo *)0x0);
          if (pTVar24 == (Transform *)0x0) goto code_?;
          pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_26,pTVar24,(MethodInfo *)0x0);
          if (pOVar22 == (Object__Class *)0x0) goto code_?;
          VStack_27.x = pVVar25->x;
          VStack_27.y = pVVar25->y;
          VStack_27.z = pVVar25->z;
          pVVar25 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::
                    Collider_ClosestPointOnBounds
                              (&VStack_28,(Collider *)pOVar22,&VStack_27,(MethodInfo *)0x0);
          uVar29._0_4_ = pVVar25->x;
          uVar29._4_4_ = pVVar25->y;
          fVar30 = pVVar25->z;
          pGVar23 = (this->fields)._._.gameObject;
          if (pGVar23 == (GameObject *)0x0) goto code_?;
          pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar23,(MethodInfo *)0x0);
          if (pTVar24 == (Transform *)0x0) goto code_?;
          pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (aVStack_31,pTVar24,(MethodInfo *)0x0);
          uStack_32._0_4_ = pVVar25->x;
          uStack_32._4_4_ = pVVar25->y;
          fStack_33 = pVVar25->z;
          uStack_34 = uVar29;
          fStack_35 = fVar30;
          fVar30 = (float)FUN_?(&uStack_34,&uStack_32);
          pfVar36 = &(this->fields).laserRange;
          if (*pfVar36 <= fVar30 && fVar30 != *pfVar36) {
            pLVar21 = (this->fields).deleteList;
            if (pLVar21 == (List_1_System_Int32_ *)0x0) goto code_?;
            FUN_?(pLVar21,uVar17 & 0xffffffff,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          }
        }
      }
    }
    pLVar21 = (this->fields).deleteList;
    if (pLVar21 != (List_1_System_Int32_ *)0x0) {
      lVar37 = (longlong)(pLVar21->fields)._size;
      if (0 < lVar37) {
        lVar38 = 0x20;
        uVar5 = uVar4;
        do {
          this_01 = (this->fields).woIdsBeamsMap;
          pLVar21 = (this->fields).deleteList;
          if (pLVar21 == (List_1_System_Int32_ *)0x0) goto code_?;
          uVar2 = (uint)uVar5;
          if ((uint)(pLVar21->fields)._size <= uVar2) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar39 = (code *)swi(3);
            (*pcVar39)();
            return;
          }
          pIVar40 = (pLVar21->fields)._items;
          if (pIVar40 == (Int32__Array *)0x0) goto code_?;
          if ((uint)pIVar40->max_length <= uVar2) {
            FUN_?();
            pcVar39 = (code *)swi(3);
            (*pcVar39)();
            return;
          }
          if (this_01 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                     *(int32_t *)((longlong)pIVar40->vector + lVar38 + -0x20),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                    );
          uVar5 = (ulonglong)(uVar2 + 1);
          uVar4 = uVar4 + 1;
          lVar38 = lVar38 + 4;
        } while ((longlong)uVar4 < lVar37);
      }
      pLVar21 = (this->fields).deleteList;
      if (pLVar21 != (List_1_System_Int32_ *)0x0) {
        piVar41 = &(pLVar21->fields)._version;
        *piVar41 = *piVar41 + 1;
        (pLVar21->fields)._size = 0;
        return;
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}


/* Boolean DoRespawn() */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DoRespawn(MVSentryGun *this,MethodInfo *method)

{
  if ((this->fields).wasDead != 0) {
    this_00 = (this->fields).interactable;
    if (this_00 == (ClientSideNPCInteractable *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    bVar2 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      (this->fields).wasDead = 0;
      return 1;
    }
  }
  return 0;
}


/* Boolean HitsTarget(Ray, Int32) */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_HitsTarget
               (MVSentryGun *this,Ray *ray,int32_t woID,MethodInfo *method)

{
  RStack_1.m_Direction.y = (ray->m_Direction).y;
  RStack_1.m_Direction.z = (ray->m_Direction).z;
  VStack_2.point.x = 0.0;
  VStack_2.point.y = 0.0;
  VStack_2.point.z = 0.0;
  VStack_2.normal.x = 0.0;
  VStack_2.normal.y = 0.0;
  VStack_2.normal.z = 0.0;
  VStack_2.cubePos.x = 0;
  VStack_2.cubePos.y = 0;
  VStack_2.cubePos.z = 0;
  VStack_2._30_2_ = 0;
  VStack_2.face = 0;
  VStack_2.isCubeHit = 0;
  VStack_2._37_3_ = 0;
  VStack_2.woId = 0;
  VStack_2._44_4_ = 0;
  VStack_2.interactionFlags = 0;
  VStack_2.cube = (Cube *)0x0;
  VStack_2.distance = 0.0;
  VStack_2._60_4_ = 0;
  VStack_2.collider = (Collider *)0x0;
  VStack_2.transform = (Transform *)0x0;
  RStack_1.m_Origin.x = (ray->m_Origin).x;
  RStack_1.m_Origin.y = (ray->m_Origin).y;
  RStack_1._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  bVar3 = CollisionDetection::CollisionDetection_MVHit_1
                    (&RStack_1,&VStack_2,(this->fields).laserRange,
                     (this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField,-5,
                     (MethodInfo *)0x0);
  if (bVar3 == 0) {
    return 1;
  }
  return VStack_2.woId == woID;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Initialize(MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVSentryGun__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVSentryGun__OnStateChange_UnityEngine__CullingGroupEvent_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVSentryGun__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVSentryGun__RecieveHealing_float__MVPlayer_);
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
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                      ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                       (Action_2_LogicInputState_LogicObjectManager_ *)0x0,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
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
  pGVar7 = (this->fields)._._.gameObject;
  if (pGVar7 != (GameObject *)0x0) {
    pCVar8 = (ClientSideNPCInteractable *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar7,
                         ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                        );
    bVar2 = iRam_? != 0;
    (this->fields).interactable = pCVar8;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).interactable >> 0xc);
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
    pCVar8 = (this->fields).interactable;
    takeDamageCallback =
         (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)
         FUN_?(TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    FUN_?(takeDamageCallback,this,
                  MethodInfo__MVSentryGun__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                 );
    healCallback = (Action_2_Single_MVPlayer_ *)
                   FUN_?(TypeInfo__System__Action<float,_MVPlayer>);
    FUN_?(healCallback,this,MethodInfo__MVSentryGun__RecieveHealing_float__MVPlayer_);
    if (pCVar8 != (ClientSideNPCInteractable *)0x0) {
      ClientSideNPCInteractable::ClientSideNPCInteractable_Init
                (pCVar8,takeDamageCallback,healCallback,(MethodInfo *)0x0);
      MVSentryGun_InitializeCommon(this,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._._.gameObject;
      if ((pGVar7 != (GameObject *)0x0) &&
         (this_01 = (MVComponent *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar7,
                               ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                              ), this_01 != (MVComponent *)0x0)) {
        MVComponent::MVComponent_FindWorldObjectParent(this_01,(MethodInfo *)0x0);
        pCVar8 = (this->fields).interactable;
        if (pCVar8 != (ClientSideNPCInteractable *)0x0) {
          bVar9 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead
                             (pCVar8,(MethodInfo *)0x0);
          (this->fields).wasDead = bVar9;
          MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
          pUVar10 = (this->fields)._._.PositionChanged;
          this_02 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__MVSentryGun__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar10,(Delegate *)this_02,(MethodInfo *)0x0);
          pUVar12 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          if (pDVar11 == (Delegate *)0x0) {
            (this->fields)._._.PositionChanged =
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
            (this->fields)._._.PositionChanged = pUVar10;
            pUVar12 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            lVar14 = FUN_?(pDVar11,
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                  );
            if (lVar14 == 0) {
              FUN_?(pDVar11,pUVar12);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&(this->fields)._._.PositionChanged >> 0xc);
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
          puVar15 = (undefined8 *)
                    (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                              (aVStack_16,this,(this->klass->vtable).get_WorldPosition_1.method);
          uVar17 = *puVar15;
          fVar18 = *(float *)(puVar15 + 1);
          callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                     FUN_?(
                                  TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                  );
          FUN_?(callback,this);
          pCVar19 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
          CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar19,callback,(MethodInfo *)0x0);
          aVStack_16[0]._0_8_ = uVar17;
          aVStack_16[0].z = fVar18;
          CullingSubscriberBase::CullingSubscriberBase_Setup
                    (pCVar19,TypeRef__System__Activator__T._0_4_,aVStack_16,(MethodInfo *)0x0);
          bVar2 = iRam_? != 0;
          (this->fields)._.cullingSubscriberBase = pCVar19;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
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
          pCVar19 = (this->fields)._.cullingSubscriberBase;
          if (pCVar19 != (CullingSubscriberBase *)0x0) {
            (pCVar19->fields)._DistanceBandIndex_k__BackingField = 3;
            pMVar20 = (this->fields).gunObject;
            if (pMVar20 != (MVSentryGunObject *)0x0) {
              pSVar21 = (pMVar20->fields).sentryGunScript;
              fVar18 = (this->fields).laserRange;
              if (pSVar21 != (SentryGunScript *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar22 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar22 != (GameSessionData *)0x0) {
                  if ((pGVar22->fields).gameMode == 0) {
                    this_00 = (pSVar21->fields).rangeVisualization;
                    if (this_00 == (SphereVolumeIndicator *)0x0) goto code_?;
                    SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                              (this_00,fVar18,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_InitializeCommon
               (MVSentryGun *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__SentryGunBeamType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_beamType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,(Object *)StringLiteral_beamType,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar1) {
    this_01 = (this->fields)._._._.data;
    if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_01,(Object *)StringLiteral_beamType,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__SentryGunBeamType->_0).element_class) {
      FUN_?(pOVar2,TypeInfo__SentryGunBeamType);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).beamType = *(uint8_t *)&pOVar2[1].klass;
  }
  pMVar4 = (this->fields).gunObject;
  if (pMVar4 == (MVSentryGunObject *)0x0) goto code_?;
  pSVar5 = (pMVar4->fields).sentryGunScript;
  uVar6 = (this->fields).beamType;
  if (pSVar5 == (SentryGunScript *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (uVar6 == 0) {
    pMVar7 = (pSVar5->fields).sentryRenderer;
    if (pMVar7 == (MeshRenderer *)0x0) goto code_?;
    pMVar8 = (pSVar5->fields).materialFireBeam;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              ((Renderer *)pMVar7,pMVar8,(MethodInfo *)0x0);
  }
  else if (uVar6 == 1) {
    pMVar7 = (pSVar5->fields).sentryRenderer;
    if (pMVar7 == (MeshRenderer *)0x0) goto code_?;
    pMVar8 = (pSVar5->fields).materialIceBeam;
    goto code_?;
  }
  pMVar7 = (pSVar5->fields).sentryRenderer;
  if (pMVar7 != (MeshRenderer *)0x0) {
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                        ((Renderer *)pMVar7,(MethodInfo *)0x0);
    if (pMVar8 == (Material *)0x0) goto code_?;
    pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                        (&CStack_10,pMVar8,StringLiteral__Color,(MethodInfo *)0x0);
    this_02 = (pSVar5->fields).glowPlaneRenderer;
    fVar11 = pCVar9->g;
    fVar12 = pCVar9->b;
    fVar13 = pCVar9->a;
    (pSVar5->fields).color.r = pCVar9->r;
    (pSVar5->fields).color.g = fVar11;
    (pSVar5->fields).color.b = fVar12;
    (pSVar5->fields).color.a = fVar13;
    if (this_02 == (Renderer *)0x0) goto code_?;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (this_02,(MethodInfo *)0x0);
    if (pMVar8 == (Material *)0x0) goto code_?;
    CStack_10.r = (pSVar5->fields).color.r;
    CStack_10.g = (pSVar5->fields).color.g;
    CStack_10.b = (pSVar5->fields).color.b;
    CStack_10.a = (pSVar5->fields).color.a;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar8,StringLiteral__TintColor,&CStack_10,(MethodInfo *)0x0);
    if (uVar6 == 0) {
      pSVar14 = (pSVar5->fields).audioClipFireBeamStream;
    }
    else {
      if (uVar6 != 1) goto code_?;
      pSVar14 = (pSVar5->fields).audioClipIceBeamStream;
    }
    if ((pSVar14 != (StreamedAudioClipManual *)0x0) &&
       (this_03 = (pSVar5->fields).audioSource, this_03 != (AudioSource *)0x0)) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                (this_03,(AudioResource *)(pSVar14->fields)._Clip_k__BackingField,(MethodInfo *)0x0)
      ;
code_?:
      if ((this->fields).beamType == 0) {
        (this->fields).interactionType = 10;
      }
      if ((this->fields).beamType == 1) {
        (this->fields).interactionType = 0xb;
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_InitializeInventory
               (MVSentryGun *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  MVSentryGun_InitializeCommon(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).gunObject;
  if ((((pMVar1 == (MVSentryGunObject *)0x0) ||
       (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 == (SentryGunScript *)0x0)) ||
      (this_00 = (pSVar2->fields).glowPlane, this_00 == (Transform *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
  (*pcRam_?)(pvVar4,0);
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnPositionChanged
               (MVSentryGun *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (pCVar1 = (this->fields)._.cullingSubscriberBase, pCVar1 != (CullingSubscriberBase *)0x0)) {
    fVar2 = (positionChangedEventArgs->fields).NewPos.x;
    fVar3 = (positionChangedEventArgs->fields).NewPos.y;
    fVar4 = (positionChangedEventArgs->fields).NewPos.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar5 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar5 != (BoundingSphere__Array *)0x0) {
      uVar6 = (pCVar1->fields)._CullingIndex_k__BackingField;
      if (uVar6 < (uint)pBVar5->max_length) {
        pBVar5->vector[(int)uVar6].position.x = fVar2;
        pBVar5->vector[(int)uVar6].position.y = fVar3;
        pBVar5->vector[(int)uVar6].position.z = fVar4;
        return;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnStateChange
               (MVSentryGun *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    bStackX_15 = cullingGroupEvent.m_ThisState;
    if ((bStackX_15 & 0x7f) < 4) {
      bVar2 = 1;
    }
    obj = (this->fields)._._.gameObject;
    if (obj != (GameObject *)0x0) {
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


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnUpdate(MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Add_int__SentryGunBeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__TryGetValue_int__SentryGunBeam__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSentryGun);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sentry_gun_have_an_invalid_beam_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  pSStack_6 = (SentryGunBeam *)0x0;
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current._0_8_ = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._36_4_ = 0;
  auStack_8._0_8_ = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  auStack_8._8_4_ = 0;
  auStack_8._12_4_ = 0.0;
  auStack_8._16_8_ = 0;
  if ((this->fields).wasDead != 0) {
    pCVar9 = (this->fields).interactable;
    if (pCVar9 == (ClientSideNPCInteractable *)0x0) goto code_?;
    bVar10 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(pCVar9,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      (this->fields).wasDead = 0;
      MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._InputSignalReceiver_k__BackingField == (IInputSignalReceiver *)0x0)
  goto code_?;
  cVar11 = FUN_?(1);
  fVar12 = _UNK_?;
  if (cVar11 != '\0') {
    pCVar9 = (this->fields).interactable;
    if (pCVar9 == (ClientSideNPCInteractable *)0x0) goto code_?;
    bVar10 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(pCVar9,(MethodInfo *)0x0);
    fVar12 = _UNK_?;
    if (bVar10 == 0) {
      this_00 = (this->fields).intervalWithRandomSeed;
      if (this_00 == (IntervalWithRandomSeed *)0x0) goto code_?;
      obj_00 = (Object *)(unaff_R14 & 0xffffffffffffff00);
      fVar12 = (this_00->fields).currentDeltaTime;
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(), pcVar13 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcRam_? = pcVar13;
      fVar15 = (float)(*pcRam_?)();
      fVar16 = fVar15 + fVar12;
      (this_00->fields).currentDeltaTime = fVar16;
      if (((this_00->fields).newIteration != 0) && ((this_00->fields).range <= fVar15 + fVar12)) {
        obj_00 = (Object *)0x1;
        (this_00->fields).newIteration = 0;
      }
      fVar16 = fVar16 - (this_00->fields).range;
      if (0.0 < fVar16) {
        (this_00->fields).newIteration = 1;
        (this_00->fields).currentDeltaTime = fVar16;
        IntervalWithRandomSeed::IntervalWithRandomSeed_WrapDeltaTime(this_00,(MethodInfo *)0x0);
      }
      if ((char)obj_00 != '\0') {
        pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar17 == (MVNetworkGame *)0x0) goto code_?;
        bVar10 = MVNetworkGame::MVNetworkGame_get_IsPlaying(pMVar17,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          this_04 = (HashSet_1_System_Int32Enum_ *)
                    FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
          FUN_?(this_04);
          pGVar18 = (this->fields)._._.gameObject;
          if ((pGVar18 != (GameObject *)0x0) &&
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar18,(MethodInfo *)0x0),
             pTVar19 != (Transform *)0x0)) {
            pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&pDStack_21,pTVar19,(MethodInfo *)0x0);
            pMVar22 = *(MVWorldObjectClient **)pVVar20;
            fVar15 = pVVar20->z;
            fVar12 = (this->fields).laserRange;
            if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
            }
            pCVar23 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
            iVar24 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                               (StringLiteral_Player,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
              FUN_?();
            }
            uVar25 = 0;
            VStack_26._0_8_ = pMVar22;
            VStack_26.z = fVar15;
            iVar24 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                     Physics_OverlapSphereNonAlloc_1
                               (&VStack_26,fVar12,pCVar23,1 << ((byte)iVar24 & 0x1f),
                                (MethodInfo *)0x0);
            pDStackX_18 = (Dictionary_2_System_UInt32_System_Object_ *)
                          CONCAT44(pDStackX_18._4_4_,iVar24);
            if (*(int *)&(TypeInfo__MVSentryGun->_1).field_0x1c == 0) {
              FUN_?();
              iVar24 = (int32_t)pDStackX_18._0_4_;
            }
            pLVar27 = TypeInfo__MVSentryGun->static_fields->overlappedWoIds;
            if (pLVar27 != (List_1_System_Int32_ *)0x0) {
              piVar28 = &(pLVar27->fields)._version;
              *piVar28 = *piVar28 + 1;
              (pLVar27->fields)._size = 0;
              lVar29 = 0x20;
              if (0 < iVar24) {
                lVar30 = 0x20;
                uVar31 = uVar25;
                do {
                  if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
                  }
                  pCVar23 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
                  if (pCVar23 == (Collider__Array *)0x0) goto code_?;
                  if ((uint)pCVar23->max_length <= (uint)uVar31) goto code_?;
                  this_01 = *(Component **)((longlong)pCVar23->vector + lVar30 + -0x20);
                  if (this_01 == (Component *)0x0) goto code_?;
                  pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(this_01,(MethodInfo *)0x0);
                  pMVar22 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                      (pTVar19,(MethodInfo *)0x0);
                  if (pMVar22 != (MVWorldObjectClient *)0x0) {
                    if (*(int *)&(TypeInfo__MVSentryGun->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pLVar27 = TypeInfo__MVSentryGun->static_fields->overlappedWoIds;
                    if (pLVar27 == (List_1_System_Int32_ *)0x0) goto code_?;
                    FUN_?(pLVar27,(pMVar22->fields)._.id,
                                  MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  }
                  uVar31 = (ulonglong)((uint)uVar31 + 1);
                  uVar25 = uVar25 + 1;
                  lVar30 = lVar30 + 8;
                } while ((longlong)uVar25 < (longlong)(int)pDStackX_18._0_4_);
              }
              obj_00 = (Object *)0x0;
              while( true ) {
                if (*(int *)&(TypeInfo__MVSentryGun->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pLVar27 = TypeInfo__MVSentryGun->static_fields->overlappedWoIds;
                if (pLVar27 == (List_1_System_Int32_ *)0x0) goto code_?;
                uVar32 = (uint)obj_00;
                if ((pLVar27->fields)._size <= (int)uVar32) break;
                if (*(int *)&(TypeInfo__MVSentryGun->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pLVar27 = TypeInfo__MVSentryGun->static_fields->overlappedWoIds;
                if (pLVar27 == (List_1_System_Int32_ *)0x0) goto code_?;
                if ((uint)(pLVar27->fields)._size <= uVar32) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  goto code_?;
                }
                pIVar33 = (pLVar27->fields)._items;
                if (pIVar33 == (Int32__Array *)0x0) goto code_?;
                if ((uint)pIVar33->max_length <= uVar32) {
code_?:
                  FUN_?();
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                item = *(Int32Enum__Enum *)((longlong)pIVar33->vector + lVar29 + -0x20);
                pMVar34 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (pMVar34 == (MVWorldObjectClientManager *)0x0) goto code_?;
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                VStack_26._0_8_ = (MVWorldObjectClient *)0x0;
                pDVar35 = (pMVar34->fields).worldObjects;
                if (pDVar35 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
                  FUN_?();
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                value = (MVWorldObjectClient **)&VStack_26;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar35,item,(Object **)value
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                          );
                uVar14 = VStack_26._0_8_;
                if ((MVWorldObjectClient *)VStack_26._0_8_ == (MVWorldObjectClient *)0x0)
                goto code_?;
                interactionDataHandlerBase =
                     MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                               ((MVWorldObjectClient *)VStack_26._0_8_,(MethodInfo *)0x0);
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
                if (interactionDataHandlerBase == (InteractionDataHandlerBase *)0x0)
                goto code_?;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (((interactionDataHandlerBase->fields)._._._._._.m_CachedPtr != (void *)0x0) &&
                   (cVar11 = (*(interactionDataHandlerBase->klass->vtable).CanHandle.methodPtr)
                                       (interactionDataHandlerBase,
                                        (ulonglong)(this->fields).interactionType,
                                        CONCAT71((int7)((ulonglong)value >> 8),1)), cVar11 != '\0'))
                {
                  puVar36 = (undefined8 *)
                            (*((*(MVWorldObjectClient__Class **)uVar14)->vtable).GetTargetPosition.
                              methodPtr)(auStack_37);
                  uStack_38 = *puVar36;
                  pDStackX_18 = (Dictionary_2_System_UInt32_System_Object_ *)
                                CONCAT44(pDStackX_18._4_4_,*(undefined4 *)(puVar36 + 1));
                  pGVar18 = (this->fields)._._.gameObject;
                  if ((pGVar18 == (GameObject *)0x0) ||
                     (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar18,(MethodInfo *)0x0),
                     pTVar19 == (Transform *)0x0)) goto code_?;
                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position(&VStack_39,pTVar19,(MethodInfo *)0x0);
                  pDVar40 = *(Dictionary_2_System_UInt32_System_Object_ **)pVVar20;
                  fStackX_20 = pVVar20->z;
                  pGVar18 = (this->fields)._._.gameObject;
                  if ((pGVar18 == (GameObject *)0x0) ||
                     (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar18,(MethodInfo *)0x0),
                     pTVar19 == (Transform *)0x0)) goto code_?;
                  pMVar41 = (MethodInfo *)0x0;
                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position(&VStack_42,pTVar19,(MethodInfo *)0x0);
                  aRStack_43[0].m_Origin.x = pVVar20->x;
                  aRStack_43[0].m_Origin.y = pVVar20->y;
                  VStack_44.z = pDStackX_18._0_4_ - pVVar20->z;
                  VStack_44._0_8_ =
                       CONCAT44(uStack_38._4_4_ - aRStack_43[0].m_Origin.y,
                                (float)uStack_38 - aRStack_43[0].m_Origin.x);
                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                      (aVStack_45,&VStack_44,pMVar41);
                  fStack_2 = fStackX_20;
                  pDStack_21 = *(Dictionary_2_System_UInt32_System_Object_ **)pVVar20;
                  fStack_46 = pVVar20->z;
                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                      ((Vector3 *)auStack_47,(Vector3 *)&pDStack_21,pMVar41);
                  uVar48 = pVVar20->x;
                  uVar49 = pVVar20->y;
                  fStack_5 = pVVar20->z;
                  aRStack_43[0].m_Direction.x = (float)uVar48;
                  aRStack_43[0].m_Origin.z = fStack_2;
                  aRStack_43[0].m_Direction.z = fStack_5;
                  aRStack_43[0].m_Direction.y = (float)uVar49;
                  pDStack_1 = pDVar40;
                  fStack_3 = (float)uVar48;
                  fStack_4 = (float)uVar49;
                  aRStack_43[0].m_Origin._0_8_ = pDVar40;
                  bVar10 = MVSentryGun_HitsTarget(this,aRStack_43,item,(MethodInfo *)0x0);
                  if (bVar10 != 0) {
                    if (this_04 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
                    bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                             Int32Enum]::HashSet_1_System_Int32Enum__Contains
                                       (this_04,item,
                                        MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                       );
                    if (bVar10 == 0) {
                      pDVar50 = (this->fields).woIdsBeamsMap;
                      if (pDVar50 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)
                      goto code_?;
                      pMVar41 = 
                      MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__TryGetValue_int__SentryGunBeam__
                      ;
                      bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32,System::Object]::
                               Dictionary_2_System_Int32_System_Object__TryGetValue
                                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar50,
                                          (((MVWorldObjectClient__Fields *)(uVar14 + 0x10))->_).id,
                                          (Object **)&pSStack_6,
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__TryGetValue_int__SentryGunBeam__
                                         );
                      pSVar51 = pSStack_6;
                      if (bVar10 == 0) {
code_?:
                        pDVar50 = (this->fields).woIdsBeamsMap;
                        if (pDVar50 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)
                        goto code_?;
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__Remove
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar50,
                                   (((MVWorldObjectClient__Fields *)(uVar14 + 0x10))->_).id,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                                  );
                        uVar52 = (this->fields).beamType;
                        if (uVar52 == 0) {
                          lVar30 = FUN_?();
                          if (lVar30 == 0) goto code_?;
                          pMVar41 = (MethodInfo *)0x0;
                          pSStack_6 = SentryGunBeam::SentryGunBeam_Create
                                                  (*(SentryGunBeam **)(lVar30 + 0x288),
                                                   (uint)(this->fields).beamType,this,
                                                   (MethodInfo *)0x0);
                        }
                        else if (uVar52 == 1) {
                          lVar30 = FUN_?();
                          if (lVar30 == 0) goto code_?;
                          pMVar41 = (MethodInfo *)0x0;
                          pSStack_6 = SentryGunBeam::SentryGunBeam_Create
                                                  (*(SentryGunBeam **)(lVar30 + 0x280),
                                                   (uint)(this->fields).beamType,this,
                                                   (MethodInfo *)0x0);
                        }
                        else {
                          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                    ((Object *)StringLiteral_Sentry_gun_have_an_invalid_beam_,
                                     (MethodInfo *)0x0);
                        }
                        pDVar50 = (this->fields).woIdsBeamsMap;
                        if (pDVar50 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)
                        goto code_?;
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar50,
                                   (((MVWorldObjectClient__Fields *)(uVar14 + 0x10))->_).id,
                                   (Object *)pSStack_6,
                                   (InsertionBehavior__Enum)
                                   CONCAT71((int7)((ulonglong)pMVar41 >> 8),2),
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Add_int__SentryGunBeam_
                                   ->klass->rgctx_data[0x22].method);
                      }
                      else {
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
                        if (pSVar51 == (SentryGunBeam *)0x0) goto code_?;
                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        if ((pSVar51->fields)._._._._.m_CachedPtr == (void *)0x0)
                        goto code_?;
                        if (pSStack_6 == (SentryGunBeam *)0x0) goto code_?;
                        (pSStack_6->fields).deleteTimer = 1.0;
                      }
                      MVSentryGun_ApplyDamage
                                (this,(MVWorldObjectClient *)uVar14,interactionDataHandlerBase,
                                 (MethodInfo *)0x0);
                      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                      HashSet_1_System_Int32__AddIfNotPresent
                                ((HashSet_1_System_Int32_ *)this_04,
                                 (((MVWorldObjectClient__Fields *)(uVar14 + 0x10))->_).id,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->
                                 klass->rgctx_data[0x15].method);
                    }
                  }
                }
code_?:
                obj_00 = (Object *)(ulonglong)(uVar32 + 1);
                lVar29 = lVar29 + 4;
              }
              pDVar53 = (Dictionary_2_System_UInt32_System_Object_ *)
                        FUN_?(TypeInfo__System__Collections__Generic__List<int>);
              FUN_?(pDVar53,MethodInfo__System__Collections__Generic__List<int>__List__);
              pDVar40 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).woIdsBeamsMap;
              pDStackX_18 = pDVar53;
              if (pDVar40 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
                if (iRam_? != 0) {
                  uVar32 = (uint)((ulonglong)&pDStack_1 >> 0xc);
                  uVar25 = (ulonglong)((uVar32 & 0x1fffff) >> 6);
                  do {
                    uVar31 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                    puVar54 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                    LOCK();
                    bVar55 = uVar31 == *puVar54;
                    if (bVar55) {
                      *puVar54 = uVar31 | 1L << (uVar32 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar55);
                }
                fStack_2 = (float)(pDVar40->fields)._version;
                fStack_3 = 0.0;
                uStack_56 = 2;
                fStack_4 = 0.0;
                fStack_5 = 0.0;
                uStack_57 = 0;
                DStack_7._8_8_ = ZEXT48((uint)fStack_2);
                DStack_7._current._0_8_ = 0;
                DStack_7._current.value = (Object *)0x0;
                DStack_7._getEnumeratorRetType = 2;
                DStack_7._36_4_ = 0;
                auStack_47._0_4_ = 0.0;
                auStack_47._4_4_ = 0.0;
                auStack_47._8_8_ = &DStack_7;
                pDStack_1 = pDVar40;
                DStack_7._dictionary = pDVar40;
                while( true ) {
                  do {
                    bVar10 = mscorlib.dll::System::Collections::Generic::
                             Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                             Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                       (&DStack_7,
                                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                                       );
                    uVar14 = DStack_7._current._0_8_;
                    if (bVar10 == 0) {
                      if (pDVar53 == (Dictionary_2_System_UInt32_System_Object_ *)0x0)
                      goto code_?;
                      fStack_5 = 0.0;
                      if (iRam_? != 0) {
                        uVar32 = (uint)((ulonglong)&pDStack_1 >> 0xc);
                        uVar25 = (ulonglong)((uVar32 & 0x1fffff) >> 6);
                        do {
                          uVar31 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                          puVar54 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                          LOCK();
                          bVar55 = uVar31 == *puVar54;
                          if (bVar55) {
                            *puVar54 = uVar31 | 1L << (uVar32 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar55);
                      }
                      fStack_2 = 0.0;
                      fStack_3 = *(float *)((longlong)&(pDVar53->fields)._entries + 4);
                      fStack_4 = 0.0;
                      auStack_8._8_4_ = 0;
                      auStack_8._16_8_ = 0;
                      auStack_47._0_4_ = 0.0;
                      auStack_47._4_4_ = 0.0;
                      auStack_47._8_8_ = auStack_8;
                      pDStack_1 = pDVar53;
                      auStack_8._0_8_ = pDVar53;
                      auStack_8._12_4_ = fStack_3;
                      while( true ) {
                        if ((Dictionary_2_System_UInt32_System_Object_ *)auStack_8._0_8_ ==
                            (Dictionary_2_System_UInt32_System_Object_ *)0x0)
                        goto code_?;
                        if (((float)auStack_8._12_4_ !=
                             *(float *)((longlong)
                                        &((Dictionary_2_System_UInt32_System_Object___Fields *)
                                         (auStack_8._0_8_ + 0x10))->_entries + 4)) ||
                           (lVar29 = (longlong)(int)auStack_8._8_4_,
                           *(uint *)&((Dictionary_2_System_UInt32_System_Object___Fields *)
                                     (auStack_8._0_8_ + 0x10))->_entries <=
                           (uint)auStack_8._8_4_)) break;
                        pIVar33 = ((Dictionary_2_System_UInt32_System_Object___Fields *)
                                  (auStack_8._0_8_ + 0x10))->_buckets;
                        if (pIVar33 == (Int32__Array *)0x0) goto code_?;
                        if ((uint)pIVar33->max_length <= (uint)auStack_8._8_4_)
                        goto code_?;
                        auStack_8._16_4_ = pIVar33->vector[lVar29];
                        auStack_8._8_4_ = auStack_8._8_4_ + 1;
                        pDVar50 = (this->fields).woIdsBeamsMap;
                        if (pDVar50 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)
                        goto code_?;
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__Remove
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar50,
                                   pIVar33->vector[lVar29],
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                                  );
                      }
                      if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                           ->klass->field_0x135 & 1) == 0) {
                        FUN_?();
                      }
                      if ((Dictionary_2_System_UInt32_System_Object_ *)auStack_8._0_8_ ==
                          (Dictionary_2_System_UInt32_System_Object_ *)0x0)
                      goto code_?;
                      if ((float)auStack_8._12_4_ !=
                          *(float *)((longlong)
                                     &((Dictionary_2_System_UInt32_System_Object___Fields *)
                                      (auStack_8._0_8_ + 0x10))->_entries + 4))
                      goto code_?;
                      auStack_8._8_4_ =
                           *(int *)&((Dictionary_2_System_UInt32_System_Object___Fields *)
                                    (auStack_8._0_8_ + 0x10))->_entries + 1;
                      auStack_8._16_8_ = auStack_8._16_8_ & 0xffffffff00000000;
                      goto code_?;
                    }
                    if (this_04 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
                    obj_00 = (Object *)(DStack_7._current._0_8_ & 0xffffffff);
                    bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                             Int32Enum]::HashSet_1_System_Int32Enum__Contains
                                       (this_04,DStack_7._current.key,
                                        MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                       );
                  } while (bVar10 != 0);
                  if (pDVar53 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) break;
                  FUN_?(pDVar53,uVar14 & 0xffffffff,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                }
code_?:
                FUN_?();
code_?:
                FUN_?();
                FUN_?();
code_?:
                FUN_?();
code_?:
                FUN_?();
code_?:
                FUN_?();
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                          ((MethodInfo *)0x0);
code_?:
                FUN_?();
code_?:
                FUN_?();
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
          }
          goto code_?;
        }
      }
code_?:
      obj = (Object__Class *)0xADDR;
      pMVar58 = (this->fields).gunObject;
      if ((pMVar58 == (MVSentryGunObject *)0x0) ||
         (pSVar59 = (pMVar58->fields).sentryGunScript, pSVar59 == (SentryGunScript *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__MainTex);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (pSVar59->fields).sentryRenderer;
      if (this_02 == (MeshRenderer *)0x0) goto code_?;
      this_05 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_02,(MethodInfo *)0x0);
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14);
code_?:
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14);
code_?:
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14);
code_?:
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14);
code_?:
        FUN_?();
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
code_?:
        FUN_?();
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
code_?:
        FUN_?();
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcRam_? = pcVar13;
      uVar14 = (*pcRam_?)();
      auVar60._8_4_ = (int)extraout_XMM0_Qb;
      auVar60._0_8_ = uVar14;
      auVar60._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      fVar15 = (float)func_?();
      fVar12 = _UNK_?;
      auVar61._4_12_ = auVar60._4_12_;
      auVar61._0_4_ = (float)uVar14 - fVar15;
      uVar25 = auVar61._0_8_;
      if (auVar61._0_4_ < 0.0) {
        uVar25 = 0;
      }
      else if (_UNK_? < auVar61._0_4_) {
        uVar25 = (ulonglong)(uint)_UNK_?;
      }
      if (this_05 == (Material *)0x0) goto code_?;
      iVar24 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                         (StringLiteral__MainTex,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffsetImpl
                (this_05,iVar24,(Vector2)(uVar25 & 0xffffffff),(MethodInfo *)0x0);
    }
  }
  MVSentryGun_DoFrameDelete(this,(MethodInfo *)0x0);
  pDVar40 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).woIdsBeamsMap;
  if (pDVar40 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar32 = (uint)((ulonglong)&pDStack_1 >> 0xc);
      uVar25 = (ulonglong)((uVar32 & 0x1fffff) >> 6);
      do {
        uVar31 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
        puVar54 = (ulonglong *)(uVar25 * 8 + 0xADDR);
        LOCK();
        bVar55 = uVar31 == *puVar54;
        if (bVar55) {
          *puVar54 = uVar31 | 1L << (uVar32 & 0x3f);
        }
        UNLOCK();
      } while (!bVar55);
    }
    fStack_2 = (float)(pDVar40->fields)._version;
    fStack_3 = 0.0;
    uStack_56 = 2;
    fStack_4 = 0.0;
    fStack_5 = 0.0;
    uStack_57 = 0;
    DStack_7._8_8_ = ZEXT48((uint)fStack_2);
    DStack_7._current._0_8_ = 0;
    DStack_7._current.value = (Object *)0x0;
    DStack_7._getEnumeratorRetType = 2;
    DStack_7._36_4_ = 0;
    auStack_47._0_4_ = 0.0;
    auStack_47._4_4_ = 0.0;
    auStack_47._8_8_ = &DStack_7;
    pDStack_1 = pDVar40;
    DStack_7._dictionary = pDVar40;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (&DStack_7,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                              ), this_03 = DStack_7._current.value, bVar10 != 0) {
      iVar24 = DStack_7._current.key;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar62 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar62 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar17 = (pMVar62->fields).game;
      if (pMVar17 == (MVNetworkGame *)0x0) goto code_?;
      if (((pMVar17->fields).worldNetwork == (WorldNetwork *)0x0) ||
         (pMVar63 = (((pMVar17->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar63 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDStackX_18 = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
      pDVar35 = (pMVar63->fields)._.worldObjects;
      if (pDVar35 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar35,iVar24,(Object **)&pDStackX_18,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (pDStackX_18 == (Dictionary_2_System_UInt32_System_Object_ *)0x0)
      goto code_?;
      obj_00 = (Object *)pDStackX_18[2].fields._comparer;
      obj = (Object__Class *)(this->fields)._._.gameObject;
      if (obj == (Object__Class *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pcVar64 = (obj->_0).name;
      if (pcVar64 == (char *)0x0) goto code_?;
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar13;
      pvVar65 = (void *)(*pcRam_?)(pcVar64);
      obj = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
            Unmarshal_UnmarshalUnityObject
                      (pvVar65,
                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                      );
      if (obj == (Object__Class *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_26._0_8_ = (MVWorldObjectClient *)0x0;
      VStack_26.z = 0.0;
      pcVar64 = (obj->_0).name;
      if (pcVar64 == (char *)0x0) goto code_?;
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar13;
      (*pcRam_?)(pcVar64);
      if (obj_00 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDStack_1 = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
      fStack_2 = 0.0;
      fStack_3 = 0.0;
      fStack_4 = 0.0;
      fStack_5 = 0.0;
      obj = obj_00[1].klass;
      if (obj == (Object__Class *)0x0) goto code_?;
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar13;
      (*pcRam_?)(obj);
      if ((SentryGunBeam *)this_03 == (SentryGunBeam *)0x0) goto code_?;
      pDStack_21 = pDStack_1;
      fStack_46 = fStack_2;
      VStack_44.x = VStack_26.x;
      VStack_44.y = VStack_26.y;
      VStack_44.z = VStack_26.z;
      SentryGunBeam::SentryGunBeam_SetBeamPositions
                ((SentryGunBeam *)this_03,&VStack_44,(Vector3 *)&pDStack_21,(MethodInfo *)0x0);
    }
    pDVar50 = (this->fields).woIdsBeamsMap;
    if (pDVar50 != (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) {
      if (0 < (pDVar50->fields)._count - (pDVar50->fields)._freeCount) {
        pMVar58 = (this->fields).gunObject;
        if ((pMVar58 == (MVSentryGunObject *)0x0) ||
           (pAVar66 = (pMVar58->fields).audioSource, pAVar66 == (AudioSource *)0x0))
        goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar65 = (pAVar66->fields)._._._._.m_CachedPtr;
        if (pvVar65 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar66,(MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcRam_? = pcVar13;
        cVar11 = (*pcRam_?)(pvVar65);
        if (cVar11 == '\0') {
          pMVar58 = (this->fields).gunObject;
          if ((pMVar58 == (MVSentryGunObject *)0x0) ||
             (pAVar66 = (pMVar58->fields).audioSource, pAVar66 == (AudioSource *)0x0))
          goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_source);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar65 = (pAVar66->fields)._._._._.m_CachedPtr;
          if (pvVar65 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowArgumentNullException
                      ((Object *)pAVar66,StringLiteral_source,(MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcRam_? = pcVar13;
          (*pcRam_?)(pvVar65);
        }
      }
      pDVar50 = (this->fields).woIdsBeamsMap;
      if (pDVar50 != (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) {
        if ((pDVar50->fields)._count == (pDVar50->fields)._freeCount) {
          pMVar58 = (this->fields).gunObject;
          if ((pMVar58 == (MVSentryGunObject *)0x0) ||
             (pAVar66 = (pMVar58->fields).audioSource, pAVar66 == (AudioSource *)0x0))
          goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar65 = (pAVar66->fields)._._._._.m_CachedPtr;
          if (pvVar65 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar66,(MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcRam_? = pcVar13;
          cVar11 = (*pcRam_?)(pvVar65);
          if (cVar11 != '\0') {
            pMVar58 = (this->fields).gunObject;
            if ((pMVar58 == (MVSentryGunObject *)0x0) ||
               (pAVar66 = (pMVar58->fields).audioSource, pAVar66 == (AudioSource *)0x0))
            goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar65 = (pAVar66->fields)._._._._.m_CachedPtr;
            if (pvVar65 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar66,(MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcVar13 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            (*pcRam_?)(pvVar65);
          }
        }
        pDVar50 = (this->fields).woIdsBeamsMap;
        if (pDVar50 != (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) {
          fVar15 = _UNK_?;
          if (0 < (pDVar50->fields)._count - (pDVar50->fields)._freeCount) {
            fVar15 = fVar12;
          }
          pCVar9 = (this->fields).interactable;
          if (pCVar9 != (ClientSideNPCInteractable *)0x0) {
            bVar10 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead
                               (pCVar9,(MethodInfo *)0x0);
            if (bVar10 != 0) {
              fVar15 = 0.0;
            }
            fVar16 = (this->fields).glowFactor;
            pcVar13 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            fVar67 = (float)(*pcRam_?)();
            fVar67 = fVar67 * _UNK_?;
            if (fVar67 < 0.0) {
              fVar67 = 0.0;
            }
            else if (fVar12 < fVar67) {
              fVar67 = fVar12;
            }
            (this->fields).glowFactor = (fVar15 - fVar16) * fVar67 + fVar16;
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ReceiveDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_ReceiveDamage
               (MVSentryGun *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (amount <= 0.0) {
    return;
  }
  pMVar1 = (this->fields).gunObject;
  if ((pMVar1 != (MVSentryGunObject *)0x0) &&
     (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar5 = (float)(*pcRam_?)();
    (pSVar2->fields).damageBlinkTimeoutTime = fVar5 + _UNK_?;
    this_00 = (this->fields).interactable;
    if (this_00 != (ClientSideNPCInteractable *)0x0) {
      bVar6 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0)
      ;
      if (bVar6 == 0) {
code_?:
        MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
        return;
      }
      pMVar1 = (this->fields).gunObject;
      if ((pMVar1 != (MVSentryGunObject *)0x0) &&
         (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) {
        SentryGunScript::SentryGunScript_Explode(pSVar2,(MethodInfo *)0x0);
        pMVar1 = (this->fields).gunObject;
        if ((pMVar1 != (MVSentryGunObject *)0x0) &&
           ((pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0 &&
            (this_01 = (pSVar2->fields).smokeEffectEmitter, this_01 != (ParticleSystem *)0x0)))) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                    (this_01,1,(MethodInfo *)0x0);
          (this->fields).wasDead = 1;
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Reset(MVSentryGun *this,MethodInfo *method)

{
  (this->fields).wasDead = 0;
  pCVar1 = (this->fields).interactable;
  if (pCVar1 == (ClientSideNPCInteractable *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ClientSideNPCInteractable::ClientSideNPCInteractable_Reset(pCVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).interactable;
  if (pCVar1 != (ClientSideNPCInteractable *)0x0) {
    bVar3 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(pCVar1,(MethodInfo *)0x0);
    pMVar4 = (this->fields).gunObject;
    if (bVar3 == 0) {
      if (((pMVar4 != (MVSentryGunObject *)0x0) &&
          (pSVar5 = (pMVar4->fields).sentryGunScript, pSVar5 != (SentryGunScript *)0x0)) &&
         (this_00 = (pSVar5->fields).smokeEffectEmitter, this_00 != (ParticleSystem *)0x0)) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (this_00,1,(MethodInfo *)0x0);
        pMVar4 = (this->fields).gunObject;
        if (pMVar4 != (MVSentryGunObject *)0x0) {
          pSVar5 = (pMVar4->fields).sentryGunScript;
          hashtable = (Dictionary_2_System_Object_System_Object_ *)
                      (*(this->klass->vtable).get_RunTimeData.methodPtr)
                                (this,(this->klass->vtable).get_RunTimeData.method);
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar6 = Extensions::Extensions_GetObscuredType
                             (hashtable,StringLiteral_health,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          if (pOVar6 != (Object *)0x0) {
            if ((pOVar6->klass->_0).element_class !=
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
              FUN_?(pOVar6,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            auStack_7._0_8_ = pOVar6[1].klass;
            auStack_7._8_4_ = *(undefined4 *)&pOVar6[1].monitor;
            auStack_7._12_4_ = *(undefined4 *)((longlong)&pOVar6[1].monitor + 4);
            auStack_7._16_8_ = pOVar6[2].klass;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredFloat::ObscuredFloat_InternalDecrypt
                               ((ObscuredFloat *)auStack_7,(MethodInfo *)0x0);
            if (pSVar5 != (SentryGunScript *)0x0)
            goto Assembly_CSharp_dll_SentryGunScript_SentryGunScript_SetHealth;
          }
        }
      }
    }
    else if ((pMVar4 != (MVSentryGunObject *)0x0) &&
            (pSVar5 = (pMVar4->fields).sentryGunScript, pSVar5 != (SentryGunScript *)0x0)) {
      fVar8 = 0.0;
Assembly_CSharp_dll_SentryGunScript_SentryGunScript_SetHealth:
      pTVar9 = (pSVar5->fields).healthPivot;
      if (pTVar9 == (Transform *)0x0) {
        FUN_?(pSVar5,fVar8,0);
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
      pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar10);
      pTVar9 = (pSVar5->fields).healthPivot;
      auStack_7._4_4_ = 0;
      auStack_7._0_4_ = fVar8 / _UNK_?;
      if (pTVar9 == (Transform *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      auStack_7._8_4_ = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar10,auStack_7);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Select
               (MVSentryGun *this,Color *color,MethodInfo *method)

{
  if ((this->fields)._._.selected != 1) {
    pMVar1 = this->klass;
    (this->fields)._._.selected = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->vtable).OnSelectedChanged.methodPtr)
              (this,1,(pMVar1->vtable).OnSelectedChanged.method);
    return;
  }
  return;
}


/* Void UpdateSentryState() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_UpdateSentryState
               (MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).interactable;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    bVar1 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    pMVar2 = (this->fields).gunObject;
    if (bVar1 == 0) {
      if (((pMVar2 != (MVSentryGunObject *)0x0) &&
          (pSVar3 = (pMVar2->fields).sentryGunScript, pSVar3 != (SentryGunScript *)0x0)) &&
         (this_01 = (pSVar3->fields).smokeEffectEmitter, this_01 != (ParticleSystem *)0x0)) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (this_01,1,(MethodInfo *)0x0);
        pMVar2 = (this->fields).gunObject;
        if (pMVar2 != (MVSentryGunObject *)0x0) {
          pSVar3 = (pMVar2->fields).sentryGunScript;
          hashtable = (Dictionary_2_System_Object_System_Object_ *)
                      (*(this->klass->vtable).get_RunTimeData.methodPtr)
                                (this,(this->klass->vtable).get_RunTimeData.method);
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar4 = Extensions::Extensions_GetObscuredType
                             (hashtable,StringLiteral_health,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          if (pOVar4 != (Object *)0x0) {
            if ((pOVar4->klass->_0).element_class !=
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
              FUN_?(pOVar4,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            auStack_6._0_8_ = pOVar4[1].klass;
            auStack_6._8_4_ = *(undefined4 *)&pOVar4[1].monitor;
            auStack_6._12_4_ = *(undefined4 *)((longlong)&pOVar4[1].monitor + 4);
            auStack_6._16_8_ = pOVar4[2].klass;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_InternalDecrypt
                              ((ObscuredFloat *)auStack_6,(MethodInfo *)0x0);
            if (pSVar3 != (SentryGunScript *)0x0)
            goto Assembly_CSharp_dll_SentryGunScript_SentryGunScript_SetHealth;
          }
        }
      }
    }
    else if ((pMVar2 != (MVSentryGunObject *)0x0) &&
            (pSVar3 = (pMVar2->fields).sentryGunScript, pSVar3 != (SentryGunScript *)0x0)) {
      fVar7 = 0.0;
Assembly_CSharp_dll_SentryGunScript_SentryGunScript_SetHealth:
      pTVar8 = (pSVar3->fields).healthPivot;
      if (pTVar8 == (Transform *)0x0) {
        FUN_?(pSVar3,fVar7,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
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
      pvVar9 = (pTVar8->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar9);
      pTVar8 = (pSVar3->fields).healthPivot;
      auStack_6._4_4_ = 0;
      auStack_6._0_4_ = fVar7 / _UNK_?;
      if (pTVar8 == (Transform *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      auStack_6._8_4_ = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (pTVar8->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar9,auStack_6);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVSentryGun() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSentryGun);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
  }
  pCVar1 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
  if (pCVar1 == (Collider__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pLVar3 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar3,(int)pCVar1->max_length,
                MethodInfo__System__Collections__Generic__List<int>__List_int_);
  bVar4 = iRam_? != 0;
  TypeInfo__MVSentryGun->static_fields->overlappedWoIds = pLVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)TypeInfo__MVSentryGun->static_fields >> 0xc);
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
  return;
}


/* MVSentryGun(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun__ctor
               (MVSentryGun *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IntervalWithRandomSeed);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSentryGunObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).laserRange = 20.0;
  (this->fields).pushBackStrength = 5.0;
  pIVar1 = (IntervalWithRandomSeed *)FUN_?(TypeInfo__IntervalWithRandomSeed);
  (pIVar1->fields).range = 1.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)(0,_UNK_?);
  bVar5 = iRam_? != 0;
  (pIVar1->fields).currentDeltaTime = fVar4;
  (this->fields).intervalWithRandomSeed = pIVar1;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).intervalWithRandomSeed >> 0xc);
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Dictionary__)
  ;
  bVar5 = iRam_? != 0;
  (this->fields).woIdsBeamsMap = (Dictionary_2_System_Int32_SentryGunBeam_ *)this_00;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).woIdsBeamsMap >> 0xc);
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
  pLVar10 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>)
  ;
  pvVar11 = MethodInfo__System__Collections__Generic__List<int>__List_int_->klass->rgctx_data[3].
            rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar11 + 0x135) & 1) == 0) {
    pvVar11 = (void *)FUN_?(pvVar11);
  }
  pIVar12 = (Int32__Array *)FUN_?(pvVar11,8);
  (pLVar10->fields)._items = pIVar12;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pLVar10->fields >> 0xc);
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
  iVar13 = iRam_?;
  (this->fields).deleteList = pLVar10;
  if (iVar13 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).deleteList >> 0xc);
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
  bVar5 = cRam_? == '\0';
  (this->fields).glowFactor = 0.5;
  (this->fields).beamType = 1;
  if (bVar5) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar14 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar14->fields).mvSentryGunPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar15 = &(this->fields)._._.interactionFlags;
    *piVar15 = *piVar15 | 0x10008;
    pMVar16 = (MVSentryGunObject *)(this->fields)._._.component;
    if (pMVar16 == (MVSentryGunObject *)0x0) {
      (this->fields).gunObject = (MVSentryGunObject *)0x0;
    }
    else {
      bVar17 = (TypeInfo__MVSentryGunObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar16->klass)->_1).naturalAligment < bVar17) ||
         ((((ObjectPrefab__Class *)pMVar16->klass)->_1).typeHierarchy[(ulonglong)bVar17 - 1] !=
          (Il2CppClass *)TypeInfo__MVSentryGunObject)) {
        FUN_?(pMVar16);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).gunObject = pMVar16;
      bVar17 = (TypeInfo__MVSentryGunObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar16->klass)->_1).naturalAligment < bVar17) ||
         ((((ObjectPrefab__Class *)pMVar16->klass)->_1).typeHierarchy[(ulonglong)bVar17 - 1] !=
          (Il2CppClass *)TypeInfo__MVSentryGunObject)) {
        FUN_?(pMVar16);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).gunObject >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    this_01 = (HashSet_1_System_Int32_ *)
              FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__AddIfNotPresent
                (this_01,(this->fields)._._._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
                 [0x15].method);
      bVar5 = iRam_? != 0;
      (this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField = this_01;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField >>
                       0xc);
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
      (this->fields)._._._PlayInteractionType_k__BackingField = 1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SentryGunBeamType get_BeamType() */

SentryGunBeamType__Enum
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_BeamType(MVSentryGun *this,MethodInfo *method)

{
  return (SentryGunBeamType__Enum)(this->fields).beamType;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_DocumentationType
          (MVSentryGun *this,MethodInfo *method)

{
  uVar1 = (this->fields).beamType;
  if (uVar1 == 0) {
    return MVWorldObjectDocumentationType__Enum_FireSentryTower;
  }
  MVar2 = MVWorldObjectDocumentationType__Enum_Missing;
  if (uVar1 == 1) {
    MVar2 = MVWorldObjectDocumentationType__Enum_FrostSentryTower;
  }
  return MVar2;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVSentryGun *this,MethodInfo *method)

{
  __return_storage_ptr__->x = -2.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

