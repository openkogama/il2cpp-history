
/* Void ClearLookAtTarget() */

void Assembly-CSharp.dll::GhostEye::GhostEye_ClearLookAtTarget(GhostEye *this,MethodInfo *method)

{
  if ((this->fields).currentEyeState != 1) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GhostEye__IGhostEyeState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
  uVar2 = 0;
  (this->fields).currentTransitionTime = 0.0;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (pDVar1,(this->fields).currentEyeState,
                        MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                       );
    if (pOVar3 != (Object *)0x0) {
      FUN_?(2,TypeInfo__GhostEye__IGhostEyeState,pOVar3);
      pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
      if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           (pDVar1,0,
                            MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                           );
        if (pOVar3 != (Object *)0x0) {
          pOVar4 = pOVar3->klass;
          uVar5._0_1_ = (pOVar4->_1).rank;
          uVar5._1_1_ = (pOVar4->_1).minimumAlignment;
          if (uVar5 != 0) {
            do {
              if (pOVar4->interfaceOffsets[uVar2].interfaceType ==
                  (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
                pVVar6 = &(pOVar4->vtable).Equals + pOVar4->interfaceOffsets[uVar2].offset;
                goto code_?;
              }
              uVar7 = (short)uVar2 + 1;
              uVar2 = (ulonglong)uVar7;
            } while (uVar7 < uVar5);
          }
          pVVar6 = (VirtualInvokeData *)FUN_?(pOVar3,TypeInfo__GhostEye__IGhostEyeState,0);
code_?:
          (*pVVar6->methodPtr)(pOVar3,this,pVVar6->method);
          (this->fields).currentEyeState = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetEyeState(GhostEye+GhostEyeState) */

void Assembly-CSharp.dll::GhostEye::GhostEye_SetEyeState
               (GhostEye *this,GhostEye_GhostEyeState__Enum ghostEyeState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GhostEye__IGhostEyeState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
  uVar2 = 0;
  (this->fields).currentTransitionTime = 0.0;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (pDVar1,(this->fields).currentEyeState,
                        MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                       );
    if (pOVar3 != (Object *)0x0) {
      FUN_?(2,TypeInfo__GhostEye__IGhostEyeState,pOVar3);
      pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
      if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           (pDVar1,ghostEyeState,
                            MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                           );
        if (pOVar3 != (Object *)0x0) {
          pOVar4 = pOVar3->klass;
          uVar5._0_1_ = (pOVar4->_1).rank;
          uVar5._1_1_ = (pOVar4->_1).minimumAlignment;
          if (uVar5 != 0) {
            do {
              if (pOVar4->interfaceOffsets[uVar2].interfaceType ==
                  (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
                pVVar6 = &(pOVar4->vtable).Equals + pOVar4->interfaceOffsets[uVar2].offset;
                goto code_?;
              }
              uVar7 = (short)uVar2 + 1;
              uVar2 = (ulonglong)uVar7;
            } while (uVar7 < uVar5);
          }
          pVVar6 = (VirtualInvokeData *)FUN_?(pOVar3,TypeInfo__GhostEye__IGhostEyeState,0);
code_?:
          (*pVVar6->methodPtr)(pOVar3,this,pVVar6->method);
          (this->fields).currentEyeState = ghostEyeState;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Spawn() */

void Assembly-CSharp.dll::GhostEye::GhostEye_Spawn(GhostEye *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GhostEye__IGhostEyeState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
  uVar2 = 0;
  (this->fields).currentTransitionTime = 0.0;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (pDVar1,(this->fields).currentEyeState,
                        MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                       );
    if (pOVar3 != (Object *)0x0) {
      FUN_?(2,TypeInfo__GhostEye__IGhostEyeState,pOVar3);
      pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
      if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           (pDVar1,0,
                            MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                           );
        if (pOVar3 != (Object *)0x0) {
          pOVar4 = pOVar3->klass;
          uVar5._0_1_ = (pOVar4->_1).rank;
          uVar5._1_1_ = (pOVar4->_1).minimumAlignment;
          if (uVar5 != 0) {
            do {
              if (pOVar4->interfaceOffsets[uVar2].interfaceType ==
                  (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
                pVVar6 = &(pOVar4->vtable).Equals + pOVar4->interfaceOffsets[uVar2].offset;
                goto code_?;
              }
              uVar7 = (short)uVar2 + 1;
              uVar2 = (ulonglong)uVar7;
            } while (uVar7 < uVar5);
          }
          pVVar6 = (VirtualInvokeData *)FUN_?(pOVar3,TypeInfo__GhostEye__IGhostEyeState,0);
code_?:
          (*pVVar6->methodPtr)(pOVar3,this,pVVar6->method);
          (this->fields).currentEyeState = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Quaternion TransitionSmooth(Quaternion) */

Quaternion *
Assembly-CSharp.dll::GhostEye::GhostEye_TransitionSmooth
          (Quaternion *__return_storage_ptr__,GhostEye *this,Quaternion *newRotation,
          MethodInfo *method)

{
  if (_UNK_? < (this->fields).currentTransitionTime) {
    fVar1 = newRotation->y;
    fVar2 = newRotation->z;
    fVar3 = newRotation->w;
    __return_storage_ptr__->x = newRotation->x;
    __return_storage_ptr__->y = fVar1;
    __return_storage_ptr__->z = fVar2;
    __return_storage_ptr__->w = fVar3;
    return __return_storage_ptr__;
  }
  obj = (this->fields).eyeBall;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pQVar5 = (Quaternion *)(*pcVar4)();
    return pQVar5;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_6 = 0;
  uStack_7 = 0;
  pvVar8 = (obj->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    pQVar5 = (Quaternion *)(*pcVar4)();
    return pQVar5;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar4 = (code *)swi(3);
    pQVar5 = (Quaternion *)(*pcVar4)();
    return pQVar5;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar8,&uStack_6);
  uStack_10._0_4_ = newRotation->x;
  uStack_10._4_4_ = newRotation->y;
  uStack_11._0_4_ = newRotation->z;
  uStack_11._4_4_ = newRotation->w;
  fVar1 = (this->fields).currentTransitionTime / _UNK_?;
  uStack_12 = (undefined4)uStack_6;
  uStack_13 = uStack_6._4_4_;
  uStack_14 = (undefined4)uStack_7;
  uStack_15 = uStack_7._4_4_;
  uStack_16 = 0;
  uStack_17 = 0;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar4 = (code *)swi(3);
    pQVar5 = (Quaternion *)(*pcVar4)();
    return pQVar5;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(&uStack_12,&uStack_10,fVar1,&uStack_16);
  __return_storage_ptr__->x = (float)(undefined4)uStack_16;
  __return_storage_ptr__->y = (float)uStack_16._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_17;
  __return_storage_ptr__->w = (float)uStack_17._4_4_;
  return __return_storage_ptr__;
}


/* Void Update() */

void Assembly-CSharp.dll::GhostEye::GhostEye_Update(GhostEye *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GhostEye__IGhostEyeState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
  if ((this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         (this_00,(this->fields).currentEyeState,
                          MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                         ), pOVar1 != (Object *)0x0)) {
    pOVar2 = pOVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pOVar2->_1).rank;
    uVar4._1_1_ = (pOVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pOVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
          pVVar5 = &(pOVar2->vtable).Equals + (pOVar2->interfaceOffsets[uVar3].offset + 1);
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    pVVar5 = (VirtualInvokeData *)FUN_?(pOVar1,TypeInfo__GhostEye__IGhostEyeState,1);
code_?:
    puVar6 = (undefined4 *)(*pVVar5->methodPtr)(auStack_7,pOVar1,this,pVVar5->method);
    obj = (this->fields).eyeBall;
    uVar8 = *puVar6;
    uVar9 = puVar6[1];
    uVar10 = puVar6[2];
    uVar11 = puVar6[3];
    if (_UNK_? < (this->fields).currentTransitionTime) {
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else {
      if (obj == (Transform *)0x0) goto DAT_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_13 = 0;
      uStack_14 = 0;
      pvVar15 = (obj->fields)._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pvVar15,&uStack_13);
      uStack_17 = (undefined4)uStack_13;
      uStack_18 = uStack_13._4_4_;
      uStack_19 = (undefined4)uStack_14;
      uStack_20 = uStack_14._4_4_;
      fVar21 = (this->fields).currentTransitionTime / _UNK_?;
      uStack_22 = 0;
      uStack_23 = 0;
      pcVar12 = pcRam_?;
      uStack_24 = uVar8;
      uStack_25 = uVar9;
      uStack_26 = uVar10;
      uStack_27 = uVar11;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(&uStack_17,&uStack_24,fVar21,&uStack_22);
      uVar8 = (undefined4)uStack_22;
      uVar9 = uStack_22._4_4_;
      uVar10 = (undefined4)uStack_23;
      uVar11 = uStack_23._4_4_;
    }
    uStack_13 = CONCAT44(uVar9,uVar8);
    uStack_14 = CONCAT44(uVar11,uVar10);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar15 = (obj->fields)._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar15,&uStack_13);
    fVar21 = (this->fields).currentTransitionTime;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    fVar28 = (float)(*pcRam_?)();
    (this->fields).currentTransitionTime = fVar28 + fVar21;
    return;
  }
DAT_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateLookAtTarget(Vector3) */

void Assembly-CSharp.dll::GhostEye::GhostEye_UpdateLookAtTarget
               (GhostEye *this,Vector3 *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GhostEye__LookAtTarget);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).ghostEyeStates;
  if (this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (this_00,1,
                        MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                       );
    if (pOVar1 != (Object *)0x0) {
      bVar2 = (TypeInfo__GhostEye__LookAtTarget->_1).naturalAligment;
      if ((bVar2 <= (pOVar1->klass->_1).naturalAligment) &&
         ((pOVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo__GhostEye__LookAtTarget)) {
        fVar3 = target->z;
        pOVar1[1].klass = *(Object__Class **)target;
        *(float *)&pOVar1[1].monitor = fVar3;
        if ((this->fields).currentEyeState != 1) {
          GhostEye_SetEyeState(this,GhostEye_GhostEyeState__Enum_LookAtTarget,(MethodInfo *)0x0);
        }
        return;
      }
      FUN_?(pOVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GhostEye() */

void Assembly-CSharp.dll::GhostEye::GhostEye__ctor(GhostEye *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GhostEye__DieRollback);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GhostEye__LookAtTarget);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GhostEye__RandomEyeRoll);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GhostEye__SneakySideToSide);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Dictionary__
            );
  pOVar1 = (Object *)FUN_?(TypeInfo__GhostEye__RandomEyeRoll);
  *(undefined4 *)&pOVar1[1].klass = 0x3f000000;
  *(undefined4 *)&pOVar1[1].monitor = 0x3f800000;
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,pOVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)FUN_?(TypeInfo__GhostEye__LookAtTarget);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,pOVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)FUN_?(TypeInfo__GhostEye__DieRollback);
  uStack_4 = (ulonglong)_UNK_?;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&uStack_4,&uStack_6);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  *(undefined8 *)((longlong)&pOVar1[1].klass + 4) = uStack_6;
  *(undefined8 *)((longlong)&pOVar1[1].monitor + 4) = uStack_7;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,pOVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)FUN_?(TypeInfo__GhostEye__SneakySideToSide);
  *(undefined4 *)&pOVar1[1].klass = 0x3f000000;
  *(undefined4 *)&pOVar1[1].monitor = 0x3f800000;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,pOVar1,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__Add_GhostEye__GhostEyeState__GhostEye__IGhostEyeState_
             ->klass->rgctx_data[0x22].method);
  bVar8 = iRam_? != 0;
  (this->fields).ghostEyeStates =
       (Dictionary_2_GhostEye_GhostEyeState_GhostEye_IGhostEyeState_ *)this_00;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this->fields).ghostEyeStates >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  bVar8 = cRam_? == '\0';
  (this->fields).maxPitch = 20.0;
  (this->fields).maxYaw = 70.0;
  if (bVar8) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

