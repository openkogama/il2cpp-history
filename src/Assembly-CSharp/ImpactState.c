
/* Single CalcImpactDamage(Single) */

float Assembly-CSharp.dll::ImpactState::ImpactState_CalcImpactDamage
                (ImpactState *this,float velocityChange,MethodInfo *method)

{
  fVar1 = (this->fields).impactDamageMultiplier;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    fVar1 = (float)(*pcVar2)();
    return fVar1;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  return (fVar1 * velocityChange) / fVar4;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::ImpactState::ImpactState_HandleMoveHit
               (ImpactState *this,MVControllerColliderHit *moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Add_MVControllerColliderHit_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (moveHit->positionTouchingHit).x;
  uStack_1._4_4_ = (moveHit->positionTouchingHit).y;
  uStack_2 = *(undefined8 *)&(moveHit->positionTouchingHit).z;
  uStack_3 = *(undefined8 *)&moveHit->testWithOutMoving;
  uStack_4._0_4_ = (moveHit->moveDirection).y;
  uStack_4._4_4_ = (moveHit->moveDirection).z;
  uStack_5._0_4_ = (moveHit->elipsoidNormal).x;
  uStack_5._4_4_ = (moveHit->elipsoidNormal).y;
  uStack_6 = *(undefined8 *)&(moveHit->elipsoidNormal).z;
  uStack_7._0_4_ = (moveHit->slopeNormal).y;
  uStack_7._4_4_ = (moveHit->slopeNormal).z;
  uStack_8._0_4_ = (moveHit->impactVelocity).x;
  uStack_8._4_4_ = (moveHit->impactVelocity).y;
  uStack_9 = *(undefined8 *)&(moveHit->impactVelocity).z;
  uStack_10._0_4_ = (moveHit->hit).point.x;
  uStack_10._4_4_ = (moveHit->hit).point.y;
  uStack_11 = *(undefined8 *)&(moveHit->hit).point.z;
  uStack_12._0_4_ = (moveHit->hit).normal.y;
  uStack_12._4_4_ = (moveHit->hit).normal.z;
  uStack_13 = *(undefined8 *)&(moveHit->hit).cubePos;
  uStack_14._0_4_ = (moveHit->hit).face;
  uStack_14._4_1_ = (moveHit->hit).isCubeHit;
  uStack_14._5_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
  uStack_15 = *(undefined8 *)&(moveHit->hit).woId;
  uStack_16 = *(undefined4 *)&(moveHit->hit).collider;
  uStack_17 = *(undefined4 *)((longlong)&(moveHit->hit).collider + 4);
  uStack_18 = *(undefined4 *)&(moveHit->hit).transform;
  uStack_19 = *(undefined4 *)((longlong)&(moveHit->hit).transform + 4);
  pCStack_20 = (moveHit->hit).cube;
  uStack_21 = *(undefined8 *)&(moveHit->hit).distance;
  uStack_22 = (undefined4)(moveHit->hit).interactionFlags;
  uStack_23 = *(undefined4 *)((longlong)&(moveHit->hit).interactionFlags + 4);
  uStack_24 = *(undefined4 *)&moveHit->material;
  uStack_25 = *(undefined4 *)((longlong)&moveHit->material + 4);
  if ((char)uStack_3 == '\0') {
    pLVar26 = (this->fields).moveHits;
    if (pLVar26 == (List_1_MVControllerColliderHit_ *)0x0) {
      FUN_?();
      pcVar27 = (code *)swi(3);
      (*pcVar27)();
      return;
    }
    uStack_1._0_4_ = (moveHit->positionTouchingHit).x;
    uStack_1._4_4_ = (moveHit->positionTouchingHit).y;
    uStack_2 = *(undefined8 *)&(moveHit->positionTouchingHit).z;
    uStack_4._0_4_ = (moveHit->moveDirection).y;
    uStack_4._4_4_ = (moveHit->moveDirection).z;
    uStack_5._0_4_ = (moveHit->elipsoidNormal).x;
    uStack_5._4_4_ = (moveHit->elipsoidNormal).y;
    uStack_6 = *(undefined8 *)&(moveHit->elipsoidNormal).z;
    uStack_7._0_4_ = (moveHit->slopeNormal).y;
    uStack_7._4_4_ = (moveHit->slopeNormal).z;
    uStack_8._0_4_ = (moveHit->impactVelocity).x;
    uStack_8._4_4_ = (moveHit->impactVelocity).y;
    uStack_9 = *(undefined8 *)&(moveHit->impactVelocity).z;
    uStack_10._0_4_ = (moveHit->hit).point.x;
    uStack_10._4_4_ = (moveHit->hit).point.y;
    uStack_11 = *(undefined8 *)&(moveHit->hit).point.z;
    uStack_12._0_4_ = (moveHit->hit).normal.y;
    uStack_12._4_4_ = (moveHit->hit).normal.z;
    uStack_13 = *(undefined8 *)&(moveHit->hit).cubePos;
    uStack_14._0_4_ = (moveHit->hit).face;
    uStack_14._4_1_ = (moveHit->hit).isCubeHit;
    uStack_14._5_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
    uStack_15 = *(undefined8 *)&(moveHit->hit).woId;
    pCStack_20 = (moveHit->hit).cube;
    uStack_21 = *(undefined8 *)&(moveHit->hit).distance;
    uStack_16 = *(undefined4 *)&(moveHit->hit).collider;
    uStack_17 = *(undefined4 *)((longlong)&(moveHit->hit).collider + 4);
    uStack_18 = *(undefined4 *)&(moveHit->hit).transform;
    uStack_19 = *(undefined4 *)((longlong)&(moveHit->hit).transform + 4);
    uStack_22 = (undefined4)(moveHit->hit).interactionFlags;
    uStack_23 = *(undefined4 *)((longlong)&(moveHit->hit).interactionFlags + 4);
    uStack_24 = *(undefined4 *)&moveHit->material;
    uStack_25 = *(undefined4 *)((longlong)&moveHit->material + 4);
    FUN_?(pLVar26,&uStack_1,
                  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Add_MVControllerColliderHit_
                 );
  }
  return;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::ImpactState::ImpactState_SuspendImpactDamage
               (ImpactState *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).suspendImpactDamageCounter = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).prevVelocityChangeVector.x = (pVVar2->zeroVector).x;
  (this->fields).prevVelocityChangeVector.y = fVar3;
  (this->fields).prevVelocityChangeVector.z = fVar4;
  (this->fields).collidedPrevFrame = 0;
  return;
}


