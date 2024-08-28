
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LaserPointer+<DoDeactivateLaserAfterDuration>d__46::
     LaserPointer_DoDeactivateLaserAfterDuration_d_46_MoveNext
               (LaserPointer_DoDeactivateLaserAfterDuration_d_46 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pLVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._t_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pLVar2 != (LaserPointer *)0x0) {
    if (((pLVar2->fields).isActive != 0) &&
       (fVar3 = (this->fields)._t_5__2, fVar3 < (pLVar2->fields).activeDuration)) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      uStack_5 = 0;
      (this->fields)._t_5__2 = fVar4 + fVar3;
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&uStack_5);
      ppOVar7 = &(this->fields).__2__current;
      *ppOVar7 = pOVar6;
      func_?(ppOVar7,pOVar6);
      (this->fields).__1__state = 1;
      return 1;
    }
    pAVar8 = (pLVar2->fields).OnLaserActive;
    (pLVar2->fields).activeDuration = 0.0;
    (pLVar2->fields).isActive = 0;
    if (pAVar8 != (Action_2_Boolean_Boolean_ *)0x0) {
      (*(pAVar8->fields)._._.invoke_impl)
                ((pAVar8->fields)._._.method_code,(pLVar2->fields).isLocal,0,
                 (pAVar8->fields)._._.method);
    }
    return 0;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LaserPointer+<DoDeactivateLaserAfterDuration>d__46::
     LaserPointer_DoDeactivateLaserAfterDuration_d_46_System_Collections_IEnumerator_Reset
               (LaserPointer_DoDeactivateLaserAfterDuration_d_46 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__LaserPointer___DoDeactivateLaserAfterDuration_d__46__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

