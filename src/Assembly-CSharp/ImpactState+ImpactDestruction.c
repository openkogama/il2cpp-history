
/* MVControllerColliderHit GetColliderHit(List`1[MVControllerColliderHit]) */

MVControllerColliderHit *
Assembly-CSharp.dll::ImpactState+ImpactDestruction::ImpactState_ImpactDestruction_GetColliderHit
          (MVControllerColliderHit *__return_storage_ptr__,ImpactState_ImpactDestruction *this,
          List_1_MVControllerColliderHit_ *moveHits,MethodInfo *method)

{
  func_?(&MStack_1,0,0x90);
  ImpactState_ImpactDestruction_GetMoveHitWithHighestImpactVelocity
            (this,&MStack_1,moveHits,(MethodInfo *)0x0);
  pMVar2 = &MStack_1;
  pMVar3 = __return_storage_ptr__;
  for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
    (pMVar3->positionTouchingHit).x = (pMVar2->positionTouchingHit).x;
    pMVar2 = (MVControllerColliderHit *)&(pMVar2->positionTouchingHit).y;
    pMVar3 = (MVControllerColliderHit *)&(pMVar3->positionTouchingHit).y;
  }
  return __return_storage_ptr__;
}


/* Single GetImpactDamage(Single) */

float Assembly-CSharp.dll::ImpactState+ImpactDestruction::
      ImpactState_ImpactDestruction_GetImpactDamage
                (ImpactState_ImpactDestruction *this,float velChangeMagnitude,MethodInfo *method)

{
  fVar1 = (this->fields).velChangeToDamageConstant;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  return (fVar1 * velChangeMagnitude) / fVar2;
}


/* Void GetMoveHitWithHighestImpactVelocity(MVControllerColliderHit ByRef,
   List`1[MVControllerColliderHit]) */

