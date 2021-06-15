
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::
     DesktopCubeModelingControllerCubeTutorial+<OverRideIfDefaultMaterial>c__Iterator0::
     DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_c_Iterator0_MoveNext
               (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_c_Iterator0
                *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    this = (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_c_Iterator0 *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    (pDVar1->fields)._current = pOVar3;
    if ((pDVar1->fields)._disposing == 0) {
      (pDVar1->fields)._PC = 1;
    }
    return 1;
  }
  if (iVar2 != 1) {
    return 0;
  }
  pDVar4 = (this->fields)._this;
  if ((pDVar4 != (DesktopCubeModelingControllerCubeTutorial *)0x0) &&
     (pCVar5 = (pDVar4->fields).cubeModelingStateMachine, pCVar5 != (CubeModelingStateMachine *)0x0)
     ) {
    uVar6 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                      (pCVar5,(MethodInfo *)0x0);
    pDVar4 = (pDVar1->fields)._this;
    if (pDVar4 != (DesktopCubeModelingControllerCubeTutorial *)0x0) {
      if (uVar6 != (pDVar4->fields).defaultMaterial) {
code_?:
        (pDVar1->fields)._PC = -1;
        return 0;
      }
      if ((pDVar4 != (DesktopCubeModelingControllerCubeTutorial *)0x0) &&
         (pCVar5 = (pDVar4->fields).cubeModelingStateMachine,
         pCVar5 != (CubeModelingStateMachine *)0x0)) {
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  (pCVar5,0x17,(MethodInfo *)0x0);
        pDVar4 = (pDVar1->fields)._this;
        if ((pDVar4 != (DesktopCubeModelingControllerCubeTutorial *)0x0) &&
           (pCVar5 = (pDVar4->fields).cubeModelingStateMachine,
           pCVar5 != (CubeModelingStateMachine *)0x0)) {
          this = (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_c_Iterator0 *)
                 0x0;
          uVar6 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                            (pCVar5,(MethodInfo *)0x0);
          this = (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_c_Iterator0 *)
                 CONCAT31(this._1_3_,uVar6);
          if (pDVar4 != (DesktopCubeModelingControllerCubeTutorial *)0x0) {
            method = (MethodInfo *)this;
            this = (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_c_Iterator0
                    *)pDVar4;
            DesktopCubeModelingControllerCubeTutorial::
            DesktopCubeModelingControllerCubeTutorial_DoSetMaterial(pDVar4,uVar6,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void Reset() */

void Assembly-CSharp.dll::
     DesktopCubeModelingControllerCubeTutorial+<OverRideIfDefaultMaterial>c__Iterator0::
     DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_c_Iterator0_Reset
               (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_c_Iterator0
                *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

