
/* Boolean op_Equality(SpawnRoleVariable`1[LastRespawnType], LastRespawnType) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[LastRespawnType]::
     SpawnRoleVariable_1_LastRespawnType__op_Equality_1
               (SpawnRoleVariable_1_LastRespawnType_ *a,LastRespawnType__Enum b,MethodInfo *method)

{
  pMVar1 = method;
  uStack_2 = in_ECX;
  if ((a != (SpawnRoleVariable_1_LastRespawnType_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_LastRespawnType_ *)0x0)) {
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

