
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
    piVar3 = &(this_00->fields)._version;
    *piVar3 = *piVar3 + 1;
    pMVar4 = (this_00->fields)._items;
    if (pMVar4 != (MVControllerColliderHit__Array *)0x0) {
      uVar5 = (this_00->fields)._size;
      if (pMVar4->max_length <= uVar5) {
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
      if (uVar5 < pMVar4->max_length) {
        pfVar13 = (float *)&stack0x00000008;
        pMVar14 = pMVar4->vector + uVar5;
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
  puStack_4 = &stack0xfffffe70;
  puVar5 = &stack0xfffffe70;
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
  pfStack_7 = (float *)(curVelocity.z - prevVelocity.z);
  ppLStack_8 = (List_1_MVControllerColliderHit_ **)(curVelocity.y - prevVelocity.y);
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar10 = (float)pfStack_7 * fVar9;
  fVar11 = (curVelocity.x - prevVelocity.x) * fVar9;
  iVar12 = (this->fields).suspendImpactDamageCounter;
  (this->fields).impactDamage = 0.0;
  if (iVar12 < 1) {
    if ((this->fields).collidedPrevFrame == 0) {
      uVar13 = CONCAT44((float)ppLStack_8 * fVar9,fVar11);
    }
    else {
      uVar14 = (this->fields).prevVelocityChangeVector.x;
      uVar15 = (this->fields).prevVelocityChangeVector.y;
      pLStack_16 = (List_1_T_Enumerator_MVControllerColliderHit_ *)
                   ((this->fields).prevVelocityChangeVector.z + fVar10);
      fVar10 = (this->fields).maxAccBeforeDamageDealt;
      uStack_17 = CONCAT44((float)uVar15 + (float)ppLStack_8 * fVar9,(float)uVar14 + fVar11);
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar18 = (float10)func_?(&uStack_17);
      this_00 = (this->fields).impactDestruction;
      if (this_00 == (ImpactState_ImpactDestruction *)0x0) goto code_?;
      ImpactState+ImpactDestruction::ImpactState_ImpactDestruction_HandleImpactDestruction
                (this_00,(float)fVar18,(this->fields).moveHits,(MethodInfo *)0x0);
      ppLStack_8 = (List_1_MVControllerColliderHit_ **)
                    ((this->fields).averageSoftnessPrevFrame * (float)fVar18);
      if (fVar11 * fVar10 < (float)ppLStack_8) {
        fVar10 = (this->fields).impactDamageMultiplier;
        fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        (this->fields).impactDamage = (fVar10 * (float)ppLStack_8) / fVar11;
        pSStack_19 = TypeInfo__System__Single;
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
      pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar13._0_4_ = (pVVar20->zeroVector).x;
      uVar13._4_4_ = (pVVar20->zeroVector).y;
      fVar10 = (pVVar20->zeroVector).z;
    }
    (this->fields).prevVelocityChangeVector.x = (float)(int)uVar13;
    (this->fields).prevVelocityChangeVector.y = (float)(int)((ulonglong)uVar13 >> 0x20);
    (this->fields).prevVelocityChangeVector.z = fVar10;
    fVar10 = _UNK_?;
    method_00 = (MethodInfo *)(this->fields).moveHits;
    ppLStack_21 = &(this->fields).moveHits;
    ppLStack_8 = ppLStack_21;
    if (method_00 != (MethodInfo *)0x0) {
      pfVar22 = &(this->fields).averageSoftnessPrevFrame;
      pfStack_7 = pfVar22;
      if ((int)method_00->name < 1) {
        (this->fields).collidedPrevFrame = 0;
      }
      else {
        (this->fields).collidedPrevFrame = 1;
        *pfVar22 = 0.0;
        pLVar23 = mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
                  List_1_MVControllerColliderHit__GetEnumerator
                            ((List_1_T_Enumerator_MVControllerColliderHit_ *)&pSStack_19,
                             (List_1_MVControllerColliderHit_ *)method_00,
                             MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                            );
        uStack_17 = uStack_17 & 0xffffffff;
        pLVar24 = &LStack_6;
        for (iVar12 = 0x28; iVar12 != 0; iVar12 = iVar12 + -1) {
          pLVar24->_list = pLVar23->_list;
          pLVar23 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar23->_index;
          pLVar24 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar24->_index;
        }
        uStack_1 = 1;
        pLStack_16 = &LStack_6;
        while( true ) {
          bVar25 = mscorlib.dll::System::Collections::Generic::
                   List`1[T]+Enumerator[MVControllerColliderHit]::
                   List_1_T_Enumerator_MVControllerColliderHit__MoveNext
                             (&LStack_6,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                             );
          if (bVar25 == 0) break;
          fVar10 = *pfVar22;
          if (LStack_6._current.material == (MVMaterial *)0x0) goto code_?;
          fStack_26 = ((LStack_6._current.material)->fields)._PhysicalProperties_k__BackingField.
                      friction;
          fStack_27 = ((LStack_6._current.material)->fields)._PhysicalProperties_k__BackingField.
                      bouncyness;
          fStack_28 = ((LStack_6._current.material)->fields)._PhysicalProperties_k__BackingField.
                      softness;
          fStack_29 = ((LStack_6._current.material)->fields)._PhysicalProperties_k__BackingField.
                      staticFriction;
          if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
          fVar18 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_6.method)
                                      (interactableLocal,0xf,fStack_28,
                                       (interactableLocal->klass->vtable).__unknown_7.methodPtr);
          *pfVar22 = (float)fVar18 + fVar10;
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        pLVar30 = (this->fields).moveHits;
        if (pLVar30 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
        fVar10 = (this->fields).averageSoftnessPrevFrame / (float)(pLVar30->fields)._size;
      }
      *pfVar22 = fVar10;
      pLVar30 = *ppLStack_8;
      if (pLVar30 != (List_1_MVControllerColliderHit_ *)0x0) {
        iVar12 = (pLVar30->fields)._size;
        piVar31 = &(pLVar30->fields)._version;
        *piVar31 = *piVar31 + 1;
        (pLVar30->fields)._size = 0;
        if (0 < iVar12) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar30->fields)._items,0,iVar12,(MethodInfo *)0x0);
        }
        fVar10 = (this->fields).impactDamage;
        *unaff_FS_OFFSET = uStack_3;
        return fVar10;
      }
    }
  }
  else {
    (this->fields).suspendImpactDamageCounter = iVar12 + -1;
    pLVar30 = (this->fields).moveHits;
    if (pLVar30 != (List_1_MVControllerColliderHit_ *)0x0) {
      iVar12 = (pLVar30->fields)._size;
      piVar31 = &(pLVar30->fields)._version;
      *piVar31 = *piVar31 + 1;
      (pLVar30->fields)._size = 0;
      if (0 < iVar12) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar30->fields)._items,0,iVar12,(MethodInfo *)0x0);
      }
      *unaff_FS_OFFSET = uStack_3;
      return 0.0;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar32 = (code *)swi(3);
  fVar18 = (float10)(*pcVar32)();
  return (float)fVar18;
}


/* ImpactState(RuntimeEventType[]) */

void Assembly-CSharp.dll::ImpactState::ImpactState__ctor
               (ImpactState *this,RuntimeEventType__Enum__Array *explosionEvents,MethodInfo *method)

{
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
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).prevVelocityChangeVector.x = (pVVar1->zeroVector).x;
  (this->fields).prevVelocityChangeVector.y = fVar2;
  (this->fields).prevVelocityChangeVector.z = fVar3;
  (this->fields).averageSoftnessPrevFrame = 1.0;
  (this->fields).maxAccBeforeDamageDealt = 55.0;
  (this->fields).impactDamageMultiplier = 4.0;
  (this->fields).suspendImpactDamageCounter = 1;
  this_01 = (List_1_MVControllerColliderHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
  pMVar4 = (MethodInfo *)&(this->fields).moveHits;
  *(List_1_MVControllerColliderHit_ **)pMVar4 = this_01;
  func_?(pMVar4,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar4);
  pOVar5 = (Object *)func_?(TypeInfo__ImpactState__ImpactDestruction);
  if (cRam_? == '\0') {
    pLStack_6 = (List_1_ImpactState_ImpactDamageRuntimeEventType___Class *)
                 &TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
    func_?();
    func_?(&TypeInfo__ImpactState__ImpactDamageRuntimeEventType);
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
  pOVar7 = (Object__Class *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pOVar7,
             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
            );
  pMVar4 = (MethodInfo *)(pOVar5 + 1);
  pMVar4->methodPointer = (Il2CppMethodPointer)pOVar7;
  method_00 = pMVar4;
  pMVar8 = pMVar4;
  func_?();
  pOVar5[1].monitor = (MonitorData *)0x3fc00000;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOVar5,ExceptionArgument__Enum_obj,method_00);
  uVar9 = 0;
  if (explosionEvents != (RuntimeEventType__Enum__Array *)0x0) {
    while( true ) {
      if ((int)explosionEvents->max_length <= (int)uVar9) break;
      if (explosionEvents->max_length <= uVar9) goto code_?;
      uVar10 = *(undefined1 *)((int)explosionEvents->vector + uVar9);
      RStack_11 = CONCAT31(RStack_11._1_3_,uVar10);
      if ((TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).cctor_finished_or_no_cctor
          == 0) {
        func_?();
      }
      pEVar12 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
               ExplosionEvent_GetExplosionValuesStruct
                         ((ExplosionEvent_ExplosionValues *)&pLStack_6,RStack_11,(MethodInfo *)0x0);
      pOVar13 = (Object__Class *)pEVar12->centerDamage;
      this_00 = (Object__Class *)pMVar4->methodPointer;
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (pOVar5,ExceptionArgument__Enum_obj,(MethodInfo *)pOVar7);
      pOVar5[1].klass = pOVar13;
      *(undefined1 *)&pOVar5[1].monitor = uVar10;
      if (this_00 == (Object__Class *)0x0) goto code_?;
      pMVar4 = pMVar8;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,pOVar5,
                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
                );
      uVar9 = uVar9 + 1;
      pMVar8 = pMVar4;
    }
    pOVar7 = (Object__Class *)pMVar4->methodPointer;
    if (pOVar7 != (Object__Class *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Sort
                ((List_1_System_Object_ *)pOVar7,
                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                );
      (this->fields).impactDestruction = (ImpactState_ImpactDestruction *)pOVar7;
      func_?();
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

