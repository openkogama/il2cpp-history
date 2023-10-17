
/* Void ClearLookAtTarget() */

void Assembly-CSharp.dll::GhostEye::GhostEye_ClearLookAtTarget(GhostEye *this,MethodInfo *method)

{
  if ((this->fields).currentEyeState == 1) {
    GhostEye_SetEyeState(this,GhostEye_GhostEyeState__Enum_RandomEyeRoll,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetEyeState(GhostEye+GhostEyeState) */

void Assembly-CSharp.dll::GhostEye::GhostEye_SetEyeState
               (GhostEye *this,GhostEye_GhostEyeState__Enum ghostEyeState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                   );
    func_?(&TypeInfo__GhostEye__IGhostEyeState);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
  (this->fields).currentTransitionTime = 0.0;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (pDVar1,(this->fields).currentEyeState,
                        MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                       );
    if (pOVar2 != (Object *)0x0) {
      func_?(2,TypeInfo__GhostEye__IGhostEyeState,pOVar2);
      pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
      if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           (pDVar1,ghostEyeState,
                            MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                           );
        if (pOVar2 != (Object *)0x0) {
          pOVar3 = pOVar2->klass;
          uVar4 = 0;
          uVar5 = (pOVar3->_1).interface_offsets_count;
          if (uVar5 != 0) {
            do {
              if (pOVar3->interfaceOffsets[uVar4].interfaceType ==
                  (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
                pVVar6 = &(pOVar2->klass->vtable).Equals +
                         pOVar2->klass->interfaceOffsets[uVar4].offset;
                goto code_?;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar5);
          }
          pVVar6 = (VirtualInvokeData *)
                   func_?(pOVar2,TypeInfo__GhostEye__IGhostEyeState,0,pOVar2,pOVar3,0);
code_?:
          (*pVVar6->methodPtr)(pOVar2,this,pVVar6->method);
          (this->fields).currentEyeState = ghostEyeState;
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Spawn() */

void Assembly-CSharp.dll::GhostEye::GhostEye_Spawn(GhostEye *this,MethodInfo *method)

{
  GhostEye_SetEyeState(this,GhostEye_GhostEyeState__Enum_RandomEyeRoll,(MethodInfo *)0x0);
  return;
}


/* Quaternion TransitionSmooth(Quaternion) */

Quaternion *
Assembly-CSharp.dll::GhostEye::GhostEye_TransitionSmooth
          (Quaternion *__return_storage_ptr__,GhostEye *this,Quaternion newRotation,
          MethodInfo *method)

{
  if (_UNK_? < (this->fields).currentTransitionTime) {
    __return_storage_ptr__->x = newRotation.x;
    __return_storage_ptr__->y = newRotation.y;
    __return_storage_ptr__->z = newRotation.z;
    __return_storage_ptr__->w = newRotation.w;
    return __return_storage_ptr__;
  }
  this_00 = (this->fields).eyeBall;
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                       ((Quaternion *)&stack0xffffffec,*pQVar1,newRotation,
                        (this->fields).currentTransitionTime / _UNK_?,(MethodInfo *)0x0);
    fVar2 = pQVar1->y;
    fVar3 = pQVar1->z;
    fVar4 = pQVar1->w;
    __return_storage_ptr__->x = pQVar1->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    __return_storage_ptr__->w = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pQVar1 = (Quaternion *)(*pcVar5)();
  return pQVar1;
}


/* Void Update() */

void Assembly-CSharp.dll::GhostEye::GhostEye_Update(GhostEye *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                   );
    func_?(&TypeInfo__GhostEye__IGhostEyeState);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
  if (this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (this_00,(this->fields).currentEyeState,
                        MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                       );
    if (pOVar1 != (Object *)0x0) {
      uVar2 = 0;
      uVar3 = (pOVar1->klass->_1).interface_offsets_count;
      if (uVar3 != 0) {
        do {
          if (pOVar1->klass->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
            pVVar4 = &(pOVar1->klass->vtable).Finalize +
                     pOVar1->klass->interfaceOffsets[uVar2].offset;
            goto code_?;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      pVVar4 = (VirtualInvokeData *)func_?(pOVar1,TypeInfo__GhostEye__IGhostEyeState,1);
code_?:
      pfVar5 = (float *)(*pVVar4->methodPtr)(&QStack_6,pOVar1,this,pVVar4->method);
      this_01 = (this->fields).eyeBall;
      QStack_7.x = *pfVar5;
      QStack_7.y = pfVar5[1];
      QStack_7.z = pfVar5[2];
      QStack_7.w = pfVar5[3];
      if (_UNK_? < (this->fields).currentTransitionTime) {
        fVar8 = *pfVar5;
        fVar9 = pfVar5[1];
        fVar10 = pfVar5[2];
        fVar11 = pfVar5[3];
        if (this_01 == (Transform *)0x0) goto code_?;
      }
      else {
        if (this_01 == (Transform *)0x0) goto code_?;
        pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                           (&QStack_6,this_01,(MethodInfo *)0x0);
        b.y = QStack_7.y;
        b.x = QStack_7.x;
        b.z = QStack_7.z;
        b.w = QStack_7.w;
        pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                           (&QStack_7,*pQVar12,b,
                            (this->fields).currentTransitionTime / _UNK_?,(MethodInfo *)0x0);
        fVar8 = pQVar12->x;
        fVar9 = pQVar12->y;
        fVar10 = pQVar12->z;
        fVar11 = pQVar12->w;
      }
      value.y = fVar9;
      value.x = fVar8;
      value.z = fVar10;
      value.w = fVar11;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_01,value,(MethodInfo *)0x0);
      fVar8 = (this->fields).currentTransitionTime;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this->fields).currentTransitionTime = fVar9 + fVar8;
      return;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateLookAtTarget(Vector3) */

void Assembly-CSharp.dll::GhostEye::GhostEye_UpdateLookAtTarget
               (GhostEye *this,Vector3 target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                   );
    func_?(&TypeInfo__GhostEye__LookAtTarget);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
  if (this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          (this_00,1,
                           MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                          );
    if (unaff_EDI != (Object *)0x0) {
      pGVar1 = TypeInfo__GhostEye__LookAtTarget;
      if (((TypeInfo__GhostEye__LookAtTarget->_1).typeHierarchyDepth <=
           (unaff_EDI->klass->_1).typeHierarchyDepth) &&
         ((unaff_EDI->klass->_1).typeHierarchy
          [(TypeInfo__GhostEye__LookAtTarget->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__GhostEye__LookAtTarget)) {
        unaff_EDI[1].klass = (Object__Class *)target.x;
        unaff_EDI[1].monitor = (MonitorData *)target.y;
        unaff_EDI[2].klass = (Object__Class *)target.z;
        if ((this->fields).currentEyeState != 1) {
          GhostEye_SetEyeState(this,GhostEye_GhostEyeState__Enum_LookAtTarget,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
  }
  func_?();
  pGVar1 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pGVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GhostEye() */

void Assembly-CSharp.dll::GhostEye::GhostEye__ctor(GhostEye *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>
                   );
    func_?(&TypeInfo__GhostEye__DieRollback);
    func_?(&TypeInfo__GhostEye__LookAtTarget);
    func_?(&TypeInfo__GhostEye__RandomEyeRoll);
    func_?(&TypeInfo__GhostEye__SneakySideToSide);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Dictionary__
              );
    pOVar1 = (Object *)func_?(TypeInfo__GhostEye__RandomEyeRoll);
    if (pOVar1 != (Object *)0x0) {
      pOVar1[1].klass = (Object__Class *)0x3f000000;
      pOVar1[2].klass = (Object__Class *)0x3f800000;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x0,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
                );
      pOVar1 = (Object *)func_?(TypeInfo__GhostEye__LookAtTarget);
      if (pOVar1 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_00,(Object *)0x1,pOVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
                  );
        pOVar1 = (Object *)func_?(TypeInfo__GhostEye__DieRollback);
        if (pOVar1 != (Object *)0x0) {
          QStack_2.w = 0.0;
          euler.y = 0.0;
          euler.z = 0.0;
          euler.x = (float)_UNK_?;
          pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                   Quaternion_Internal_FromEulerRad(&QStack_2,euler,(MethodInfo *)0x0);
          pOVar4 = (Object__Class *)pQVar3->y;
          pMVar5 = (MonitorData *)pQVar3->z;
          pOVar6 = (Object__Class *)pQVar3->w;
          pOVar1[1].monitor = (MonitorData *)pQVar3->x;
          pOVar1[2].klass = pOVar4;
          pOVar1[2].monitor = pMVar5;
          pOVar1[3].klass = pOVar6;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,(Object *)0x2,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
                    );
          pOVar1 = (Object *)func_?(TypeInfo__GhostEye__SneakySideToSide);
          if (pOVar1 != (Object *)0x0) {
            pOVar1[1].klass = (Object__Class *)0x3f000000;
            pOVar1[2].klass = (Object__Class *)0x3f800000;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this_00,(Object *)0x3,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
                      );
            (this->fields).ghostEyeStates =
                 (Dictionary_2_GhostEye_GhostEyeState_GhostEye_IGhostEyeState_ *)this_00;
            func_?(&(this->fields).ghostEyeStates,this_00);
            (this->fields).maxPitch = 20.0;
            (this->fields).maxYaw = 70.0;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                      ((Transform *)this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

