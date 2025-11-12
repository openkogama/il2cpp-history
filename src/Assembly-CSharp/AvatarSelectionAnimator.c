
/* Int32 GetNextIndex() */

int32_t Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_GetNextIndex
                  (AvatarSelectionAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).forward == 0) {
    if ((this->fields).currentIndex != 0) {
      return (this->fields).currentIndex + -1;
    }
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 != (List_1_MVBody_ *)0x0) {
      return (pLVar1->fields)._size + -1;
    }
  }
  else {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 != (List_1_MVBody_ *)0x0) {
      if ((this->fields).currentIndex == (pLVar1->fields)._size + -1) {
        return 0;
      }
      return (this->fields).currentIndex + 1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void SetTargetIndex(Int32, Int32) */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_SetTargetIndex
               (AvatarSelectionAnimator *this,int32_t currentIndexInp,int32_t TargetIndexInp,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((currentIndexInp == TargetIndexInp) && ((this->fields).targetIndex == -1)) {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 != (List_1_MVBody_ *)0x0) {
      if ((uint)(pLVar1->fields)._size <= (uint)currentIndexInp) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pMVar3 = (pLVar1->fields)._items;
      if (pMVar3 != (MVBody__Array *)0x0) {
        if ((uint)pMVar3->max_length <= (uint)currentIndexInp) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pMVar4 = pMVar3->vector[currentIndexInp];
        if (pMVar4 != (MVBody *)0x0) {
          fStack_5 = (this->fields).displayPos.z;
          uStack_6._0_4_ = (this->fields).displayPos.x;
          uStack_6._4_4_ = (this->fields).displayPos.y;
          (*(pMVar4->klass->vtable).set_WorldPosition.methodPtr)
                    (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_WorldPosition.method);
          pLVar1 = (this->fields).Bodies;
          if (pLVar1 != (List_1_MVBody_ *)0x0) {
            if ((uint)(pLVar1->fields)._size <= (uint)currentIndexInp) goto code_?;
            pMVar3 = (pLVar1->fields)._items;
            if (pMVar3 != (MVBody__Array *)0x0) {
              if ((uint)pMVar3->max_length <= (uint)currentIndexInp) goto code_?;
              pMVar4 = pMVar3->vector[currentIndexInp];
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
              if (pMVar4 != (MVBody *)0x0) {
                uStack_6._0_4_ = (pVVar7->oneVector).x;
                uStack_6._4_4_ = (pVVar7->oneVector).y;
                fStack_5 = (pVVar7->oneVector).z;
                (*(pMVar4->klass->vtable).set_Scale.methodPtr)
                          (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Scale.method);
                return;
              }
            }
          }
        }
      }
    }
    goto code_?;
  }
  (this->fields).targetIndex = TargetIndexInp;
  if ((this->fields).currentIndex == -1) {
    (this->fields).currentIndex = currentIndexInp;
  }
  if ((this->fields).currentIndex < TargetIndexInp) {
    iVar8 = TargetIndexInp - (this->fields).currentIndex;
code_?:
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 == (List_1_MVBody_ *)0x0) goto code_?;
    iVar9 = (((pLVar1->fields)._size + (this->fields).currentIndex) - TargetIndexInp) + -1;
  }
  else {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 == (List_1_MVBody_ *)0x0) goto code_?;
    iVar8 = ((pLVar1->fields)._size - (this->fields).currentIndex) + -1 + TargetIndexInp;
    if ((this->fields).currentIndex <= TargetIndexInp) goto code_?;
    iVar9 = (this->fields).currentIndex - TargetIndexInp;
  }
  if ((bool)(this->fields).forward == iVar8 < iVar9) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).forward == 0) {
    if ((this->fields).currentIndex == 0) {
      pLVar1 = (this->fields).Bodies;
      if (pLVar1 == (List_1_MVBody_ *)0x0) goto code_?;
      iVar10 = (pLVar1->fields)._size;
    }
    else {
      iVar10 = (this->fields).currentIndex;
    }
    iVar10 = iVar10 + -1;
  }
  else {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 == (List_1_MVBody_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->fields).currentIndex == (pLVar1->fields)._size + -1) {
      iVar10 = 0;
    }
    else {
      iVar10 = (this->fields).currentIndex + 1;
    }
  }
  fVar11 = _UNK_? - (this->fields).time;
  (this->fields).currentIndex = iVar10;
  (this->fields).forward = iVar8 < iVar9;
  (this->fields).time = fVar11;
  return;
}


