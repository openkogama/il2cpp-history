
/* Boolean Equals(SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__Equals_1
               (SpawnRoleVariable_1_System_Int32_ *this,SpawnRoleVariable_1_System_Int32_ *other,
               MethodInfo *method)

{
  pMVar1 = method;
  uStack_2 = 0;
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_System_Int32_ *)0x0) {
    puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
    uStack_2 = (*(code *)*puVar4)(pSVar3,puVar4);
    if ((other != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
       (pSVar3 = (other->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
      puVar4 = *(undefined4 **)(*(int *)(pMVar1->name + 0x60) + 0x30);
      this = (SpawnRoleVariable_1_System_Int32_ *)(*(code *)*puVar4)(pSVar3,puVar4);
      iVar5 = *(int *)(*(int *)(pMVar1->name + 0x60) + 0x38);
      if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
        func_?(iVar5);
      }
      uVar6 = func_?(iVar5,&this);
      bVar7 = func_?(&uStack_2,uVar6,0);
      return bVar7;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Void SubscribableVariableOnOnChange(Int32) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  if ((this->fields).OnChange != (SpawnRoleVariable_1_T_SubDelegate_System_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x34))();
    return;
  }
  return;
}


/* SpawnRoleVariable`1[System.Int32](Int32) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32___ctor
               (SpawnRoleVariable_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  if (this != (SpawnRoleVariable_1_System_Int32_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    iVar1 = **(int **)(method->name + 0x60);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    pSVar2 = (SubscribableVariable_1_System_Int32_ *)func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 4);
    (*(code *)*puVar3)(pSVar2,value,puVar3);
    (this->fields).subscribableVariable = pSVar2;
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0xc);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    uVar4 = func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    (*(code *)*puVar3)(uVar4,this,*(undefined4 *)(*(int *)(method->name + 0x60) + 8),puVar3);
    if (pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0) {
      puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar3)(pSVar2,uVar4,puVar3);
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean op_Equality(Int32, SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Equality
               (int32_t b,SpawnRoleVariable_1_System_Int32_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
     (a = (SpawnRoleVariable_1_System_Int32_ *)(a->fields).subscribableVariable,
     a != (SpawnRoleVariable_1_System_Int32_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = pMVar1->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    uStack_4 = (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                         (a,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = pMVar1->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar5 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
      func_?(iVar5);
    }
    uVar6 = func_?(iVar5,&uStack_4);
    bVar7 = func_?(&b,uVar6,0);
    return bVar7;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Int32], SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Equality_1
               (SpawnRoleVariable_1_System_Int32_ *a,SpawnRoleVariable_1_System_Int32_ *b,
               MethodInfo *method)

{
  uStack_1 = 0;
  if ((a != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = method->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    uStack_1 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                         (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    if ((b != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
       (pSVar2 = (b->fields).subscribableVariable,
       pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
      pcVar3 = method->name;
      pcVar4 = pcVar3;
      if ((pcVar3[0xbe] & 1U) == 0) {
        func_?(pcVar3);
        pcVar4 = method->name;
      }
      if ((pcVar4[0xbe] & 1U) == 0) {
        func_?(pcVar4);
      }
      uStack_5 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                           (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
      pcVar3 = method->name;
      if ((pcVar3[0xbe] & 1U) == 0) {
        func_?(pcVar3);
      }
      iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
      if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
        func_?(iVar6);
      }
      uVar7 = func_?(iVar6,&uStack_5);
      bVar8 = func_?(&uStack_1,uVar7,0);
      return bVar8;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Equality_2
               (SpawnRoleVariable_1_System_Int32_ *a,int32_t b,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = pMVar1->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    uStack_5 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                         (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    pcVar3 = pMVar1->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,&uStack_5);
    bVar8 = func_?(&b,uVar7,0);
    return bVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Inequality
               (SpawnRoleVariable_1_System_Int32_ *a,int32_t b,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = pMVar1->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    uStack_5 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                         (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    pcVar3 = pMVar1->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,&uStack_5);
    cVar8 = func_?(&b,uVar7,0);
    return cVar8 == '\0';
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Boolean op_Inequality(Int32, SpawnRoleVariable`1[System.Int32]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
     SpawnRoleVariable_1_System_Int32__op_Inequality_2
               (int32_t b,SpawnRoleVariable_1_System_Int32_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Int32_ *)0x0) &&
     (a = (SpawnRoleVariable_1_System_Int32_ *)(a->fields).subscribableVariable,
     a != (SpawnRoleVariable_1_System_Int32_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = pMVar1->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    uStack_4 = (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                         (a,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = pMVar1->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar5 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
      func_?(iVar5);
    }
    uVar6 = func_?(iVar5,&uStack_4);
    cVar7 = func_?(&b,uVar6,0);
    return cVar7 == '\0';
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}

