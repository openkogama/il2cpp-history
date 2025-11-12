
/* Void <InitializeShield>b__1(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass125_0::
     MVAvatarLocal_c_DisplayClass125_0__InitializeShield_b__1
               (MVAvatarLocal_c_DisplayClass125_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
  ;
  if (receiver != (SpawnRoleDataReceiver *)0x0) {
    pSVar2 = (receiver->fields).shield;
    pOVar3 = (this->fields).shield;
    if ((pSVar2 != (SpawnRoleReceiverVariable_1_System_Single_ *)0x0) && (pOVar3 != (Object *)0x0))
    {
      pOVar4 = pOVar3->klass;
      if ((pOVar4->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pSVar6 = (pSVar2->fields).spawnRoleDataReceiver;
      if (pSVar6 != (SpawnRoleDataReceiver *)0x0) {
        if ((pSVar6->fields).isActive == 0) {
          uVar7 = func_?(&TypeInfo__System__Exception,pOVar4,
                                      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__set_Value_float_
                                      ,pSVar2,unaff_RDI);
          this_00 = (Exception *)func_?(uVar7);
          message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
          mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
          FUN_?(this_00,pMVar1);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pSVar8 = (pSVar2->fields).subscribableVariable;
        if (pSVar8 != (SubscribableVariable_1_System_Single_ *)0x0) {
          pAVar9 = (pSVar8->fields)._.OnChange;
          (pSVar8->fields)._.value = *(float *)&pOVar3[1].klass;
          if (pAVar9 != (Action_1_Single_ *)0x0) {
            pAVar9 = (pSVar8->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pAVar9->fields)._._.invoke_impl)
                      ((pAVar9->fields)._._.method_code,pOVar4,(pAVar9->fields)._._.method);
            return;
          }
          return;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

