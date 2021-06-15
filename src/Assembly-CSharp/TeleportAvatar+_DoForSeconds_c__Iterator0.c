
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TeleportAvatar+<DoForSeconds>c__Iterator0::
     TeleportAvatar_DoForSeconds_c_Iterator0_MoveNext
               (TeleportAvatar_DoForSeconds_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    fVar2 = 0.0;
    (this->fields)._t___0 = 0.0;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    fVar2 = (this->fields)._t___0;
  }
  fVar3 = (this->fields).duration;
  this_00 = (UnityAction_1_System_Single_ *)(this->fields).body;
  if (fVar3 <= fVar2) {
    if (this_00 != (UnityAction_1_System_Single_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single__Invoke(this_00,1.0,(MethodInfo *)0x0);
      (this->fields)._PC = -1;
      return 0;
    }
  }
  else if (this_00 != (UnityAction_1_System_Single_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single__Invoke(this_00,fVar2 / fVar3,(MethodInfo *)0x0);
    fVar2 = (this->fields)._t___0;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    uStack_4 = 0;
    (this->fields)._t___0 = fVar3 + fVar2;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&uStack_4);
    (this->fields)._current = pOVar5;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void Reset() */

void Assembly-CSharp.dll::TeleportAvatar+<DoForSeconds>c__Iterator0::
     TeleportAvatar_DoForSeconds_c_Iterator0_Reset
               (TeleportAvatar_DoForSeconds_c_Iterator0 *this,MethodInfo *method)

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

