
/* Boolean Equals(SpawnRoleVariable`1[MV.Common.SpawnRoleModeType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
     SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__Equals_1
               (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *this,
               SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *other,MethodInfo *method)

{
  pMVar1 = method;
  uStack_2 = 0;
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
    puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
    uStack_2 = (*(code *)*puVar4)(pSVar3,puVar4);
    if ((other != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
       (pSVar3 = (other->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
      puVar4 = *(undefined4 **)(*(int *)(pMVar1->name + 0x60) + 0x30);
      this = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)(*(code *)*puVar4)(pSVar3,puVar4);
      iVar5 = *(int *)(*(int *)(pMVar1->name + 0x60) + 0x38);
      if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
        func_?(iVar5);
      }
      uVar6 = func_?(iVar5,&this);
      iVar5 = *(int *)(*(int *)(pMVar1->name + 0x60) + 0x38);
      if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
        func_?(iVar5);
      }
      piVar7 = (int *)func_?(iVar5,&uStack_2);
      if (piVar7 != (int *)0x0) {
        bVar8 = (**(code **)(*piVar7 + 0xc0))(piVar7,uVar6,*(undefined4 *)(*piVar7 + 0xc4));
        func_?(piVar7);
        return bVar8;
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean op_Equality(SpawnRoleVariable`1[MV.Common.SpawnRoleModeType],
   SpawnRoleVariable`1[MV.Common.SpawnRoleModeType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
     SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Equality_1
               (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *a,
               SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *b,MethodInfo *method)

{
  uStack_1 = 0;
  if ((a != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
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
    if ((b != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
       (pSVar2 = (b->fields).subscribableVariable,
       pSVar2 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
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
      pcVar3 = method->name;
      if ((pcVar3[0xbe] & 1U) == 0) {
        func_?(pcVar3);
      }
      iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
      if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
        func_?(iVar6);
      }
      piVar8 = (int *)func_?(iVar6,&uStack_1);
      if (piVar8 != (int *)0x0) {
        bVar9 = (**(code **)(*piVar8 + 0xc0))(piVar8,uVar7,*(undefined4 *)(*piVar8 + 0xc4));
        func_?(piVar8);
        return bVar9;
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Boolean op_Equality(SpawnRoleModeType, SpawnRoleVariable`1[MV.Common.SpawnRoleModeType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
     SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Equality_2
               (SpawnRoleModeType__Enum b,SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *a,
               MethodInfo *method)

{
  pMVar1 = method;
  uStack_2 = in_ECX;
  if ((a != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
     (a = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)(a->fields).subscribableVariable,
     a != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = pMVar1->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    uStack_2 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                         (a,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    pcVar3 = pMVar1->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar5 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
      func_?(iVar5);
    }
    uVar6 = func_?(iVar5,&uStack_2);
    pcVar3 = pMVar1->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar5 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
      func_?(iVar5);
    }
    piVar7 = (int *)func_?(iVar5,&b);
    if (piVar7 != (int *)0x0) {
      bVar8 = (**(code **)(*piVar7 + 0xc0))(piVar7,uVar6,*(undefined4 *)(*piVar7 + 0xc4));
      func_?(piVar7);
      return bVar8;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* SpawnRoleModeType op_Implicit(SpawnRoleVariable`1[MV.Common.SpawnRoleModeType]) */

SpawnRoleModeType__Enum
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
          (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *s,MethodInfo *method)

{
  if (s != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
    pSVar1 = (s->fields).subscribableVariable;
    if (pSVar1 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
      pcVar2 = method->name;
      pcVar3 = pcVar2;
      if ((pcVar2[0xbe] & 1U) == 0) {
        func_?(pcVar2);
        pcVar3 = method->name;
      }
      if ((pcVar3[0xbe] & 1U) == 0) {
        func_?(pcVar3);
      }
      SVar4 = (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                        (pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
      return SVar4;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  SVar4 = (*pcVar5)();
  return SVar4;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[MV.Common.SpawnRoleModeType], SpawnRoleModeType) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
     SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Inequality_1
               (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *a,SpawnRoleModeType__Enum b,
               MethodInfo *method)

{
  pMVar1 = method;
  uStack_2 = in_ECX;
  if ((a != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
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
    pcVar4 = pMVar1->name;
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    iVar6 = *(int *)(*(int *)(pcVar4 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,&uStack_2);
    pcVar4 = pMVar1->name;
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    iVar6 = *(int *)(*(int *)(pcVar4 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    piVar8 = (int *)func_?(iVar6,&b);
    if (piVar8 != (int *)0x0) {
      cVar9 = (**(code **)(*piVar8 + 0xc0))(piVar8,uVar7,*(undefined4 *)(*piVar8 + 0xc4));
      func_?(piVar8);
      return cVar9 == '\0';
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Boolean op_Inequality(SpawnRoleModeType, SpawnRoleVariable`1[MV.Common.SpawnRoleModeType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
     SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Inequality_2
               (SpawnRoleModeType__Enum b,SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *a,
               MethodInfo *method)

{
  pMVar1 = method;
  uStack_2 = in_ECX;
  if ((a != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
     (a = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)(a->fields).subscribableVariable,
     a != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
    pcVar3 = method->name;
    pcVar4 = pcVar3;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
      pcVar4 = pMVar1->name;
    }
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    uStack_2 = (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x30))
                         (a,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 0x30));
    pcVar3 = pMVar1->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar5 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
      func_?(iVar5);
    }
    uVar6 = func_?(iVar5,&uStack_2);
    pcVar3 = pMVar1->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar5 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
      func_?(iVar5);
    }
    piVar7 = (int *)func_?(iVar5,&b);
    if (piVar7 != (int *)0x0) {
      cVar8 = (**(code **)(*piVar7 + 0xc0))(piVar7,uVar6,*(undefined4 *)(*piVar7 + 0xc4));
      func_?(piVar7);
      return cVar8 == '\0';
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}

