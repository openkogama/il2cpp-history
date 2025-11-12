
/* Void <AvatarStateChangedHandler>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass96_0::
     MVAvatarLocal_c_DisplayClass96_0__AvatarStateChangedHandler_b__0
               (MVAvatarLocal_c_DisplayClass96_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__SpawnRoleModeType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__set_Value_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__set_Value_MV__Common__SpawnRoleModeType_
  ;
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    pSVar2 = (receiver->fields).spawnRoleMode;
    pOVar3 = (this->fields).a;
    if ((pSVar2 != (SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
       (pOVar3 != (Object *)0x0)) {
      if ((pOVar3->klass->_0).element_class !=
          (TypeInfo__MV__Common__SpawnRoleModeType->_0).element_class) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar5 = *(int32_t *)&pOVar3[1].klass;
      pSVar6 = (pSVar2->fields).spawnRoleDataReceiver;
      if (pSVar6 != (SpawnRoleDataReceiver *)0x0) {
        if ((pSVar6->fields).isActive == 0) {
          uVar7 = func_?(&TypeInfo__System__Exception);
          this_00 = (Exception *)func_?(uVar7);
          message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
          mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
          FUN_?(this_00,pMVar1);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pSVar8 = (pSVar2->fields).subscribableVariable;
        if (pSVar8 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
          pAVar9 = (pSVar8->fields)._.OnChange;
          (pSVar8->fields)._.value = iVar5;
          if (pAVar9 != (Action_1_MV_Common_SpawnRoleModeType_ *)0x0) {
            pAVar9 = (pSVar8->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pAVar9->fields)._._.invoke_impl)
                      ((pAVar9->fields)._._.method_code,iVar5,(pAVar9->fields)._._.method);
            return;
          }
          return;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

