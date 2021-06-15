
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).ghostEyeStates;
  (this->fields).currentTransitionTime = 0.0;
  if ((pDVar1 != (Dictionary_2_GhostEye_GhostEyeState_GhostEye_IGhostEyeState_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[GhostEye+GhostEyeState,System::Object]::
               Dictionary_2_GhostEye_GhostEyeState_System_Object__get_Item
                         ((Dictionary_2_GhostEye_GhostEyeState_System_Object_ *)pDVar1,
                          (this->fields).currentEyeState,
                          MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                         ), pOVar2 != (Object *)0x0)) {
    func_?(2,TypeInfo__GhostEye__IGhostEyeState,pOVar2);
    pDVar1 = (this->fields).ghostEyeStates;
    if ((pDVar1 != (Dictionary_2_GhostEye_GhostEyeState_GhostEye_IGhostEyeState_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[GhostEye+GhostEyeState,System::Object]::
                 Dictionary_2_GhostEye_GhostEyeState_System_Object__get_Item
                           ((Dictionary_2_GhostEye_GhostEyeState_System_Object_ *)pDVar1,
                            ghostEyeState,
                            MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                           ), pOVar2 != (Object *)0x0)) {
      pOVar3 = pOVar2->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pOVar3->_1).rank;
      uVar5._1_1_ = (pOVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pOVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
            ppMVar6 = &(&(pOVar3->vtable).Equals)[pOVar3->interfaceOffsets[uVar4].offset].method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar6 = (MethodInfo **)func_?(pOVar2,TypeInfo__GhostEye__IGhostEyeState,0,pOVar3,0)
      ;
code_?:
      (*(code *)*ppMVar6)(pOVar2,this,ppMVar6[1]);
      (this->fields).currentEyeState = ghostEyeState;
      return;
    }
  }
  func_?(0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).currentTransitionTime <= _UNK_?) {
    this_00 = (this->fields).eyeBall;
    if (this_00 != (Transform *)0x0) {
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
      fVar2 = pQVar1->z;
      fVar3 = pQVar1->w;
      fVar4 = (this->fields).currentTransitionTime;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      fVar4 = fVar4 / _UNK_?;
      a.y = 0.0;
      a.x = fVar4;
      a.z = fVar2;
      a.w = fVar3;
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffec,a,newRotation,fVar4,(MethodInfo *)0x0);
      fVar4 = pQVar1->y;
      fVar2 = pQVar1->z;
      fVar3 = pQVar1->w;
      __return_storage_ptr__->x = pQVar1->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar2;
      __return_storage_ptr__->w = fVar3;
      return __return_storage_ptr__;
    }
    func_?();
    pcVar5 = (code *)swi(3);
    pQVar1 = (Quaternion *)(*pcVar5)();
    return pQVar1;
  }
  __return_storage_ptr__->x = newRotation.x;
  __return_storage_ptr__->y = newRotation.y;
  __return_storage_ptr__->z = newRotation.z;
  __return_storage_ptr__->w = newRotation.w;
  return __return_storage_ptr__;
}


/* Void Update() */

