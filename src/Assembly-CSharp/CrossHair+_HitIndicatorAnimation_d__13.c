
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::CrossHair+<HitIndicatorAnimation>d__13::
     CrossHair_HitIndicatorAnimation_d_13_MoveNext
               (CrossHair_HitIndicatorAnimation_d_13 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pCVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._timer_5__2 = 0.0;
    if ((pCVar2 == (CrossHair *)0x0) ||
       (pAVar3 = (pCVar2->fields).fadeCurve, pAVar3 == (AnimationCurve *)0x0))
    goto code_?;
    pKVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                        (pAVar3,(MethodInfo *)0x0);
    pAVar3 = (pCVar2->fields).fadeCurve;
    if (pAVar3 == (AnimationCurve *)0x0) goto code_?;
    pvVar5 = (pAVar3->fields).m_Ptr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar3,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    pcRam_? = pcVar6;
    iVar1 = (*pcRam_?)(pvVar5);
    if (pKVar4 == (Keyframe__Array *)0x0) goto code_?;
    if ((uint)pKVar4->max_length <= iVar1 - 1U) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    (this->fields)._targetTime_5__3 = pKVar4->vector[(longlong)iVar1 + -1].m_Time;
    pIVar9 = (pCVar2->fields).crossHair;
    if (pIVar9 == (Image *)0x0) goto code_?;
    puVar10 = (undefined8 *)
              (*(pIVar9->klass->vtable).get_color.methodPtr)
                        (&uStack_11,pIVar9,(pIVar9->klass->vtable).get_color.method);
    fVar12 = (this->fields)._timer_5__2;
    fVar13 = (this->fields)._targetTime_5__3;
    uVar8 = *puVar10;
    uVar14 = puVar10[1];
    (this->fields)._hitIndicatorColor_5__4.r = (float)(int)uVar8;
    (this->fields)._hitIndicatorColor_5__4.g = (float)(int)((ulonglong)uVar8 >> 0x20);
    (this->fields)._hitIndicatorColor_5__4.b = (float)(int)uVar14;
    (this->fields)._hitIndicatorColor_5__4.a = (float)(int)((ulonglong)uVar14 >> 0x20);
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    fVar12 = (this->fields)._timer_5__2;
    fVar13 = (this->fields)._targetTime_5__3;
    if (pCVar2 == (CrossHair *)0x0) goto code_?;
  }
  if (fVar12 < fVar13) {
    pAVar3 = (pCVar2->fields).fadeCurve;
    if (pAVar3 != (AnimationCurve *)0x0) {
      pvVar5 = (pAVar3->fields).m_Ptr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar3,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      fVar12 = (this->fields)._timer_5__2;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      pcRam_? = pcVar6;
      fVar12 = (float)(*pcRam_?)(pvVar5,fVar12);
      pIVar9 = (pCVar2->fields).hitIndicatorImage;
      (this->fields)._hitIndicatorColor_5__4.a = fVar12;
      if (pIVar9 != (Image *)0x0) {
        uStack_11._0_4_ = (this->fields)._hitIndicatorColor_5__4.r;
        uStack_11._4_4_ = (this->fields)._hitIndicatorColor_5__4.g;
        uStack_15._0_4_ = (this->fields)._hitIndicatorColor_5__4.b;
        uStack_15._4_4_ = (this->fields)._hitIndicatorColor_5__4.a;
        (*(pIVar9->klass->vtable).set_color.methodPtr)
                  (pIVar9,&uStack_11,(pIVar9->klass->vtable).set_color.method);
        fVar12 = (this->fields)._timer_5__2;
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        pcRam_? = pcVar6;
        fVar13 = (float)(*pcRam_?)();
        bVar16 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        (this->fields)._timer_5__2 = fVar13 + fVar12;
        if (bVar16) {
          uVar17 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
          do {
            uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
            puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
            LOCK();
            bVar16 = uVar19 == *puVar20;
            if (bVar16) {
              *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
            }
            UNLOCK();
          } while (!bVar16);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
  else {
    pIVar9 = (pCVar2->fields).hitIndicatorImage;
    if (pIVar9 != (Image *)0x0) {
      uStack_11 = 0;
      uStack_15 = 0;
      (*(pIVar9->klass->vtable).set_color.methodPtr)
                (pIVar9,&uStack_11,(pIVar9->klass->vtable).set_color.method);
      return 0;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::CrossHair+<HitIndicatorAnimation>d__13::
     CrossHair_HitIndicatorAnimation_d_13_System_Collections_IEnumerator_Reset
               (CrossHair_HitIndicatorAnimation_d_13 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__CrossHair___HitIndicatorAnimation_d__13__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

