
/* Void Activate(Avatar) */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_Activate
               (AvatarModifier *this,Avatar *target,MethodInfo *method)

{
  pAVar1 = this->klass;
  (this->fields).isActivated = 1;
  (*(code *)(pAVar1->vtable).OnActivated.method)
            (this,target,(pAVar1->vtable).OnDeactivated.methodPtr);
  return;
}


/* AvatarModifier CreateFromType(AvatarModifierPackageType, Avatar) */

AvatarModifier *
Assembly-CSharp.dll::AvatarModifier::AvatarModifier_CreateFromType
          (AvatarModifierPackageType__Enum type,Avatar *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  switch(type) {
  case AvatarModifierPackageType__Enum_Fire:
  case AvatarModifierPackageType__Enum_FlamerBurn:
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_BurningModifier;
    method_00 = BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_
    ;
    break;
  case AvatarModifierPackageType__Enum_Mutant:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_MutantModifier;
    break;
  default:
    return (AvatarModifier *)0x0;
  case AvatarModifierPackageType__Enum_Poison:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_PoisonModifier;
    break;
  case AvatarModifierPackageType__Enum_Frozen:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_FrozenModifier;
    break;
  case AvatarModifierPackageType__Enum_NinjaRun:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_NinjaRunModifier;
    break;
  case AvatarModifierPackageType__Enum_Shrunken:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_MouseModifier;
    break;
  case AvatarModifierPackageType__Enum_Enlarged:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_GrowthModifier;
    break;
  case AvatarModifierPackageType__Enum_Shielded:
    iVar1 = func_?();
    if (iVar1 == 0) goto code_?;
    original = *(Object **)(iVar1 + 0x218);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar2 = (AvatarModifier *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       (original,
                        AvatarModifier_MethodInfo__UnityEngine__Object__Instantiate<AvatarModifier>_AvatarModifier_
                       );
    goto code_?;
  case AvatarModifierPackageType__Enum_SpawnProtection:
    iVar1 = func_?();
    if ((iVar1 == 0) || (*(EnumPoolManager **)(iVar1 + 0x10) == (EnumPoolManager *)0x0))
    goto code_?;
    pAVar2 = (AvatarModifier *)
             EnumPoolManager::EnumPoolManager_Instantiate
                       (*(EnumPoolManager **)(iVar1 + 0x10),PoolEnums__Enum_InvulnerabilityModifier,
                        InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                       );
    unaff_ESI = (byte *)0x0;
    if (pAVar2 == (AvatarModifier *)0x0) goto code_?;
    pAVar2[1].fields._._._._.m_CachedPtr = (void *)0x11;
    goto code_?;
  case AvatarModifierPackageType__Enum_Lethal:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_Lethal;
    break;
  case AvatarModifierPackageType__Enum_HealingMat:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_HealingMat;
    break;
  case AvatarModifierPackageType__Enum_CrumbleMat:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_CrumbleMat;
  }
  pAVar2 = (AvatarModifier *)EnumPoolManager::EnumPoolManager_Instantiate(this,pEnum,method_00);
code_?:
  unaff_ESI = (byte *)0x0;
  if (pAVar2 == (AvatarModifier *)0x0) {
code_?:
    uVar3 = func_?();
    piVar4 = (int *)((ulonglong)uVar3 >> 0x20);
    uVar5 = (int)uVar3 - 1;
    bVar6 = (type & AvatarModifierPackageType__Enum_Fire) != AvatarModifierPackageType__Enum_None;
    pbVar7 = (byte *)((int)piVar4 + -99);
    bVar8 = (byte)((ulonglong)uVar3 >> 0x28);
    bVar9 = CARRY1(*pbVar7,bVar8) || CARRY1(*pbVar7 + bVar8,bVar6);
    *pbVar7 = *pbVar7 + bVar8 + bVar6;
    pbVar7 = extraout_ECX + -0x61;
    bVar6 = CARRY1(*pbVar7,bVar8) || CARRY1(*pbVar7 + bVar8,bVar9);
    *pbVar7 = *pbVar7 + bVar8 + bVar9;
    pbVar7 = &stack0x9dc6102a + unaff_EBX * 4;
    bVar10 = *pbVar7;
    bVar11 = (byte)unaff_EBX;
    bVar12 = *pbVar7;
    *pbVar7 = bVar12 + bVar11 + bVar6;
    bVar8 = (char)uVar5 + bVar8 + (CARRY1(bVar10,bVar11) || CARRY1(bVar12 + bVar11,bVar6));
    *(byte *)piVar4 = (char)*piVar4 + bVar11 + (((uint)owner & 1) != 0);
    bVar6 = (uVar5 & 0x100) != 0;
    pbVar7 = unaff_ESI + unaff_EBX * 4 + 0x2e;
    bVar9 = CARRY1(*pbVar7,bVar8) || CARRY1(*pbVar7 + bVar8,bVar6);
    *pbVar7 = *pbVar7 + bVar8 + bVar6;
    pbVar7 = unaff_ESI + -0x62;
    bVar10 = *pbVar7;
    bVar11 = (byte)((uint)extraout_ECX >> 8);
    bVar12 = *pbVar7;
    *pbVar7 = bVar12 + bVar11 + bVar9;
    unaff_ESI[-0xADDR] =
         unaff_ESI[-0xADDR] + bVar11 + (CARRY1(bVar10,bVar11) || CARRY1(bVar12 + bVar11,bVar9));
    bVar6 = (uVar5 & 0x100) != 0;
    bVar10 = (byte)extraout_ECX;
    bVar9 = CARRY1(*unaff_ESI,bVar10) || CARRY1(*unaff_ESI + bVar10,bVar6);
    *unaff_ESI = *unaff_ESI + bVar10 + bVar6;
    cRam_? = cRam_? + bVar11 + bVar9;
    *piVar4 = *piVar4 +
               CONCAT22((short)(uVar5 >> 0x10),
                        CONCAT11(((char)*unaff_ESI < '\0') << 7 | (*unaff_ESI == 0) << 6 |
                                 ((uVar5 & 0x1000) != 0) << 4 |
                                 ((POPCOUNT(*unaff_ESI) & 1U) == 0) << 2 | 2U | bVar9,bVar8));
    *(byte *)piVar4 = (char)*piVar4 + bVar8 + (char)*piVar4 + (char)*piVar4;
    *extraout_ECX = *extraout_ECX | bVar10;
    pcVar13 = (code *)swi(3);
    pAVar2 = (AvatarModifier *)(*pcVar13)();
    return pAVar2;
  }
code_?:
  (pAVar2->fields).owner = owner;
  func_?();
  return pAVar2;
}


/* Void Deactivate(Avatar) */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_Deactivate
               (AvatarModifier *this,Avatar *target,MethodInfo *method)

{
  pAVar1 = this->klass;
  (this->fields).isActivated = 0;
  (*(code *)(pAVar1->vtable).OnDeactivated.method)(this,target,pAVar1[1]._0.image);
  return;
}


/* Void ResetTimeStamp() */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_ResetTimeStamp
               (AvatarModifier *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).timeStamp = fVar1;
  return;
}


/* Boolean get_IsLocal() */

bool Assembly-CSharp.dll::AvatarModifier::AvatarModifier_get_IsLocal
               (AvatarModifier *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).owner;
  if (pAVar2 != (Avatar *)0x0) {
    return (pAVar2->fields).isLocal;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