void Assembly-CSharp.dll::GhostEye::GhostEye_Update(GhostEye *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ghostEyeStates;
  if ((this_00 != (Dictionary_2_GhostEye_GhostEyeState_GhostEye_IGhostEyeState_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[GhostEye+GhostEyeState,System::Object]::
               Dictionary_2_GhostEye_GhostEyeState_System_Object__get_Item
                         ((Dictionary_2_GhostEye_GhostEyeState_System_Object_ *)this_00,
                          (this->fields).currentEyeState,
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
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fVar13 = fStack_9;
    fVar14 = fStack_10;
    fVar15 = fStack_11;
    fVar16 = fStack_12;
    if ((this->fields).currentTransitionTime <= _UNK_?) {
      this_02 = (this->fields).eyeBall;
      if (this_02 == (Transform *)0x0) goto code_?;
      pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         (&QStack_18,this_02,(MethodInfo *)0x0);
      QStack_8.x = pQVar17->x;
      QStack_8.y = pQVar17->y;
      QStack_8.z = pQVar17->z;
      QStack_8.w = pQVar17->w;
      fVar13 = (this->fields).currentTransitionTime;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      a.y = QStack_8.y;
      a.x = QStack_8.x;
      a.z = QStack_8.z;
      a.w = QStack_8.w;
      b.y = fStack_10;
      b.x = fStack_9;
      b.z = fStack_11;
      b.w = fStack_12;
      pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         (&QStack_8,a,b,fVar13 / _UNK_?,(MethodInfo *)0x0);
      fVar13 = pQVar17->x;
      fVar14 = pQVar17->y;
      fVar15 = pQVar17->z;
      fVar16 = pQVar17->w;
    }
    if (this_01 != (Transform *)0x0) {
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
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void UpdateLookAtTarget(Vector3) */

void Assembly-CSharp.dll::GhostEye::GhostEye_UpdateLookAtTarget
               (GhostEye *this,Vector3 target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ghostEyeStates;
  if (this_00 != (Dictionary_2_GhostEye_GhostEyeState_GhostEye_IGhostEyeState_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GhostEye+GhostEyeState,System
             ::Object]::Dictionary_2_GhostEye_GhostEyeState_System_Object__get_Item
                       ((Dictionary_2_GhostEye_GhostEyeState_System_Object_ *)this_00,
                        GhostEye_GhostEyeState__Enum_LookAtTarget,
                        MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                       );
    unaff_ESI = TypeInfo__GhostEye__LookAtTarget;
    if (pOVar1 != (Object *)0x0) {
      bVar2 = (TypeInfo__GhostEye__LookAtTarget->_1).naturalAligment;
      pOVar3 = pOVar1->klass;
      if (((pOVar3->_1).naturalAligment < bVar2) ||
         (bVar4 = true,
         (pOVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__GhostEye__LookAtTarget))
      {
        bVar4 = false;
      }
      pOVar5 = (Object *)0x0;
      if (bVar4) {
        pOVar5 = pOVar1;
      }
      if (pOVar5 != (Object *)0x0) {
        if (((pOVar3->_1).naturalAligment < bVar2) ||
           ((pOVar3->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__GhostEye__LookAtTarget
           )) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pOVar5 = (Object *)0x0;
        if (bVar4) {
          pOVar5 = pOVar1;
        }
        if (pOVar5 != (Object *)0x0) {
          pOVar5[1].klass = (Object__Class *)target.x;
          pOVar5[1].monitor = (MonitorData *)target.y;
          pOVar5[2].klass = (Object__Class *)target.z;
          if ((this->fields).currentEyeState != 1) {
            GhostEye_SetEyeState(this,GhostEye_GhostEyeState__Enum_LookAtTarget,(MethodInfo *)0x0);
          }
          return;
        }
      }
      goto code_?;
    }
  }
  func_?(0);
  pOVar1 = extraout_EDX;
code_?:
  func_?(pOVar1,unaff_ESI);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GhostEye() */

void Assembly-CSharp.dll::GhostEye::GhostEye__ctor(GhostEye *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_GhostEye_GhostEyeState_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Dictionary__
            );
  method_01 = TypeInfo__GhostEye__RandomEyeRoll;
  pSVar1 = (ScaleAnimationBase *)func_?();
  (pSVar1->fields)._._._._.m_CachedPtr = (void *)0x3f000000;
  (pSVar1->fields).originalScale.x = 1.0;
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_01);
  if (this_00 != (Dictionary_2_GhostEye_GhostEyeState_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[GhostEye+GhostEyeState,System::Object]
    ::Dictionary_2_GhostEye_GhostEyeState_System_Object__Add
              (this_00,GhostEye_GhostEyeState__Enum_RandomEyeRoll,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
              );
    method_02 = TypeInfo__GhostEye__LookAtTarget;
    pSVar1 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_02);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[GhostEye+GhostEyeState,System::Object]
    ::Dictionary_2_GhostEye_GhostEyeState_System_Object__Add
              (this_00,GhostEye_GhostEyeState__Enum_LookAtTarget,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
              );
    pSVar1 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                       ((Quaternion *)&stack0xffffffec,-90.0,0.0,0.0,(MethodInfo *)0x0);
    fVar3 = pQVar2->y;
    fVar4 = pQVar2->z;
    fVar5 = pQVar2->w;
    (pSVar1->fields).state = (int32_t)pQVar2->x;
    (pSVar1->fields).originalScale.x = fVar3;
    (pSVar1->fields).originalScale.y = fVar4;
    (pSVar1->fields).originalScale.z = fVar5;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,in_stack_6);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[GhostEye+GhostEyeState,System::Object]
    ::Dictionary_2_GhostEye_GhostEyeState_System_Object__Add
              (this_00,GhostEye_GhostEyeState__Enum_DieRollback,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
              );
    method_00 = TypeInfo__GhostEye__SneakySideToSide;
    pSVar1 = (ScaleAnimationBase *)func_?();
    (pSVar1->fields)._._._._.m_CachedPtr = (void *)0x3f000000;
    (pSVar1->fields).originalScale.x = 1.0;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[GhostEye+GhostEyeState,System::Object]
    ::Dictionary_2_GhostEye_GhostEyeState_System_Object__Add
              (this_00,GhostEye_GhostEyeState__Enum_SneakySideToSide,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
              );
    _UNK_? = 0x41a00000;
    _UNK_? = 0x428c0000;
    _UNK_? = this_00;
    UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor
              ((Canvas *)&UNK_?,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

