
/* Int32 GetNextIndex() */

int32_t Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_GetNextIndex(AvatarSelectionAnimator *this,MethodInfo *method)

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

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_SetTargetIndex(AvatarSelectionAnimator *this,int32_t currentIndexInp,int32_t TargetIndexInp,MethodInfo *method)

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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
          (*(pMVar4->klass->vtable).set_WorldPosition.methodPtr)(pMVar4,&uStack_6,(pMVar4->klass->vtable).set_WorldPosition.method);
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
                (*(pMVar4->klass->vtable).set_Scale.methodPtr)(pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Scale.method);
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
  (this->fields).currentIndex = iVar10;
  (this->fields).forward = iVar8 < iVar9;
  (this->fields).time = 1.0 - (this->fields).time;
  return;
}


/* Void SetTargetIndexNoAnim(Int32, Int32) */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_SetTargetIndexNoAnim(AvatarSelectionAnimator *this,int32_t oldindex,int32_t TargetIndexInp,MethodInfo *method)

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
    (*(pMVar4->klass->vtable).set_WorldPosition.methodPtr)(pMVar4,&uStack_6,(pMVar4->klass->vtable).set_WorldPosition.method);
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
    (*(pMVar4->klass->vtable).set_Scale.methodPtr)(pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Scale.method);
  }
  pLVar1 = (this->fields).Bodies;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)oldindex) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
        (*(pMVar4->klass->vtable).set_WorldPosition.methodPtr)(pMVar4,&uStack_6,(pMVar4->klass->vtable).set_WorldPosition.method);
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
              (*(pMVar4->klass->vtable).set_Scale.methodPtr)(pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Scale.method);
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
                    (*(pMVar4->klass->vtable).set_WorldPosition.methodPtr)(pMVar4,&uStack_6,(pMVar4->klass->vtable).set_WorldPosition.method);
                    pLVar1 = (this->fields).Bodies;
                    if (pLVar1 != (List_1_MVBody_ *)0x0) {
                      if ((uint)(pLVar1->fields)._size <= (uint)TargetIndexInp) goto code_?;
                      pMVar3 = (pLVar1->fields)._items;
                      if (pMVar3 != (MVBody__Array *)0x0) {
                        if ((uint)pMVar3->max_length <= (uint)TargetIndexInp) goto code_?;
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
                          (*(pMVar4->klass->vtable).set_Scale.methodPtr)(pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Scale.method);
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

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_Start(AvatarSelectionAnimator *this,MethodInfo *method)

{
  (this->fields).addition = (1.0 - (this->fields).endmultiplier * (this->fields).timeSlowThreshold) / (1.0 - (this->fields).timeSlowThreshold);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_Update(AvatarSelectionAnimator *this,MethodInfo *method)

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
  if ((this->fields).targetIndex == -1) {
    return;
  }
  if ((this->fields).currentIndex == -1) {
    return;
  }
  iVar1 = (this->fields).targetIndex;
  fVar2 = 1.0;
  iVar3 = (this->fields).currentIndex;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = iVar1 - iVar3;
  iVar3 = -iVar1;
  if (iVar3 < 0) {
    iVar3 = iVar1;
  }
  fVar4 = (float)(iVar3 + -1) + 1.0;
  (this->fields).SuperspeedFactor = fVar4;
  fVar4 = fVar4 * (this->fields).baseTimeMultiplier;
  uVar5 = AvatarSelectionAnimator_GetNextIndex(this,(MethodInfo *)0x0);
  if ((this->fields).forward == 0) {
    fVar2 = -1.0;
  }
  fVar6 = (this->fields).time;
  pfVar7 = &(this->fields).timeSlowThreshold;
  if ((*pfVar7 <= fVar6 && fVar6 != *pfVar7) && (uVar5 == (this->fields).targetIndex)) {
    fVar4 = (((this->fields).endmultiplier - (this->fields).addition) * fVar6 + (this->fields).addition) * (this->fields).baseTimeMultiplier;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  fVar10 = (float)(*pcRam_?)();
  pLVar11 = (this->fields).Bodies;
  fVar6 = fVar10 * fVar4 + fVar6;
  (this->fields).time = fVar6;
  if (pLVar11 != (List_1_MVBody_ *)0x0) {
    uVar12 = (this->fields).currentIndex;
    if ((uint)(pLVar11->fields)._size <= uVar12) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pMVar13 = (pLVar11->fields)._items;
    if (pMVar13 != (MVBody__Array *)0x0) {
      if ((uint)pMVar13->max_length <= uVar12) {
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pMVar14 = pMVar13->vector[(int)uVar12];
      uVar15 = (this->fields).distance.x;
      uVar16 = (this->fields).distance.y;
      uStack_17._0_4_ = (this->fields).displayPos.x;
      uStack_17._4_4_ = (this->fields).displayPos.y;
      if (pMVar14 != (MVBody *)0x0) {
        uStack_17 = CONCAT44((float)uVar16 * fVar2 * fVar6 + (float)uStack_17._4_4_,(float)uVar15 * fVar2 * fVar6 + (float)(undefined4)uStack_17);
        fStack_18 = (this->fields).distance.z * fVar2 * fVar6 + (this->fields).displayPos.z;
        (*(pMVar14->klass->vtable).set_WorldPosition.methodPtr)(pMVar14,&uStack_17,(pMVar14->klass->vtable).set_WorldPosition.method);
        pLVar11 = (this->fields).Bodies;
        if (pLVar11 != (List_1_MVBody_ *)0x0) {
          uVar12 = (this->fields).currentIndex;
          if ((uint)(pLVar11->fields)._size <= uVar12) goto code_?;
          pMVar13 = (pLVar11->fields)._items;
          if (pMVar13 != (MVBody__Array *)0x0) {
            if ((uint)pMVar13->max_length <= uVar12) goto code_?;
            pMVar14 = pMVar13->vector[(int)uVar12];
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            fVar4 = 1.0 - (this->fields).time;
            pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_17._0_4_ = (pVVar19->oneVector).x;
            uStack_17._4_4_ = (pVVar19->oneVector).y;
            if (pMVar14 != (MVBody *)0x0) {
              uStack_17 = CONCAT44(fVar4 * (float)uStack_17._4_4_,fVar4 * (float)(undefined4)uStack_17);
              fStack_18 = fVar4 * (pVVar19->oneVector).z;
              (*(pMVar14->klass->vtable).set_Scale.methodPtr)(pMVar14,&uStack_17,(pMVar14->klass->vtable).set_Scale.method);
              pLVar11 = (this->fields).Bodies;
              if (pLVar11 != (List_1_MVBody_ *)0x0) {
                if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
                pMVar13 = (pLVar11->fields)._items;
                if (pMVar13 != (MVBody__Array *)0x0) {
                  if ((uint)pMVar13->max_length <= uVar5) goto code_?;
                  pMVar14 = pMVar13->vector[(int)uVar5];
                  uStack_17._0_4_ = (this->fields).distance.x;
                  uStack_17._4_4_ = (this->fields).distance.y;
                  fVar4 = (this->fields).time;
                  uVar20 = (this->fields).displayPos.x;
                  uVar21 = (this->fields).displayPos.y;
                  if (pMVar14 != (MVBody *)0x0) {
                    uStack_17 = CONCAT44(((float)uStack_17._4_4_ * fVar2 * fVar4 + (float)uVar21) - (float)uStack_17._4_4_ * fVar2,((float)(undefined4)uStack_17 * fVar2 * fVar4 + (float)uVar20) - (float)(undefined4)uStack_17 * fVar2);
                    fStack_18 = ((this->fields).distance.z * fVar2 * fVar4 + (this->fields).displayPos.z) - (this->fields).distance.z * fVar2;
                    (*(pMVar14->klass->vtable).set_WorldPosition.methodPtr)(pMVar14,&uStack_17,(pMVar14->klass->vtable).set_WorldPosition.method);
                    pLVar11 = (this->fields).Bodies;
                    if (pLVar11 != (List_1_MVBody_ *)0x0) {
                      if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
                      pMVar13 = (pLVar11->fields)._items;
                      if (pMVar13 != (MVBody__Array *)0x0) {
                        if ((uint)pMVar13->max_length <= uVar5) goto code_?;
                        pMVar14 = pMVar13->vector[(int)uVar5];
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        fVar2 = (this->fields).time;
                        pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uStack_17._0_4_ = (pVVar19->oneVector).x;
                        uStack_17._4_4_ = (pVVar19->oneVector).y;
                        if (pMVar14 != (MVBody *)0x0) {
                          uStack_17 = CONCAT44(fVar2 * (float)uStack_17._4_4_,fVar2 * (float)(undefined4)uStack_17);
                          fStack_18 = fVar2 * (pVVar19->oneVector).z;
                          (*(pMVar14->klass->vtable).set_Scale.methodPtr)(pMVar14,&uStack_17,(pMVar14->klass->vtable).set_Scale.method);
                          if ((this->fields).time <= 1.0) {
                            return;
                          }
                          pLVar11 = (this->fields).Bodies;
                          if (pLVar11 != (List_1_MVBody_ *)0x0) {
                            uVar12 = (this->fields).currentIndex;
                            if ((uint)(pLVar11->fields)._size <= uVar12) goto code_?;
                            pMVar13 = (pLVar11->fields)._items;
                            if (pMVar13 != (MVBody__Array *)0x0) {
                              if ((uint)pMVar13->max_length <= uVar12) goto code_?;
                              pMVar14 = pMVar13->vector[(int)uVar12];
                              if (pMVar14 != (MVBody *)0x0) {
                                fStack_18 = (this->fields).hidePos.z;
                                uStack_17._0_4_ = (this->fields).hidePos.x;
                                uStack_17._4_4_ = (this->fields).hidePos.y;
                                (*(pMVar14->klass->vtable).set_WorldPosition.methodPtr)(pMVar14,&uStack_17,(pMVar14->klass->vtable).set_WorldPosition.method);
                                pLVar11 = (this->fields).Bodies;
                                if (pLVar11 != (List_1_MVBody_ *)0x0) {
                                  uVar12 = (this->fields).currentIndex;
                                  if ((uint)(pLVar11->fields)._size <= uVar12) goto code_?;
                                  pMVar13 = (pLVar11->fields)._items;
                                  if (pMVar13 != (MVBody__Array *)0x0) {
                                    if ((uint)pMVar13->max_length <= uVar12) goto code_?;
                                    pMVar14 = pMVar13->vector[(int)uVar12];
                                    if (cRam_? == '\0') {
                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
                                    if (pMVar14 != (MVBody *)0x0) {
                                      uStack_17._0_4_ = (pVVar19->oneVector).x;
                                      uStack_17._4_4_ = (pVVar19->oneVector).y;
                                      fStack_18 = (pVVar19->oneVector).z;
                                      (*(pMVar14->klass->vtable).set_Scale.methodPtr)(pMVar14,&uStack_17,(pMVar14->klass->vtable).set_Scale.method);
                                      (this->fields).time = 0.0;
                                      if (uVar5 != (this->fields).targetIndex) {
                                        (this->fields).currentIndex = uVar5;
                                        return;
                                      }
                                      pLVar11 = (this->fields).Bodies;
                                      if ((pLVar11 != (List_1_MVBody_ *)0x0) && (plVar22 = (longlong *)FUN_?(pLVar11,uVar5), plVar22 != (longlong *)0x0)) {
                                        fStack_18 = (this->fields).displayPos.z;
                                        uStack_17._0_4_ = (this->fields).displayPos.x;
                                        uStack_17._4_4_ = (this->fields).displayPos.y;
                                        (**(code **)(*plVar22 + 0x2d8))(plVar22,&uStack_17,*(undefined8 *)(*plVar22 + 0x2e0));
                                        pLVar11 = (this->fields).Bodies;
                                        if (pLVar11 != (List_1_MVBody_ *)0x0) {
                                          plVar22 = (longlong *)FUN_?(pLVar11,uVar5);
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
                                          if (plVar22 != (longlong *)0x0) {
                                            uStack_17._0_4_ = (pVVar19->oneVector).x;
                                            uStack_17._4_4_ = (pVVar19->oneVector).y;
                                            fStack_18 = (pVVar19->oneVector).z;
                                            (**(code **)(*plVar22 + 0x1c8))(plVar22,&uStack_17,*(undefined8 *)(*plVar22 + 0x1d0));
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* AvatarSelectionAnimator() */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator__ctor(AvatarSelectionAnimator *this,MethodInfo *method)

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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,MethodInfo__System__Collections__Generic__List<MVBody>__List__);
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
  fVar8 = (pVVar6->rightVector).y;
  fVar9 = (pVVar6->rightVector).z;
  bVar1 = cRam_? == '\0';
  (this->fields).distance.x = (float)uVar7 * 8.0;
  (this->fields).distance.y = fVar8 * 8.0;
  (this->fields).distance.z = fVar9 * 8.0;
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

