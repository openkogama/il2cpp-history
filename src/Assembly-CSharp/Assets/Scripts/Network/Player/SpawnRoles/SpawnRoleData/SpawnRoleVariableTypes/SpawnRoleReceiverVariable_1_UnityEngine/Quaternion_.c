
/* Void OnChange(Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
     SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__OnChange
               (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,Quaternion newValue,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
              (pSVar1,newValue.x,newValue.y,newValue.z,newValue.w,
               method->klass->rgctx_data[3].rgctxDataDummy);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SpawnRoleReceiverVariable`1[UnityEngine.Quaternion](SubscribableVariable`1[UnityEngine.Quaternion],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
     SpawnRoleReceiverVariable_1_UnityEngine_Quaternion___ctor
               (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,
               SubscribableVariable_1_UnityEngine_Quaternion_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).subscribableVariableExternal = subscribableVariableExternal;
  func_?(&(this->fields).subscribableVariableExternal,subscribableVariableExternal);
  if (subscribableVariableExternal != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    puVar1 = (undefined4 *)
             (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                       (&uStack_2,subscribableVariableExternal,
                        method->klass->rgctx_data[1].rgctxDataDummy);
    uStack_2 = *puVar1;
    uStack_3 = puVar1[1];
    uStack_4 = puVar1[2];
    uStack_5 = puVar1[3];
    pvVar6 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
      pvVar6 = (void *)func_?(pvVar6);
    }
    pSVar7 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)func_?(pvVar6);
    if (pSVar7 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
                (pSVar7,uStack_2,uStack_3,uStack_4,uStack_5,
                 method->klass->rgctx_data[4].rgctxDataDummy);
      (this->fields).subscribableVariable = pSVar7;
      func_?(&(this->fields).subscribableVariable,pSVar7);
      pSVar7 = (this->fields).subscribableVariable;
      pvVar6 = method->klass->rgctx_data[6].rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      iVar8 = func_?(pvVar6);
      if (iVar8 != 0) {
        (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
                  (iVar8,this,method->klass->rgctx_data[5].rgctxDataDummy,
                   method->klass->rgctx_data[7].rgctxDataDummy);
        if (pSVar7 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
          (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)
                    (pSVar7,iVar8,method->klass->rgctx_data[8].rgctxDataDummy);
          (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
          func_?(&this->fields,spawnRoleDataReceiver);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Quaternion get_Value() */

Quaternion *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__get_Value
          (Quaternion *__return_storage_ptr__,
          SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    pfVar2 = (float *)(*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                                (auStack_3,pSVar1,method->klass->rgctx_data[1].rgctxDataDummy);
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
    fVar6 = pfVar2[3];
    __return_storage_ptr__->x = *pfVar2;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    __return_storage_ptr__->w = fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pQVar8 = (Quaternion *)(*pcVar7)();
  return pQVar8;
}


/* Void set_Value(Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
     SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__set_Value
               (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar1->fields).isActive == 0) goto code_?;
    pSVar2 = (this->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
                (pSVar2,value.x,value.y,value.z,value.w,method->klass->rgctx_data[3].rgctxDataDummy)
      ;
      return;
    }
  }
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar3);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__set_Value_UnityEngine__Quaternion_
                 );
  func_?(this_00);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

