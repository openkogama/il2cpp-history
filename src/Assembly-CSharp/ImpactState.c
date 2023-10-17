
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
    IStack_1.rgctxDataDummy =
         &
         MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Add_MVControllerColliderHit_
    ;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Add_MVControllerColliderHit_
  ;
  if ((char)moveHit.material != '\0') {
    return;
  }
  pLVar3 = (this->fields).moveHits;
  if (pLVar3 != (List_1_MVControllerColliderHit_ *)0x0) {
    pMVar4 = (pLVar3->fields)._items;
    piVar5 = &(pLVar3->fields)._version;
    *piVar5 = *piVar5 + 1;
    if (pMVar4 != (MVControllerColliderHit__Array *)0x0) {
      uVar6 = (pLVar3->fields)._size;
      if (pMVar4->max_length <= uVar6) {
        IStack_1 = pMVar2->klass->rgctx_data[0xb];
        pIVar7 = (pMVar2->klass->rgctx_data[0xb].method)->virtualMethodPointer;
        puVar8 = (undefined4 *)&stack0x00000008;
        puVar9 = auStack_10;
        for (iVar11 = 0x24; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        (*pIVar7)(pLVar3);
        return;
      }
      (pLVar3->fields)._size = uVar6 + 1;
      if (uVar6 < pMVar4->max_length) {
        pfVar12 = (float *)&stack0x00000008;
        pMVar13 = pMVar4->vector + uVar6;
        for (iVar11 = 0x24; iVar11 != 0; iVar11 = iVar11 + -1) {
          (pMVar13->positionTouchingHit).x = *pfVar12;
          pfVar12 = pfVar12 + 1;
          pMVar13 = (MVControllerColliderHit *)&(pMVar13->positionTouchingHit).y;
        }
        ppCStack_14 = &pMVar4->vector[uVar6].hit.cube;
        IStack_1 = (Il2CppRGCTXData)0x0;
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
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
          fVar16 = (float10)(*(interactableLocal->klass->vtable).__unknown_6.methodPtr)
                                      (interactableLocal,0xf,fStack_25,
                                       (interactableLocal->klass->vtable).__unknown_6.method);
          (this->fields).averageSoftnessPrevFrame = (float)fVar16 + fVar10;
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  if (this_01 != (List_1_MVControllerColliderHit_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
    pMVar4 = (MethodInfo *)&(this->fields).moveHits;
    (this->fields).moveHits = this_01;
    func_?(pMVar4,this_01);
    value_00 = (MethodInfo **)&UNK_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,pMVar4);
    value = (ImpactState_ImpactDestruction *)
            func_?(TypeInfo__ImpactState__ImpactDestruction);
    pIStack_5 = value;
    if (value != (ImpactState_ImpactDestruction *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
        func_?(&TypeInfo__ImpactState__ImpactDamageRuntimeEventType);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                       );
        value_00 = &
                   MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
        ;
        func_?();
        in_stack_6 =
             &
             TypeInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>
        ;
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>
                               );
      if (this_02 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
                  );
        (value->fields).impactDamageRuntimeEventTypes = this_02;
        func_?(&value->fields,this_02);
        (value->fields).velChangeToDamageConstant = 1.5;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_6);
        uVar7 = 0;
        if (explosionEvents != (RuntimeEventType__Enum__Array *)0x0) {
          for (; (int)uVar7 < (int)explosionEvents->max_length; uVar7 = uVar7 + 1) {
            if (explosionEvents->max_length <= uVar7) goto code_?;
            RStack_8 = CONCAT31(RStack_8._1_3_,*(undefined1 *)((int)explosionEvents->vector + uVar7)
                               );
            pMVar4 = (MethodInfo *)value_00;
            if ((TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
              pMVar4 = (MethodInfo *)value_00;
            }
            pEVar9 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
                     ExplosionEvent_GetExplosionValuesStruct(&EStack_10,RStack_8,(MethodInfo *)0x0);
            uStack_11._0_4_ = pEVar9->radius;
            uStack_11._4_4_ = (InvokerMethod)pEVar9->centerDamage;
            pLStack_12 = (value->fields).impactDamageRuntimeEventTypes;
            value_00 = (MethodInfo **)
                       func_?(TypeInfo__ImpactState__ImpactDamageRuntimeEventType);
            if ((MethodInfo *)value_00 == (MethodInfo *)0x0) goto code_?;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar4);
            *(undefined1 *)&((MethodInfo *)value_00)->name = (undefined1)RStack_8;
            ((MethodInfo *)value_00)->invoker_method = uStack_11._4_4_;
            if (pLStack_12 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLStack_12,(Object *)value_00,
                       MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
                      );
            value = pIStack_5;
          }
          this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                    (value->fields).impactDamageRuntimeEventTypes;
          if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
            UnitySynchronizationContext+WorkRequest]::
            List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort
                      (this_00,
                       MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                      );
            (this->fields).impactDestruction = value;
            func_?(&(this->fields).impactDestruction,value);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

