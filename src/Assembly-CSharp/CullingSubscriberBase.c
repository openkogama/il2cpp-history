
/* Void Destroy() */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_Destroy
               (CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_UnSubscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  return;
}


/* Void Setup(Single, Vector3) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_Setup
               (CullingSubscriberBase *this,float radius,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < (uint)pBVar1->max_length) {
      fVar3 = position->y;
      fVar4 = position->z;
      pBVar1->vector[(int)uVar2].position.x = position->x;
      pBVar1->vector[(int)uVar2].position.y = fVar3;
      pBVar1->vector[(int)uVar2].position.z = fVar4;
      CullingSubscriberBase_set_Radius(this,radius,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar5 = CullingApiWrapper::CullingApiWrapper_GetDistanceBand(radius,(MethodInfo *)0x0);
      (this->fields)._DistanceBandIndex_k__BackingField = iVar5;
      return;
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* CullingSubscriberBase() */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase__ctor
               (CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICullingSubscriber);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 == (BoundingSphere__Array *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  if ((int)pBVar1->max_length ==
      TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField) {
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar1 == (BoundingSphere__Array *)0x0) goto code_?;
    mscorlib.dll::System::Array::Array_Resize_105
              ((BindingRestrictions_TestBuilder_AndNode__Array **)
               &TypeInfo__CullingApiWrapper->static_fields->spheres,(int)pBVar1->max_length + 1000,
               void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
              );
    obj = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (obj == (CullingGroup *)0x0) goto code_?;
    pvVar2 = (obj->fields).m_Ptr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
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
    (*pcRam_?)(pvVar2,pBVar1);
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  this_00 = (Dictionary_2_System_Int32_System_Object_ *)
            TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              (this_00,TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField,
               (Object *)this,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
               ->klass->rgctx_data[0x22].method);
    CullingApiWrapper::CullingApiWrapper_AddBoundingSphere((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    if (this != (CullingSubscriberBase *)0x0) {
      iVar5 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
      uVar6 = 0;
      pCVar7 = this->klass;
      uVar8._0_1_ = (pCVar7->_1).rank;
      uVar8._1_1_ = (pCVar7->_1).minimumAlignment;
      if (uVar8 != 0) {
        do {
          if (pCVar7->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo__ICullingSubscriber) {
            pVVar9 = &(pCVar7->vtable).Equals + (pCVar7->interfaceOffsets[uVar6].offset + 2);
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      pVVar9 = (VirtualInvokeData *)FUN_?(this);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar9->methodPtr)(this,(ulonglong)(iVar5 - 1),pVVar9->method,pVVar9->methodPtr);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CullingSubscriberBase(UnityAction`1[UnityEngine.CullingGroupEvent]) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase__ctor_1
               (CullingSubscriberBase *this,UnityAction_1_UnityEngine_CullingGroupEvent_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).callback = callback;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  return;
}


/* CullingSubscriberBase(Single, Vector3, UnityAction`1[UnityEngine.CullingGroupEvent]) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase__ctor_2
               (CullingSubscriberBase *this,float radius,Vector3 *position,
               UnityAction_1_UnityEngine_CullingGroupEvent_ *callback,MethodInfo *method)

{
  CullingSubscriberBase__ctor_1(this,callback,(MethodInfo *)0x0);
  aVStack_1[0].x = position->x;
  aVStack_1[0].y = position->y;
  aVStack_1[0].z = position->z;
  CullingSubscriberBase_Setup(this,radius,aVStack_1,(MethodInfo *)0x0);
  return;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_get_Position
                    (Vector3 *__return_storage_ptr__,CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < (uint)pBVar1->max_length) {
      fVar3 = pBVar1->vector[(int)uVar2].position.y;
      fVar4 = pBVar1->vector[(int)uVar2].position.z;
      __return_storage_ptr__->x = pBVar1->vector[(int)uVar2].position.x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Single get_Radius() */

float Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_get_Radius
                (CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < (uint)pBVar1->max_length) {
      return pBVar1->vector[(int)uVar2].radius;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Void set_Position(Vector3) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_set_Position
               (CullingSubscriberBase *this,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < (uint)pBVar1->max_length) {
      fVar3 = value->y;
      pBVar4 = pBVar1->vector + (int)uVar2;
      fVar5 = value->z;
      (pBVar4->position).x = value->x;
      (pBVar4->position).y = fVar3;
      (pBVar4->position).z = fVar5;
      return;
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_set_Radius
               (CullingSubscriberBase *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < (uint)pBVar1->max_length) {
      pBVar1->vector[(int)uVar2].radius = value;
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