/* Single UpdateImpactState(Vector3, Vector3, MVInteractableBase) */

float Assembly-CSharp.dll::ImpactState::ImpactState_UpdateImpactState
                (ImpactState *this,Vector3 *curVelocity,Vector3 *prevVelocity,
                MVInteractableBase *interactableLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FUN_?(&pLStack_1,0,0xb8);
  uStack_2._0_4_ = prevVelocity->x;
  uStack_2._4_4_ = prevVelocity->y;
  uVar3 = curVelocity->x;
  uVar4 = curVelocity->y;
  fVar5 = curVelocity->z;
  fVar6 = prevVelocity->z;
  fVar7 = (float)uVar4 - (float)uStack_2._4_4_;
  fVar8 = (float)uVar3 - (float)(undefined4)uStack_2;
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar9 = (code *)swi(3);
    fVar5 = (float)(*pcVar9)();
    return fVar5;
  }
  pcRam_? = pcVar9;
  fVar11 = (float)(*pcRam_?)();
  fVar5 = (fVar5 - fVar6) * fVar11;
  fVar7 = fVar7 * fVar11;
  fVar8 = fVar8 * fVar11;
  (this->fields).impactDamage = 0.0;
  if ((this->fields).suspendImpactDamageCounter < 1) {
    if ((this->fields).collidedPrevFrame == 0) {
      (this->fields).prevVelocityChangeVector.x = fVar8;
      (this->fields).prevVelocityChangeVector.y = fVar7;
      (this->fields).prevVelocityChangeVector.z = fVar5;
    }
    else {
      uVar12 = (this->fields).prevVelocityChangeVector.x;
      uVar13 = (this->fields).prevVelocityChangeVector.y;
      uStack_2 = CONCAT44(fVar7 + (float)uVar13,fVar8 + (float)uVar12);
      ppLStack_14 = (List_1_MVControllerColliderHit_ **)
                     CONCAT44(ppLStack_14._4_4_,fVar5 + (this->fields).prevVelocityChangeVector.z)
      ;
      fVar5 = (this->fields).maxAccBeforeDamageDealt;
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        fVar5 = (float)(*pcVar9)();
        return fVar5;
      }
      pcRam_? = pcVar9;
      fVar6 = (float)(*pcRam_?)();
      fVar7 = (float)FUN_?(&uStack_2);
      this_00 = (this->fields).impactDestruction;
      if (this_00 == (ImpactState_ImpactDestruction *)0x0) goto code_?;
      ImpactState+ImpactDestruction::ImpactState_ImpactDestruction_HandleImpactDestruction
                (this_00,fVar7,(this->fields).moveHits,(MethodInfo *)0x0);
      fVar7 = fVar7 * (this->fields).averageSoftnessPrevFrame;
      if (fVar6 * fVar5 < fVar7) {
        fVar5 = (this->fields).impactDamageMultiplier;
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar9 = (code *)swi(3);
          fVar5 = (float)(*pcVar9)();
          return fVar5;
        }
        pcRam_? = pcVar9;
        fVar6 = (float)(*pcRam_?)();
        (this->fields).impactDamage = (fVar5 * fVar7) / fVar6;
        message = (Object *)FUN_?(uRam_?);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar5 = (pVVar15->zeroVector).z;
      fVar6 = (pVVar15->zeroVector).y;
      (this->fields).prevVelocityChangeVector.x = (pVVar15->zeroVector).x;
      (this->fields).prevVelocityChangeVector.y = fVar6;
      (this->fields).prevVelocityChangeVector.z = fVar5;
    }
    pLVar16 = (this->fields).moveHits;
    if (pLVar16 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
    if ((pLVar16->fields)._size < 1) {
      (this->fields).collidedPrevFrame = 0;
      fVar5 = _UNK_?;
    }
    else {
      (this->fields).collidedPrevFrame = 1;
      (this->fields).averageSoftnessPrevFrame = 0.0;
      if (pLVar16 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
      FUN_?(&uStack_17,0,0xb0);
      if (iRam_? != 0) {
        uVar18 = (uint)((ulonglong)&pLStack_19 >> 0xc);
        uVar20 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
        do {
          uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
          puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
          LOCK();
          bVar23 = uVar21 == *puVar22;
          if (bVar23) {
            *puVar22 = uVar21 | 1L << (uVar18 & 0x3f);
          }
          UNLOCK();
        } while (!bVar23);
      }
      uStack_17 = 0;
      iStack_24 = (pLVar16->fields)._version;
      pLStack_19 = pLVar16;
      FUN_?(&uStack_25,0,0xa8);
      uStack_26 = CONCAT44(iStack_24,uStack_17);
      pLStack_1 = pLStack_19;
      uStack_27 = uStack_25;
      uStack_28 = uStack_29;
      uStack_30 = uStack_31;
      uStack_32 = uStack_33;
      uStack_34 = uStack_35;
      uStack_36 = uStack_37;
      uStack_38 = uStack_39;
      uStack_40 = uStack_41;
      uStack_42 = uStack_43;
      uStack_44 = uStack_45;
      uStack_46 = uStack_47;
      uStack_48 = uStack_49;
      uStack_50 = uStack_51;
      uStack_52 = uStack_53;
      uStack_54 = uStack_55;
      uStack_56 = uStack_57;
      uStack_58 = uStack_59;
      uStack_60 = uStack_61;
      uStack_62 = uStack_63;
      lStack_64 = lStack_65;
      uStack_66 = uStack_67;
      uStack_2 = 0;
      ppLStack_14 = &pLStack_1;
      while (cVar68 = FUN_?(&pLStack_1), cVar68 != '\0') {
        fVar5 = (this->fields).averageSoftnessPrevFrame;
        if (lStack_64 == 0) goto code_?;
        if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
        fVar6 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)
                                  (interactableLocal,0x10,*(undefined4 *)(lStack_64 + 0x38));
        (this->fields).averageSoftnessPrevFrame = fVar6 + fVar5;
      }
      pLVar16 = (this->fields).moveHits;
      if (pLVar16 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
      fVar5 = (this->fields).averageSoftnessPrevFrame / (float)(pLVar16->fields)._size;
    }
    (this->fields).averageSoftnessPrevFrame = fVar5;
    pLVar16 = (this->fields).moveHits;
    if (pLVar16 == (List_1_MVControllerColliderHit_ *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      fVar5 = (float)(*pcVar9)();
      return fVar5;
    }
    piVar69 = &(pLVar16->fields)._version;
    *piVar69 = *piVar69 + 1;
    iVar70 = (pLVar16->fields)._size;
    (pLVar16->fields)._size = 0;
    if (0 < iVar70) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar16->fields)._items,0,iVar70,(MethodInfo *)0x0);
    }
    fVar5 = (this->fields).impactDamage;
  }
  else {
    piVar69 = &(this->fields).suspendImpactDamageCounter;
    *piVar69 = *piVar69 + -1;
    pLVar16 = (this->fields).moveHits;
    if (pLVar16 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
    piVar69 = &(pLVar16->fields)._version;
    *piVar69 = *piVar69 + 1;
    iVar70 = (pLVar16->fields)._size;
    (pLVar16->fields)._size = 0;
    if (0 < iVar70) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar16->fields)._items,0,iVar70,(MethodInfo *)0x0);
    }
    fVar5 = 0.0;
  }
  return fVar5;
}


/* ImpactState(RuntimeEventType[]) */

void Assembly-CSharp.dll::ImpactState::ImpactState__ctor
               (ImpactState *this,RuntimeEventType__Enum__Array *explosionEvents,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ImpactState__ImpactDestruction);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
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
  pLVar4 = (List_1_MVControllerColliderHit_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
  FUN_?(pLVar4,
                MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
  bVar5 = iRam_? != 0;
  (this->fields).moveHits = pLVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).moveHits >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  this_00 = (ImpactState_ImpactDestruction *)FUN_?(TypeInfo__ImpactState__ImpactDestruction)
  ;
  ImpactState+ImpactDestruction::ImpactState_ImpactDestruction__ctor
            (this_00,explosionEvents,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).impactDestruction = this_00;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).impactDestruction >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}

