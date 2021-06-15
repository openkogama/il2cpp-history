
/* Boolean Equals(SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__Equals_1
               (SpawnRoleVariable_1_System_Single_ *this,SpawnRoleVariable_1_System_Single_ *other,
               MethodInfo *method)

{
  pMVar1 = method;
  fStack_2 = 0.0;
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_System_Single_ *)0x0) {
    puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
    fVar5 = (float10)(*(code *)*puVar4)(pSVar3,puVar4);
    fStack_2 = (float)fVar5;
    if ((other != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
       (pSVar3 = (other->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_System_Single_ *)0x0)) {
      puVar4 = *(undefined4 **)(*(int *)(pMVar1->name + 0x60) + 0x30);
      fVar5 = (float10)(*(code *)*puVar4)(pSVar3,puVar4);
      this = (SpawnRoleVariable_1_System_Single_ *)(float)fVar5;
      iVar6 = *(int *)(*(int *)(pMVar1->name + 0x60) + 0x38);
      if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
        func_?(iVar6);
      }
      uVar7 = func_?(iVar6,&this);
      bVar8 = func_?(&fStack_2,uVar7,0);
      return bVar8;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Void SubscribableVariableOnOnChange(Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  pSVar1 = (this->fields).OnChange;
  if (pSVar1 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x34);
    (*(code *)*puVar2)(pSVar1,value,puVar2);
  }
  return;
}


/* SpawnRoleVariable`1[System.Single](Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single___ctor
               (SpawnRoleVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  if (this != (SpawnRoleVariable_1_System_Single_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    iVar1 = **(int **)(method->name + 0x60);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    pSVar2 = (SubscribableVariable_1_System_Single_ *)func_?(iVar1);
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
    if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
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


/* Boolean op_Equality(SpawnRoleVariable`1[System.Single], SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Equality
               (SpawnRoleVariable_1_System_Single_ *a,SpawnRoleVariable_1_System_Single_ *b,
               MethodInfo *method)

{
  fStack_1 = 0.0;
  if ((a != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = method->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    fVar5 = (float10)(*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                               (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    fStack_1 = (float)fVar5;
    if ((b != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
       (pSVar2 = (b->fields).subscribableVariable,
       pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0)) {
      pcVar3 = method->name;
      pcVar4 = pcVar3;
      if ((pcVar3[0xbe] & 1U) == 0) {
        func_?(pcVar3);
        pcVar4 = method->name;
      }
      if ((pcVar4[0xbe] & 1U) == 0) {
        func_?(pcVar4);
      }
      fVar5 = (float10)(*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                                 (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
      pcVar3 = method->name;
      fStack_6 = (float)fVar5;
      if ((pcVar3[0xbe] & 1U) == 0) {
        func_?(pcVar3);
      }
      iVar7 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
      if ((*(byte *)(iVar7 + 0xbe) & 1) == 0) {
        func_?(iVar7);
      }
      uVar8 = func_?(iVar7,&fStack_6);
      bVar9 = func_?(&fStack_1,uVar8,0);
      return bVar9;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Boolean op_Equality(SpawnRoleVariable`1[System.Single], Single) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Equality_1
               (SpawnRoleVariable_1_System_Single_ *a,float b,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = pMVar1->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    fVar5 = (float10)(*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                               (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    pcVar3 = pMVar1->name;
    fStack_6 = (float)fVar5;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar7 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar7 + 0xbe) & 1) == 0) {
      func_?(iVar7);
    }
    uVar8 = func_?(iVar7,&fStack_6);
    bVar9 = func_?(&b,uVar8,0);
    return bVar9;
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Boolean op_Equality(Single, SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Equality_2
               (float b,SpawnRoleVariable_1_System_Single_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
     (a = (SpawnRoleVariable_1_System_Single_ *)(a->fields).subscribableVariable,
     a != (SpawnRoleVariable_1_System_Single_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = pMVar1->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    fVar4 = (float10)(*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                               (a,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = pMVar1->name;
    fStack_5 = (float)fVar4;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar6 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,&fStack_5);
    bVar8 = func_?(&b,uVar7,0);
    return bVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Single op_Implicit(SpawnRoleVariable`1[System.Single]) */

float Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
      SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
      SpawnRoleVariable_1_System_Single__op_Implicit
                (SpawnRoleVariable_1_System_Single_ *s,MethodInfo *method)

{
  if ((s != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
     (pSVar1 = (s->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    fVar4 = (float10)(*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                               (pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    return (float)fVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  fVar4 = (float10)(*pcVar5)();
  return (float)fVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[System.Single], Single) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Inequality_1
               (SpawnRoleVariable_1_System_Single_ *a,float b,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = pMVar1->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    fVar5 = (float10)(*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                                (pSVar2,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    pcVar3 = pMVar1->name;
    fStack_6 = (float)fVar5;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar7 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar7 + 0xbe) & 1) == 0) {
      func_?(iVar7);
    }
    uVar8 = func_?(iVar7,&fStack_6);
    cVar9 = func_?(&b,uVar8,0);
    return cVar9 == '\0';
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Boolean op_Inequality(Single, SpawnRoleVariable`1[System.Single]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
     SpawnRoleVariable_1_System_Single__op_Inequality_2
               (float b,SpawnRoleVariable_1_System_Single_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_System_Single_ *)0x0) &&
     (a = (SpawnRoleVariable_1_System_Single_ *)(a->fields).subscribableVariable,
     a != (SpawnRoleVariable_1_System_Single_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = pMVar1->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    fVar4 = (float10)(*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                               (a,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = pMVar1->name;
    fStack_5 = (float)fVar4;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar6 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,&fStack_5);
    cVar8 = func_?(&b,uVar7,0);
    return cVar8 == '\0';
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}

