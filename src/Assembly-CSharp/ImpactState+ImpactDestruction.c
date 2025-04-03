
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
  if (moveHits != (List_1_MVControllerColliderHit_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
             List_1_MVControllerColliderHit__GetEnumerator
                       ((List_1_T_Enumerator_MVControllerColliderHit_ *)&stack0xfffffea0,moveHits,
                        MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                       );
    uStack_7 = 0;
    pLVar8 = &LStack_9;
    for (iVar10 = 0x28; iVar10 != 0; iVar10 = iVar10 + -1) {
      pLVar8->_list = pLVar6->_list;
      pLVar6 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar6->_index;
      pLVar8 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar8->_index;
    }
    pLStack_11 = &LStack_9;
    uStack_1 = 1;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              List`1[T]+Enumerator[MVControllerColliderHit]::
              List_1_T_Enumerator_MVControllerColliderHit__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                        );
      if (bVar12 == 0) break;
      fVar13 = (colliderHit->impactVelocity).x;
      fVar14 = (colliderHit->impactVelocity).y;
      fVar15 = (colliderHit->impactVelocity).z;
      if (fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15 <
          LStack_9._current.impactVelocity.y * LStack_9._current.impactVelocity.y +
          LStack_9._current.impactVelocity.x * LStack_9._current.impactVelocity.x +
          LStack_9._current.impactVelocity.z * LStack_9._current.impactVelocity.z) {
        pMVar16 = &LStack_9._current;
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_9,
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
  pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).impactDamageRuntimeEventTypes;
  this = (ImpactState_ImpactDestruction *)((uint)fVar1 & 0xffffff00);
  if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((pLVar3->fields)._size == 0) {
      return;
    }
    bVar4 = false;
    index = 0;
    while (index < (pLVar3->fields)._size) {
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                            ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      if (fVar1 / fVar2 < *(float *)((int)RVar5 + 8)) break;
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this_01->fields).impactDamageRuntimeEventTypes;
      bVar4 = true;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                            ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      index = index + 1;
      this = (ImpactState_ImpactDestruction *)CONCAT31(this._1_3_,*(undefined1 *)((int)RVar5 + 0xc))
      ;
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this_01->fields).impactDamageRuntimeEventTypes;
      if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
    }
    if (!bVar4) {
      return;
    }
    func_?(&stack0xffffff6c,0,0x90);
    ImpactState_ImpactDestruction_GetMoveHitWithHighestImpactVelocity
              (this_01,(MVControllerColliderHit *)&stack0xffffff6c,moveHits,(MethodInfo *)0x0);
    this_02 = (ExplosionEvent *)
              func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    worldPosition.z = VStack_6.z;
    worldPosition._0_8_ = VStack_6._0_8_;
    normal.z = aVStack_7[0].z;
    normal._0_8_ = aVStack_7[0]._0_8_;
    MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
              (this_02,(RuntimeEventType__Enum)this,worldPosition,normal,(MethodInfo *)0x0);
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar8 != (MVNetworkGame *)0x0) &&
        (pWVar9 = (pMVar8->fields).worldNetwork, pWVar9 != (WorldNetwork *)0x0)) &&
       (this_00 = (RuntimeEventManager *)(pWVar9->fields)._.runtimeEventManagerNetwork,
       this_00 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent(this_00,this_02,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).impactDamageRuntimeEventTypes;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    bVar2 = 0;
    index = 0;
    while( true ) {
      if ((pLVar1->fields)._size <= index) {
        return bVar2;
      }
      if ((pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      if (damage < *(float *)((int)RVar3 + 8)) {
        return bVar2;
      }
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).impactDamageRuntimeEventTypes;
      bVar2 = 1;
      if ((pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      index = index + 1;
      *(undefined1 *)runtimeEventType = *(undefined1 *)((int)RVar3 + 0xc);
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).impactDamageRuntimeEventTypes;
      if (pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* ImpactState+ImpactDestruction(RuntimeEventType[]) */

void Assembly-CSharp.dll::ImpactState+ImpactDestruction::ImpactState_ImpactDestruction__ctor
               (ImpactState_ImpactDestruction *this,RuntimeEventType__Enum__Array *explosionEvents,
               MethodInfo *method)

{
  pRVar1 = explosionEvents;
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
  method_00 = (MethodInfo *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>
                             );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method_00,
             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
            );
  pIVar2 = &this->fields;
  pIVar2->impactDamageRuntimeEventTypes =
       (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)method_00;
  method_01 = (MethodInfo *)pIVar2;
  func_?();
  (this->fields).velChangeToDamageConstant = 1.5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_01);
  uVar3 = 0;
  if (explosionEvents != (RuntimeEventType__Enum__Array *)0x0) {
    while( true ) {
      uVar4 = pRVar1->max_length;
      if ((int)uVar4 <= (int)uVar3) break;
      if (uVar4 <= uVar3) goto code_?;
      uVar5 = *(undefined1 *)((int)pRVar1->vector + uVar3);
      explosionEvents = (RuntimeEventType__Enum__Array *)CONCAT31(explosionEvents._1_3_,uVar5);
      if ((TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).cctor_finished_or_no_cctor
          == 0) {
        func_?();
      }
      pEVar6 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
               ExplosionEvent_GetExplosionValuesStruct
                         ((ExplosionEvent_ExplosionValues *)&stack0xffffffdc,
                          (RuntimeEventType__Enum)explosionEvents,(MethodInfo *)0x0);
      uVar7 = pEVar6->centerDamage;
      this_00 = pIVar2->impactDamageRuntimeEventTypes;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,method_00);
      value[1].klass = (Object__Class *)uVar7;
      *(undefined1 *)&value[1].monitor = uVar5;
      if (this_00 == (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,value,
                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
                );
      uVar3 = uVar3 + 1;
    }
    if (pIVar2->impactDamageRuntimeEventTypes !=
        (List_1_ImpactState_ImpactDamageRuntimeEventType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Sort
                ((List_1_System_Object_ *)pIVar2->impactDamageRuntimeEventTypes,
                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                );
      return;
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

