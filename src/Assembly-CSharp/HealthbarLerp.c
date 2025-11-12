
/* Void ExecuteEffect() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_ExecuteEffect
               (HealthbarLerp *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
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
    cVar4 = (*pcRam_?)(pvVar1);
    if ((cVar4 == '\0') || ((this->fields).isInitialized == 0)) {
      return;
    }
    pPVar5 = (this->fields).progressBar;
    if ((pPVar5 != (ProgressBar *)0x0) &&
       (pPVar6 = (this->fields).targetProgressBar, pPVar6 != (ProgressBar *)0x0)) {
      fVar7 = (pPVar6->fields).progress;
      pfVar8 = &(pPVar5->fields).progress;
      if (*pfVar8 <= fVar7 && fVar7 != *pfVar8) {
        fVar7 = (((this->fields).targetProgressBar)->fields).progress;
        if (fVar7 < 0.0) {
          fVar7 = 0.0;
        }
        else if (_UNK_? < fVar7) {
          fVar7 = _UNK_?;
        }
        (pPVar5->fields).progress = fVar7;
        this_00 = (pPVar5->fields).progressBar;
        if (this_00 == (Scrollbar *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                  (this_00,fVar7,(MethodInfo *)0x0);
      }
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
      fVar7 = (float)(*pcRam_?)();
      pPVar5 = (this->fields).progressBar;
      (this->fields).lerpStart = fVar7;
      if (pPVar5 != (ProgressBar *)0x0) {
        (this->fields).startProgress = (pPVar5->fields).progress;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__HealthbarLerp___LerpProgress_d__8);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        routine = (IEnumerator *)FUN_?(TypeInfo__HealthbarLerp___LerpProgress_d__8);
        bVar9 = iRam_? != 0;
        *(undefined4 *)&routine[1].klass = 0;
        routine[2].klass = (IEnumerator__Class *)this;
        if (bVar9) {
          uVar10 = (uint)((ulonglong)(routine + 2) >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator LerpProgress() */

IEnumerator *
Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_LerpProgress
          (HealthbarLerp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HealthbarLerp___LerpProgress_d__8);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__HealthbarLerp___LerpProgress_d__8);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_OnDisable
               (HealthbarLerp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (HealthbarLerp *)0x0) {
    pvVar1 = (this->fields)._._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
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
    (*pcRam_?)(pvVar1);
    pPVar4 = (this->fields).targetProgressBar;
    if ((pPVar4 != (ProgressBar *)0x0) &&
       (pPVar5 = (this->fields).progressBar, pPVar5 != (ProgressBar *)0x0)) {
      fVar6 = (pPVar4->fields).progress;
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      else if (_UNK_? < fVar6) {
        fVar6 = _UNK_?;
      }
      this_00 = (pPVar5->fields).progressBar;
      (pPVar5->fields).progress = fVar6;
      if (this_00 != (Scrollbar *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<float>_System__Single___float_
                        ,fVar6,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (_UNK_? < fVar6) {
          fVar6 = _UNK_?;
        }
        cVar7 = FUN_?(&(this_00->fields).m_Size,fVar6);
        if (cVar7 != '\0') {
          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_UpdateVisuals
                    (this_00,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_OnEnable
               (HealthbarLerp *this,MethodInfo *method)

{
  pPVar1 = (this->fields).targetProgressBar;
  if ((pPVar1 != (ProgressBar *)0x0) &&
     (pPVar2 = (this->fields).progressBar, pPVar2 != (ProgressBar *)0x0)) {
    value = (pPVar1->fields).progress;
    if (value < 0.0) {
      value = 0.0;
    }
    else if (_UNK_? < value) {
      value = _UNK_?;
    }
    this_00 = (pPVar2->fields).progressBar;
    (pPVar2->fields).progress = value;
    if (this_00 != (Scrollbar *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                (this_00,value,(MethodInfo *)0x0);
      (this->fields).isInitialized = 1;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

