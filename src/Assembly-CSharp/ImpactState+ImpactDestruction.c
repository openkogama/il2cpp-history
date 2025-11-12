
/* MVControllerColliderHit GetColliderHit(List`1[MVControllerColliderHit]) */

MVControllerColliderHit *
Assembly-CSharp.dll::ImpactState+ImpactDestruction::ImpactState_ImpactDestruction_GetColliderHit
          (MVControllerColliderHit *__return_storage_ptr__,ImpactState_ImpactDestruction *this,
          List_1_MVControllerColliderHit_ *moveHits,MethodInfo *method)

{
  FUN_?(__return_storage_ptr__,0,0xa8);
  ImpactState_ImpactDestruction_GetMoveHitWithHighestImpactVelocity
            (this,__return_storage_ptr__,moveHits,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Single GetImpactDamage(Single) */

float Assembly-CSharp.dll::ImpactState+ImpactDestruction::
      ImpactState_ImpactDestruction_GetImpactDamage
                (ImpactState_ImpactDestruction *this,float velChangeMagnitude,MethodInfo *method)

{
  fVar1 = (this->fields).velChangeToDamageConstant;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    fVar1 = (float)(*pcVar2)();
    return fVar1;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  return (fVar1 * velChangeMagnitude) / fVar4;
}


/* Void GetMoveHitWithHighestImpactVelocity(MVControllerColliderHit ByRef,
   List`1[MVControllerColliderHit]) */

void Assembly-CSharp.dll::ImpactState+ImpactDestruction::
     ImpactState_ImpactDestruction_GetMoveHitWithHighestImpactVelocity
               (ImpactState_ImpactDestruction *this,MVControllerColliderHit *colliderHit,
               List_1_MVControllerColliderHit_ *moveHits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (moveHits == (List_1_MVControllerColliderHit_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?(&uStack_2,0,0xb0);
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pLStack_4 >> 0xc);
    uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  uStack_2 = 0;
  iStack_9 = (moveHits->fields)._version;
  pLStack_4 = moveHits;
  FUN_?(&uStack_10,0,0xa8);
  uStack_11 = CONCAT44(iStack_9,uStack_2);
  pLStack_12 = pLStack_4;
  uStack_13 = uStack_10;
  uStack_14 = uStack_15;
  uStack_16 = uStack_17;
  uStack_18 = uStack_19;
  uStack_20 = uStack_21;
  uStack_22 = uStack_23;
  uStack_24 = uStack_25;
  uStack_26 = uStack_27;
  uStack_28 = uStack_29;
  uStack_30 = uStack_31;
  uStack_32 = uStack_33;
  uStack_34 = uStack_35;
  uStack_36 = uStack_37;
  uStack_38 = uStack_39;
  pCStack_40 = pCStack_41;
  uStack_42 = uStack_43;
  uStack_44 = uStack_45;
  uStack_46 = uStack_47;
  uStack_48 = uStack_49;
  uStack_50 = uStack_51;
  uStack_52 = uStack_53;
  uStack_54 = uStack_55;
  uStack_56 = uStack_57;
  while (cVar58 = FUN_?(&pLStack_12,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                              ), cVar58 != '\0') {
    fVar59 = (colliderHit->impactVelocity).y;
    fVar60 = (colliderHit->impactVelocity).x;
    fVar61 = (colliderHit->impactVelocity).z;
    if (fVar60 * fVar60 + fVar59 * fVar59 + fVar61 * fVar61 <
        uStack_24._4_4_ * uStack_24._4_4_ + (float)uStack_24 * (float)uStack_24 +
        (float)uStack_26 * (float)uStack_26) {
      (colliderHit->positionTouchingHit).x = (float)(undefined4)uStack_13;
      (colliderHit->positionTouchingHit).y = (float)uStack_13._4_4_;
      *(undefined8 *)&(colliderHit->positionTouchingHit).z = uStack_14;
      (colliderHit->moveDirection).y = (float)(undefined4)uStack_16;
      (colliderHit->moveDirection).z = (float)uStack_16._4_4_;
      (colliderHit->elipsoidNormal).x = (float)(undefined4)uStack_18;
      (colliderHit->elipsoidNormal).y = (float)uStack_18._4_4_;
      *(undefined8 *)&(colliderHit->elipsoidNormal).z = uStack_20;
      (colliderHit->slopeNormal).y = (float)(undefined4)uStack_22;
      (colliderHit->slopeNormal).z = (float)uStack_22._4_4_;
      (colliderHit->impactVelocity).x = (float)uStack_24;
      (colliderHit->impactVelocity).y = uStack_24._4_4_;
      *(undefined8 *)&(colliderHit->impactVelocity).z = uStack_26;
      (colliderHit->hit).point.x = (float)(undefined4)uStack_28;
      (colliderHit->hit).point.y = (float)uStack_28._4_4_;
      *(undefined8 *)&(colliderHit->hit).point.z = uStack_30;
      (colliderHit->hit).normal.y = (float)(undefined4)uStack_32;
      (colliderHit->hit).normal.z = (float)uStack_32._4_4_;
      *(undefined8 *)&(colliderHit->hit).cubePos = uStack_34;
      (colliderHit->hit).face = (undefined4)uStack_36;
      (colliderHit->hit).isCubeHit = uStack_36._4_1_;
      *(undefined3 *)&(colliderHit->hit).field_0x25 = uStack_36._5_3_;
      *(undefined8 *)&(colliderHit->hit).woId = uStack_38;
      (colliderHit->hit).cube = pCStack_40;
      *(undefined8 *)&(colliderHit->hit).distance = uStack_42;
      *(undefined4 *)&(colliderHit->hit).collider = uStack_44;
      *(undefined4 *)((longlong)&(colliderHit->hit).collider + 4) = uStack_46;
      *(undefined4 *)&(colliderHit->hit).transform = uStack_48;
      *(undefined4 *)((longlong)&(colliderHit->hit).transform + 4) = uStack_50;
      *(undefined4 *)&(colliderHit->hit).interactionFlags = (undefined4)uStack_52;
      *(undefined4 *)((longlong)&(colliderHit->hit).interactionFlags + 4) = uStack_52._4_4_;
      *(undefined4 *)&colliderHit->material = (undefined4)uStack_54;
      *(undefined4 *)((longlong)&colliderHit->material + 4) = uStack_54._4_4_;
      *(undefined8 *)&colliderHit->testWithOutMoving = uStack_56;
      func_?(&(colliderHit->hit).cube);
    }
  }
  return;
}


/* Void HandleImpactDestruction(Single, List`1[MVControllerColliderHit]) */

void Assembly-CSharp.dll::ImpactState+ImpactDestruction::
     ImpactState_ImpactDestruction_HandleImpactDestruction
               (ImpactState_ImpactDestruction *this,float velChangeMagnitude,
               List_1_MVControllerColliderHit_ *moveHits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).velChangeToDamageConstant;
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
  fVar4 = (float)(*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar5 = (this->fields).impactDamageRuntimeEventTypes;
  uVar6 = 0;
  if (pLVar5 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
    if ((pLVar5->fields)._size == 0) {
      return;
    }
    bVar7 = false;
    lVar8 = 0x20;
    index = 0;
    do {
      if ((pLVar5->fields)._size <= (int)index) {
code_?:
        if (!bVar7) {
          return;
        }
        FUN_?(&MStack_9,0,0xa8);
        ImpactState_ImpactDestruction_GetMoveHitWithHighestImpactVelocity
                  (this,&MStack_9,moveHits,(MethodInfo *)0x0);
        runtimeEvent = (RuntimeEvent *)
                       FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
        VStack_10.z = MStack_9.hit.normal.z;
        VStack_10.x = MStack_9.hit.normal.x;
        VStack_10.y = MStack_9.hit.normal.y;
        VStack_11.z = MStack_9.hit.point.z;
        VStack_11.x = MStack_9.hit.point.x;
        VStack_11.y = MStack_9.hit.point.y;
        (runtimeEvent->fields)._RuntimeEventType_k__BackingField = uVar6;
        pIVar12 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                  CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                            (&IStackX_8,&VStack_11,&VStack_10,(MethodInfo *)0x0);
        bVar7 = cRam_? == '\0';
        iVar13 = pIVar12->y;
        iVar14 = pIVar12->z;
        (runtimeEvent->fields).position.x = pIVar12->x;
        (runtimeEvent->fields).position.y = iVar13;
        (runtimeEvent->fields).position.z = iVar14;
        if (bVar7) {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar15 != (MVGameControllerBase *)0x0) &&
             (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
            (pWVar17 = (pMVar16->fields).worldNetwork, pWVar17 != (WorldNetwork *)0x0)) &&
           (this_00 = (RuntimeEventManager *)(pWVar17->fields)._.runtimeEventManagerNetwork,
           this_00 != (RuntimeEventManager *)0x0)) {
          bVar18 = RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                            (this_00,(ExplosionEvent *)runtimeEvent,(MethodInfo *)0x0);
          if (bVar18 == 0) {
            return;
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_SendRuntimeEventOperation
                      (this_01,runtimeEvent,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      }
      pLVar5 = (this->fields).impactDamageRuntimeEventTypes;
      if (pLVar5 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) break;
      if ((uint)(pLVar5->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pIVar19 = (pLVar5->fields)._items;
      if (pIVar19 == (ImpactState_ImpactDamageRuntimeEventType__Array *)0x0) break;
      if ((uint)pIVar19->max_length <= index) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar20 = *(longlong *)((longlong)pIVar19->vector + lVar8 + -0x20);
      if (lVar20 == 0) break;
      if ((fVar1 * velChangeMagnitude) / fVar4 < *(float *)(lVar20 + 0x10))
      goto code_?;
      bVar7 = true;
      EVar21 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
               EntryPreProcessor+AllocSize]::
               List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                         ((List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                          (this->fields).impactDamageRuntimeEventTypes,index,
                          MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                         );
      if (EVar21 == (EntryPreProcessor_AllocSize)0x0) break;
      uVar6 = *(uint8_t *)((longlong)EVar21 + 0x14);
      index = index + 1;
      pLVar5 = (this->fields).impactDamageRuntimeEventTypes;
      lVar8 = lVar8 + 8;
    } while (pLVar5 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0);
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean TryGetExplosionEvent(RuntimeEventType ByRef, Single) */

bool Assembly-CSharp.dll::ImpactState+ImpactDestruction::
     ImpactState_ImpactDestruction_TryGetExplosionEvent
               (ImpactState_ImpactDestruction *this,RuntimeEventType__Enum *runtimeEventType,
               float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *(undefined1 *)runtimeEventType = RuntimeEventType__Enum_Undefined;
  pLVar1 = (this->fields).impactDamageRuntimeEventTypes;
  if (pLVar1 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    bVar2 = 0;
    lVar3 = 0x20;
    index = 0;
    do {
      if ((pLVar1->fields)._size <= (int)index) {
        return bVar2;
      }
      pLVar1 = (this->fields).impactDamageRuntimeEventTypes;
      if (pLVar1 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        bVar2 = (*pcVar4)();
        return bVar2;
      }
      pIVar5 = (pLVar1->fields)._items;
      if (pIVar5 == (ImpactState_ImpactDamageRuntimeEventType__Array *)0x0) break;
      if ((uint)pIVar5->max_length <= index) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        bVar2 = (*pcVar4)();
        return bVar2;
      }
      lVar6 = *(longlong *)((longlong)pIVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      if (damage < *(float *)(lVar6 + 0x10)) {
        return bVar2;
      }
      bVar2 = 1;
      EVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              EntryPreProcessor+AllocSize]::
              List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                        ((List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                         (this->fields).impactDamageRuntimeEventTypes,index,
                         MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                        );
      if (EVar7 == (EntryPreProcessor_AllocSize)0x0) break;
      index = index + 1;
      *(undefined1 *)runtimeEventType = *(undefined1 *)((longlong)EVar7 + 0x14);
      lVar3 = lVar3 + 8;
      pLVar1 = (this->fields).impactDamageRuntimeEventTypes;
    } while (pLVar1 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* ImpactState+ImpactDestruction(RuntimeEventType[]) */

void Assembly-CSharp.dll::ImpactState+ImpactDestruction::ImpactState_ImpactDestruction__ctor
               (ImpactState_ImpactDestruction *this,RuntimeEventType__Enum__Array *explosionEvents,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ImpactState__ImpactDamageRuntimeEventType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
            );
  bVar2 = iRam_? != 0;
  (this->fields).impactDamageRuntimeEventTypes = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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
  uVar3 = 0;
  (this->fields).velChangeToDamageConstant = 1.5;
  if (explosionEvents != (RuntimeEventType__Enum__Array *)0x0) {
    pRVar7 = explosionEvents->vector;
    while ((int)uVar3 < (int)explosionEvents->max_length) {
      if ((uint)explosionEvents->max_length <= uVar3) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      RVar9 = *pRVar7;
      if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__get_Item_MV__Common__RuntimeEventType_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).field_0x1c == 0) {
        FUN_?();
      }
      pDVar10 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->
               explosionValues;
      if (pDVar10 == (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                     *)0x0) goto code_?;
      puVar11 = (undefined8 *)FUN_?(auStack_12,pDVar10,(char)RVar9);
      pLVar1 = (this->fields).impactDamageRuntimeEventTypes;
      uVar13 = *puVar11;
      item = (Object *)FUN_?(TypeInfo__ImpactState__ImpactDamageRuntimeEventType);
      *(int *)&item[1].klass = (int)((ulonglong)uVar13 >> 0x20);
      *(char *)((longlong)&item[1].klass + 4) = (char)RVar9;
      pMVar14 = 
      MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
      ;
      if (pLVar1 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0)
      goto code_?;
      piVar15 = &(pLVar1->fields)._version;
      *piVar15 = *piVar15 + 1;
      pIVar16 = (pLVar1->fields)._items;
      if (pIVar16 == (ImpactState_ImpactDamageRuntimeEventType__Array *)0x0)
      goto code_?;
      uVar17 = (pLVar1->fields)._size;
      if (uVar17 < (uint)pIVar16->max_length) {
        (pLVar1->fields)._size = uVar17 + 1;
        FUN_?(pIVar16,(longlong)(int)uVar17,item);
        uVar3 = uVar3 + 1;
        pRVar7 = (RuntimeEventType__Enum *)((longlong)pRVar7 + 1);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,item,pMVar14->klass->rgctx_data[0xe].method);
        uVar3 = uVar3 + 1;
        pRVar7 = (RuntimeEventType__Enum *)((longlong)pRVar7 + 1);
      }
    }
    pLVar1 = (this->fields).impactDamageRuntimeEventTypes;
    if (pLVar1 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
      iVar18 = (pLVar1->fields)._size;
      if (iVar18 < 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                  (ExceptionArgument__Enum_count,
                   ExceptionResource__Enum_ArgumentOutOfRange_NeedNonNegNum,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (1 < iVar18) {
        FUN_?((pLVar1->fields)._items,0,iVar18,0,
                      (MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                       ->klass->rgctx_data[0x2f].method)->klass->rgctx_data[0x30].rgctxDataDummy);
      }
      piVar15 = &(pLVar1->fields)._version;
      *piVar15 = *piVar15 + 1;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

