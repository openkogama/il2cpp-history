
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LoadingScreenHandler+<FadeInAnimation>d__24::
     LoadingScreenHandler_FadeInAnimation_d_24_MoveNext
               (LoadingScreenHandler_FadeInAnimation_d_24 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pLVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._fadeInTime_5__2 = 0.0;
    pOVar3 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
    bVar4 = iRam_? != 0;
    *(undefined4 *)&pOVar3[1].klass = 0x3dcccccd;
    (this->fields).__2__current = pOVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if ((iVar1 != 1) && (iVar1 != 2)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pLVar2 != (LoadingScreenHandler *)0x0) {
    if ((pLVar2->fields).targetFadeInTime < (this->fields)._fadeInTime_5__2) {
      return 0;
    }
    fVar9 = (this->fields)._fadeInTime_5__2;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcRam_? = pcVar10;
    fVar13 = (float)(*pcRam_?)();
    fVar13 = fVar13 + fVar9;
    (this->fields)._fadeInTime_5__2 = fVar13;
    fVar13 = MathFunctions::MathFunctions_SmoothInverseLerp
                       (0.0,(pLVar2->fields).targetFadeInTime,fVar13,(MethodInfo *)0x0);
    fVar9 = _UNK_?;
    if (fVar13 < 0.0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = _UNK_?;
      if (fVar13 <= _UNK_?) {
        fVar14 = fVar13;
      }
    }
    this_00 = (pLVar2->fields).centerCanvasGroup;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,fVar14 + 0.0,(MethodInfo *)0x0);
      obj = (pLVar2->fields).centerTransform;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar16 = (pLVar2->fields).startCenterScale;
      if (fVar13 < 0.0) {
        fVar17 = 0.0;
      }
      else {
        fVar17 = fVar9;
        if (fVar13 <= fVar9) {
          fVar17 = fVar13;
        }
      }
      fVar16 = ((pLVar2->fields).endCenterScale - fVar16) * fVar17 + fVar16;
      CStack_18.r = (pVVar15->oneVector).x;
      CStack_18.g = (pVVar15->oneVector).y;
      if (obj != (RectTransform *)0x0) {
        CStack_18.g = fVar16 * CStack_18.g;
        CStack_18.r = fVar16 * CStack_18.r;
        CStack_18.b = fVar16 * (pVVar15->oneVector).z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar19 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar19 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          bVar12 = (*pcVar10)();
          return bVar12;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          bVar12 = (*pcVar10)();
          return bVar12;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar19,&CStack_18);
        pLVar20 = (pLVar2->fields).cube;
        if ((pLVar20 != (LoadingCube *)0x0) &&
           (pMVar21 = (pLVar20->fields)._CubeMaterial_k__BackingField, pMVar21 != (Material *)0x0)) {
          pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                              (aCStack_23,pMVar21,(MethodInfo *)0x0);
          pLVar20 = (pLVar2->fields).cube;
          uVar11._0_4_ = pCVar22->r;
          uVar11._4_4_ = pCVar22->g;
          if (pLVar20 != (LoadingCube *)0x0) {
            pMVar21 = (pLVar20->fields)._CubeMaterial_k__BackingField;
            CStack_18.a = fVar14 + 0.0;
            CStack_18.b = pCVar22->b;
            CStack_18._0_8_ = uVar11;
            if (pMVar21 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                        (pMVar21,&CStack_18,(MethodInfo *)0x0);
              this_01 = (pLVar2->fields).sceneObjects;
              if (this_01 != (GameObject *)0x0) {
                obj_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(this_01,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
                fVar14 = (pLVar2->fields).startObjectsScale;
                if (fVar13 < 0.0) {
                  fVar13 = 0.0;
                }
                else if (fVar9 < fVar13) {
                  fVar13 = fVar9;
                }
                CStack_18.r = (pVVar15->oneVector).x;
                CStack_18.g = (pVVar15->oneVector).y;
                fVar14 = ((pLVar2->fields).endObjectsScale - fVar14) * fVar13 + fVar14;
                if (obj_00 != (Transform *)0x0) {
                  CStack_18.g = fVar14 * CStack_18.g;
                  CStack_18.r = fVar14 * CStack_18.r;
                  CStack_18.b = fVar14 * (pVVar15->oneVector).z;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar19 = (obj_00->fields)._._.m_CachedPtr;
                  if (pvVar19 != (void *)0x0) {
                    pcVar10 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                      uVar11 = func_?(&UNK_?);
                      FUN_?(uVar11,0);
                      pcVar10 = (code *)swi(3);
                      bVar12 = (*pcVar10)();
                      return bVar12;
                    }
                    pcRam_? = pcVar10;
                    (*pcRam_?)(pvVar19,&CStack_18);
                    bVar4 = iRam_? != 0;
                    (this->fields).__2__current = (Object *)0x0;
                    if (bVar4) {
                      uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                      do {
                        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                        LOCK();
                        bVar4 = uVar7 == *puVar8;
                        if (bVar4) {
                          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar4);
                    }
                    (this->fields).__1__state = 2;
                    return 1;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  bVar12 = (*pcVar10)();
                  return bVar12;
                }
                FUN_?();
                pcVar10 = (code *)swi(3);
                bVar12 = (*pcVar10)();
                return bVar12;
              }
            }
          }
          goto code_?;
        }
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar12 = (*pcVar10)();
  return bVar12;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LoadingScreenHandler+<FadeInAnimation>d__24::
     LoadingScreenHandler_FadeInAnimation_d_24_System_Collections_IEnumerator_Reset
               (LoadingScreenHandler_FadeInAnimation_d_24 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__LoadingScreenHandler___FadeInAnimation_d__24__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

