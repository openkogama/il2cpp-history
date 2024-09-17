
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  pGVar2 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    break;
  case 1:
    (this->fields).__1__state = -1;
    this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(this->fields)._i_5__2;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pGVar1->fields)._i_5__2 = fVar3 + (float)this;
    break;
  case 2:
    (this->fields).__1__state = -1;
    this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(this->fields)._i_5__2;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pGVar1->fields)._i_5__2 = fVar3 + (float)this;
    cVar4 = (int)pGVar2 < 0;
    bVar5 = pGVar2 == (GameMeterUpdatedEffect *)0x0;
    if (!bVar5) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  cVar4 = (int)pGVar2 < 0;
  bVar5 = pGVar2 == (GameMeterUpdatedEffect *)0x0;
  if (!bVar5) {
    fVar3 = (pGVar2->fields).scaleTime;
    pfVar6 = &(pGVar1->fields)._i_5__2;
    pRVar7 = (pGVar2->fields).scaleTarget;
    if (fVar3 < *pfVar6 || fVar3 == *pfVar6) {
      cVar4 = (int)pRVar7 < 0;
      bVar5 = pRVar7 == (RectTransform *)0x0;
      if (!bVar5) {
        unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar7,(MethodInfo *)0x0);
        RStack_8.m_YMin = (pGVar2->fields).startSize.x;
        RStack_8.m_Width = (pGVar2->fields).startSize.y;
        RStack_8.m_Height = (pGVar2->fields).startSize.z;
        puVar9 = (undefined8 *)func_?(&stack0xffffffd8,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        fStack_10 = (float)*puVar9;
        fStack_11 = (float)((ulonglong)*puVar9 >> 0x20);
        RStack_8.m_XMin = RStack_8.m_Height + *(float *)(puVar9 + 1) * fVar3;
        cVar4 = (int)unaff_EBX < 0;
        bVar5 = unaff_EBX == (Transform *)0x0;
        if (!bVar5) {
          value_00.y = RStack_8.m_Width + fStack_11 * fVar3;
          value_00.x = RStack_8.m_YMin + fStack_10 * fVar3;
          value_00.z = RStack_8.m_XMin;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar6 = &(pGVar1->fields)._i_5__2;
          pRVar7 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar6 || fVar3 == *pfVar6) {
            cVar4 = (int)pRVar7 < 0;
            bVar5 = pRVar7 == (RectTransform *)0x0;
            if (!bVar5) {
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar7,(MethodInfo *)0x0);
              cVar4 = (int)pTVar12 < 0;
              bVar5 = pTVar12 == (Transform *)0x0;
              if (!bVar5) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar12,(pGVar2->fields).startSize,(MethodInfo *)0x0);
                this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
                pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&this);
                (pGVar1->fields).__2__current = pOVar13;
                func_?(&(pGVar1->fields).__2__current,pOVar13);
                (pGVar1->fields).__1__state = 3;
                return 1;
              }
            }
          }
          else {
            cVar4 = (int)pRVar7 < 0;
            bVar5 = pRVar7 == (RectTransform *)0x0;
            if (!bVar5) {
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar7,(MethodInfo *)0x0);
              cVar4 = (int)pTVar12 < 0;
              bVar5 = pTVar12 == (Transform *)0x0;
              if (!bVar5) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          ((Vector3 *)&stack0xffffffd8,pTVar12,(MethodInfo *)0x0);
                this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
                pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&this);
                (pGVar1->fields).__2__current = pOVar13;
                func_?(&(pGVar1->fields).__2__current,pOVar13);
                (pGVar1->fields).__1__state = 2;
                return 1;
              }
            }
          }
        }
      }
    }
    else {
      cVar4 = (int)pRVar7 < 0;
      bVar5 = pRVar7 == (RectTransform *)0x0;
      if (!bVar5) {
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar7,(MethodInfo *)0x0);
        uVar14 = (pGVar2->fields).startSize.x;
        uVar15 = (pGVar2->fields).startSize.y;
        RStack_8.m_XMin = (pGVar2->fields).startSize.z;
        puVar9 = (undefined8 *)func_?(&stack0xffffffd8,0);
        RStack_8._4_8_ = *puVar9;
        RStack_8.m_Height = *(float *)(puVar9 + 1);
        fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
                 (pGVar2->fields).scaleStrength;
        RStack_8.m_XMin = RStack_8.m_XMin + RStack_8.m_Height * fVar3;
        cVar4 = (int)pTVar12 < 0;
        bVar5 = pTVar12 == (Transform *)0x0;
        unaff_EBX = (Transform *)0x0;
        if (!bVar5) {
          value.y = (float)uVar15 + RStack_8.m_Width * fVar3;
          value.x = (float)uVar14 + RStack_8.m_YMin * fVar3;
          value.z = RStack_8.m_XMin;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar12,value,(MethodInfo *)0x0);
          this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
          pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&this);
          (pGVar1->fields).__2__current = pOVar13;
          func_?(&(pGVar1->fields).__2__current,pOVar13);
          (pGVar1->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  cVar16 = '\0';
  cVar17 = '\0';
  pcVar18 = (char *)func_?();
  unaff_EBX[1].monitor = (MonitorData *)(int)(longlong)extraout_ST1;
  unaff_EBX[1].fields = (Transform__Fields)(int)((ulonglong)(longlong)extraout_ST1 >> 0x20);
  if (bVar5 || cVar16 != cVar4) {
    *pcVar18 = *pcVar18 + (char)pcVar18 + cVar17;
    unaff_EBX[1].monitor = (MonitorData *)((uint)unaff_EBX[1].monitor | 0xADDR);
    uVar19 = func_?(&TypeInfo__System__NotSupportedException,pGVar1);
    this_00 = (NotSupportedException *)func_?(uVar19);
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_00,(MethodInfo *)0x0);
    uVar19 = func_?(&
                             MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                            );
    func_?(this_00,uVar19);
    pcVar20 = (code *)swi(3);
    bVar21 = (*pcVar20)();
    return bVar21;
  }
  func_?();
  func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
  func_?(&TypeInfo__UnityEngine__WaitForSeconds);
  pGVar1 = this;
  uRam_? = 1;
  iVar22 = (this->fields).__1__state;
  pGVar2 = (this->fields).__4__this;
  if (iVar22 != 0) {
    if (iVar22 == 1) {
      (this->fields).__1__state = -1;
      if ((pGVar2 != (GameMeterUpdatedEffect *)0x0) &&
         (pRVar7 = (pGVar2->fields).scaleTarget, pRVar7 != (RectTransform *)0x0)) {
        (*(code *)pRVar7->klass[1]._1.thread_static_fields_size)
                  (pRVar7,(pGVar2->fields).startSize.z,pGVar2[1].klass,pGVar2[1].monitor,
                   pGVar2[1].fields._._._._._.m_CachedPtr,
                   pRVar7->klass[1]._1.thread_static_fields_offset);
        pSVar23 = (SubscribableVariable_1_System_Single_ *)
                  func_?(TypeInfo__UnityEngine__WaitForSeconds);
        SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                  (pSVar23,0.3,(MethodInfo *)0x0);
        (pGVar1->fields).__2__current = (Object *)pSVar23;
        func_?(&(pGVar1->fields).__2__current,pSVar23);
        (pGVar1->fields).__1__state = 2;
        return 1;
      }
      goto code_?;
    }
    if (iVar22 != 2) {
      uRam_? = 1;
      return 0;
    }
  }
  (this->fields).__1__state = -1;
  if (pGVar2 != (GameMeterUpdatedEffect *)0x0) {
    if ((*(char *)&(pGVar2->fields).startSize.x == '\0') ||
       (*(char *)&pGVar2[1].fields._._.m_CancellationTokenSource == '\0')) {
      return 0;
    }
    pRVar7 = (pGVar2->fields).scaleTarget;
    pRVar24 = mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::
              Nullable_1_UnityEngine_Rect__get_Value
                        (&RStack_8,
                         (Nullable_1_UnityEngine_Rect_ *)
                         &pGVar2[1].fields._._.m_CancellationTokenSource,
                         MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
    if (pRVar7 != (RectTransform *)0x0) {
      (*(code *)pRVar7->klass[1]._1.thread_static_fields_size)
                (pRVar7,pRVar24->m_XMin,pRVar24->m_YMin);
      pSVar23 = (SubscribableVariable_1_System_Single_ *)
                func_?(TypeInfo__UnityEngine__WaitForSeconds);
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                (pSVar23,0.3,(MethodInfo *)0x0);
      (pGVar1->fields).__2__current = (Object *)pSVar23;
      func_?();
      (pGVar1->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  bVar21 = (*pcVar20)();
  return bVar21;
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
  func_?(&
                  MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

