
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::FadingTween+<TestFade>d__5::
     FadingTween_TestFade_d_5_MoveNext(FadingTween_TestFade_d_5 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
    bVar3 = iRam_? != 0;
    *(undefined4 *)&pOVar2[1].klass = 0x40000000;
    (this->fields).__2__current = pOVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (this_00 != (FadingTween *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__UGUI__Portal__Scripts__FadingTween___FadeOut_b__3_0__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__DG__Tweening__TweenCallback);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this_00,
                 MethodInfo__UGUI__Portal__Scripts__FadingTween___FadeOut_b__3_0__,(MethodInfo *)0x0
                );
      FadingTween::FadingTween_Fade
                (this_00,0.0,_UNK_?,(TweenCallback *)this_01,(MethodInfo *)0x0);
      pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
      bVar3 = iRam_? != 0;
      *(undefined4 *)&pOVar2[1].klass = 0x40400000;
      (this->fields).__2__current = pOVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      (this->fields).__1__state = 2;
      return 1;
    }
code_?:
    FUN_?();
    pcVar8 = (code *)swi(3);
    bVar9 = (*pcVar8)();
    return bVar9;
  }
  if (iVar1 == 2) {
    (this->fields).__1__state = -1;
    if (this_00 == (FadingTween *)0x0) goto code_?;
    FadingTween::FadingTween_FadeIn(this_00,_UNK_?,(MethodInfo *)0x0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::FadingTween+<TestFade>d__5::
     FadingTween_TestFade_d_5_System_Collections_IEnumerator_Reset
               (FadingTween_TestFade_d_5 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__UGUI__Portal__Scripts__FadingTween___TestFade_d__5__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

