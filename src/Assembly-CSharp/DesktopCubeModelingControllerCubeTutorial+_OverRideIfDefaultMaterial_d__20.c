
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial+<OverRideIfDefaultMaterial>d__20
     ::DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20_MoveNext
               (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20 *this,
               MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    lVar2 = lRam_?;
    pOVar3 = (Object *)0x0;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar3 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
          lVar2 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar6 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
      }
    }
    else {
      pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    bVar7 = iRam_? != 0;
    (this->fields).__2__current = pOVar3;
    if (bVar7) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      lVar2 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar6 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if ((this_00 != (DesktopCubeModelingControllerCubeTutorial *)0x0) &&
       (pCVar8 = (this_00->fields).cubeModelingStateMachine,
       pCVar8 != (CubeModelingStateMachine *)0x0)) {
      uVar9 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                        (pCVar8,(MethodInfo *)0x0);
      if (uVar9 != (this_00->fields).defaultMaterial) {
        return 0;
      }
      pCVar8 = (this_00->fields).cubeModelingStateMachine;
      if (pCVar8 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  (pCVar8,0x17,(MethodInfo *)0x0);
        pCVar8 = (this_00->fields).cubeModelingStateMachine;
        if (pCVar8 != (CubeModelingStateMachine *)0x0) {
          uVar9 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                            (pCVar8,(MethodInfo *)0x0);
          TerrainCubeModelingControllerTutorial::TerrainCubeModelingControllerTutorial_SetMaterial
                    ((TerrainCubeModelingControllerTutorial *)this_00,uVar9,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
    FUN_?();
    pcVar10 = (code *)swi(3);
    bVar11 = (*pcVar10)();
    return bVar11;
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial+<OverRideIfDefaultMaterial>d__20
     ::
     DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20_System_Collections_IEnumerator_Reset
               (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20 *this,
               MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