void Assembly-CSharp.dll::ImpactState+ImpactDestruction::
     ImpactState_ImpactDestruction_GetMoveHitWithHighestImpactVelocity
               (ImpactState_ImpactDestruction *this,MVControllerColliderHit *colliderHit,
               List_1_MVControllerColliderHit_ *moveHits,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffe04;
  puVar5 = &stack0xfffffe04;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(auStack_6,0,0x90);
  func_?(auStack_6 + 0x90,0,0xa0);
  func_?();
  if (moveHits != (List_1_MVControllerColliderHit_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xfffffe04;
    puStack_4 = &stack0xfffffe04;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
             List_1_MVControllerColliderHit__GetEnumerator
                       (&LStack_9,moveHits,
                        MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                       );
    iVar10 = 0x28;
    uStack_1 = 0;
    pMVar11 = (MVControllerColliderHit *)(auStack_6 + 0x90);
    do {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        (pMVar11->positionTouchingHit).x = (float)pLVar8->l;
        pLVar8 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar8->next;
        pMVar11 = (MVControllerColliderHit *)&(pMVar11->positionTouchingHit).y;
      }
      do {
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puStack_7 = 0x56;
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        puVar13 = (undefined4 *)func_?();
        puVar14 = (undefined4 *)auStack_6;
        for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        fVar15 = (float10)func_?();
        fVar16 = (float10)func_?();
        fStack_17 = (float)fVar16;
      } while ((float)fVar15 <= (float)fVar16);
      iVar10 = 0x24;
      pLVar8 = (List_1_T_Enumerator_MVControllerColliderHit_ *)auStack_6;
      pMVar11 = colliderHit;
    } while( true );
  }
  puStack_7 = (undefined4 *)&stack0xfffffe04;
  puStack_4 = &stack0xfffffe04;
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void HandleImpactDestruction(Single, List`1[MVControllerColliderHit]) */

void Assembly-CSharp.dll::ImpactState+ImpactDestruction::
     ImpactState_ImpactDestruction_HandleImpactDestruction
               (ImpactState_ImpactDestruction *this,float velChangeMagnitude,
               List_1_MVControllerColliderHit_ *moveHits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).velChangeToDamageConstant;
  fStack_2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
  fStack_2 = (fVar1 * velChangeMagnitude) / fStack_2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar3 = (this->fields).impactDamageRuntimeEventTypes;
  velChangeMagnitude = (float)((uint)velChangeMagnitude & 0xffffff00);
  if (pLVar3 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                        MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Count__
                       );
    if (pOVar4 == (Object *)0x0) {
      return;
    }
    index = 0;
    bVar5 = false;
    pLVar3 = (this->fields).impactDamageRuntimeEventTypes;
    if (pLVar3 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
      while (pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Count__
                                ), index < (int)pOVar4) {
        pLVar3 = (this->fields).impactDamageRuntimeEventTypes;
        if ((pLVar3 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) ||
           (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index
                                ,
                                MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                               ), pIVar6 == (IEventSystemHandler *)0x0)) goto code_?;
        if (fStack_2 < (float)pIVar6[1].klass) break;
        pLVar3 = (this->fields).impactDamageRuntimeEventTypes;
        bVar5 = true;
        if ((pLVar3 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) ||
           (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index
                                ,
                                MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                               ), pIVar6 == (IEventSystemHandler *)0x0)) goto code_?;
        index = index + 1;
        velChangeMagnitude =
             (float)CONCAT31(velChangeMagnitude._1_3_,*(undefined1 *)&pIVar6[1].monitor);
        pLVar3 = (this->fields).impactDamageRuntimeEventTypes;
        if (pLVar3 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0)
        goto code_?;
      }
      if (!bVar5) {
        return;
      }
      func_?(&MStack_7,0,0x90);
      ImpactState_ImpactDestruction_GetMoveHitWithHighestImpactVelocity
                (this,&MStack_7,moveHits,(MethodInfo *)0x0);
      this_00 = (ExplosionEvent *)
                func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      worldPosition.z = MStack_7.hit.point.z;
      worldPosition.x = MStack_7.hit.point.x;
      worldPosition.y = MStack_7.hit.point.y;
      normal.z = MStack_7.hit.normal.z;
      normal.x = MStack_7.hit.normal.x;
      normal.y = MStack_7.hit.normal.y;
      MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
                (this_00,(RuntimeEventType__Enum)velChangeMagnitude,worldPosition,normal,
                 (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((this_01 != (MVNetworkGame *)0x0) &&
          (this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                      *)CloudyTheme::CloudyTheme_get_Identifier
                                  ((CloudyTheme *)this_01,(MethodInfo *)0x0),
          this_02 !=
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0)) &&
         (this_03 = (RuntimeEventManager *)
                    System.dll::System::Collections::Generic::
                    SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                    ::Single,System::Object]::
                    SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                              (this_02,(MethodInfo *)0x0), this_03 != (RuntimeEventManager *)0x0)) {
        RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent(this_03,this_00,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean TryGetExplosionEvent(RuntimeEventType ByRef, Single) */

bool Assembly-CSharp.dll::ImpactState+ImpactDestruction::
     ImpactState_ImpactDestruction_TryGetExplosionEvent
               (ImpactState_ImpactDestruction *this,RuntimeEventType__Enum *runtimeEventType,
               float damage,MethodInfo *method)

{
  pIVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *(undefined1 *)runtimeEventType = RuntimeEventType__Enum_Undefined;
  pLVar2 = (this->fields).impactDamageRuntimeEventTypes;
  if (pLVar2 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Count__
                       );
    if (pOVar3 == (Object *)0x0) {
      return 0;
    }
    this = (ImpactState_ImpactDestruction *)0x0;
    pLVar2 = (pIVar1->fields).impactDamageRuntimeEventTypes;
    pIVar4 = (ImpactState_ImpactDestruction *)0x0;
    if (pLVar2 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
      do {
        index = pIVar4;
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                            MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Count__
                           );
        if ((int)pOVar3 <= (int)index) {
code_?:
          return this._3_1_;
        }
        pLVar2 = (pIVar1->fields).impactDamageRuntimeEventTypes;
        if ((pLVar2 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) ||
           (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                (int32_t)index,
                                MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                               ),
           pMVar6 = 
           MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
           , pIVar5 == (IEventSystemHandler *)0x0)) break;
        if (damage < (float)pIVar5[1].klass) goto code_?;
        pLVar2 = (pIVar1->fields).impactDamageRuntimeEventTypes;
        if ((pLVar2 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) ||
           (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                (int32_t)index,
                                MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                               ), pIVar5 == (IEventSystemHandler *)0x0)) break;
        *(undefined1 *)&pMVar6->methodPointer = *(undefined1 *)&pIVar5[1].monitor;
        pLVar2 = (pIVar1->fields).impactDamageRuntimeEventTypes;
        pIVar4 = (ImpactState_ImpactDestruction *)((int)&index->klass + 1);
        this = index;
        if (pLVar2 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) break;
      } while( true );
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* ImpactState+ImpactDestruction(RuntimeEventType[]) */

void Assembly-CSharp.dll::ImpactState+ImpactDestruction::ImpactState_ImpactDestruction__ctor
               (ImpactState_ImpactDestruction *this,RuntimeEventType__Enum__Array *explosionEvents,
               MethodInfo *method)

{
  pRVar1 = explosionEvents;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = 
  TypeInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>;
  this_02 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
            );
  (this->fields).impactDamageRuntimeEventTypes =
       (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)this_02;
  (this->fields).velChangeToDamageConstant = 1.5;
  method_00 = (MethodInfo *)&UNK_?;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_01);
  uVar2 = 0;
  if (explosionEvents != (RuntimeEventType__Enum__Array *)0x0) {
    for (; uVar3 = pRVar1->max_length, (int)uVar2 < (int)uVar3; uVar2 = uVar2 + 1) {
      if (uVar3 <= uVar2) goto code_?;
      uVar4 = *(undefined1 *)((int)pRVar1->vector + uVar2);
      explosionEvents = (RuntimeEventType__Enum__Array *)CONCAT31(explosionEvents._1_3_,uVar4);
      if ((((uint)(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).cctor_started == 0)) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
      ExplosionEvent_GetExplosionValuesStruct
                ((ExplosionEvent_ExplosionValues *)&stack0xffffffd8,
                 (RuntimeEventType__Enum)explosionEvents,(MethodInfo *)0x0);
      fVar5 = (float10)func_?(&stack0xffffffe4);
      this_00 = (this->fields).impactDamageRuntimeEventTypes;
      this_03 = (ScaleAnimationBase *)
                func_?(TypeInfo__ImpactState__ImpactDamageRuntimeEventType);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,method_00);
      (this_03->fields)._._._._.m_CachedPtr = (void *)(float)fVar5;
      *(undefined1 *)&(this_03->fields).state = uVar4;
      if (this_00 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)this_03,
                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
                );
    }
    this_01 = (List_1_VoxelHit_ *)(this->fields).impactDamageRuntimeEventTypes;
    if (this_01 != (List_1_VoxelHit_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Sort
                (this_01,
                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                );
      return;
    }
  }
code_?:
  func_?();
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

