
/* Void <AvatarStateChangedHandler>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass95_0::
     MVAvatarLocal_c_DisplayClass95_0__AvatarStateChangedHandler_b__0
               (MVAvatarLocal_c_DisplayClass95_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__SpawnRoleModeType);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__set_Value_MV__Common__SpawnRoleModeType_
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__set_Value_MV__Common__SpawnRoleModeType_
  ;
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    this_00 = (receiver->fields).spawnRoleMode;
    pOVar1 = (this->fields).a;
    if (this_00 != (SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
      if (pOVar1 != (Object *)0x0) {
        pSVar2 = TypeInfo__MV__Common__SpawnRoleModeType;
        if ((pOVar1->klass->_0).element_class ==
            (TypeInfo__MV__Common__SpawnRoleModeType->_0).element_class) {
          pIVar3 = (Int32Enum__Enum *)func_?(pOVar1);
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleReceiverVariable`1[System::Int32Enum]::
          SpawnRoleReceiverVariable_1_System_Int32Enum__set_Value
                    ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_00,*pIVar3,method_00);
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