/* Void SetTargetIndexNoAnim(Int32, Int32) */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_SetTargetIndexNoAnim
               (AvatarSelectionAnimator *this,int32_t oldindex,int32_t TargetIndexInp,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).currentIndex != -1) {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 == (List_1_MVBody_ *)0x0) goto code_?;
    uVar2 = (this->fields).currentIndex;
    if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
    pMVar3 = (pLVar1->fields)._items;
    if (pMVar3 == (MVBody__Array *)0x0) goto code_?;
    if ((uint)pMVar3->max_length <= uVar2) goto code_?;
    pMVar4 = pMVar3->vector[(int)uVar2];
    if (pMVar4 == (MVBody *)0x0) goto code_?;
    fStack_5 = (this->fields).hidePos.z;
    uStack_6._0_4_ = (this->fields).hidePos.x;
    uStack_6._4_4_ = (this->fields).hidePos.y;
    (*(pMVar4->klass->vtable).set_WorldPosition.methodPtr)
              (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_WorldPosition.method);
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 == (List_1_MVBody_ *)0x0) goto code_?;
    uVar2 = (this->fields).currentIndex;
    if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
    pMVar3 = (pLVar1->fields)._items;
    if (pMVar3 == (MVBody__Array *)0x0) goto code_?;
    if ((uint)pMVar3->max_length <= uVar2) goto code_?;
    pMVar4 = pMVar3->vector[(int)uVar2];
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (pMVar4 == (MVBody *)0x0) goto code_?;
    uStack_6._0_4_ = (pVVar7->oneVector).x;
    uStack_6._4_4_ = (pVVar7->oneVector).y;
    fStack_5 = (pVVar7->oneVector).z;
    (*(pMVar4->klass->vtable).set_Scale.methodPtr)
              (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Scale.method);
  }
  pLVar1 = (this->fields).Bodies;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)oldindex) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pMVar3 = (pLVar1->fields)._items;
    if (pMVar3 != (MVBody__Array *)0x0) {
      if ((uint)pMVar3->max_length <= (uint)oldindex) {
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pMVar4 = pMVar3->vector[oldindex];
      if (pMVar4 != (MVBody *)0x0) {
        fStack_5 = (this->fields).hidePos.z;
        uStack_6._0_4_ = (this->fields).hidePos.x;
        uStack_6._4_4_ = (this->fields).hidePos.y;
        (*(pMVar4->klass->vtable).set_WorldPosition.methodPtr)
                  (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_WorldPosition.method);
        pLVar1 = (this->fields).Bodies;
        if (pLVar1 != (List_1_MVBody_ *)0x0) {
          if ((uint)(pLVar1->fields)._size <= (uint)oldindex) goto code_?;
          pMVar3 = (pLVar1->fields)._items;
          if (pMVar3 != (MVBody__Array *)0x0) {
            if ((uint)pMVar3->max_length <= (uint)oldindex) goto code_?;
            pMVar4 = pMVar3->vector[oldindex];
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
            if (pMVar4 != (MVBody *)0x0) {
              uStack_6._0_4_ = (pVVar7->oneVector).x;
              uStack_6._4_4_ = (pVVar7->oneVector).y;
              fStack_5 = (pVVar7->oneVector).z;
              (*(pMVar4->klass->vtable).set_Scale.methodPtr)
                        (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Scale.method);
              pLVar1 = (this->fields).Bodies;
              if (pLVar1 != (List_1_MVBody_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= (uint)TargetIndexInp) goto code_?;
                pMVar3 = (pLVar1->fields)._items;
                if (pMVar3 != (MVBody__Array *)0x0) {
                  if ((uint)pMVar3->max_length <= (uint)TargetIndexInp) goto code_?;
                  pMVar4 = pMVar3->vector[TargetIndexInp];
                  if (pMVar4 != (MVBody *)0x0) {
                    fStack_5 = (this->fields).displayPos.z;
                    uStack_6._0_4_ = (this->fields).displayPos.x;
                    uStack_6._4_4_ = (this->fields).displayPos.y;
                    (*(pMVar4->klass->vtable).set_WorldPosition.methodPtr)
                              (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_WorldPosition.method);
                    pLVar1 = (this->fields).Bodies;
                    if (pLVar1 != (List_1_MVBody_ *)0x0) {
                      if ((uint)(pLVar1->fields)._size <= (uint)TargetIndexInp)
                      goto code_?;
                      pMVar3 = (pLVar1->fields)._items;
                      if (pMVar3 != (MVBody__Array *)0x0) {
                        if ((uint)pMVar3->max_length <= (uint)TargetIndexInp)
                        goto code_?;
                        pMVar4 = pMVar3->vector[TargetIndexInp];
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
                        if (pMVar4 != (MVBody *)0x0) {
                          uStack_6._0_4_ = (pVVar7->oneVector).x;
                          uStack_6._4_4_ = (pVVar7->oneVector).y;
                          fStack_5 = (pVVar7->oneVector).z;
                          (*(pMVar4->klass->vtable).set_Scale.methodPtr)
                                    (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Scale.method);
                          (this->fields).currentIndex = -1;
                          (this->fields).targetIndex = -1;
                          (this->fields).time = 0.0;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_Start
               (AvatarSelectionAnimator *this,MethodInfo *method)

{
  (this->fields).addition =
       (_UNK_? - (this->fields).endmultiplier * (this->fields).timeSlowThreshold) /
       (_UNK_? - (this->fields).timeSlowThreshold);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_Update
               (AvatarSelectionAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  if ((this->fields).targetIndex == -1) {
    return;
  }
  if ((this->fields).currentIndex == -1) {
    return;
  }
  iVar2 = (this->fields).targetIndex;
  iVar3 = (this->fields).currentIndex;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = iVar2 - iVar3;
  iVar3 = -iVar2;
  if (iVar3 < 0) {
    iVar3 = iVar2;
  }
  fVar4 = (float)(iVar3 + -1) + fVar1;
  (this->fields).SuperspeedFactor = fVar4;
  fVar4 = fVar4 * (this->fields).baseTimeMultiplier;
  uVar5 = AvatarSelectionAnimator_GetNextIndex(this,(MethodInfo *)0x0);
  fVar6 = fVar1;
  if ((this->fields).forward == 0) {
    fVar6 = _UNK_?;
  }
  fVar7 = (this->fields).time;
  pfVar8 = &(this->fields).timeSlowThreshold;
  if ((*pfVar8 <= fVar7 && fVar7 != *pfVar8) && (uVar5 == (this->fields).targetIndex)) {
    fVar4 = (((this->fields).endmultiplier - (this->fields).addition) * fVar7 +
             (this->fields).addition) * (this->fields).baseTimeMultiplier;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
  fVar11 = (float)(*pcRam_?)();
  pLVar12 = (this->fields).Bodies;
  fVar7 = fVar11 * fVar4 + fVar7;
  (this->fields).time = fVar7;
  if (pLVar12 != (List_1_MVBody_ *)0x0) {
    uVar13 = (this->fields).currentIndex;
    if ((uint)(pLVar12->fields)._size <= uVar13) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pMVar14 = (pLVar12->fields)._items;
    if (pMVar14 != (MVBody__Array *)0x0) {
      if ((uint)pMVar14->max_length <= uVar13) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pMVar15 = pMVar14->vector[(int)uVar13];
      uVar16 = (this->fields).distance.x;
      uVar17 = (this->fields).distance.y;
      uStack_18._0_4_ = (this->fields).displayPos.x;
      uStack_18._4_4_ = (this->fields).displayPos.y;
      if (pMVar15 != (MVBody *)0x0) {
        uStack_18 = CONCAT44((float)uVar17 * fVar6 * fVar7 + (float)uStack_18._4_4_,
                             (float)uVar16 * fVar6 * fVar7 + (float)(undefined4)uStack_18);
        fStack_19 = (this->fields).distance.z * fVar6 * fVar7 + (this->fields).displayPos.z;
        (*(pMVar15->klass->vtable).set_WorldPosition.methodPtr)
                  (pMVar15,&uStack_18,(pMVar15->klass->vtable).set_WorldPosition.method);
        pLVar12 = (this->fields).Bodies;
        if (pLVar12 != (List_1_MVBody_ *)0x0) {
          uVar13 = (this->fields).currentIndex;
          if ((uint)(pLVar12->fields)._size <= uVar13) goto code_?;
          pMVar14 = (pLVar12->fields)._items;
          if (pMVar14 != (MVBody__Array *)0x0) {
            if ((uint)pMVar14->max_length <= uVar13) goto code_?;
            pMVar15 = pMVar14->vector[(int)uVar13];
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            fVar4 = fVar1 - (this->fields).time;
            pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_18._0_4_ = (pVVar20->oneVector).x;
            uStack_18._4_4_ = (pVVar20->oneVector).y;
            if (pMVar15 != (MVBody *)0x0) {
              uStack_18 = CONCAT44(fVar4 * (float)uStack_18._4_4_,
                                   fVar4 * (float)(undefined4)uStack_18);
              fStack_19 = fVar4 * (pVVar20->oneVector).z;
              (*(pMVar15->klass->vtable).set_Scale.methodPtr)
                        (pMVar15,&uStack_18,(pMVar15->klass->vtable).set_Scale.method);
              pLVar12 = (this->fields).Bodies;
              if (pLVar12 != (List_1_MVBody_ *)0x0) {
                if ((uint)(pLVar12->fields)._size <= uVar5) goto code_?;
                pMVar14 = (pLVar12->fields)._items;
                if (pMVar14 != (MVBody__Array *)0x0) {
                  if ((uint)pMVar14->max_length <= uVar5) goto code_?;
                  pMVar15 = pMVar14->vector[(int)uVar5];
                  uStack_18._0_4_ = (this->fields).distance.x;
                  uStack_18._4_4_ = (this->fields).distance.y;
                  fVar4 = (this->fields).time;
                  uVar21 = (this->fields).displayPos.x;
                  uVar22 = (this->fields).displayPos.y;
                  if (pMVar15 != (MVBody *)0x0) {
                    uStack_18 = CONCAT44(((float)uStack_18._4_4_ * fVar6 * fVar4 + (float)uVar22) -
                                         (float)uStack_18._4_4_ * fVar6,
                                         ((float)(undefined4)uStack_18 * fVar6 * fVar4 +
                                         (float)uVar21) - (float)(undefined4)uStack_18 * fVar6);
                    fStack_19 = ((this->fields).distance.z * fVar6 * fVar4 +
                                (this->fields).displayPos.z) - (this->fields).distance.z * fVar6;
                    (*(pMVar15->klass->vtable).set_WorldPosition.methodPtr)
                              (pMVar15,&uStack_18,(pMVar15->klass->vtable).set_WorldPosition.method);
                    pLVar12 = (this->fields).Bodies;
                    if (pLVar12 != (List_1_MVBody_ *)0x0) {
                      if ((uint)(pLVar12->fields)._size <= uVar5) goto code_?;
                      pMVar14 = (pLVar12->fields)._items;
                      if (pMVar14 != (MVBody__Array *)0x0) {
                        if ((uint)pMVar14->max_length <= uVar5) goto code_?;
                        pMVar15 = pMVar14->vector[(int)uVar5];
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        fVar6 = (this->fields).time;
                        pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uStack_18._0_4_ = (pVVar20->oneVector).x;
                        uStack_18._4_4_ = (pVVar20->oneVector).y;
                        if (pMVar15 != (MVBody *)0x0) {
                          uStack_18 = CONCAT44(fVar6 * (float)uStack_18._4_4_,
                                               fVar6 * (float)(undefined4)uStack_18);
                          fStack_19 = fVar6 * (pVVar20->oneVector).z;
                          (*(pMVar15->klass->vtable).set_Scale.methodPtr)
                                    (pMVar15,&uStack_18,(pMVar15->klass->vtable).set_Scale.method);
                          if ((this->fields).time <= fVar1) {
                            return;
                          }
                          pLVar12 = (this->fields).Bodies;
                          if (pLVar12 != (List_1_MVBody_ *)0x0) {
                            uVar13 = (this->fields).currentIndex;
                            if ((uint)(pLVar12->fields)._size <= uVar13) goto code_?;
                            pMVar14 = (pLVar12->fields)._items;
                            if (pMVar14 != (MVBody__Array *)0x0) {
                              if ((uint)pMVar14->max_length <= uVar13) goto code_?;
                              pMVar15 = pMVar14->vector[(int)uVar13];
                              if (pMVar15 != (MVBody *)0x0) {
                                fStack_19 = (this->fields).hidePos.z;
                                uStack_18._0_4_ = (this->fields).hidePos.x;
                                uStack_18._4_4_ = (this->fields).hidePos.y;
                                (*(pMVar15->klass->vtable).set_WorldPosition.methodPtr)
                                          (pMVar15,&uStack_18,
                                           (pMVar15->klass->vtable).set_WorldPosition.method);
                                pLVar12 = (this->fields).Bodies;
                                if (pLVar12 != (List_1_MVBody_ *)0x0) {
                                  uVar13 = (this->fields).currentIndex;
                                  if ((uint)(pLVar12->fields)._size <= uVar13)
                                  goto code_?;
                                  pMVar14 = (pLVar12->fields)._items;
                                  if (pMVar14 != (MVBody__Array *)0x0) {
                                    if ((uint)pMVar14->max_length <= uVar13)
                                    goto code_?;
                                    pMVar15 = pMVar14->vector[(int)uVar13];
                                    if (cRam_? == '\0') {
                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
                                    if (pMVar15 != (MVBody *)0x0) {
                                      uStack_18._0_4_ = (pVVar20->oneVector).x;
                                      uStack_18._4_4_ = (pVVar20->oneVector).y;
                                      fStack_19 = (pVVar20->oneVector).z;
                                      (*(pMVar15->klass->vtable).set_Scale.methodPtr)
                                                (pMVar15,&uStack_18,
                                                 (pMVar15->klass->vtable).set_Scale.method);
                                      (this->fields).time = 0.0;
                                      if (uVar5 != (this->fields).targetIndex) {
                                        (this->fields).currentIndex = uVar5;
                                        return;
                                      }
                                      pLVar12 = (this->fields).Bodies;
                                      if ((pLVar12 != (List_1_MVBody_ *)0x0) &&
                                         (plVar23 = (longlong *)FUN_?(pLVar12,uVar5),
                                         plVar23 != (longlong *)0x0)) {
                                        fStack_19 = (this->fields).displayPos.z;
                                        uStack_18._0_4_ = (this->fields).displayPos.x;
                                        uStack_18._4_4_ = (this->fields).displayPos.y;
                                        (**(code **)(*plVar23 + 0x2d8))
                                                  (plVar23,&uStack_18,
                                                   *(undefined8 *)(*plVar23 + 0x2e0));
                                        pLVar12 = (this->fields).Bodies;
                                        if (pLVar12 != (List_1_MVBody_ *)0x0) {
                                          plVar23 = (longlong *)FUN_?(pLVar12,uVar5);
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
                                          if (plVar23 != (longlong *)0x0) {
                                            uStack_18._0_4_ = (pVVar20->oneVector).x;
                                            uStack_18._4_4_ = (pVVar20->oneVector).y;
                                            fStack_19 = (pVVar20->oneVector).z;
                                            (**(code **)(*plVar23 + 0x1c8))
                                                      (plVar23,&uStack_18,
                                                       *(undefined8 *)(*plVar23 + 0x1d0));
                                            (this->fields).currentIndex = -1;
                                            (this->fields).targetIndex = -1;
                                            (this->fields).SuperspeedFactor = 1.0;
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* AvatarSelectionAnimator() */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator__ctor
               (AvatarSelectionAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVBody>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVBody_ *)FUN_?(TypeInfo__System__Collections__Generic__List<MVBody>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVBody>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).Bodies = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).Bodies >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = cRam_? == '\0';
  (this->fields).currentIndex = -1;
  (this->fields).targetIndex = -1;
  (this->fields).baseTimeMultiplier = 2.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar6->rightVector).x;
  fVar8 = (pVVar6->rightVector).y * _UNK_?;
  fVar9 = (pVVar6->rightVector).z * _UNK_?;
  bVar1 = cRam_? == '\0';
  (this->fields).distance.x = (float)uVar7 * _UNK_?;
  (this->fields).distance.y = fVar8;
  (this->fields).distance.z = fVar9;
  (this->fields).forward = 1;
  (this->fields).timeSlowThreshold = 0.8;
  (this->fields).endmultiplier = 0.01;
  (this->fields).SuperspeedFactor = 1.0;
  if (bVar1) {
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

