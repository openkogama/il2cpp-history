
/* Void Destroy() */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_Destroy
               (CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_UnSubscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  (this->fields).callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)0x0;
  func_?();
  return;
}


/* Void Setup(Single, Vector3) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_Setup
               (CullingSubscriberBase *this,float radius,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (pBVar1->max_length <= uVar2) goto code_?;
    pBVar3 = pBVar1->vector + uVar2;
    bVar4 = cRam_? == '\0';
    (pBVar3->position).x = position.x;
    (pBVar3->position).y = position.y;
    (pBVar3->position).z = position.z;
    if (bVar4) {
      func_?(&TypeInfo__CullingApiWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar1 != (BoundingSphere__Array *)0x0) {
      uVar2 = (this->fields)._CullingIndex_k__BackingField;
      if (uVar2 < pBVar1->max_length) {
        pBVar1->vector[uVar2].radius = radius;
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CullingApiWrapper);
          cRam_? = '\x01';
        }
        uVar2 = 0;
        iVar5 = 0x10;
        pCVar6 = TypeInfo__CullingApiWrapper;
        while( true ) {
          if ((pCVar6->_1).cctor_finished_or_no_cctor == 0) {
            func_?(pCVar6);
            pCVar6 = TypeInfo__CullingApiWrapper;
          }
          pSVar7 = pCVar6->static_fields->sizes;
          if (pSVar7 == (Single__Array *)0x0) goto code_?;
          if ((int)pSVar7->max_length <= (int)uVar2) break;
          if ((pCVar6->_1).cctor_finished_or_no_cctor == 0) {
            func_?(pCVar6);
            pCVar6 = TypeInfo__CullingApiWrapper;
          }
          pSVar7 = pCVar6->static_fields->sizes;
          if (pSVar7 == (Single__Array *)0x0) goto code_?;
          if (pSVar7->max_length <= uVar2) goto code_?;
          if (radius < *(float *)((int)pSVar7->vector + iVar5 + -0x10)) goto code_?;
          uVar2 = uVar2 + 1;
          iVar5 = iVar5 + 4;
        }
        if ((pCVar6->_1).cctor_finished_or_no_cctor == 0) {
          func_?(pCVar6);
          pCVar6 = TypeInfo__CullingApiWrapper;
        }
        pSVar7 = pCVar6->static_fields->sizes;
        if (pSVar7 == (Single__Array *)0x0) goto code_?;
        uVar2 = pSVar7->max_length - 1;
code_?:
        (this->fields)._DistanceBandIndex_k__BackingField = uVar2;
        return;
      }
      goto code_?;
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


/* CullingSubscriberBase() */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase__ctor
               (CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
                   );
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
                   );
    func_?(&TypeInfo__ICullingSubscriber);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 != (BoundingSphere__Array *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CullingApiWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (pBVar1->max_length ==
        TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField) {
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      array = &TypeInfo__CullingApiWrapper->static_fields->spheres;
      pBVar1 = *array;
      if (pBVar1 != (BoundingSphere__Array *)0x0) {
        mscorlib.dll::System::Array::Array_Resize_86
                  ((BindingRestrictions_TestBuilder_AndNode__Array **)array,
                   pBVar1->max_length + 1000,
                   void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
                  );
        pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
        if (pCVar2 != (CullingGroup *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSpheres
                    (pCVar2,TypeInfo__CullingApiWrapper->static_fields->spheres,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    else {
code_?:
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      this_00 = (Dictionary_2_System_Int32_System_Object_ *)
                TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CullingApiWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  (this_00,TypeInfo__CullingApiWrapper->static_fields->
                           _NumBoundSpheres_k__BackingField,in_stack_3,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
                  );
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CullingApiWrapper);
          cRam_? = '\x01';
        }
        if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CullingApiWrapper);
        }
        uVar4 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        fVar5 = 0.0;
        fVar6 = 0.0;
        fVar7 = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::BoundingSphere::BoundingSphere__ctor
                  ((BoundingSphere *)&stack0xfffffff4,
                   TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,(MethodInfo *)0x0);
        if (pBVar1 != (BoundingSphere__Array *)0x0) {
          if (pBVar1->max_length <= uVar4) goto code_?;
          pBVar8 = pBVar1->vector + uVar4;
          (pBVar8->position).x = fVar5;
          (pBVar8->position).y = fVar6;
          (pBVar8->position).z = fVar7;
          pBVar8->radius = 0.0;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CullingApiWrapper);
            cRam_? = '\x01';
          }
          if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CullingApiWrapper);
          }
          iVar9 = TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CullingApiWrapper);
            cRam_? = '\x01';
          }
          if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CullingApiWrapper);
          }
          TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField = iVar9 + 1;
          pCVar2 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CullingApiWrapper);
            cRam_? = '\x01';
          }
          if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CullingApiWrapper);
          }
          if (pCVar2 != (CullingGroup *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::
            CullingGroup_SetBoundingSphereCount
                      (pCVar2,TypeInfo__CullingApiWrapper->static_fields->
                              _NumBoundSpheres_k__BackingField,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__CullingApiWrapper);
              cRam_? = '\x01';
            }
            if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CullingApiWrapper);
            }
            if (in_stack_3 != (Object *)0x0) {
              func_?(2,TypeInfo__ICullingSubscriber,in_stack_3,
                              TypeInfo__CullingApiWrapper->static_fields->
                              _NumBoundSpheres_k__BackingField + -1);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* CullingSubscriberBase(UnityAction`1[UnityEngine.CullingGroupEvent]) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase__ctor_1
               (CullingSubscriberBase *this,UnityAction_1_UnityEngine_CullingGroupEvent_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  (this->fields).callback = callback;
  func_?(&this->fields,callback);
  return;
}


/* CullingSubscriberBase(Single, Vector3, UnityAction`1[UnityEngine.CullingGroupEvent]) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase__ctor_2
               (CullingSubscriberBase *this,float radius,Vector3 position,
               UnityAction_1_UnityEngine_CullingGroupEvent_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  (this->fields).callback = callback;
  func_?();
  CullingSubscriberBase_Setup(this,radius,position,(MethodInfo *)0x0);
  return;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_get_Position
                    (Vector3 *__return_storage_ptr__,CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CullingApiWrapper__Class *)&TypeInfo__CullingApiWrapper;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__CullingApiWrapper;
    func_?();
  }
  pBVar2 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar2 != (BoundingSphere__Array *)0x0) {
    uVar3 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar3 < pBVar2->max_length) {
      fVar4 = pBVar2->vector[uVar3].position.y;
      fVar5 = pBVar2->vector[uVar3].position.z;
      __return_storage_ptr__->x = pBVar2->vector[uVar3].position.x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar5;
      return __return_storage_ptr__;
    }
    pCStack_1 = (CullingApiWrapper__Class *)0x0;
    puStack_6 = (undefined *)func_?();
    func_?();
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar7)();
    return pVVar8;
  }
  pCStack_1 = (CullingApiWrapper__Class *)&stack0xfffffffc;
  uVar9 = func_?(&puStack_10);
  func_?(uVar9);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Single get_Radius() */

float Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_get_Radius
                (CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CullingApiWrapper__Class *)&TypeInfo__CullingApiWrapper;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__CullingApiWrapper;
    func_?();
  }
  pBVar2 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar2 != (BoundingSphere__Array *)0x0) {
    uVar3 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar3 < pBVar2->max_length) {
      return pBVar2->vector[uVar3].radius;
    }
    pCStack_1 = (CullingApiWrapper__Class *)0x0;
    puStack_4 = (undefined *)func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    fVar6 = (float10)(*pcVar5)();
    return (float)fVar6;
  }
  pCStack_1 = (CullingApiWrapper__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void set_Position(Vector3) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_set_Position
               (CullingSubscriberBase *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CullingApiWrapper__Class *)&TypeInfo__CullingApiWrapper;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__CullingApiWrapper;
    func_?();
  }
  pBVar2 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar2 != (BoundingSphere__Array *)0x0) {
    uVar3 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar3 < pBVar2->max_length) {
      pBVar2->vector[uVar3].position.x = value.x;
      pBVar2->vector[uVar3].position.y = value.y;
      pBVar2->vector[uVar3].position.z = value.z;
      return;
    }
    pCStack_1 = (CullingApiWrapper__Class *)0x0;
    puStack_4 = (undefined *)func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pCStack_1 = (CullingApiWrapper__Class *)&stack0xfffffffc;
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_set_Radius
               (CullingSubscriberBase *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CullingApiWrapper__Class *)&TypeInfo__CullingApiWrapper;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__CullingApiWrapper;
    func_?();
  }
  pBVar2 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar2 != (BoundingSphere__Array *)0x0) {
    uVar3 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar3 < pBVar2->max_length) {
      pBVar2->vector[uVar3].radius = value;
      return;
    }
    pCStack_1 = (CullingApiWrapper__Class *)0x0;
    puStack_4 = (undefined *)func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pCStack_1 = (CullingApiWrapper__Class *)&stack0xfffffffc;
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

