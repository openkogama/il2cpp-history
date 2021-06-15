
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::pTween+<To>c__Iterator0::pTween_To_c_Iterator0_MoveNext
               (pTween_To_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = (this->fields).duration;
    (this->fields)._start___0 = fVar2;
    (this->fields)._end___0 = fVar3 + fVar2;
    fVar4 = _UNK_? / fVar3;
    (this->fields)._startMulDurationInv___0 = fVar2 / fVar3;
    (this->fields)._durationInv___0 = fVar4;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields)._t___1 = fVar3;
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)(this->fields).callback;
  if ((this->fields)._end___0 <= fVar3) {
    if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
      SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                (this_00,(this->fields).endValue,MethodInfo__System__Action<float>__Invoke_float_);
      (this->fields)._PC = -1;
      return 0;
    }
  }
  else {
    fVar3 = (this->fields).startValue;
    fVar4 = (this->fields)._startMulDurationInv___0;
    fVar2 = (this->fields).endValue;
    fVar5 = (this->fields)._t___1;
    fVar6 = (this->fields)._durationInv___0;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                      (fVar3,fVar2,fVar6 * fVar5 - fVar4,(MethodInfo *)0x0);
    if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
      SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                (this_00,fVar3,MethodInfo__System__Action<float>__Invoke_float_);
      pOVar7 = (Object *)func_?();
      (this->fields)._current = pOVar7;
      if ((this->fields)._disposing == 0) {
        (this->fields)._PC = 1;
      }
      return 1;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void Reset() */

void Assembly-CSharp.dll::pTween+<To>c__Iterator0::pTween_To_c_Iterator0_Reset
               (pTween_To_c_Iterator0 *this,MethodInfo *method)

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

