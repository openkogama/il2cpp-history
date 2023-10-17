
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial+<OverRideIfDefaultMaterial>d__20
     ::DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20_MoveNext
               (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pDVar1 = this;
  pDVar2 = (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20 *)
           (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (pDVar2 != (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20 *)0x0) {
    if (pDVar2 != (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20 *)0x1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if ((this_00 != (DesktopCubeModelingControllerCubeTutorial *)0x0) &&
       (pCVar3 = (this_00->fields).cubeModelingStateMachine,
       pCVar3 != (CubeModelingStateMachine *)0x0)) {
      uVar4 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                        (pCVar3,(MethodInfo *)0x0);
      if (uVar4 != (this_00->fields).defaultMaterial) {
        return 0;
      }
      pCVar3 = (this_00->fields).cubeModelingStateMachine;
      if (pCVar3 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  (pCVar3,0x17,(MethodInfo *)0x0);
        pCVar3 = (this_00->fields).cubeModelingStateMachine;
        if (pCVar3 != (CubeModelingStateMachine *)0x0) {
          this = (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20 *)0x0;
          uVar4 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                            (pCVar3,(MethodInfo *)0x0);
          this = (DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial_d_20 *)
                 (uint)uVar4;
          DesktopCubeModelingControllerCubeTutorial::
          DesktopCubeModelingControllerCubeTutorial_DoSetMaterial(this_00,uVar4,(MethodInfo *)this);
          return 0;
        }
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  (this->fields).__1__state = -1;
  this = pDVar2;
  pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&this);
  (pDVar1->fields).__2__current = pOVar7;
  func_?(&(pDVar1->fields).__2__current,pOVar7);
  (pDVar1->fields).__1__state = 1;
  return 1;
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
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

