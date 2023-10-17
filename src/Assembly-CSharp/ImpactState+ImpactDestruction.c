
/* MVControllerColliderHit GetColliderHit(List`1[MVControllerColliderHit]) */

MVControllerColliderHit *
Assembly-CSharp.dll::ImpactState+ImpactDestruction::ImpactState_ImpactDestruction_GetColliderHit
          (MVControllerColliderHit *__return_storage_ptr__,ImpactState_ImpactDestruction *this,
          List_1_MVControllerColliderHit_ *moveHits,MethodInfo *method)

{
  func_?(__return_storage_ptr__,0,0x90);
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
  puStack_4 = &stack0xfffffe94;
  puVar5 = &stack0xfffffe94;
  if (cRam_? == '\0') {
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
                    MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&LStack_6,0,0xa0);
  if (moveHits != (List_1_MVControllerColliderHit_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
             List_1_MVControllerColliderHit__GetEnumerator
                       ((List_1_T_Enumerator_MVControllerColliderHit_ *)&stack0xfffffea0,moveHits,
                        MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                       );
    uStack_8 = 0;
    pLVar9 = &LStack_6;
    for (iVar10 = 0x28; iVar10 != 0; iVar10 = iVar10 + -1) {
      pLVar9->_list = pLVar7->_list;
      pLVar7 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar7->_index;
      pLVar9 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar9->_index;
    }
    pLStack_11 = &LStack_6;
    uStack_1 = 1;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              List`1[T]+Enumerator[MVControllerColliderHit]::
              List_1_T_Enumerator_MVControllerColliderHit__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                        );
      if (bVar12 == 0) break;
      fVar13 = (colliderHit->impactVelocity).x;
      fVar14 = (colliderHit->impactVelocity).y;
      fVar15 = (colliderHit->impactVelocity).z;
      if (fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15 <
          LStack_6._current.impactVelocity.y * LStack_6._current.impactVelocity.y +
          LStack_6._current.impactVelocity.x * LStack_6._current.impactVelocity.x +
          LStack_6._current.impactVelocity.z * LStack_6._current.impactVelocity.z) {
        pMVar16 = &LStack_6._current;
        pMVar17 = colliderHit;
        for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
          (pMVar17->positionTouchingHit).x = (pMVar16->positionTouchingHit).x;
          pMVar16 = (MVControllerColliderHit *)&(pMVar16->positionTouchingHit).y;
          pMVar17 = (MVControllerColliderHit *)&(pMVar17->positionTouchingHit).y;
        }
        func_?();
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__Dispose__
               ,in_stack_18);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void HandleImpactDestruction(Single, List`1[MVControllerColliderHit]) */

void Assembly-CSharp.dll::ImpactState+ImpactDestruction::
     ImpactState_ImpactDestruction_HandleImpactDestruction
               (ImpactState_ImpactDestruction *this,float velChangeMagnitude,
               List_1_MVControllerColliderHit_ *moveHits,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).velChangeToDamageConstant * velChangeMagnitude;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar3 = (this->fields).impactDamageRuntimeEventTypes;
  this = (ImpactState_ImpactDestruction *)((uint)fVar1 & 0xffffff00);
  if (pLVar3 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
    if ((pLVar3->fields)._size == 0) {
      return;
    }
    bVar4 = false;
    index = 0;
    while (index < (pLVar3->fields)._size) {
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this_01->fields).impactDamageRuntimeEventTypes;
      if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar5,index,
                             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                            ), RVar6 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      if (fVar1 / fVar2 < *(float *)((int)RVar6 + 8)) break;
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this_01->fields).impactDamageRuntimeEventTypes;
      bVar4 = true;
      if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar5,index,
                             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                            ), RVar6 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      index = index + 1;
      this = (ImpactState_ImpactDestruction *)CONCAT31(this._1_3_,*(undefined1 *)((int)RVar6 + 0xc))
      ;
      pLVar3 = (this_01->fields).impactDamageRuntimeEventTypes;
      if (pLVar3 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) goto code_?;
    }
    if (!bVar4) {
      return;
    }
    func_?(&stack0xffffff6c,0,0x90);
    ImpactState_ImpactDestruction_GetMoveHitWithHighestImpactVelocity
              (this_01,(MVControllerColliderHit *)&stack0xffffff6c,moveHits,(MethodInfo *)0x0);
    this_02 = (ExplosionEvent *)
              func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    if (this_02 != (ExplosionEvent *)0x0) {
      worldPosition.z = VStack_7.z;
      worldPosition._0_8_ = VStack_7._0_8_;
      normal.z = aVStack_8[0].z;
      normal._0_8_ = aVStack_8[0]._0_8_;
      MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
                (this_02,(RuntimeEventType__Enum)this,worldPosition,normal,(MethodInfo *)0x0);
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar9 != (MVNetworkGame *)0x0) &&
          (pWVar10 = (pMVar9->fields).worldNetwork, pWVar10 != (WorldNetwork *)0x0)) &&
         (this_00 = (RuntimeEventManager *)(pWVar10->fields)._.runtimeEventManagerNetwork,
         this_00 != (RuntimeEventManager *)0x0)) {
        RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent(this_00,this_02,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean TryGetExplosionEvent(RuntimeEventType ByRef, Single) */

bool Assembly-CSharp.dll::ImpactState+ImpactDestruction::
     ImpactState_ImpactDestruction_TryGetExplosionEvent
               (ImpactState_ImpactDestruction *this,RuntimeEventType__Enum *runtimeEventType,
               float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  *(undefined1 *)runtimeEventType = RuntimeEventType__Enum_Undefined;
  pLVar1 = (this->fields).impactDamageRuntimeEventTypes;
  if (pLVar1 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    bVar2 = 0;
    index = 0;
    while( true ) {
      if ((pLVar1->fields)._size <= index) {
        return bVar2;
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).impactDamageRuntimeEventTypes;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                            ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
      if (damage < *(float *)((int)RVar4 + 8)) {
        return bVar2;
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).impactDamageRuntimeEventTypes;
      bVar2 = 1;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                            ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
      index = index + 1;
      *(undefined1 *)runtimeEventType = *(undefined1 *)((int)RVar4 + 0xc);
      pLVar1 = (this->fields).impactDamageRuntimeEventTypes;
      if (pLVar1 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* ImpactState+ImpactDestruction(RuntimeEventType[]) */

void Assembly-CSharp.dll::ImpactState+ImpactDestruction::ImpactState_ImpactDestruction__ctor
               (ImpactState_ImpactDestruction *this,RuntimeEventType__Enum__Array *explosionEvents,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
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
  this_01 = (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>
                           );
  if (this_01 != (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
              );
    (this->fields).impactDamageRuntimeEventTypes = this_01;
    func_?(&this->fields,this_01);
    (this->fields).velChangeToDamageConstant = 1.5;
    value = (MethodInfo *)this;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_1);
    uVar2 = 0;
    if (explosionEvents != (RuntimeEventType__Enum__Array *)0x0) {
      for (; (int)uVar2 < (int)explosionEvents->max_length; uVar2 = uVar2 + 1) {
        if (explosionEvents->max_length <= uVar2) goto code_?;
        RStack_3 = CONCAT31(RStack_3._1_3_,*(undefined1 *)((int)explosionEvents->vector + uVar2));
        method_00 = value;
        if ((TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          method_00 = value;
        }
        pEVar4 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
                 ExplosionEvent_GetExplosionValuesStruct(&EStack_5,RStack_3,(MethodInfo *)0x0);
        uStack_6._0_4_ = pEVar4->radius;
        uStack_6._4_4_ = (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)pEVar4->centerDamage;
        pLStack_7 = (this->fields).impactDamageRuntimeEventTypes;
        value = (MethodInfo *)func_?(TypeInfo__ImpactState__ImpactDamageRuntimeEventType);
        if (value == (MethodInfo *)0x0) goto code_?;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,method_00);
        *(undefined1 *)&value->name = (undefined1)RStack_3;
        ((ImpactState_ImpactDestruction__Fields *)&value->invoker_method)->
        impactDamageRuntimeEventTypes = uStack_6._4_4_;
        if (pLStack_7 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLStack_7,(Object *)value,
                   MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
                  );
      }
      this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                (this->fields).impactDamageRuntimeEventTypes;
      if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort
                  (this_00,
                   MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                  );
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

