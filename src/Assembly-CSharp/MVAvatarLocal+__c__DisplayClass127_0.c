
/* Void <InitializeHealth>b__1(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass127_0::
     MVAvatarLocal_c_DisplayClass127_0__InitializeHealth_b__1
               (MVAvatarLocal_c_DisplayClass127_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
  ;
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    this_00 = (receiver->fields).health;
    pOVar1 = (this->fields).health;
    if (this_00 != (SpawnRoleReceiverVariable_1_System_Single_ *)0x0) {
      if (pOVar1 != (Object *)0x0) {
        pSVar2 = TypeInfo__System__Single;
        if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pfVar3 = (float *)func_?(pOVar1);
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleReceiverVariable`1[System::Single]::
          SpawnRoleReceiverVariable_1_System_Single__set_Value(this_00,*pfVar3,method_00);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pOVar1 = extraout_ECX;
  pSVar2 = extraout_EDX;
code_?:
  func_?(pOVar1,pSVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

