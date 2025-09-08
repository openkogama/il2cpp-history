
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
    if ((pCVar2 != (CrossHair *)0x0) &&
       (pAVar3 = (pCVar2->fields).fadeCurve, pAVar3 != (AnimationCurve *)0x0)) {
      pKVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                         (pAVar3,(MethodInfo *)0x0);
      pAVar3 = (pCVar2->fields).fadeCurve;
      if ((pAVar3 != (AnimationCurve *)0x0) &&
         (iVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                   AnimationCurve_get_length(pAVar3,(MethodInfo *)0x0),
         pKVar4 != (Keyframe__Array *)0x0)) {
        if (pKVar4->max_length <= iVar5 - 1U) goto code_?;
        fVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::
                 Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                           ((KeyValuePair_2_System_Single_System_Single_ *)
                            (pKVar4->vector + iVar5 + -1),(MethodInfo *)0x0);
        (this->fields)._targetTime_5__3 = fVar6;
        pIVar7 = (pCVar2->fields).crossHair;
        if (pIVar7 != (Image *)0x0) {
          pfVar8 = (float *)(*(code *)(pIVar7->klass->vtable).get_color.method)();
          fVar6 = (this->fields)._targetTime_5__3;
          fVar9 = pfVar8[1];
          fVar10 = pfVar8[2];
          fVar11 = pfVar8[3];
          (this->fields)._hitIndicatorColor_5__4.r = *pfVar8;
          (this->fields)._hitIndicatorColor_5__4.g = fVar9;
          (this->fields)._hitIndicatorColor_5__4.b = fVar10;
          (this->fields)._hitIndicatorColor_5__4.a = fVar11;
          fVar9 = (this->fields)._timer_5__2;
          goto code_?;
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    fVar9 = (this->fields)._timer_5__2;
    fVar6 = (this->fields)._targetTime_5__3;
    if (pCVar2 != (CrossHair *)0x0) {
code_?:
      if (fVar6 <= fVar9) {
        pIVar7 = (pCVar2->fields).hitIndicatorImage;
        if (pIVar7 != (Image *)0x0) {
          (*(code *)(pIVar7->klass->vtable).set_color.method)(pIVar7,0,0);
          return 0;
        }
      }
      else {
        pAVar3 = (pCVar2->fields).fadeCurve;
        if (pAVar3 != (AnimationCurve *)0x0) {
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar3,(this->fields)._timer_5__2,(MethodInfo *)0x0);
          pIVar7 = (pCVar2->fields).hitIndicatorImage;
          (this->fields)._hitIndicatorColor_5__4.a = fVar6;
          if (pIVar7 != (Image *)0x0) {
            (*(code *)(pIVar7->klass->vtable).set_color.method)();
            fVar6 = (this->fields)._timer_5__2;
            fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            (this->fields).__2__current = (Object *)0x0;
            (this->fields)._timer_5__2 = fVar9 + fVar6;
            func_?(&(this->fields).__2__current,0);
            (this->fields).__1__state = 1;
            return 1;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
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
  func_?(&
                  MethodInfo__CrossHair___HitIndicatorAnimation_d__13__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

