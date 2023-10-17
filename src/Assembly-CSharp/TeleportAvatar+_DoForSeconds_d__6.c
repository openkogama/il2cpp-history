
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TeleportAvatar+<DoForSeconds>d__6::
     TeleportAvatar_DoForSeconds_d_6_MoveNext
               (TeleportAvatar_DoForSeconds_d_6 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    (this->fields)._t_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fVar2 = (this->fields).duration;
  pfVar3 = &(this->fields)._t_5__2;
  pTVar4 = (this->fields).body;
  (this->fields).__1__state = -1;
  if (fVar2 < *pfVar3 || fVar2 == *pfVar3) {
    if (pTVar4 != (TeleportAvatar_ActionDelegate *)0x0) {
      (*(pTVar4->fields)._._.invoke_impl)
                ((pTVar4->fields)._._.method_code,0x3f800000,(pTVar4->fields)._._.method);
      return 0;
    }
  }
  else if (pTVar4 != (TeleportAvatar_ActionDelegate *)0x0) {
    (*(pTVar4->fields)._._.invoke_impl)
              ((pTVar4->fields)._._.method_code,(this->fields)._t_5__2 / (this->fields).duration,
               (pTVar4->fields)._._.method);
    fVar2 = (this->fields)._t_5__2;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    uStack_6 = 0;
    (this->fields)._t_5__2 = fVar5 + fVar2;
    pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&uStack_6);
    (this->fields).__2__current = pOVar7;
    func_?(&(this->fields).__2__current,pOVar7);
    (this->fields).__1__state = 1;
    return 1;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TeleportAvatar+<DoForSeconds>d__6::
     TeleportAvatar_DoForSeconds_d_6_System_Collections_IEnumerator_Reset
               (TeleportAvatar_DoForSeconds_d_6 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__TeleportAvatar___DoForSeconds_d__6__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

