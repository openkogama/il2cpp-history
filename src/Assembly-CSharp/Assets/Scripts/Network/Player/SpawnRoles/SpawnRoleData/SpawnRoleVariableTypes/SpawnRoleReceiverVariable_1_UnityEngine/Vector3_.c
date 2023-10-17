
/* Void OnChange(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3__OnChange
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,Vector3 newValue,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
              (pSVar1,newValue._0_8_,newValue.z,method->klass->rgctx_data[3].rgctxDataDummy);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SpawnRoleReceiverVariable`1[UnityEngine.Vector3](SubscribableVariable`1[UnityEngine.Vector3],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,
               SubscribableVariable_1_UnityEngine_Vector3_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).subscribableVariableExternal = subscribableVariableExternal;
  func_?(&(this->fields).subscribableVariableExternal,subscribableVariableExternal);
  if (subscribableVariableExternal != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    puVar1 = (undefined8 *)(*(method->klass->rgctx_data[1].method)->virtualMethodPointer)();
    uVar2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    pvVar4 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    pSVar5 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?(pvVar4);
    if (pSVar5 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
                (pSVar5,uVar2,uVar3,method->klass->rgctx_data[4].rgctxDataDummy);
      (this->fields).subscribableVariable = pSVar5;
      func_?(&(this->fields).subscribableVariable,pSVar5);
      pSVar5 = (this->fields).subscribableVariable;
      pvVar4 = method->klass->rgctx_data[6].rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      iVar6 = func_?(pvVar4);
      if (iVar6 != 0) {
        (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
                  (iVar6,this,method->klass->rgctx_data[5].rgctxDataDummy,
                   method->klass->rgctx_data[7].rgctxDataDummy);
        if (pSVar5 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
          pvVar4 = method->klass->rgctx_data[8].rgctxDataDummy;
          (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)();
          (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
          func_?(&this->fields,spawnRoleDataReceiver,pSVar5,iVar6,pvVar4);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Vector3 get_Value() */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
          SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
          SpawnRoleReceiverVariable_1_UnityEngine_Vector3__get_Value
                    (Vector3 *__return_storage_ptr__,
                    SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    puVar2 = (undefined8 *)
             (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                       (auStack_3,pSVar1,method->klass->rgctx_data[1].rgctxDataDummy);
    uVar4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    __return_storage_ptr__->x = (float)(int)uVar4;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Void set_Value(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,Vector3 value,
               MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar1->fields).isActive == 0) goto code_?;
    pSVar2 = (this->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
                (pSVar2,value._0_8_,value.z,method->klass->rgctx_data[3].rgctxDataDummy);
      return;
    }
  }
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar3);
  func_?();
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__set_Value_UnityEngine__Vector3_
                 );
  func_?(this_00);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

