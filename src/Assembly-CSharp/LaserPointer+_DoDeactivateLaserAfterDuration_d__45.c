
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LaserPointer+<DoDeactivateLaserAfterDuration>d__45::
     LaserPointer_DoDeactivateLaserAfterDuration_d_45_MoveNext
               (LaserPointer_DoDeactivateLaserAfterDuration_d_45 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pOVar2 = (Object *)0x0;
  pLVar3 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._t_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pLVar3 != (LaserPointer *)0x0) {
    if (((pLVar3->fields).isActive != 0) &&
       (fVar4 = (pLVar3->fields).activeDuration, pfVar5 = &(this->fields)._t_5__2,
       *pfVar5 <= fVar4 && fVar4 != *pfVar5)) {
      fVar4 = (this->fields)._t_5__2;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      uStackX_8 = 0;
      (this->fields)._t_5__2 = fVar6 + fVar4;
      lVar7 = lRam_?;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar2 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
        }
      }
      else {
        pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar12 = iRam_? != 0;
      (this->fields).__2__current = pOVar2;
      if (bVar12) {
        uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
    pAVar13 = (pLVar3->fields).OnLaserActive;
    (pLVar3->fields).activeDuration = 0.0;
    (pLVar3->fields).isActive = 0;
    if (pAVar13 != (Action_2_Boolean_Boolean_ *)0x0) {
      (*(pAVar13->fields)._._.invoke_impl)
                ((pAVar13->fields)._._.method_code,(pLVar3->fields).isLocal,0,
                 (pAVar13->fields)._._.method);
    }
    return 0;
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LaserPointer+<DoDeactivateLaserAfterDuration>d__45::
     LaserPointer_DoDeactivateLaserAfterDuration_d_45_System_Collections_IEnumerator_Reset
               (LaserPointer_DoDeactivateLaserAfterDuration_d_45 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__LaserPointer___DoDeactivateLaserAfterDuration_d__45__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

