
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterShake+<ShakeAnimation>d__5::
     GameMeterShake_ShakeAnimation_d_5_MoveNext
               (GameMeterShake_ShakeAnimation_d_5 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pGVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._shakeTime_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  pfVar3 = &(this->fields)._shakeTime_5__2;
  bVar4 = _UNK_? == *pfVar3;
  bVar5 = _UNK_? < *pfVar3;
  (this->fields).__1__state = -1;
  if (bVar5 || bVar4) {
    if (pGVar2 != (GameMeterShake *)0x0) {
      pRVar6 = (pGVar2->fields).rectTransform;
      if (pRVar6 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (pRVar6,(pGVar2->fields).startPos,(MethodInfo *)0x0);
        (pGVar2->fields).shakeCoroutine = (IEnumerator *)0x0;
        func_?(&(pGVar2->fields).shakeCoroutine,0);
        return 0;
      }
    }
  }
  else {
    fVar7 = MathFunctions::MathFunctions_SmoothInverseLerp
                      (0.0,0.5,(this->fields)._shakeTime_5__2,(MethodInfo *)0x0);
    if (pGVar2 != (GameMeterShake *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range(-10.0,10.0,(MethodInfo *)0x0);
      fVar8 = -10.0;
      puVar9 = &UNK_?;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                         (-10.0,10.0,(MethodInfo *)0x0);
      pRVar6 = (pGVar2->fields).rectTransform;
      if (pRVar6 != (RectTransform *)0x0) {
        value.y = fVar10 * (1.0 - fVar7) + fVar8;
        value.x = (float)puVar9;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (pRVar6,value,(MethodInfo *)0x0);
        fVar7 = (this->fields)._shakeTime_5__2;
        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)0x0;
        (this->fields)._shakeTime_5__2 = fVar10 + fVar7;
        func_?();
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameMeterShake+<ShakeAnimation>d__5::
     GameMeterShake_ShakeAnimation_d_5_System_Collections_IEnumerator_Reset
               (GameMeterShake_ShakeAnimation_d_5 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__GameMeterShake___ShakeAnimation_d__5__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

