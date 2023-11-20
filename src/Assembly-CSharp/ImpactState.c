
/* Single CalcImpactDamage(Single) */

float Assembly-CSharp.dll::ImpactState::ImpactState_CalcImpactDamage
                (ImpactState *this,float velocityChange,MethodInfo *method)

{
  fVar1 = (this->fields).impactDamageMultiplier;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  return (fVar1 * velocityChange) / fVar2;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::ImpactState::ImpactState_HandleMoveHit
               (ImpactState *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    in_stack_1 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Add_MVControllerColliderHit_
  ;
  if ((char)moveHit.material != '\0') {
    return;
  }
  this_00 = (this->fields).moveHits;
  if (this_00 != (List_1_MVControllerColliderHit_ *)0x0) {
    pMVar3 = (this_00->fields)._items;
    piVar4 = &(this_00->fields)._version;
    *piVar4 = *piVar4 + 1;
    if (pMVar3 != (MVControllerColliderHit__Array *)0x0) {
      uVar5 = (this_00->fields)._size;
      if (pMVar3->max_length <= uVar5) {
        pvVar6 = pMVar2->klass->rgctx_data[0xe].rgctxDataDummy;
        puVar7 = (undefined4 *)&stack0x00000008;
        puVar8 = &uStack_9;
        for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        item.hit.interactionFlags._4_4_ = in_stack_11;
        item._0_132_ = in_stack_12;
        item.material = (MVMaterial *)in_stack_1;
        item._140_4_ = pvVar6;
        mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
        List_1_MVControllerColliderHit__AddWithResize(this_00,item,unaff_EDI);
        return;
      }
      (this_00->fields)._size = uVar5 + 1;
      if (uVar5 < pMVar3->max_length) {
        pfVar13 = (float *)&stack0x00000008;
        pMVar14 = pMVar3->vector + uVar5;
        for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
          (pMVar14->positionTouchingHit).x = *pfVar13;
          pfVar13 = pfVar13 + 1;
          pMVar14 = (MVControllerColliderHit *)&(pMVar14->positionTouchingHit).y;
        }
        func_?();
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::ImpactState::ImpactState_SuspendImpactDamage
               (ImpactState *this,MethodInfo *method)

{
  (this->fields).suspendImpactDamageCounter = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).prevVelocityChangeVector.x = (pVVar1->zeroVector).x;
  (this->fields).prevVelocityChangeVector.y = fVar2;
  (this->fields).prevVelocityChangeVector.z = fVar3;
  (this->fields).collidedPrevFrame = 0;
  return;
}


/* Single UpdateImpactState(Vector3, Vector3, MVInteractableBase) */

float Assembly-CSharp.dll::ImpactState::ImpactState_UpdateImpactState
                (ImpactState *this,Vector3 curVelocity,Vector3 prevVelocity,
                MVInteractableBase *interactableLocal,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffe78;
  puVar5 = &stack0xfffffe78;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__get_Count__
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&LStack_6,0,0xa0);
  pLStack_7 = (List_1_T_Enumerator_MVControllerColliderHit_ *)(curVelocity.z - prevVelocity.z);
  pfStack_8 = (float *)(curVelocity.y - prevVelocity.y);
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar10 = (float)pLStack_7 * fVar9;
  fVar11 = (curVelocity.x - prevVelocity.x) * fVar9;
  (this->fields).impactDamage = 0.0;
  if ((this->fields).suspendImpactDamageCounter < 1) {
    if ((this->fields).collidedPrevFrame == 0) {
      uVar12 = CONCAT44((float)pfStack_8 * fVar9,fVar11);
    }
    else {
      uVar13 = (this->fields).prevVelocityChangeVector.x;
      uVar14 = (this->fields).prevVelocityChangeVector.y;
      pLStack_7 = (List_1_T_Enumerator_MVControllerColliderHit_ *)
                   ((this->fields).prevVelocityChangeVector.z + fVar10);
      fVar10 = (this->fields).maxAccBeforeDamageDealt;
      uStack_15 = CONCAT44((float)uVar14 + (float)pfStack_8 * fVar9,(float)uVar13 + fVar11);
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar16 = (float10)func_?(&uStack_15);
      this_00 = (this->fields).impactDestruction;
      if (this_00 == (ImpactState_ImpactDestruction *)0x0) goto code_?;
      ImpactState+ImpactDestruction::ImpactState_ImpactDestruction_HandleImpactDestruction
                (this_00,(float)fVar16,(this->fields).moveHits,(MethodInfo *)0x0);
      pfStack_8 = (float *)((this->fields).averageSoftnessPrevFrame * (float)fVar16);
      if (fVar11 * fVar10 < (float)pfStack_8) {
        fVar10 = (this->fields).impactDamageMultiplier;
        fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        (this->fields).impactDamage = (fVar10 * (float)pfStack_8) / fVar11;
        pSStack_17 = TypeInfo__System__Single;
        message = (Object *)func_?();
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar12._0_4_ = (pVVar18->zeroVector).x;
      uVar12._4_4_ = (pVVar18->zeroVector).y;
      fVar10 = (pVVar18->zeroVector).z;
    }
    (this->fields).prevVelocityChangeVector.x = (float)(int)uVar12;
    (this->fields).prevVelocityChangeVector.y = (float)(int)((ulonglong)uVar12 >> 0x20);
    (this->fields).prevVelocityChangeVector.z = fVar10;
    fVar10 = _UNK_?;
    method_00 = (MethodInfo *)(this->fields).moveHits;
    if (method_00 != (MethodInfo *)0x0) {
      pfStack_8 = &(this->fields).averageSoftnessPrevFrame;
      if ((int)method_00->name < 1) {
        (this->fields).collidedPrevFrame = 0;
      }
      else {
        *pfStack_8 = 0.0;
        (this->fields).collidedPrevFrame = 1;
        if (method_00 == (MethodInfo *)0x0) goto code_?;
        pLVar19 = mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
                  List_1_MVControllerColliderHit__GetEnumerator
                            ((List_1_T_Enumerator_MVControllerColliderHit_ *)&pSStack_17,
                             (List_1_MVControllerColliderHit_ *)method_00,
                             MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                            );
        uStack_15 = uStack_15 & 0xffffffff;
        pLVar20 = &LStack_6;
        for (iVar21 = 0x28; iVar21 != 0; iVar21 = iVar21 + -1) {
          pLVar20->_list = pLVar19->_list;
          pLVar19 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar19->_index;
          pLVar20 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar20->_index;
        }
        uStack_1 = 1;
        pLStack_7 = &LStack_6;
        while( true ) {
          bVar22 = mscorlib.dll::System::Collections::Generic::
                  List`1[T]+Enumerator[MVControllerColliderHit]::
                  List_1_T_Enumerator_MVControllerColliderHit__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                            );
          if (bVar22 == 0) break;
          fVar10 = (this->fields).averageSoftnessPrevFrame;
          if (LStack_6._current.material == (MVMaterial *)0x0) goto code_?;
          fStack_23 = ((LStack_6._current.material)->fields)._PhysicalProperties_k__BackingField.
                      friction;
          fStack_24 = ((LStack_6._current.material)->fields)._PhysicalProperties_k__BackingField.
                      bouncyness;
          fStack_25 = ((LStack_6._current.material)->fields)._PhysicalProperties_k__BackingField.
                      softness;
          fStack_26 = ((LStack_6._current.material)->fields)._PhysicalProperties_k__BackingField.
                      staticFriction;
          if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
          fVar16 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_6.method)
                                      (interactableLocal,0xf,fStack_25,
                                       (interactableLocal->klass->vtable).__unknown_7.methodPtr);
          (this->fields).averageSoftnessPrevFrame = (float)fVar16 + fVar10;
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        pLVar27 = (this->fields).moveHits;
        if (pLVar27 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
        fVar10 = (this->fields).averageSoftnessPrevFrame / (float)(pLVar27->fields)._size;
      }
      (this->fields).averageSoftnessPrevFrame = fVar10;
      pLVar27 = (this->fields).moveHits;
      if (pLVar27 != (List_1_MVControllerColliderHit_ *)0x0) {
        iVar21 = (pLVar27->fields)._size;
        piVar28 = &(pLVar27->fields)._version;
        *piVar28 = *piVar28 + 1;
        (pLVar27->fields)._size = 0;
        if (0 < iVar21) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar27->fields)._items,0,iVar21,(MethodInfo *)0x0);
        }
        fVar10 = (this->fields).impactDamage;
        *unaff_FS_OFFSET = uStack_3;
        return fVar10;
      }
    }
  }
  else {
    piVar28 = &(this->fields).suspendImpactDamageCounter;
    *piVar28 = *piVar28 + -1;
    pLVar27 = (this->fields).moveHits;
    if (pLVar27 != (List_1_MVControllerColliderHit_ *)0x0) {
      iVar21 = (pLVar27->fields)._size;
      piVar28 = &(pLVar27->fields)._version;
      *piVar28 = *piVar28 + 1;
      (pLVar27->fields)._size = 0;
      if (0 < iVar21) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar27->fields)._items,0,iVar21,(MethodInfo *)0x0);
      }
      *unaff_FS_OFFSET = uStack_3;
      return 0.0;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar29 = (code *)swi(3);
  fVar16 = (float10)(*pcVar29)();
  return (float)fVar16;
}


/* ImpactState(RuntimeEventType[]) */

void Assembly-CSharp.dll::ImpactState::ImpactState__ctor
               (ImpactState *this,RuntimeEventType__Enum__Array *explosionEvents,MethodInfo *method)

{
  pRVar1 = explosionEvents;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ImpactState__ImpactDestruction);
    func_?(&MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).prevVelocityChangeVector.x = (pVVar2->zeroVector).x;
  (this->fields).prevVelocityChangeVector.y = fVar3;
  (this->fields).prevVelocityChangeVector.z = fVar4;
  (this->fields).averageSoftnessPrevFrame = 1.0;
  (this->fields).maxAccBeforeDamageDealt = 55.0;
  (this->fields).impactDamageMultiplier = 4.0;
  (this->fields).suspendImpactDamageCounter = 1;
  this_00 = (List_1_MVControllerColliderHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
  pMVar5 = (MethodInfo *)&(this->fields).moveHits;
  (this->fields).moveHits = this_00;
  func_?(pMVar5,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar5);
  value = (ImpactState_ImpactDestruction *)func_?(TypeInfo__ImpactState__ImpactDestruction)
  ;
  if (cRam_? == '\0') {
    func_?();
    pLStack_6 = (List_1_ImpactState_ImpactDamageRuntimeEventType___Class *)
                 &TypeInfo__ImpactState__ImpactDamageRuntimeEventType;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>
                   );
    cRam_? = '\x01';
  }
  pLStack_6 = 
  TypeInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>;
  method_00 = (MethodInfo *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method_00,
             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
            );
  pMVar5 = (MethodInfo *)&value->fields;
  (value->fields).impactDamageRuntimeEventTypes =
       (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)method_00;
  func_?();
  (value->fields).velChangeToDamageConstant = 1.5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar5);
  uVar7 = 0;
  if (explosionEvents != (RuntimeEventType__Enum__Array *)0x0) {
    for (; (int)uVar7 < (int)pRVar1->max_length; uVar7 = uVar7 + 1) {
      if (pRVar1->max_length <= uVar7) goto code_?;
      uVar8 = *(undefined1 *)((int)pRVar1->vector + uVar7);
      explosionEvents = (RuntimeEventType__Enum__Array *)CONCAT31(explosionEvents._1_3_,uVar8);
      if ((TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).cctor_finished_or_no_cctor
          == 0) {
        func_?();
      }
      pEVar9 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
               ExplosionEvent_GetExplosionValuesStruct
                         ((ExplosionEvent_ExplosionValues *)&pLStack_6,
                          (RuntimeEventType__Enum)explosionEvents,(MethodInfo *)0x0);
      pOVar10 = (Object__Class *)pEVar9->centerDamage;
      pLVar11 = (value->fields).impactDamageRuntimeEventTypes;
      value_00 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value_00,ExceptionArgument__Enum_obj,method_00);
      value_00[1].klass = pOVar10;
      *(undefined1 *)&value_00[1].monitor = uVar8;
      if (pLVar11 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar11,value_00,
                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
                );
    }
    pLVar11 = (value->fields).impactDamageRuntimeEventTypes;
    if (pLVar11 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Sort
                ((List_1_System_Object_ *)pLVar11,
                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                );
      (this->fields).impactDestruction = value;
      func_?();
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

