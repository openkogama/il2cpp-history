
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TeleportAvatar+<DoForSeconds>d__14::
     TeleportAvatar_DoForSeconds_d_14_MoveNext
               (TeleportAvatar_DoForSeconds_d_14 *this,MethodInfo *method)

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
  fVar2 = (this->fields)._t_5__2;
  fVar3 = (this->fields).duration;
  pTVar4 = (this->fields).body;
  (this->fields).__1__state = -1;
  if (fVar3 <= fVar2) {
    if (pTVar4 != (TeleportAvatar_ActionDelegate *)0x0) {
      (*(pTVar4->fields)._._.invoke_impl)
                ((pTVar4->fields)._._.method_code,0x3f800000,(pTVar4->fields)._._.method);
      return 0;
    }
  }
  else if (pTVar4 != (TeleportAvatar_ActionDelegate *)0x0) {
    (*(pTVar4->fields)._._.invoke_impl)
              ((pTVar4->fields)._._.method_code,fVar2 / fVar3,(pTVar4->fields)._._.method);
    fVar2 = (this->fields)._t_5__2;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    uStack_5 = 0;
    (this->fields)._t_5__2 = fVar3 + fVar2;
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&uStack_5);
    ppOVar7 = &(this->fields).__2__current;
    *ppOVar7 = pOVar6;
    func_?(ppOVar7,pOVar6);
    (this->fields).__1__state = 1;
    return 1;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TeleportAvatar+<DoForSeconds>d__14::
     TeleportAvatar_DoForSeconds_d_14_System_Collections_IEnumerator_Reset
               (TeleportAvatar_DoForSeconds_d_14 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__TeleportAvatar___DoForSeconds_d__14__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

