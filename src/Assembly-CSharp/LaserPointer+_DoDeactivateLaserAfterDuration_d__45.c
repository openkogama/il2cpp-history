
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LaserPointer+<DoDeactivateLaserAfterDuration>d__45::
     LaserPointer_DoDeactivateLaserAfterDuration_d_45_MoveNext
               (LaserPointer_DoDeactivateLaserAfterDuration_d_45 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._t_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (this_00 != (LaserPointer *)0x0) {
    if (((this_00->fields).isActive != 0) &&
       (fVar2 = (this->fields)._t_5__2, fVar2 < (this_00->fields).activeDuration)) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      uStack_4 = 0;
      (this->fields)._t_5__2 = fVar3 + fVar2;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&uStack_4);
      ppOVar6 = &(this->fields).__2__current;
      *ppOVar6 = pOVar5;
      func_?(ppOVar6,pOVar5);
      (this->fields).__1__state = 1;
      return 1;
    }
    (this_00->fields).activeDuration = 0.0;
    LaserPointer::LaserPointer_SetLaserActiveState(this_00,0,(MethodInfo *)0x0);
    return 0;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
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
  func_?(&
                  MethodInfo__LaserPointer___DoDeactivateLaserAfterDuration_d__45__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

