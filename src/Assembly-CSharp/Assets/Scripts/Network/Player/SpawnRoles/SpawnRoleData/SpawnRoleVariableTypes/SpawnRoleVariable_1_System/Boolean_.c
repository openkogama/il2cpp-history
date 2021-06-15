
/* Boolean Equals(SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__Equals_1
               (SpawnRoleVariable_1_System_Boolean_ *this,SpawnRoleVariable_1_System_Boolean_ *other
               ,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (uint)in_ECX;
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
    puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
    uVar5 = (*(code *)*puVar4)(pSVar3,puVar4);
    uVar2 = CONCAT13(uVar5,(int3)uVar2);
    if ((other != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
       (pSVar3 = (other->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
      puVar4 = *(undefined4 **)(*(int *)(pMVar1->name + 0x60) + 0x30);
      uVar5 = (*(code *)*puVar4)(pSVar3,puVar4);
      this = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar5,this._0_3_);
      iVar6 = *(int *)(*(int *)(pMVar1->name + 0x60) + 0x38);
      if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
        func_?(iVar6);
      }
      uVar7 = func_?(iVar6,(int)&this + 3);
      bVar8 = func_?(&stack0xfffffffb,uVar7,0);
      return bVar8;
    }
  }
  func_?(0,uVar2);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Boolean], SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Equality
               (SpawnRoleVariable_1_System_Boolean_ *a,SpawnRoleVariable_1_System_Boolean_ *b,
               MethodInfo *method)

{
  pMVar1 = method;
  uStack_2 = 0;
  if ((a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
    pcVar4 = method->name;
    pcVar5 = pcVar4;
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
      pcVar5 = pMVar1->name;
    }
    if ((pcVar5[0xbe] & 1U) == 0) {
      func_?(pcVar5);
    }
    uStack_2 = (*(code *)**(undefined4 **)(*(int *)(pcVar5 + 0x60) + 0x30))
                         (pSVar3,*(undefined4 *)(*(int *)(pcVar4 + 0x60) + 0x30));
    if ((b != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
       (pSVar3 = (b->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
      pcVar4 = pMVar1->name;
      pcVar5 = pcVar4;
      if ((pcVar4[0xbe] & 1U) == 0) {
        func_?(pcVar4);
        pcVar5 = pMVar1->name;
      }
      if ((pcVar5[0xbe] & 1U) == 0) {
        func_?(pcVar5);
      }
      uVar6 = (*(code *)**(undefined4 **)(*(int *)(pcVar5 + 0x60) + 0x30))
                        (pSVar3,*(undefined4 *)(*(int *)(pcVar4 + 0x60) + 0x30));
      pcVar4 = pMVar1->name;
      a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar6,a._0_3_);
      if ((pcVar4[0xbe] & 1U) == 0) {
        func_?(pcVar4);
      }
      iVar7 = *(int *)(*(int *)(pcVar4 + 0x60) + 0x38);
      if ((*(byte *)(iVar7 + 0xbe) & 1) == 0) {
        func_?(iVar7);
      }
      uVar8 = func_?(iVar7,(int)&a + 3);
      bVar9 = func_?(&uStack_2,uVar8,0);
      return bVar9;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Equality_1
               (SpawnRoleVariable_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = pMVar1->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    uVar5 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                      (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    pcVar3 = pMVar1->name;
    a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar5,a._0_3_);
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,(int)&a + 3);
    bVar8 = func_?(&b,uVar7,0);
    return bVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Equality(Boolean, SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Equality_2
               (bool b,SpawnRoleVariable_1_System_Boolean_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = pMVar1->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    uVar5 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                      (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    pcVar3 = pMVar1->name;
    a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar5,a._0_3_);
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,(int)&a + 3);
    bVar8 = func_?(&b,uVar7,0);
    return bVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Inequality
               (SpawnRoleVariable_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = pMVar1->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    uVar5 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                      (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    pcVar3 = pMVar1->name;
    a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar5,a._0_3_);
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,(int)&a + 3);
    cVar8 = func_?(&b,uVar7,0);
    return cVar8 == '\0';
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Boolean op_Inequality(Boolean, SpawnRoleVariable`1[System.Boolean]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Boolean]::
     SpawnRoleVariable_1_System_Boolean__op_Inequality_2
               (bool b,SpawnRoleVariable_1_System_Boolean_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Boolean_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = pMVar1->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    uVar5 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                      (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    pcVar3 = pMVar1->name;
    a = (SpawnRoleVariable_1_System_Boolean_ *)CONCAT13(uVar5,a._0_3_);
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,(int)&a + 3);
    cVar8 = func_?(&b,uVar7,0);
    return cVar8 == '\0';
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}

