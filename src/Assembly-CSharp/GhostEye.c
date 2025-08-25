
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
          uVar5._0_1_ = (pOVar3->_1).rank;
          uVar5._1_1_ = (pOVar3->_1).minimumAlignment;
          if (uVar5 != 0) {
            do {
              if (pOVar3->interfaceOffsets[uVar4].interfaceType ==
                  (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
                ppMVar6 = &(&(pOVar2->klass->vtable).Equals)
                           [pOVar2->klass->interfaceOffsets[uVar4].offset].method;
                goto code_?;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar5);
          }
          ppMVar6 = (MethodInfo **)
                    func_?(pOVar2,TypeInfo__GhostEye__IGhostEyeState,0,pOVar2,pOVar3,0);
code_?:
          (*(code *)*ppMVar6)(pOVar2,this,ppMVar6[1]);
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
  if ((this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         (this_00,(this->fields).currentEyeState,
                          MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                         ), pOVar1 != (Object *)0x0)) {
    pOStack_2 = pOVar1->klass;
    uVar3 = 0;
    uStack_4 = 0;
    uVar5._0_1_ = (pOStack_2->_1).rank;
    uVar5._1_1_ = (pOStack_2->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pOStack_2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
          ppMVar6 = &(&(pOStack_2->vtable).Finalize)[pOStack_2->interfaceOffsets[uVar3].offset].
                     method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
    ppMVar6 = (MethodInfo **)func_?(pOVar1,TypeInfo__GhostEye__IGhostEyeState,1);
code_?:
    pfVar7 = (float *)(*(code *)*ppMVar6)(&QStack_8,pOVar1,this,ppMVar6[1]);
    this_01 = (this->fields).eyeBall;
    fStack_9 = *pfVar7;
    fStack_10 = pfVar7[1];
    fStack_11 = pfVar7[2];
    fStack_12 = pfVar7[3];
    if (_UNK_? < (this->fields).currentTransitionTime) {
      fVar13 = *pfVar7;
      fVar14 = pfVar7[1];
      fVar15 = pfVar7[2];
      fVar16 = pfVar7[3];
      if (this_01 != (Transform *)0x0) goto code_?;
    }
    else if (this_01 != (Transform *)0x0) {
      pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         (&QStack_8,this_01,(MethodInfo *)0x0);
      b.y = fStack_10;
      b.x = fStack_9;
      b.z = fStack_11;
      b.w = fStack_12;
      pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         (&QStack_8,*pQVar17,b,(this->fields).currentTransitionTime / _UNK_?,
                          (MethodInfo *)0x0);
      fVar13 = pQVar17->x;
      fVar14 = pQVar17->y;
      fVar15 = pQVar17->z;
      fVar16 = pQVar17->w;
code_?:
      value.y = fVar14;
      value.x = fVar13;
      value.z = fVar15;
      value.w = fVar16;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_01,value,(MethodInfo *)0x0);
      fVar13 = (this->fields).currentTransitionTime;
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this->fields).currentTransitionTime = fVar14 + fVar13;
      return;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (this_00,1,
                        MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                       );
    unaff_EDI = TypeInfo__GhostEye__LookAtTarget;
    if (pOVar1 != (Object *)0x0) {
      if (((TypeInfo__GhostEye__LookAtTarget->_1).naturalAligment <=
           (pOVar1->klass->_1).naturalAligment) &&
         ((pOVar1->klass->_1).typeHierarchy
          [(TypeInfo__GhostEye__LookAtTarget->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__GhostEye__LookAtTarget)) {
        pOVar1[1].klass = (Object__Class *)target.x;
        pOVar1[1].monitor = (MonitorData *)target.y;
        pOVar1[2].klass = (Object__Class *)target.z;
        if ((this->fields).currentEyeState != 1) {
          GhostEye_SetEyeState(this,GhostEye_GhostEyeState__Enum_LookAtTarget,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
  }
  func_?();
  pOVar1 = extraout_EDX;
code_?:
  func_?(pOVar1,unaff_EDI);
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
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Dictionary__
            );
  method_01 = TypeInfo__GhostEye__RandomEyeRoll;
  pOVar1 = (Object *)func_?();
  pOVar1[1].klass = (Object__Class *)0x3f000000;
  pOVar1[2].klass = (Object__Class *)0x3f800000;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
              );
    method_02 = TypeInfo__GhostEye__LookAtTarget;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
              );
    pOVar1 = (Object *)func_?();
    euler.y = 0.0;
    euler.z = 0.0;
    euler.x = (float)_UNK_?;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
    pOVar3 = (Object__Class *)pQVar2->y;
    pMVar4 = (MonitorData *)pQVar2->z;
    pOVar5 = (Object__Class *)pQVar2->w;
    pOVar1[1].monitor = (MonitorData *)pQVar2->x;
    pOVar1[2].klass = pOVar3;
    pOVar1[2].monitor = pMVar4;
    pOVar1[3].klass = pOVar5;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar1,ExceptionArgument__Enum_obj,in_stack_6);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
              );
    method_00 = TypeInfo__GhostEye__SneakySideToSide;
    pOVar1 = (Object *)func_?();
    pOVar1[1].klass = (Object__Class *)0x3f000000;
    pOVar1[2].klass = (Object__Class *)0x3f800000;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
              );
    pDStack7 = this_00;
    _UNK_? = this_00;
    func_?();
    _UNK_? = 0x41a00000;
    _UNK_? = 0x428c0000;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
              ((MonoBehaviour *)&UNK_?,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

