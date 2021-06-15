
/* Boolean Equals(SpawnRoleVariable`1[MV.Common.GamePassTier]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::GamePassTier]::
     SpawnRoleVariable_1_MV_Common_GamePassTier__Equals_1
               (SpawnRoleVariable_1_MV_Common_GamePassTier_ *this,
               SpawnRoleVariable_1_MV_Common_GamePassTier_ *other,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (uint)in_ECX;
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0) {
    puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
    uVar5 = (*(code *)*puVar4)(pSVar3,puVar4);
    uVar2 = CONCAT13(uVar5,(int3)uVar2);
    if ((other != (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)0x0) &&
       (pSVar3 = (other->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0)) {
      puVar4 = *(undefined4 **)(*(int *)(pMVar1->name + 0x60) + 0x30);
      uVar5 = (*(code *)*puVar4)(pSVar3,puVar4);
      this = (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)CONCAT13(uVar5,this._0_3_);
      iVar6 = *(int *)(*(int *)(pMVar1->name + 0x60) + 0x38);
      if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
        func_?(iVar6);
      }
      uVar7 = func_?(iVar6,(int)&this + 3);
      iVar6 = *(int *)(*(int *)(pMVar1->name + 0x60) + 0x38);
      if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
        func_?(iVar6);
      }
      piVar8 = (int *)func_?(iVar6,&stack0xfffffffb);
      if (piVar8 != (int *)0x0) {
        bVar9 = (**(code **)(*piVar8 + 0xc0))(piVar8,uVar7,*(undefined4 *)(*piVar8 + 0xc4));
        func_?(piVar8);
        return bVar9;
      }
    }
  }
  func_?(0,uVar2);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Boolean op_Equality(SpawnRoleVariable`1[MV.Common.GamePassTier],
   SpawnRoleVariable`1[MV.Common.GamePassTier]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::GamePassTier]::
     SpawnRoleVariable_1_MV_Common_GamePassTier__op_Equality
               (SpawnRoleVariable_1_MV_Common_GamePassTier_ *a,
               SpawnRoleVariable_1_MV_Common_GamePassTier_ *b,MethodInfo *method)

{
  pMVar1 = method;
  uStack_2 = 0;
  if ((a != (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0)) {
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
    if ((b != (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)0x0) &&
       (pSVar3 = (b->fields).subscribableVariable,
       pSVar3 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0)) {
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
      a = (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)CONCAT13(uVar6,a._0_3_);
      if ((pcVar4[0xbe] & 1U) == 0) {
        func_?(pcVar4);
      }
      iVar7 = *(int *)(*(int *)(pcVar4 + 0x60) + 0x38);
      if ((*(byte *)(iVar7 + 0xbe) & 1) == 0) {
        func_?(iVar7);
      }
      uVar8 = func_?(iVar7,(int)&a + 3);
      pcVar4 = pMVar1->name;
      if ((pcVar4[0xbe] & 1U) == 0) {
        func_?(pcVar4);
      }
      iVar7 = *(int *)(*(int *)(pcVar4 + 0x60) + 0x38);
      if ((*(byte *)(iVar7 + 0xbe) & 1) == 0) {
        func_?(iVar7);
      }
      piVar9 = (int *)func_?(iVar7,&uStack_2);
      if (piVar9 != (int *)0x0) {
        bVar10 = (**(code **)(*piVar9 + 0xc0))(piVar9,uVar8,*(undefined4 *)(*piVar9 + 0xc4));
        func_?(piVar9);
        return bVar10;
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Boolean op_Equality(SpawnRoleVariable`1[MV.Common.GamePassTier], GamePassTier) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::GamePassTier]::
     SpawnRoleVariable_1_MV_Common_GamePassTier__op_Equality_1
               (SpawnRoleVariable_1_MV_Common_GamePassTier_ *a,GamePassTier__Enum b,
               MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0)) {
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
    a = (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)CONCAT13(uVar5,a._0_3_);
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,(int)&a + 3);
    pcVar3 = pMVar1->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    piVar8 = (int *)func_?(iVar6,&b);
    if (piVar8 != (int *)0x0) {
      bVar9 = (**(code **)(*piVar8 + 0xc0))(piVar8,uVar7,*(undefined4 *)(*piVar8 + 0xc4));
      func_?(piVar8);
      return bVar9;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Boolean op_Equality(GamePassTier, SpawnRoleVariable`1[MV.Common.GamePassTier]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::GamePassTier]::
     SpawnRoleVariable_1_MV_Common_GamePassTier__op_Equality_2
               (GamePassTier__Enum b,SpawnRoleVariable_1_MV_Common_GamePassTier_ *a,
               MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0)) {
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
    a = (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)CONCAT13(uVar5,a._0_3_);
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,(int)&a + 3);
    pcVar3 = pMVar1->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    piVar8 = (int *)func_?(iVar6,&b);
    if (piVar8 != (int *)0x0) {
      bVar9 = (**(code **)(*piVar8 + 0xc0))(piVar8,uVar7,*(undefined4 *)(*piVar8 + 0xc4));
      func_?(piVar8);
      return bVar9;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[MV.Common.GamePassTier], GamePassTier) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::GamePassTier]::
     SpawnRoleVariable_1_MV_Common_GamePassTier__op_Inequality_1
               (SpawnRoleVariable_1_MV_Common_GamePassTier_ *a,GamePassTier__Enum b,
               MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0)) {
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
    a = (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)CONCAT13(uVar5,a._0_3_);
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,(int)&a + 3);
    pcVar3 = pMVar1->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
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


/* Boolean op_Inequality(GamePassTier, SpawnRoleVariable`1[MV.Common.GamePassTier]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::GamePassTier]::
     SpawnRoleVariable_1_MV_Common_GamePassTier__op_Inequality_2
               (GamePassTier__Enum b,SpawnRoleVariable_1_MV_Common_GamePassTier_ *a,
               MethodInfo *method)

{
  pMVar1 = method;
  if ((a != (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)0x0) &&
     (pSVar2 = (a->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0)) {
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
    a = (SpawnRoleVariable_1_MV_Common_GamePassTier_ *)CONCAT13(uVar5,a._0_3_);
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
    if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
      func_?(iVar6);
    }
    uVar7 = func_?(iVar6,(int)&a + 3);
    pcVar3 = pMVar1->name;
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    iVar6 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x38);
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

