
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
  if ((char)moveHit.material == '\0') {
    this_00 = (this->fields).moveHits;
    if (this_00 == (List_1_MVControllerColliderHit_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar3 = (undefined4 *)&stack0x00000008;
    puVar4 = &uStack_5;
    pMVar6 = 
    MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Add_MVControllerColliderHit_
    ;
    for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    item.material = (MVMaterial *)in_stack_1;
    auVar8 = in_stack_9._0_12_;
    auVar10 = in_stack_9._12_12_;
    auVar11 = in_stack_9._24_12_;
    auVar12 = in_stack_9._36_12_;
    auVar13 = in_stack_9._48_12_;
    auVar14 = in_stack_9._64_72_;
    item.positionTouchingHit.x = (float)auVar8._0_4_;
    item.positionTouchingHit.y = (float)auVar8._4_4_;
    item.positionTouchingHit.z = (float)auVar8._8_4_;
    item.moveDirection.x = (float)auVar10._0_4_;
    item.moveDirection.y = (float)auVar10._4_4_;
    item.moveDirection.z = (float)auVar10._8_4_;
    item.elipsoidNormal.x = (float)auVar11._0_4_;
    item.elipsoidNormal.y = (float)auVar11._4_4_;
    item.elipsoidNormal.z = (float)auVar11._8_4_;
    item.slopeNormal.x = (float)auVar12._0_4_;
    item.slopeNormal.y = (float)auVar12._4_4_;
    item.slopeNormal.z = (float)auVar12._8_4_;
    item.impactVelocity.x = (float)auVar13._0_4_;
    item.impactVelocity.y = (float)auVar13._4_4_;
    item.impactVelocity.z = (float)auVar13._8_4_;
    item._60_4_ = in_stack_9._60_4_;
    auVar8 = auVar14._0_12_;
    auVar10 = auVar14._12_12_;
    uVar15 = auVar14._24_6_;
    item.hit.point.x = (float)auVar8._0_4_;
    item.hit.point.y = (float)auVar8._4_4_;
    item.hit.point.z = (float)auVar8._8_4_;
    item.hit.normal.x = (float)auVar10._0_4_;
    item.hit.normal.y = (float)auVar10._4_4_;
    item.hit.normal.z = (float)auVar10._8_4_;
    item.hit.cubePos.x = (short)uVar15;
    item.hit.cubePos.y = (short)((uint6)uVar15 >> 0x10);
    item.hit.cubePos.z = (short)((uint6)uVar15 >> 0x20);
    item.hit._30_2_ = auVar14._30_2_;
    item.hit.face = auVar14._32_4_;
    item.hit.isCubeHit = auVar14[0x24];
    item.hit._37_3_ = auVar14._37_3_;
    item.hit.woId = auVar14._40_4_;
    item.hit.cube = (Cube *)auVar14._44_4_;
    item.hit.distance = (float)auVar14._48_4_;
    item.hit.collider = (Collider *)auVar14._52_4_;
    item.hit.transform = (Transform *)auVar14._56_4_;
    item.hit._60_4_ = auVar14._60_4_;
    item.hit.interactionFlags = auVar14._64_8_;
    item._140_4_ = pMVar6;
    mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
    List_1_MVControllerColliderHit__Add(this_00,item,unaff_EDI);
  }
  return;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::ImpactState::ImpactState_SuspendImpactDamage
               (ImpactState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).suspendImpactDamageCounter = 1;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).prevVelocityChangeVector.x = pVVar1->x;
  (this->fields).prevVelocityChangeVector.y = fVar3;
  (this->fields).prevVelocityChangeVector.z = fVar4;
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
  puStack_4 = &stack0xfffffdc8;
  puVar5 = &stack0xfffffdc8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  uStack_7 = 0;
  func_?(auStack_8,0,0xa0);
  func_?();
  puStack_9 = (undefined4 *)&stack0xfffffdc8;
  puStack_4 = &stack0xfffffdc8;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_9 = (undefined4 *)&stack0xfffffdc8, puStack_4 = &stack0xfffffdc8,
     (TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    puStack_9 = (undefined4 *)&stack0xfffffdc8;
    puStack_4 = &stack0xfffffdc8;
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  VVar10.z = prevVelocity.z;
  VVar10.x = prevVelocity.x;
  VVar10.y = prevVelocity.y;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&prevVelocity,curVelocity,VVar10,(MethodInfo *)0x0);
  VVar10 = *pVVar11;
  prevVelocity.z =
       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&prevVelocity,VVar10,prevVelocity.z,(MethodInfo *)0x0);
  fVar12 = pVVar11->x;
  fVar13 = pVVar11->y;
  fVar14 = pVVar11->z;
  VVar10 = *pVVar11;
  iVar15 = (this->fields).suspendImpactDamageCounter;
  (this->fields).impactDamage = 0.0;
  if (iVar15 < 1) {
    if ((this->fields).collidedPrevFrame == 0) {
      (this->fields).prevVelocityChangeVector.x = fVar12;
      (this->fields).prevVelocityChangeVector.y = fVar13;
      (this->fields).prevVelocityChangeVector.z = fVar14;
    }
    else {
      prevVelocity.z = (this->fields).prevVelocityChangeVector.z;
      uStack_16._0_4_ = (this->fields).prevVelocityChangeVector.x;
      uStack_16._4_4_ = (this->fields).prevVelocityChangeVector.y;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = prevVelocity.z;
      a.x = (float)(undefined4)uStack_16;
      a.y = uStack_16._4_4_;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         (&prevVelocity,a,VVar10,(MethodInfo *)0x0);
      uStack_7._0_4_ = pVVar11->x;
      uStack_7._4_4_ = pVVar11->y;
      fVar14 = (this->fields).maxAccBeforeDamageDealt;
      fStack_6 = pVVar11->z;
      prevVelocity.z =
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      ppLStack_17 = (List_1_MVControllerColliderHit_ **)(prevVelocity.z * fVar14);
      fVar18 = (float10)func_?();
      this_00 = (this->fields).impactDestruction;
      prevVelocity.z = (float)fVar18;
      if (this_00 == (ImpactState_ImpactDestruction *)0x0) goto code_?;
      ImpactState+ImpactDestruction::ImpactState_ImpactDestruction_HandleImpactDestruction
                (this_00,prevVelocity.z,(this->fields).moveHits,(MethodInfo *)0x0);
      fVar14 = (this->fields).averageSoftnessPrevFrame * prevVelocity.z;
      uStack_16 = CONCAT44(fVar14,(undefined4)uStack_16);
      if ((float)ppLStack_17 < fVar14) {
        prevVelocity.z = (this->fields).impactDamageMultiplier;
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        ppLStack_17 = (List_1_MVControllerColliderHit_ **)
                      ((prevVelocity.z * uStack_16._4_4_) / fVar14);
        (this->fields).impactDamage = (float)ppLStack_17;
        prevVelocity.z = (float)func_?();
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)prevVelocity.z,(MethodInfo *)0x0);
      }
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         (&prevVelocity,(MethodInfo *)0x0);
      fVar12 = pVVar11->y;
      fVar14 = pVVar11->z;
      (this->fields).prevVelocityChangeVector.x = pVVar11->x;
      (this->fields).prevVelocityChangeVector.y = fVar12;
      (this->fields).prevVelocityChangeVector.z = fVar14;
    }
    ppLVar19 = &(this->fields).moveHits;
    ppLStack_17 = ppLVar19;
    if (*ppLVar19 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
    pOVar20 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)*ppLVar19,
                        MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__get_Count__
                       );
    if ((int)pOVar20 < 1) {
      (this->fields).collidedPrevFrame = 0;
      (this->fields).averageSoftnessPrevFrame = -1.0;
    }
    else {
      (this->fields).collidedPrevFrame = 1;
      (this->fields).averageSoftnessPrevFrame = 0.0;
      if (*ppLVar19 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
      pLVar21 = mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
                List_1_MVControllerColliderHit__GetEnumerator
                          ((List_1_T_Enumerator_MVControllerColliderHit_ *)&stack0xfffffdd4,
                           *ppLVar19,
                           MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                          );
      puVar22 = auStack_8;
      for (iVar15 = 0x28; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar22 = pLVar21->l;
        pLVar21 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar21->next;
        puVar22 = puVar22 + 1;
      }
      uStack_1 = 0;
      while (cVar23 = func_?(), cVar23 != '\0') {
        puVar22 = (undefined4 *)func_?();
        puVar24 = auStack_25;
        for (iVar15 = 0x24; iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar24 = *puVar22;
          puVar22 = puVar22 + 1;
          puVar24 = puVar24 + 1;
        }
        uStack_16 = CONCAT44((this->fields).averageSoftnessPrevFrame,(undefined4)uStack_16);
        if (pMStack_26 == (MVMaterial *)0x0) goto code_?;
        pPVar27 = MVMaterial::MVMaterial_get_PhysicalProperties
                            (&PStack_28,pMStack_26,(MethodInfo *)0x0);
        fStack_29 = pPVar27->friction;
        fStack_30 = pPVar27->bouncyness;
        fStack_31 = pPVar27->softness;
        fStack_32 = pPVar27->staticFriction;
        if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
        fVar18 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
        prevVelocity.z = (float)fVar18;
        (this->fields).averageSoftnessPrevFrame = prevVelocity.z + uStack_16._4_4_;
      }
      *puStack_9 = 0x152;
      uStack_1 = 0xffffffff;
      func_?();
      fVar14 = (this->fields).averageSoftnessPrevFrame;
      pLVar33 = (this->fields).moveHits;
      if (pLVar33 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
      pOVar20 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar33,
                          MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__get_Count__
                         );
      (this->fields).averageSoftnessPrevFrame = fVar14 / (float)(int)pOVar20;
    }
    if (*ppLVar19 == (List_1_MVControllerColliderHit_ *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar34 = (code *)swi(3);
      fVar18 = (float10)(*pcVar34)();
      return (float)fVar18;
    }
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              ((List_1_UnityEngine_UIVertex_ *)*ppLVar19,
               MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Clear__);
    fVar14 = (this->fields).impactDamage;
  }
  else {
    (this->fields).suspendImpactDamageCounter = iVar15 + -1;
    pLVar33 = (this->fields).moveHits;
    if (pLVar33 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              ((List_1_UnityEngine_UIVertex_ *)pLVar33,
               MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Clear__);
    fVar14 = 0.0;
  }
  *unaff_FS_OFFSET = uStack_3;
  return fVar14;
}


/* ImpactState(RuntimeEventType[]) */

void Assembly-CSharp.dll::ImpactState::ImpactState__ctor
               (ImpactState *this,RuntimeEventType__Enum__Array *explosionEvents,MethodInfo *method)

{
  pRVar1 = explosionEvents;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
  fVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  (this->fields).prevVelocityChangeVector.x = pVVar2->x;
  (this->fields).prevVelocityChangeVector.y = fVar3;
  (this->fields).prevVelocityChangeVector.z = fVar4;
  (this->fields).averageSoftnessPrevFrame = 1.0;
  (this->fields).maxAccBeforeDamageDealt = 55.0;
  (this->fields).impactDamageMultiplier = 4.0;
  (this->fields).suspendImpactDamageCounter = 1;
  method_00 = TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>;
  this_01 = (List_1_MVControllerColliderHit_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
  (this->fields).moveHits = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  this_02 = (ScaleAnimationBase *)func_?(TypeInfo__ImpactState__ImpactDestruction);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_02 = 
  TypeInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>;
  this_03 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__List__
            );
  (this_02->fields)._._._._.m_CachedPtr = this_03;
  (this_02->fields).state = 0x3fc00000;
  method_01 = (MethodInfo *)&UNK_?;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_02);
  uVar5 = 0;
  if (explosionEvents != (RuntimeEventType__Enum__Array *)0x0) {
    while( true ) {
      uVar6 = pRVar1->max_length;
      if ((int)uVar6 <= (int)uVar5) break;
      if (uVar6 <= uVar5) goto code_?;
      uVar7 = *(undefined1 *)((int)pRVar1->vector + uVar5);
      explosionEvents = (RuntimeEventType__Enum__Array *)CONCAT31(explosionEvents._1_3_,uVar7);
      if ((((uint)(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).cctor_started == 0)) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
      ExplosionEvent_GetExplosionValuesStruct
                ((ExplosionEvent_ExplosionValues *)&stack0xffffffd4,
                 (RuntimeEventType__Enum)explosionEvents,(MethodInfo *)0x0);
      fVar8 = (float10)func_?();
      this_05 = (this_02->fields)._._._._.m_CachedPtr;
      this_04 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,method_01);
      (this_04->fields)._._._._.m_CachedPtr = (void *)(float)fVar8;
      *(undefined1 *)&(this_04->fields).state = uVar7;
      if (this_05 == (List_1_UIPushOption_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                (this_05,(UIPushOption__Enum)this_04,
                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Add_ImpactState__ImpactDamageRuntimeEventType_
                );
      uVar5 = uVar5 + 1;
    }
    this_00 = (this_02->fields)._._._._.m_CachedPtr;
    if (this_00 != (List_1_VoxelHit_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Sort
                (this_00,
                 MethodInfo__System__Collections__Generic__List<ImpactState::ImpactDamageRuntimeEventType>__Sort__
                );
      (this->fields).impactDestruction = (ImpactState_ImpactDestruction *)this_02;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

