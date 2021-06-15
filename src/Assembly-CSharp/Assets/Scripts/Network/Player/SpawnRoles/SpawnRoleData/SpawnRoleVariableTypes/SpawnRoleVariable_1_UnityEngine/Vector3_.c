
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__Equals
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,Object *obj,MethodInfo *method)

{
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_UnityEngine_Vector3_ *)obj) {
    return 1;
  }
  pTVar1 = mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
    pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if (pTVar1 != pTVar2) {
      return 0;
    }
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x18);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    iVar4 = func_?(obj,iVar3);
    if (iVar4 != 0) {
      puVar5 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c);
      bVar6 = (*(code *)*puVar5)(this,iVar4,puVar5);
      return bVar6;
    }
    func_?(obj,iVar3);
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean Equals(SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__Equals_1
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,
               SpawnRoleVariable_1_UnityEngine_Vector3_ *other,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
    puVar5 = (undefined8 *)(*(code *)*puVar4)(auStack_6,pSVar3,puVar4);
    uStack_1 = *puVar5;
    uStack_2 = *(undefined4 *)(puVar5 + 1);
    if ((other != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
       (pSVar3 = (other->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
      puVar5 = (undefined8 *)(*(code *)*puVar4)(auStack_6,pSVar3,puVar4);
      uStack_7 = *puVar5;
      uStack_8 = *(undefined4 *)(puVar5 + 1);
      iVar9 = *(int *)(*(int *)(method->name + 0x60) + 0x38);
      if ((*(byte *)(iVar9 + 0xbe) & 1) == 0) {
        func_?(iVar9);
      }
      uVar10 = func_?(iVar9,&uStack_7);
      bVar11 = func_?(&uStack_1,uVar10,0);
      return bVar11;
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
        SpawnRoleVariable_1_UnityEngine_Vector3__GetHashCode
                  (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x20);
  cVar2 = (*(code *)*puVar1)((this->fields).subscribableVariable,0,puVar1);
  if (cVar2 == '\0') {
    return 0;
  }
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    iVar4 = (*(code *)(pSVar3->klass->vtable).GetHashCode.method)
                      (pSVar3,(pSVar3->klass->vtable).ToString.methodPtr);
    return iVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void SubscribableVariableOnOnChange(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,Vector3 value,MethodInfo *method)

{
  pSVar1 = (this->fields).OnChange;
  if (pSVar1 != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x34);
    (*(code *)*puVar2)(pSVar1,value._0_8_,value.z,puVar2);
  }
  return;
}


/* SpawnRoleVariable`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3___ctor
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,Vector3 value,MethodInfo *method)

{
  if (this != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    iVar1 = **(int **)(method->name + 0x60);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    pSVar2 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 4);
    (*(code *)*puVar3)(pSVar2,value._0_8_,value.z,puVar3);
    (this->fields).subscribableVariable = pSVar2;
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0xc);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    uVar4 = func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    (*(code *)*puVar3)(uVar4,this,*(undefined4 *)(*(int *)(method->name + 0x60) + 8),puVar3);
    if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar3)(pSVar2,uVar4,puVar3);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void add_OnChange(SpawnRoleVariable`1[T]+SubDelegate[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,
               SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  ppSVar1 = &(this->fields).OnChange;
  a = *ppSVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x28);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    if (pDVar2 == (Delegate *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_?(pDVar2,iVar3);
      if (iVar4 == 0) {
        func_?(pDVar2,iVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pSVar6 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
             func_?(ppSVar1,iVar4,a);
    bVar7 = pSVar6 != a;
    a = pSVar6;
  } while (bVar7);
  return;
}


/* Vector3 get_Value() */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
          SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
          SpawnRoleVariable_1_UnityEngine_Vector3__get_Value
                    (Vector3 *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Vector3_ *this,
                    MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
    puVar3 = (undefined8 *)(*(code *)*puVar2)(auStack_4,pSVar1,puVar2);
    uVar5 = *puVar3;
    fVar6 = *(float *)(puVar3 + 1);
    __return_storage_ptr__->x = (float)(int)uVar5;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Vector3],
   SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Equality
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,
               SpawnRoleVariable_1_UnityEngine_Vector3_ *b,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    pcVar4 = method->name;
    pcVar5 = pcVar4;
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
      pcVar5 = method->name;
    }
    if ((pcVar5[0xbe] & 1U) == 0) {
      func_?(pcVar5);
    }
    puVar6 = (undefined8 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar5 + 0x60) + 0x30))
                       (auStack_7,pSVar3,*(undefined4 *)(*(int *)(pcVar4 + 0x60) + 0x30));
    uStack_1 = *puVar6;
    uStack_2 = *(undefined4 *)(puVar6 + 1);
    if ((b != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
       (pSVar3 = (b->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      pcVar4 = method->name;
      pcVar5 = pcVar4;
      if ((pcVar4[0xbe] & 1U) == 0) {
        func_?(pcVar4);
        pcVar5 = method->name;
      }
      if ((pcVar5[0xbe] & 1U) == 0) {
        func_?(pcVar5);
      }
      puVar6 = (undefined8 *)
               (*(code *)**(undefined4 **)(*(int *)(pcVar5 + 0x60) + 0x30))
                         (auStack_7,pSVar3,*(undefined4 *)(*(int *)(pcVar4 + 0x60) + 0x30));
      pcVar4 = method->name;
      uStack_8 = *puVar6;
      uStack_9 = *(undefined4 *)(puVar6 + 1);
      if ((pcVar4[0xbe] & 1U) == 0) {
        func_?(pcVar4);
      }
      iVar10 = *(int *)(*(int *)(pcVar4 + 0x60) + 0x38);
      if ((*(byte *)(iVar10 + 0xbe) & 1) == 0) {
        func_?(iVar10);
      }
      uVar11 = func_?(iVar10,&uStack_8);
      bVar12 = func_?(&uStack_1,uVar11,0);
      return bVar12;
    }
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Equality_1
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,Vector3 b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    puVar4 = (undefined8 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                       (auStack_5,pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = method->name;
    uStack_6 = *puVar4;
    uStack_7 = *(undefined4 *)(puVar4 + 1);
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar8 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar8 + 0xbe) & 1) == 0) {
      func_?(iVar8);
    }
    uVar9 = func_?(iVar8,&uStack_6);
    bVar10 = func_?(&b,uVar9,0);
    return bVar10;
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Boolean op_Equality(Vector3, SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Equality_2
               (Vector3 b,SpawnRoleVariable_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    puVar4 = (undefined8 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                       (auStack_5,pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = method->name;
    uStack_6 = *puVar4;
    uStack_7 = *(undefined4 *)(puVar4 + 1);
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar8 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar8 + 0xbe) & 1) == 0) {
      func_?(iVar8);
    }
    uVar9 = func_?(iVar8,&uStack_6);
    bVar10 = func_?(&b,uVar9,0);
    return bVar10;
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Vector3 op_Implicit(SpawnRoleVariable`1[UnityEngine.Vector3]) */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
          SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
          SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                    (Vector3 *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Vector3_ *s,
                    MethodInfo *method)

{
  if ((s != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (s->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    puVar4 = (undefined8 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                       (auStack_5,pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    uVar6 = *puVar4;
    fVar7 = *(float *)(puVar4 + 1);
    __return_storage_ptr__->x = (float)(int)uVar6;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
    __return_storage_ptr__->z = fVar7;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[UnityEngine.Vector3],
   SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Inequality
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,
               SpawnRoleVariable_1_UnityEngine_Vector3_ *b,MethodInfo *method)

{
  pcVar1 = method->name;
  pcVar2 = pcVar1;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
    pcVar2 = method->name;
  }
  if ((pcVar2[0xbe] & 1U) == 0) {
    func_?(pcVar2);
  }
  cVar3 = (*(code *)**(undefined4 **)(*(int *)(pcVar2 + 0x60) + 0x3c))
                    (a,b,*(undefined4 *)(*(int *)(pcVar1 + 0x60) + 0x3c));
  return cVar3 == '\0';
}


/* Boolean op_Inequality(SpawnRoleVariable`1[UnityEngine.Vector3], Vector3) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Inequality_1
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *a,Vector3 b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    puVar4 = (undefined8 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                       (auStack_5,pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = method->name;
    uStack_6 = *puVar4;
    uStack_7 = *(undefined4 *)(puVar4 + 1);
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar8 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar8 + 0xbe) & 1) == 0) {
      func_?(iVar8);
    }
    uVar9 = func_?(iVar8,&uStack_6);
    cVar10 = func_?(&b,uVar9,0);
    return cVar10 == '\0';
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Boolean op_Inequality(Vector3, SpawnRoleVariable`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__op_Inequality_2
               (Vector3 b,SpawnRoleVariable_1_UnityEngine_Vector3_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    puVar4 = (undefined8 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                       (auStack_5,pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = method->name;
    uStack_6 = *puVar4;
    uStack_7 = *(undefined4 *)(puVar4 + 1);
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar8 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar8 + 0xbe) & 1) == 0) {
      func_?(iVar8);
    }
    uVar9 = func_?(iVar8,&uStack_6);
    cVar10 = func_?(&b,uVar9,0);
    return cVar10 == '\0';
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void remove_OnChange(SpawnRoleVariable`1[T]+SubDelegate[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
     SpawnRoleVariable_1_UnityEngine_Vector3__remove_OnChange
               (SpawnRoleVariable_1_UnityEngine_Vector3_ *this,
               SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  ppSVar1 = &(this->fields).OnChange;
  source = *ppSVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x28);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    if (pDVar2 == (Delegate *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_?(pDVar2,iVar3);
      if (iVar4 == 0) {
        func_?(pDVar2,iVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pSVar6 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
             func_?(ppSVar1,iVar4,source);
    bVar7 = pSVar6 != source;
    source = pSVar6;
  } while (bVar7);
  return;
}

