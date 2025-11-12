
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  pGVar1 = (this->fields).__4__this;
  iVar2 = (this->fields).__1__state;
  pOVar3 = (Object *)0x0;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
code_?:
    if (pGVar1 == (GameMeterUpdatedEffect *)0x0) goto code_?;
    fVar4 = (pGVar1->fields).scaleTime;
    pfVar5 = &(this->fields)._i_5__2;
    pRVar6 = (pGVar1->fields).scaleTarget;
    if (*pfVar5 <= fVar4 && fVar4 != *pfVar5) {
      if (pRVar6 != (RectTransform *)0x0) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar6,(MethodInfo *)0x0);
        uStack_8._0_4_ = (pGVar1->fields).startSize.x;
        uStack_8._4_4_ = (pGVar1->fields).startSize.y;
        fStack_9 = (pGVar1->fields).startSize.z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar4 = ((this->fields)._i_5__2 / (pGVar1->fields).scaleTime) *
                 (pGVar1->fields).scaleStrength;
        uVar11 = (pVVar10->oneVector).x;
        fStack_9 = (pVVar10->oneVector).z * fVar4 + fStack_9;
        if (pTVar7 == (Transform *)0x0) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          bVar13 = (*pcVar12)();
          return bVar13;
        }
        uStack_8 = CONCAT44((pVVar10->oneVector).y * fVar4 + uStack_8._4_4_,
                             (float)uVar11 * fVar4 + (float)uStack_8);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar14 != (void *)0x0) {
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar12 = (code *)swi(3);
            bVar13 = (*pcVar12)();
            return bVar13;
          }
          pcRam_? = pcVar12;
          (*pcRam_?)(pvVar14,&uStack_8);
          lVar16 = lRam_?;
          uStackX_8 = 0;
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) ||
               ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              pOVar3 = (Object *)FUN_?(lRam_?);
              FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar16 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar17 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
                uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
                do {
                  uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
                  puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
                  LOCK();
                  bVar21 = uVar19 == *puVar20;
                  if (bVar21) {
                    *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar21);
              }
            }
          }
          else {
            pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
          }
          bVar21 = iRam_? != 0;
          (this->fields).__2__current = pOVar3;
          if (bVar21) {
            uVar17 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
            do {
              uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
              puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
              LOCK();
              bVar21 = uVar19 == *puVar20;
              if (bVar21) {
                *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
              }
              UNLOCK();
            } while (!bVar21);
          }
          (this->fields).__1__state = 1;
          return 1;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        bVar13 = (*pcVar12)();
        return bVar13;
      }
      goto code_?;
    }
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pRVar6,(MethodInfo *)0x0);
    uStack_8._0_4_ = (pGVar1->fields).startSize.x;
    uStack_8._4_4_ = (pGVar1->fields).startSize.y;
    fStack_9 = (pGVar1->fields).startSize.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar4 = (pGVar1->fields).scaleStrength;
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar22 = (pVVar10->oneVector).x;
    fStack_9 = (pVVar10->oneVector).z * fVar4 + fStack_9;
    if (pTVar7 == (Transform *)0x0) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    uStack_8 = CONCAT44((pVVar10->oneVector).y * fVar4 + uStack_8._4_4_,
                         (float)uVar22 * fVar4 + (float)uStack_8);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar14);
    (this->fields)._i_5__2 = 0.0;
  }
  else {
    if (iVar2 == 1) {
      fVar4 = (this->fields)._i_5__2;
      (this->fields).__1__state = -1;
      fVar23 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this->fields)._i_5__2 = fVar23 + fVar4;
      goto code_?;
    }
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        (this->fields).__1__state = -1;
        return 0;
      }
      return 0;
    }
    fVar4 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar23 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar23 + fVar4;
    if (pGVar1 == (GameMeterUpdatedEffect *)0x0) goto code_?;
  }
  fVar4 = (pGVar1->fields).scaleTime;
  pfVar5 = &(this->fields)._i_5__2;
  pRVar6 = (pGVar1->fields).scaleTarget;
  if (fVar4 < *pfVar5 || fVar4 == *pfVar5) {
    if ((pRVar6 == (RectTransform *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0)) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    uStack_8._0_4_ = (pGVar1->fields).startSize.x;
    uStack_8._4_4_ = (pGVar1->fields).startSize.y;
    fStack_9 = (pGVar1->fields).startSize.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar14,&uStack_8);
    lVar16 = lRam_?;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar3 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar16 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar17 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
          uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
          do {
            uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
            puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
            LOCK();
            bVar21 = uVar19 == *puVar20;
            if (bVar21) {
              *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
            }
            UNLOCK();
          } while (!bVar21);
        }
      }
    }
    else {
      pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    bVar21 = iRam_? != 0;
    (this->fields).__2__current = pOVar3;
    if (bVar21) {
      uVar17 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar21 = uVar19 == *puVar20;
        if (bVar21) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar21);
    }
    (this->fields).__1__state = 3;
  }
  else {
    if ((pRVar6 == (RectTransform *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0)) {
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    fStack_9 = 0.0;
    pvVar14 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar14,&uStack_8);
    lVar16 = lRam_?;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar3 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar16 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar17 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
          uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
          do {
            uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
            puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
            LOCK();
            bVar21 = uVar19 == *puVar20;
            if (bVar21) {
              *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
            }
            UNLOCK();
          } while (!bVar21);
        }
      }
    }
    else {
      pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    bVar21 = iRam_? != 0;
    (this->fields).__2__current = pOVar3;
    if (bVar21) {
      uVar17 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar21 = uVar19 == *puVar20;
        if (bVar21) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar21);
    }
    (this->fields).__1__state = 2;
  }
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_System_Collections_IEnumerator_Reset
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

