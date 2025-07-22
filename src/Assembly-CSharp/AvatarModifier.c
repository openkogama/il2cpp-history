
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
  puVar1 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&
                    BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_
                   );
    func_?(&
                    CrumbleMatModifier_MethodInfo__EnumPoolManager__Instantiate<CrumbleMatModifier>_PoolEnums_
                   );
    func_?(&
                    FrozenModifier_MethodInfo__EnumPoolManager__Instantiate<FrozenModifier>_PoolEnums_
                   );
    func_?(&
                    GrowthModifier_MethodInfo__EnumPoolManager__Instantiate<GrowthModifier>_PoolEnums_
                   );
    func_?(&
                    HealingMatModifier_MethodInfo__EnumPoolManager__Instantiate<HealingMatModifier>_PoolEnums_
                   );
    func_?(&
                    InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                   );
    func_?(&
                    LethalModifier_MethodInfo__EnumPoolManager__Instantiate<LethalModifier>_PoolEnums_
                   );
    func_?(&
                    MouseModifier_MethodInfo__EnumPoolManager__Instantiate<MouseModifier>_PoolEnums_
                   );
    func_?(&
                    MutantModifier_MethodInfo__EnumPoolManager__Instantiate<MutantModifier>_PoolEnums_
                   );
    func_?(&
                    NinjaRunModifier_MethodInfo__EnumPoolManager__Instantiate<NinjaRunModifier>_PoolEnums_
                   );
    func_?(&
                    PoisonModifier_MethodInfo__EnumPoolManager__Instantiate<PoisonModifier>_PoolEnums_
                   );
    func_?(&
                    AvatarModifier_MethodInfo__UnityEngine__Object__Instantiate<AvatarModifier>_AvatarModifier_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  switch(type) {
  case AvatarModifierPackageType__Enum_Fire:
  case AvatarModifierPackageType__Enum_FlamerBurn:
    iVar2 = func_?(0);
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_BurningModifier;
    method_00 = BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_
    ;
    break;
  case AvatarModifierPackageType__Enum_Mutant:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_MutantModifier;
    break;
  default:
    return (AvatarModifier *)0x0;
  case AvatarModifierPackageType__Enum_Poison:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_PoisonModifier;
    break;
  case AvatarModifierPackageType__Enum_Frozen:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_FrozenModifier;
    break;
  case AvatarModifierPackageType__Enum_NinjaRun:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_NinjaRunModifier;
    break;
  case AvatarModifierPackageType__Enum_Shrunken:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_MouseModifier;
    break;
  case AvatarModifierPackageType__Enum_Enlarged:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_GrowthModifier;
    break;
  case AvatarModifierPackageType__Enum_Shielded:
    iVar2 = func_?(0);
    if (iVar2 == 0) goto code_?;
    original = *(Object **)(iVar2 + 0x218);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar3 = (AvatarModifier *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       (original,
                        AvatarModifier_MethodInfo__UnityEngine__Object__Instantiate<AvatarModifier>_AvatarModifier_
                       );
    goto code_?;
  case AvatarModifierPackageType__Enum_SpawnProtection:
    iVar2 = func_?(0);
    if ((iVar2 == 0) || (*(EnumPoolManager **)(iVar2 + 0x10) == (EnumPoolManager *)0x0))
    goto code_?;
    pAVar3 = (AvatarModifier *)
             EnumPoolManager::EnumPoolManager_Instantiate
                       (*(EnumPoolManager **)(iVar2 + 0x10),PoolEnums__Enum_InvulnerabilityModifier,
                        InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                       );
    unaff_ESI = (byte *)0x0;
    if (pAVar3 == (AvatarModifier *)0x0) goto code_?;
    pAVar3[1].fields._._._._.m_CachedPtr = (void *)0x11;
    goto code_?;
  case AvatarModifierPackageType__Enum_Lethal:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_Lethal;
    break;
  case AvatarModifierPackageType__Enum_HealingMat:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_HealingMat;
    break;
  case AvatarModifierPackageType__Enum_CrumbleMat:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_CrumbleMat;
  }
  pAVar3 = (AvatarModifier *)EnumPoolManager::EnumPoolManager_Instantiate(this,pEnum,method_00);
code_?:
  unaff_ESI = (byte *)0x0;
  if (pAVar3 == (AvatarModifier *)0x0) {
code_?:
    bVar4 = 0;
    uVar5 = func_?();
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    cVar6 = '\x0f';
    do {
      puVar1 = puVar1 + -1;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + -4);
      *(undefined4 *)register0x00000010 = *puVar1;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    uVar7 = (ushort)(byte)((char)uVar5 + (char)((ulonglong)uVar5 >> 8) * '.');
    bVar8 = (byte)((ulonglong)uVar5 >> 0x28);
    bVar9 = (byte)extraout_ECX + bVar8;
    bVar10 = CARRY1((byte)extraout_ECX,bVar8) || CARRY1(bVar9,bVar4);
    bVar9 = bVar9 + bVar4;
    pbVar11 = (byte *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar9);
    uVar12 = (undefined3)(CONCAT22((short)((ulonglong)uVar5 >> 0x10),uVar7) >> 8);
    bVar4 = *(byte *)(unaff_EBX + (uint)uVar7);
    pbVar13 = unaff_ESI + iVar2 * 8;
    bVar14 = (byte)unaff_EBX;
    bVar15 = CARRY1(*pbVar13,bVar14) || CARRY1(*pbVar13 + bVar14,bVar10);
    *pbVar13 = *pbVar13 + bVar14 + bVar10;
    pbVar13 = unaff_ESI + -0x2a;
    bVar10 = CARRY1(*pbVar13,bVar4) || CARRY1(*pbVar13 + bVar4,bVar15);
    *pbVar13 = *pbVar13 + bVar4 + bVar15;
    pbVar13 = (byte *)(CONCAT31(uVar12,bVar4) + -0x2a);
    bVar15 = CARRY1(*pbVar13,bVar8) || CARRY1(*pbVar13 + bVar8,bVar10);
    *pbVar13 = *pbVar13 + bVar8 + bVar10;
    pbVar13 = (byte *)(iVar2 + -0x3befd12a);
    bVar10 = CARRY1(*pbVar13,bVar14) || CARRY1(*pbVar13 + bVar14,bVar15);
    *pbVar13 = *pbVar13 + bVar14 + bVar15;
    bVar4 = (byte)((uint)extraout_ECX >> 8);
    bVar15 = CARRY1(bVar8,bVar4) || CARRY1(bVar8 + bVar4,bVar10);
    piVar16 = (int *)CONCAT22((short)((ulonglong)uVar5 >> 0x30),
                              CONCAT11(bVar8 + bVar4 + bVar10,(char)((ulonglong)uVar5 >> 0x20)));
    bVar10 = CARRY1(*unaff_ESI,bVar4) || CARRY1(*unaff_ESI + bVar4,bVar15);
    *unaff_ESI = *unaff_ESI + bVar4 + bVar15;
    bVar14 = *(byte *)(unaff_EBX + (uint)(byte)-bVar15);
    pbVar13 = (byte *)(unaff_EDI + -0x29);
    bVar15 = CARRY1(*pbVar13,bVar4) || CARRY1(*pbVar13 + bVar4,bVar10);
    *pbVar13 = *pbVar13 + bVar4 + bVar10;
    pbVar13 = unaff_ESI + -0x52efd129;
    bVar4 = *pbVar13;
    bVar8 = *pbVar13;
    *pbVar13 = bVar8 + bVar9 + bVar15;
    cVar6 = *(char *)(unaff_EBX + (uint)bVar14);
    pcVar17 = (char *)CONCAT31(uVar12,cVar6);
    *pcVar17 = *pcVar17 + cVar6 + (CARRY1(bVar4,bVar9) || CARRY1(bVar8 + bVar9,bVar15));
    *piVar16 = (int)(pcVar17 + *piVar16);
    *(char *)piVar16 = (char)*piVar16 + cVar6 + (char)*piVar16 + (char)*piVar16;
    *pbVar11 = *pbVar11 | bVar9;
    pcVar18 = (code *)swi(3);
    pAVar3 = (AvatarModifier *)(*pcVar18)();
    return pAVar3;
  }
code_?:
  (pAVar3->fields).owner = owner;
  func_?();
  return pAVar3;
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

